	/**
	 * Weapons, scopes, silencers, ammo
	 */
	class Exile_Trader_Armory
	{
		name = "ARMORY";
		showWeaponFilter = 1;
		categories[] =
		{
			"ACEOptics",
			"ACELaser",
			"ACEAmmo",
			"Ammunition",
			"AssaultRifles",
			"BipodAttachments",
			"CUPAmmunition",
			"CUPAssaultRifles",
			"CUPLightMachineGuns",
			"CUPMuzzleAttachments",
			"CUPOpticAttachments",
			"CUPPistols",
			"CUPPointerAttachments",
			"CUPSniperRifles",
			"CUPSubMachineGuns",
			"GREFWeapons",
			"GREFAmmunition",
			"KAAmmunition",
			"KAAttachments",
			"KAMuzzleAttachments",
			"KAOpticAttachments",
			"KAPistols",
			"KARifles",
			"KALightMachineGuns",
			"KASubMachineGuns",
			"KAPistolsShottys",
			"KAAssaultRifles",
			"KASniperRifles",
			"LightMachineGuns",
			"MuzzleAttachments",
			"NIAAmmunition",
			"NIAAssaultRifles",
			//"NIAAttachments",
			"NIALightMachineGuns",
			"NIAMuzzleAttachments",
			"NIAOpticAttachments",
			"NIASniperRifles",
			"NIASubMachineGuns",
			"NIAMiniGun",
			"Nlweapons",
			"OpticAttachments",
			"Pistols",
			"PointerAttachments",
			"RHSAmmunition",
			"RHSAssaultRifles",
			"RHSBipodAttachments",
			"RHSForegripAttachments",
			"RHSLightMachineGuns",
			"RHSMuzzleAttachments",
			"RHSOpticAttachments",
			"RHSPistols",
			"RHSPointerAttachments",
			"RHSSniperRifles",
			"RHSSubMachineGuns",
			"SAFMines",
			"Shotguns",
			"SniperRifles",
			"SubMachineGuns",
			"SAFAmmunition",
			"SAFAttachments",
			"SAFWeapons"
			//"HLCAmmunition",				//should use NIArms
			//"HLCAssaultRifles",			//should use NIArms
			//"HLCLightMachineGuns",		//should use NIArms
			//"HLCMuzzleAttachments",		//should use NIArms
			//"HLCOpticAttachments",		//should use NIArms
			//"HLCSniperRifles",			//should use NIArms
			// Whatever your last line is make sure it doesn't have a comma! <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<<
		};
	};

	/**
	 * Satchels, nades, UAVs, static MGs
	 */
	class Exile_Trader_SpecialOperations
	{
		name = "SPECIAL OPERATIONS";
		showWeaponFilter = 1; // for noob tubes
		categories[] =
		{
			"ACEExplosives",
			//"ACEDogtag",			
			"A3LauncherAmmo",
			"A3Launchers",
			"CUPExplosive",
			"CUPLauncherAmmo",
			"CUPLaunchers",
			"ExplosiveWeapons",
			"Explosives",
			"Flares",
			"Navigation",
			"RHSExplosives",
			"RHSLauncherAmmo",
			"RHSLaunchers",
			"RHSStaticMG",		//not recommended except for militarised servers due to rockets/mortar etc
			"RHSUGLAmmo",
			"Smokes",
			"StaticMGs",
			"UAVs"
			
			// Whatever your last line is make sure it doesn't have a comma! <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<<
		};
	};

	/**
	 * Uniforms, vests, helmets, backpacks
	 */
	class Exile_Trader_Equipment
	{
		name = "EQUIPMENT";
		showWeaponFilter = 0;
		categories[] =
		{
			//"A3Backpacks",
			"ACEMisc",
			"ACENVG",
			"Backpacks",
			"CUPBackpacks",
			"CUPHeadgear",
			"CUPUniforms",
			"CUPVests",
			"FirstAid",
			"GREFHeadgear",
			"GREFVests",
			"GREFUniforms",
			"Headgear",
			"RHSAccessories",
			"RHSBackpacks",
			"RHSHeadgear",
			"RHSUniforms",
			"RHSVests",
			"SAFBackpacks",
			"SAFHeadgear",
			"SAFUniforms",
			"SAFVests",
			"Tools",
			"Uniforms",
			"Vests"
			
			//"APEXTools",		//not used
			// Whatever your last line is make sure it doesn't have a comma! <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<<
		};
	};

	/**
	 * Cans, cans, cans
	 */
	class Exile_Trader_Food
	{
		name = "FAST FOOD";
		showWeaponFilter = 0;
		categories[] =
		{
			"Drinks",
			"Food",
			"NonVeganFood"
			// Whatever your last line is make sure it doesn't have a comma! <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<<
		};
	};

	/**
	 * Light bulbs, metal, etc.
	 */
	class Exile_Trader_Hardware
	{
		name = "HARDWARE";
		showWeaponFilter = 0;
		categories[] =
		{
			"Tools",
			"Hardware",
			"ExtendedBaseMod"
			//"R3FTools",
			//"CBuilding"
			// Whatever your last line is make sure it doesn't have a comma! <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<<
		};
	};

	/**
	 * Sells cars and general vehicles
	 */
	class Exile_Trader_Vehicle
	{
		name = "VEHICLE";
		showWeaponFilter = 0;
		categories[] =
		{
			//"A3Armed",
			//"A3Cars",
			//"A3Trucks",
			"Cars",
			"Trucks",
			"CUPUnarmed",
			"SAFUnarmed",
			"GREFUnarmed",
			"CUPArmed",
			"SAFArmed",
			"GREFArmed",
			"RHSVehicles",
			"CUPTracked"
			//"Bikes",
			//"CTrucks",
			//"CUGVs",
			//"CUPBikes",
			//"TankDLC",
			//"MASTanks"
			//"A3Tanks"
			//"UGV"
			//"A3UGVs"
			//"ApexUAVs"
			// Whatever your last line is make sure it doesn't have a comma! <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<<
		};
	};

	/**
	 * Sells choppers and planes
	 */
	class Exile_Trader_Aircraft
	{
		name = "AIRCRAFT";
		showWeaponFilter = 0;
		categories[] =
		{
			"A3armedChoppers",
			"A3unarmedChoppers",
			//"CChoppers",
			//"CPlanes",
			"CUPChoppers",
			"Choppers",
			"GREFChoppers",
			//"JetPlanes",
			//"Pods",			
			"RHSChoppers",
			"SAFChoppers"
			//"A3UAVs",
			//"CUAVs",
			// Whatever your last line is make sure it doesn't have a comma! <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<<
		};
	};

	/**
	 * Sells ships and boats
	 */
	class Exile_Trader_Boat
	{
		name = "BOAT";
		showWeaponFilter = 0;
		categories[] =
		{
			"A3Boats",
			//"ApexBoats",
			"Boats",
			"CUPBoats",
			"RHSBoats"
			// Whatever your last line is make sure it doesn't have a comma! <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<< <<<<<<<<<<<<<<<<
		};
	};

	class Exile_Trader_Diving
	{
		name = "DIVERS";
		showWeaponFilter = 0;
		categories[] =
		{
			"Diving"
		};
	};

	/**
	 * Sells Community Items
	 */
	class Exile_Trader_CommunityCustoms
	{
		name = "Traveling Trader";
		showWeaponFilter = 0;
		categories[] =
		{
			"ACENVG",
			"FirstAid",
			"Drinks",
			"Food",
			"NonVeganFood",
			"ExtendedBaseMod",
			"Hardware",
			"TravelAmmo",
			"TravelLauncher",
			"TravelItems",
			"TravelSnipers"
			
		};
	};
	class Exile_Trader_CommunityCustoms2
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community2"
		};
	};

	class Exile_Trader_CommunityCustoms3
	{
		name = "Aircraft";
		showWeaponFilter = 0;
		categories[] =
		{
			"A3Planes",
			"CUPPlanes",
			"GREFPlanes",
			"Planes",
			"RHSPlanes"
		};
	};

	class Exile_Trader_CommunityCustoms4
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community4"
		};
	};

	class Exile_Trader_CommunityCustoms5
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community5"
		};
	};

	class Exile_Trader_CommunityCustoms6
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community6"
		};
	};

	class Exile_Trader_CommunityCustoms7
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community7"
		};
	};

	class Exile_Trader_CommunityCustoms8
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community8"
		};
	};

	class Exile_Trader_CommunityCustoms9
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community9"
		};
	};

	class Exile_Trader_CommunityCustoms10
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community10"
		};
	};
