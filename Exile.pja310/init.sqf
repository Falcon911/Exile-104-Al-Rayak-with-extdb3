// Put this somewhere in your own init.sqf outside of any other brackets and if statements
execVM "R3F_LOG\init.sqf";
[] execVM "IgiLoad\IgiLoadInit.sqf";
[] execVM "Scripts\disablethermal.sqf";

if hasInterface then
{
	[] ExecVM "VEMFr_client\sqf\initClient.sqf"; // Client-side part of VEMFr
};

//BuryCorpse
diag_log "==================================================================================";
diag_log "========================Starting Bury corpse======================================";
diag_log "==================================================================================";
VNM_fnc_Hidebody = compileFinal preprocessFileLineNumbers "Scripts\BuryCorpse.sqf";
//Ammo dump
diag_log "==================================================================================";
diag_log "========================Starting Ammo to SQL======================================";
diag_log "==================================================================================";
Bones_fnc_getVehicleLoadout = compileFinal (preprocessFileLineNumbers "Custom\ammoSave\Bones_fnc_getVehicleLoadout.sqf");


