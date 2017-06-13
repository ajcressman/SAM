#ifndef __equations_h
#define __equations_h

#include <vector>

#include <wx/string.h>
#include <wx/arrstr.h>
#include <wx/stream.h>

#include <lk/absyn.h>
#include <lk/lex.h>
#include <lk/env.h>

#include "object.h"
#include "variables.h"


struct EqnData
{
	lk::node_t *tree; wxArrayString inputs, outputs; bool result_is_output;
};

class EqnDatabase
{
public:
	EqnDatabase();
	virtual ~EqnDatabase();

	void Clear();
	bool LoadFile( const wxString &file, wxArrayString *errors = 0 );
	bool LoadScript( const wxString &text, wxArrayString *errors = 0 );
	bool Parse( lk::input_base &in, wxArrayString *errors = 0 );

	wxArrayString *GetAffectedVariables( const wxString &var );
	const std::vector<EqnData*> &GetEquations() { return m_equations; }
	
private:
	std::vector<lk::node_t*> m_trees;

	typedef unordered_map< wxString, wxArrayString*, wxStringHash, wxStringEqual > arraystring_hash_t;
	arraystring_hash_t m_affected;

	std::vector<EqnData*> m_equations;

	void ScanParseTree( lk::node_t *root, wxArrayString *inputs, wxArrayString *outputs, bool in_assign_lhs = false );
	bool AddEquation( const wxArrayString &inputs, const wxArrayString &outputs, lk::node_t *tree, bool result_is_output );

};

class EqnFastLookup 
{	
	std::vector<EqnDatabase*> m_dbs;
public:
	
	typedef unordered_map< wxString, EqnData*, wxStringHash, wxStringEqual > eqndata_hash_t;
	typedef unordered_map< wxString, size_t, wxStringHash, wxStringEqual > eqnindex_hash_t;
	typedef unordered_map< wxString, bool, wxStringHash, wxStringEqual > eqnmark_hash_t;

	EqnFastLookup();
	EqnFastLookup( EqnDatabase *db );

	void AddDatabase( EqnDatabase *db );

	void Add( EqnData *ed );
	void Add( const std::vector<EqnData*> &list );
	void Clear();
	
	size_t GetAffectedVariables( const wxString &var, wxArrayString &list, eqnmark_hash_t &ignore );
	lk::node_t *GetEquation( const wxString &var, wxArrayString *inputs, wxArrayString *outputs );
	std::vector<EqnData*> GetEquations() { return m_eqnList; }
	EqnData *GetEquationData( const wxString &var );
	int GetEquationIndex( const wxString &var );

private:
	
	std::vector<EqnData*> m_eqnList;
	eqndata_hash_t m_eqnLookup;
	eqnindex_hash_t m_eqnIndices;	
};


class EqnEvaluator
{
protected:
	static const int INVALID = 0;
	static const int OK = 1;


	VarTable &m_vars;
	EqnFastLookup &m_efl;
	std::vector<EqnData*> m_eqns;
	std::vector<char> m_status;
	wxArrayString m_errors;
	wxArrayString m_updated;
	int Calculate( );
	size_t MarkAffectedEquations( const wxString &var, EqnFastLookup::eqnmark_hash_t &affected );

public:
	EqnEvaluator( VarTable &vars, EqnFastLookup &efl );

	void Reset();
	virtual int CalculateAll();
	virtual int Changed( const wxArrayString &vars );
	wxArrayString &GetErrors() { return m_errors; }
	wxArrayString &GetUpdated() { return m_updated; }

	// setup any context-specific function calls here
	virtual void SetupEnvironment( lk::env_t &env );
};




#endif
