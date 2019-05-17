static var_info _cm_vtab_swh[] = {
	// VARTYPE	DATATYPE	NAME	LABEL	UNITS	META	GROUP	REQUIRED_IF	CONSTRAINTS	UI_HINTS
{ 	SSC_INPUT, 	SSC_STRING, 	"solar_resource_file", 	"local weather file path", 	"", 	"", 	"Location and Resource", 	"*", 	"LOCAL_FILE", 	""},
{ 	SSC_INPUT, 	SSC_ARRAY, 	"scaled_draw", 	"Hot water draw", 	"kg/hr", 	"", 	"Solar Water Heating", 	"*", 	"LENGTH=8760", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"system_capacity", 	"Nameplate capacity", 	"kW", 	"", 	"Solar Water Heating", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"tilt", 	"Collector tilt", 	"deg", 	"", 	"Solar Water Heating", 	"*", 	"MIN=0,MAX=90", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"azimuth", 	"Collector azimuth", 	"deg", 	"90=E,180=S", 	"Solar Water Heating", 	"*", 	"MIN=0,MAX=360", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"albedo", 	"Ground reflectance factor", 	"0..1", 	"", 	"Solar Water Heating", 	"*", 	"FACTOR", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"irrad_mode", 	"Irradiance input mode", 	"0/1/2", 	"Beam+Diff,Global+Beam,Global+Diff", 	"Solar Water Heating", 	"?=0", 	"INTEGER,MIN=0,MAX=2", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"sky_model", 	"Tilted surface irradiance model", 	"0/1/2", 	"Isotropic,HDKR,Perez", 	"Solar Water Heating", 	"?=1", 	"INTEGER,MIN=0,MAX=2", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"shading:timestep", 	"Time step beam shading loss", 	"%", 	"", 	"", 	"?", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"shading:mxh", 	"Month x Hour beam shading loss", 	"%", 	"", 	"", 	"?", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"shading:azal", 	"Azimuth x altitude beam shading loss", 	"%", 	"", 	"", 	"?", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"shading:diff", 	"Diffuse shading loss", 	"%", 	"", 	"", 	"?", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"mdot", 	"Total system mass flow rate", 	"kg/s", 	"", 	"Solar Water Heating", 	"*", 	"POSITIVE", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"ncoll", 	"Number of collectors", 	"", 	"", 	"Solar Water Heating", 	"*", 	"POSITIVE,INTEGER", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"fluid", 	"Working fluid in system", 	"", 	"Water,Glycol", 	"Solar Water Heating", 	"*", 	"INTEGER,MIN=0,MAX=1", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"area_coll", 	"Single collector area", 	"m2", 	"", 	"Solar Water Heating", 	"*", 	"POSITIVE", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"FRta", 	"FRta", 	"", 	"", 	"Solar Water Heating", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"FRUL", 	"FRUL", 	"", 	"", 	"Solar Water Heating", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"iam", 	"Incidence angle modifier", 	"", 	"", 	"Solar Water Heating", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"test_fluid", 	"Fluid used in collector test", 	"", 	"Water,Glycol", 	"Solar Water Heating", 	"*", 	"INTEGER,MIN=0,MAX=1", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"test_flow", 	"Flow rate used in collector test", 	"kg/s", 	"", 	"Solar Water Heating", 	"*", 	"POSITIVE", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"pipe_length", 	"Length of piping in system", 	"m", 	"", 	"Solar Water Heating", 	"*", 	"POSITIVE", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"pipe_diam", 	"Pipe diameter", 	"m", 	"", 	"Solar Water Heating", 	"*", 	"POSITIVE", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"pipe_k", 	"Pipe insulation conductivity", 	"W/m2.C", 	"", 	"Solar Water Heating", 	"*", 	"POSITIVE", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"pipe_insul", 	"Pipe insulation thickness", 	"m", 	"", 	"Solar Water Heating", 	"*", 	"POSITIVE", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"tank_h2d_ratio", 	"Solar tank height to diameter ratio", 	"", 	"", 	"Solar Water Heating", 	"*", 	"POSITIVE", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"U_tank", 	"Solar tank heat loss coefficient", 	"W/m2K", 	"", 	"Solar Water Heating", 	"*", 	"POSITIVE", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"V_tank", 	"Solar tank volume", 	"m3", 	"", 	"Solar Water Heating", 	"*", 	"POSITIVE", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"hx_eff", 	"Heat exchanger effectiveness", 	"0..1", 	"", 	"Solar Water Heating", 	"*", 	"POSITIVE", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"T_room", 	"Temperature around solar tank", 	"C", 	"", 	"Solar Water Heating", 	"*", 	"POSITIVE", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"T_tank_max", 	"Max temperature in solar tank", 	"C", 	"", 	"Solar Water Heating", 	"*", 	"POSITIVE", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"T_set", 	"Set temperature", 	"C", 	"", 	"Solar Water Heating", 	"*", 	"POSITIVE", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"pump_power", 	"Pump power", 	"W", 	"", 	"Solar Water Heating", 	"*", 	"POSITIVE", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"pump_eff", 	"Pumping efficiency", 	"%", 	"", 	"Solar Water Heating", 	"*", 	"PERCENT", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"use_custom_mains", 	"Use custom mains", 	"%", 	"", 	"Solar Water Heating", 	"*", 	"INTEGER,MIN=0,MAX=1", 	""},
{ 	SSC_INPUT, 	SSC_ARRAY, 	"custom_mains", 	"Custom mains", 	"C", 	"", 	"Solar Water Heating", 	"*", 	"LENGTH=8760", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"use_custom_set", 	"Use custom set points", 	"%", 	"", 	"Solar Water Heating", 	"*", 	"INTEGER,MIN=0,MAX=1", 	""},
{ 	SSC_INPUT, 	SSC_ARRAY, 	"custom_set", 	"Custom set points", 	"C", 	"", 	"Solar Water Heating", 	"*", 	"LENGTH=8760", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"beam", 	"Irradiance - Beam", 	"W/m2", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"diffuse", 	"Irradiance - Diffuse", 	"W/m2", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"I_incident", 	"Irradiance - Incident", 	"W/m2", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"I_transmitted", 	"Irradiance - Transmitted", 	"W/m2", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"shading_loss", 	"Shading losses", 	"%", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"Q_transmitted", 	"Q transmitted", 	"kW", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"Q_useful", 	"Q useful", 	"kW", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"Q_deliv", 	"Q delivered", 	"kW", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"Q_loss", 	"Q loss", 	"kW", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"Q_aux", 	"Q auxiliary", 	"kW", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"Q_auxonly", 	"Q auxiliary only", 	"kW", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"P_pump", 	"P pump", 	"kW", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"T_amb", 	"T ambient", 	"C", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"T_cold", 	"T cold", 	"C", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"T_deliv", 	"T delivered", 	"C", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"T_hot", 	"T hot", 	"C", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"T_mains", 	"T mains", 	"C", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"T_tank", 	"T tank", 	"C", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"V_hot", 	"V hot", 	"m3", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"V_cold", 	"V cold", 	"m3", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"draw", 	"Hot water draw", 	"kg/hr", 	"", 	"Solar Water Heating", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"mode", 	"Operation mode", 	"", 	"1,2,3,4", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"monthly_Q_deliv", 	"Q delivered", 	"kWh", 	"", 	"", 	"*", 	"LENGTH=12", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"monthly_Q_aux", 	"Q auxiliary", 	"kWh", 	"", 	"", 	"*", 	"LENGTH=12", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"monthly_Q_auxonly", 	"Q auxiliary only", 	"kWh", 	"", 	"", 	"*", 	"LENGTH=12", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"monthly_energy", 	"System energy", 	"kWh", 	"", 	"", 	"*", 	"LENGTH=12", 	""},
{ 	SSC_OUTPUT, 	SSC_NUMBER, 	"annual_Q_deliv", 	"Q delivered", 	"kWh", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_NUMBER, 	"annual_Q_aux", 	"Q auxiliary", 	"kWh", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_NUMBER, 	"annual_Q_auxonly", 	"Q auxiliary only", 	"kWh", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_NUMBER, 	"annual_energy", 	"System energy", 	"kWh", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_NUMBER, 	"solar_fraction", 	"Solar fraction", 	"", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_NUMBER, 	"capacity_factor", 	"Capacity factor", 	"%", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_NUMBER, 	"kwh_per_kw", 	"First year kWh/kW", 	"kWh/kW", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_NUMBER, 	"ts_shift_hours", 	"Time offset for interpreting time series outputs", 	"hours", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"adjust:constant", 	"Constant loss adjustment", 	"%", 	"", 	"", 	"*", 	"MAX=100", 	""},
{ 	SSC_INPUT, 	SSC_ARRAY, 	"adjust:hourly", 	"Hourly loss adjustments", 	"%", 	"", 	"", 	"?", 	"LENGTH=8760", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"adjust:periods", 	"Period-based loss adjustments", 	"%", 	"n x 3 matrix [ start, end, loss ]", 	"", 	"?", 	"COLS=3", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"gen", 	"System power generated", 	"kW", 	"", 	"", 	"*", 	"", 	""},
var_info_invalid};