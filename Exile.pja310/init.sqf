// Put this somewhere in your own init.sqf outside of any other brackets and if statements
execVM "R3F_LOG\init.sqf";
[] execVM "IgiLoad\IgiLoadInit.sqf";
[] execVM "Scripts\disablethermal.sqf";

if hasInterface then
{
	[] ExecVM "VEMFr_client\sqf\initClient.sqf"; // Client-side part of VEMFr
};

diag_log "==================================================================================";
diag_log "========================Starting Insistar custom missions======================================";
diag_log "==================================================================================";
//BuryCorpse
VNM_fnc_Hidebody = compileFinal preprocessFileLineNumbers "Scripts\BuryCorpse.sqf";
//VCom 
[] execVM "Vcom\VcomInit.sqf";


