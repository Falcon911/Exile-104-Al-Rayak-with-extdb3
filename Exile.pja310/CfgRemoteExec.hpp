class CfgRemoteExec
{
	class Functions
	{
		mode = 1;
		jip = 0;
		class fnc_AdminReq { allowedTargets=2; };	// infiSTAR AntiHack
		class fn_xm8apps_server { allowedTargets=2; };	// infiSTAR xm8apps
		class ExileServer_system_network_dispatchIncomingMessage { allowedTargets=2; };	// ExileMod
		class achilles_fnc_changeside_local;
		class achilles_fnc_spawn_remote;
		class achilles_fnc_breachstun;
		class achilles_fnc_ambientanim;
		class bis_fnc_holdactionadd;
		class bis_fnc_holdactionremove;
		class achilles_fnc_chute;
		class rhs_fnc_vehpara;
		class bis_fnc_initvehicle;
		class ares_fnc_surrenderunit;
		class ace_medical_fnc_treatmentadvanced_fullheallocal;
		class achilles_fnc_setaceinjury;
		class achilles_fnc_setvanillainjury;
		class achilles_fnc_createsuicidebomber;
		class achilles_fnc_damagebuildings;
		class achilles_fnc_effectfire;
		class bis_fnc_earthquake;
		class ares_fnc_weather_function;
		class ares_fnc_change_weather_function;
		class bis_fnc_saymessage;
		class ares_fnc_addintel;
		class bis_fnc_shownotification;
		class achilles_fnc_createied;
		class bis_fnc_setpitchbank;
		class achilles_fnc_setsrfrequencies;
		class achilles_fnc_setlrfrequencies;
		class bis_fnc_shakecuratorcamera;
		class bis_fnc_advhint;
		class bis_fnc_curatorsaymessage;
		class bis_fnc_carrier01init;
		class ares_fnc_searchbuilding;
		class achilles_fnc_instantbuildinggarrison;
		class ares_fnc_updateteleportmarkeractions;
		class achilles_fnc_eject_passengers;
		class bis_fnc_carrier01posupdate;
		class achilles_fnc_setunitammodef;
		class achilles_fnc_setvehicleammodef;
		class achilles_fnc_modulecas_server;
		class bis_fnc_modulerespawnvehicle;
		class AR_Client_Rappel_From_Heli { allowedTargets=0; }; 
		class AR_Hint { allowedTargets=1; }; 
		class AR_Hide_Object_Global { allowedTargets=2; }; 
		class AR_Enable_Rappelling_Animation { allowedTargets=2; }; 
		class AR_Rappel_From_Heli { allowedTargets=2; }; 
		class SA_Simulate_Towing	{ allowedTargets=0; }; 
		class SA_Attach_Tow_Ropes	{ allowedTargets=0; }; 
		class SA_Take_Tow_Ropes		{ allowedTargets=0; }; 
		class SA_Put_Away_Tow_Ropes	{ allowedTargets=0; }; 
		class SA_Pickup_Tow_Ropes	{ allowedTargets=0; }; 
		class SA_Drop_Tow_Ropes		{ allowedTargets=0; }; 
		class SA_Set_Owner		{ allowedTargets=2; }; 
		class SA_Hint			{ allowedTargets=1; }; 
		class SA_Hide_Object_Global	{ allowedTargets=2; }; 
	

	};
	class Commands
	{
		mode=0;
		jip=0;
class enableai;
		class disableai;
		class allowfleeing;
		class setpylonloadout;
		class setskill;
		class setunittrait;
		class sethitindex;
		class setvehicleradar;
		class setvehiclereportremotetargets;
		class setvehiclereceiveremotetargets;
		class setvehiclereportownposition;
		class setdir;
		class setvectordirandup;
		class switchmove;
		class setplatenumber;
		class sidechat;
		class globalChat;
		class vehicleChat;
		class commandChat;
		class addeventhandler;
		class unassignvehicle;
		class action;
		class ordergetin;
		class enablesimulationglobal;
		class setface;
		class setspeaker;
		class setpitch;
		class setname;
		class setnamesound;
		class addcuratoreditableobjects;
		class removecuratoreditableobjects;
		class removeallactions;
		class flyinheight;
		class swimindepth;
		class setfriend;
		class allowdamage;
		class hideobjectglobal;
		class hint;
		class enablegunlights;
		class enableirlasers;
		class linkitem;
		class unassignitem;
		class removeitem;
		class removeprimaryweaponitem;
		class addprimaryweaponitem;
		class commandartilleryfire;
		class hintsilent;
		class hintcadet;
		class setbehaviour;
		class setcombatmode;
		class setdate;
		class setformation;
		class setfuel;
		class lock;
		class setspeedmode;
		class setunitpos;
		class playmove;
	
	};
};