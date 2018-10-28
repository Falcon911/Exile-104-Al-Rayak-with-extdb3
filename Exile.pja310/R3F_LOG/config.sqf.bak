/**
 * MAIN CONFIGURATION FILE
 * 
 * English and French comments
 * Commentaires anglais et français
 * 
 * (EN)
 * This file contains the configuration variables of the logistics system.
 * For the configuration of the creation factory, see the file "config_creation_factory.sqf".
 * IMPORTANT NOTE : when a logistics feature is given to an object/vehicle class name, all the classes which inherit
 *                  of the parent/generic class (according to the CfgVehicles) will also have this feature.
 *                  CfgVehicles tree view example : http://madbull.arma.free.fr/A3_stable_1.20.124746_CfgVehicles_tree.html
 * 
 * (FR)
 * Fichier contenant les variables de configuration du système de logistique.
 * Pour la configuration de l'usine de création, voir le fichier "config_creation_factory.sqf".
 * NOTE IMPORTANTE : lorsqu'une fonctionnalité logistique est accordée à un nom de classe d'objet/véhicule, les classes
 *                   héritant de cette classe mère/générique (selon le CfgVehicles) se verront également dotées de cette fonctionnalité.
 *                   Exemple d'arborescence du CfgVehicles : http://madbull.arma.free.fr/A3_stable_1.20.124746_CfgVehicles_tree.html
 */

/**
 * DISABLE LOGISTICS ON OBJECTS BY DEFAULT
 * 
 * (EN)
 * Define if objects and vehicles have logistics features by default,
 * or if it must be allowed explicitely on specific objects/vehicles.
 * 
 * If false : all objects are enabled according to the class names listed in this configuration file
 *            You can disable some objects with : object setVariable ["R3F_LOG_disabled", true];
 * If true :  all objects are disabled by default
 *            You can enable some objects with : object setVariable ["R3F_LOG_disabled", false];
 * 
 * 
 * (FR)
 * Défini si les objets et véhicules disposent des fonctionnalités logistiques par défaut,
 * ou si elles doivent être autorisés explicitement sur des objets/véhicules spécifiques.
 * 
 * Si false : tous les objets sont actifs en accord avec les noms de classes listés dans ce fichier
 *            Vous pouvez désactiver certains objets avec : objet setVariable ["R3F_LOG_disabled", true];
 * Si true :  tous les objets sont inactifs par défaut
 *            Vous pouvez activer quelques objets avec : objet setVariable ["R3F_LOG_disabled", false];
 */
R3F_LOG_CFG_disabled_by_default = false;

/**
 * LOCK THE LOGISTICS FEATURES TO SIDE, FACTION OR PLAYER
 * 
 * (EN)
 * Define the lock mode of the logistics features for an object.
 * An object can be locked to the a side, faction, a player (respawn) or a unit (life).
 * If the object is locked, the player can unlock it according to the
 * value of the config variable R3F_LOG_CFG_unlock_objects_timer.
 * 
 * If "none" : no lock features, everyone can used the logistics features.
 * If "side" : the object is locked to the last side which interacts with it.
 * If "faction" : the object is locked to the last faction which interacts with it.
 * If "player" : the object is locked to the last player which interacts with it. The lock is transmitted after respawn.
 * If "unit" : the object is locked to the last player which interacts with it. The lock is lost when the unit dies.
 * 
 * Note : for military objects (not civilian), the lock is initialized to the object's side.
 * 
 * See also the config variable R3F_LOG_CFG_unlock_objects_timer.
 * 
 * (FR)
 * Défini le mode de verrouillage des fonctionnalités logistics pour un objet donné.
 * Un objet peut être verrouillé pour une side, une faction, un joueur (respawn) ou une unité (vie).
 * Si l'objet est verrouillé, le joueur peut le déverrouiller en fonction de la
 * valeur de la variable de configiration R3F_LOG_CFG_unlock_objects_timer.
 * 
 * Si "none" : pas de verrouillage, tout le monde peut utiliser les fonctionnalités logistiques.
 * Si "side" : l'objet est verrouillé pour la dernière side ayant interagit avec lui.
 * Si "faction" : l'objet est verrouillé pour la dernière faction ayant interagit avec lui.
 * Si "player" : l'objet est verrouillé pour le dernier joueur ayant interagit avec lui. Le verrou est transmis après respawn.
 * Si "unit" : l'objet est verrouillé pour le dernier joueur ayant interagit avec lui. Le verrou est perdu quand l'unité meurt.
 * 
 * Note : pour les objets militaires (non civils), le verrou est initialisé à la side de l'objet.
 * 
 * Voir aussi la variable de configiration R3F_LOG_CFG_unlock_objects_timer.
 */
R3F_LOG_CFG_lock_objects_mode = "none";

/**
 * COUNTDOWN TO UNLOCK AN OBJECT
 * 
 * Define the countdown duration (in seconds) to unlock a locked object.
 * Set to -1 to deny the unlock of objects.
 * See also the config variable R3F_LOG_CFG_lock_objects_mode.
 * 
 * Défini la durée (en secondes) du compte-à-rebours pour déverrouiller un objet.
 * Mettre à -1 pour qu'on ne puisse pas déverrouiller les objets.
 * Voir aussi la variable de configiration R3F_LOG_CFG_lock_objects_mode.
 */
R3F_LOG_CFG_unlock_objects_timer = 30;

/**
 * ALLOW NO GRAVITY OVER GROUND
 * 
 * Define if movable objects with no gravity simulation can be set in height over the ground (no ground contact).
 * The no gravity objects corresponds to most of decoration and constructions items.
 * 
 * Défini si les objets déplaçable sans simulation de gravité peuvent être position en hauteur sans être contact avec le sol.
 * Les objets sans gravité correspondent à la plupart des objets de décors et de construction.
 */
R3F_LOG_CFG_no_gravity_objects_can_be_set_in_height_over_ground = true;

/**
 * LANGUAGE
 * 
 * Automatic language selection according to the game language.
 * New languages can be easily added (read below).
 * 
 * Sélection automatique de la langue en fonction de la langue du jeu.
 * De nouveaux langages peuvent facilement être ajoutés (voir ci-dessous).
 */
R3F_LOG_CFG_language = switch (language) do
{
	case "English":{"en"};
	case "French":{"fr"};
	
	// Feel free to create you own language file named "XX_strings_lang.sqf", where "XX" is the language code.
	// Make a copy of an existing language file (e.g. en_strings_lang.sqf) and translate it.
	// Then add a line with this syntax : case "YOUR_GAME_LANGUAGE":{"LANGUAGE_CODE"};
	// For example :
	
	//case "Czech":{"cz"}; // Not supported. Need your own "cz_strings_lang.sqf"
	//case "Polish":{"pl"}; // Not supported. Need your own "pl_strings_lang.sqf"
	//case "Portuguese":{"pt"}; // Not supported. Need your own "pt_strings_lang.sqf"
	//case "YOUR_GAME_LANGUAGE":{"LANGUAGE_CODE"};  // Need your own "LANGUAGE_CODE_strings_lang.sqf"
	
	default {"en"}; // If language is not supported, use English
};

/**
 * CONDITION TO ALLOW LOGISTICS
 * 
 * (EN)
 * This variable allow to set a dynamic SQF condition to allow/deny all logistics features only on specific clients.
 * The variable must be a STRING delimited by quotes and containing a valid SQF condition to evaluate during the game.
 * For example you can allow logistics only on few clients having a known game ID by setting the variable to :
 * "getPlayerUID player in [""76xxxxxxxxxxxxxxx"", ""76yyyyyyyyyyyyyyy"", ""76zzzzzzzzzzzzzzz""]"
 * Or based on the profile name : "profileName in [""john"", ""jack"", ""james""]"
 * Or only for the server admin : "serverCommandAvailable "#kick"""
 * The condition is evaluted in real time, so it can use condition depending on the mission progress : "alive officer && taskState task1 == ""Succeeded"""
 * Or to deny logistics in a circular area defined by a marker : "player distance getMarkerPos ""markerName"" > getMarkerSize ""markerName"" select 0"
 * Note that quotes of the strings inside the string condition must be doubled.
 * Note : if the condition depends of the aimed objects/vehicle, you can use the command cursorTarget
 * To allow the logistics to everyone, just set the condition to "true".
 * 
 * (FR)
 * Cette variable permet d'utiliser une condition SQF dynamique pour autoriser ou non les fonctions logistiques sur des clients spécifiques.
 * La variable doit être une CHAINE de caractères délimitée par des guillemets et doit contenir une condition SQF valide qui sera évaluée durant la mission.
 * Par exemple pour autoriser la logistique sur seulement quelques joueurs ayant un ID de jeu connu, la variable peut être défini comme suit :
 * "getPlayerUID player in [""76xxxxxxxxxxxxxxx"", ""76yyyyyyyyyyyyyyy"", ""76zzzzzzzzzzzzzzz""]"
 * Ou elle peut se baser sur le nom de profil : "profileName in [""maxime"", ""martin"", ""marc""]"
 * Ou pour n'autoriser que l'admin de serveur : "serverCommandAvailable "#kick"""
 * Les condition sont évaluées en temps réel, et peuvent donc dépendre du déroulement de la mission : "alive officier && taskState tache1 == ""Succeeded"""
 * Ou pour interdire la logistique dans la zone défini par un marqueur circulaire : "player distance getMarkerPos ""markerName"" > getMarkerSize ""markerName"" select 0"
 * Notez que les guillemets des chaînes de caractères dans la chaîne de condition doivent être doublés.
 * Note : si la condition dépend de l'objet/véhicule pointé, vous pouvez utiliser la commande cursorTarget
 * Pour autoriser la logistique chez tout le monde, il suffit de définir la condition à "true".
 */
R3F_LOG_CFG_string_condition_allow_logistics_on_this_client = "true";

/**
 * CONDITION TO ALLOW CREATION FACTORY
 * 
 * (EN)
 * This variable allow to set a dynamic SQF condition to allow/deny the access to the creation factory only on specific clients.
 * The variable must be a STRING delimited by quotes and containing a valid SQF condition to evaluate during the game.
 * For example you can allow the creation factory only on few clients having a known game ID by setting the variable to :
 * "getPlayerUID player in [""76xxxxxxxxxxxxxxx"", ""76yyyyyyyyyyyyyyy"", ""76zzzzzzzzzzzzzzz""]"
 * Or based on the profile name : "profileName in [""john"", ""jack"", ""james""]"
 * Or only for the server admin : "serverCommandAvailable "#kick"""
 * Note that quotes of the strings inside the string condition must be doubled.
 * Note : if the condition depends of the aimed objects/véhicule, you can use the command cursorTarget
 * Note also that the condition is evaluted in real time, so it can use condition depending on the mission progress :
 * "alive officer && taskState task1 == ""Succeeded"""
 * To allow the creation factory to everyone, just set the condition to "true".
 * 
 * (FR)
 * Cette variable permet d'utiliser une condition SQF dynamique pour rendre accessible ou non l'usine de création sur des clients spécifiques.
 * La variable doit être une CHAINE de caractères délimitée par des guillemets et doit contenir une condition SQF valide qui sera évaluée durant la mission.
 * Par exemple pour autoriser l'usine de création sur seulement quelques joueurs ayant un ID de jeu connu, la variable peut être défini comme suit :
 * "getPlayerUID player in [""76xxxxxxxxxxxxxxx"", ""76yyyyyyyyyyyyyyy"", ""76zzzzzzzzzzzzzzz""]"
 * Ou elle peut se baser sur le nom de profil : "profileName in [""maxime"", ""martin"", ""marc""]"
 * Ou pour n'autoriser que l'admin de serveur : "serverCommandAvailable "#kick"""
 * Notez que les guillemets des chaînes de caractères dans la chaîne de condition doivent être doublés.
 * Note : si la condition dépend de l'objet/véhicule pointé, vous pouvez utiliser la commande cursorTarget
 * Notez aussi que les condition sont évaluées en temps réel, et peuvent donc dépendre du déroulement de la mission :
 * "alive officier && taskState tache1 == ""Succeeded"""
 * Pour autoriser l'usine de création chez tout le monde, il suffit de définir la condition à "true".
 */
R3F_LOG_CFG_string_condition_allow_creation_factory_on_this_client = "false";

/*
 ********************************************************************************************
 * BELOW IS THE CLASS NAMES CONFIGURATION / CI-DESSOUS LA CONFIGURATION DES NOMS DE CLASSES *
 ********************************************************************************************
 * 
 * (EN)
 * There are two ways to manage new objects with the logistics system. The first one is to add these objects in the
 * following appropriate lists. The second one is to create a new external file in the /addons_config/ directory,
 * based on /addons_config/TEMPLATE.sqf, and to add a #include below to.
 * The first method is better to add/fix only some various class names.
 * The second method is better to take into account an additional addon.
 * 
 * These variables are based on the inheritance principle according to the CfgVehicles tree.
 * It means that a features accorded to a class name, is also accorded to all child classes.
 * Inheritance tree view : http://madbull.arma.free.fr/A3_1.32_CfgVehicles_tree.html
 * 
 * (FR)
 * Deux moyens existent pour gérer de nouveaux objets avec le système logistique. Le premier consiste à ajouter
 * ces objets dans les listes appropriées ci-dessous. Le deuxième est de créer un fichier externe dans le répertoire
 * /addons_config/ basé sur /addons_config/TEMPLATE.sqf, et d'ajouter un #include ci-dessous.
 * La première méthode est préférable lorsqu'il s'agit d'ajouter ou corriger quelques classes diverses.
 * La deuxième méthode est préférable s'il s'agit de prendre en compte le contenu d'un addon supplémentaire.
 * 
 * Ces variables sont basées sur le principe d'héritage utilisés dans l'arborescence du CfgVehicles.
 * Cela signifie qu'une fonctionnalité accordée à une classe, le sera aussi pour toutes ses classes filles.
 * Vue de l'arborescence d'héritage : http://madbull.arma.free.fr/A3_1.32_CfgVehicles_tree.html
 */

/****** LIST OF ADDONS CONFIG TO INCLUDE / LISTE DES CONFIG D'ADDONS A INCLURE ******/
#include "addons_config\A3_vanilla.sqf"
//#include "addons_config\All_in_Arma.sqf"
//#include "addons_config\R3F_addons.sqf"
//#include "addons_config\YOUR_ADDITIONAL_ADDON.sqf"

/****** TOW WITH VEHICLE / REMORQUER AVEC VEHICULE ******/

/**
 * List of class names of ground vehicles which can tow objects.
 * Liste des noms de classes des véhicules terrestres pouvant remorquer des objets.
 */
R3F_LOG_CFG_can_tow = R3F_LOG_CFG_can_tow +
[
	// e.g. : "MyTowingVehicleClassName1", "MyTowingVehicleClassName2"
	

];

/**
 * List of class names of objects which can be towed.
 * Liste des noms de classes des objets remorquables.
 */
R3F_LOG_CFG_can_be_towed = R3F_LOG_CFG_can_be_towed +
[
	// e.g. : "MyTowableObjectClassName1", "MyTowableObjectClassName2"
	
  
 
];


/****** LIFT WITH VEHICLE / HELIPORTER AVEC VEHICULE ******/

/**
 * List of class names of helicopters which can lift objects.
 * Liste des noms de classes des hélicoptères pouvant héliporter des objets.
 */
R3F_LOG_CFG_can_lift = R3F_LOG_CFG_can_lift +
[
"RHS_MELB_MH6M",
"Exile_Chopper_Hummingbird_Civillian_Wasp",
"Exile_Chopper_Huey_Green",
"Exile_Chopper_Taru_Transport_Black",
"rhs_ka60_c",
"rhs_ka60_grey",
"Exile_Chopper_Mohawk_FIA",
"Exile_Chopper_Hellcat_Green",
"RHS_UH60M2",
"RHS_UH60M2_d",
"RHS_UH1Y_UNARMED",
"rhsusf_CH53E_USMC",
"RHS_Mi8mt_Cargo_vdv",
"Exile_Chopper_Huey_Armed_Green",
"I_Heli_light_03_F",
"B_Heli_Attack_01_F",
"O_Heli_Light_02_F",
"RHS_MELB_AH6M_H",
"RHS_MELB_AH6M_L",
"RHS_MELB_AH6M_M",
"RHS_MELB_AH6M",
"RHS_CH_47F",
"RHS_CH_47F_light",
"RHS_AH1Z",
"RHS_AH1Z_CS",
"RHS_AH1Z_GS",
"RHS_UH60M",
"RHS_UH60M_d",
"RHS_AH64D_noradar",
"RHS_AH64D_noradar_GS",
"RHS_AH64D_noradar_CS",
"RHS_AH64D_noradar_AA",
"RHS_AH64D",
"RHS_AH64D_GS",
"RHS_AH64D_CS",
"RHS_AH64D_AA",
"RHS_AH64DGrey",
"RHS_UH1Y",
"RHS_UH1Y_FFAR",
"RHS_UH1Y_d_GS",
"RHS_Mi8mt_vdv",
"RHS_Mi8MTV3_vdv",
"RHS_Mi8MTV3_UPK23_vdv",
"RHS_Mi8MTV3_FAB_vdv",
"RHS_Mi8MTV3_heavy_vdv",
"RHS_Ka52_UPK23_vvsc",
"RHS_Ka52_vvsc",
"RHS_Mi24V_vvsc",
"RHS_Mi24V_FAB_vvsc",
"RHS_Mi24V_UPK23_vvsc",
"RHS_Mi24V_AT_vvsc",
"RHS_Mi24P_CAS_vvsc",
"rhs_mi28n_vvsc",
"rhs_mi28n_s13_vvsc",
"CUP_B_CH53E_USMC",
"CUP_B_CH53E_VIV_GER",
"CUP_B_UH1Y_UNA_F",
"CUP_B_UH1Y_MEV_F",
"CUP_C_Mi17_Civilian_RU",
"CUP_O_Mi8_medevac_CHDKZ",
"CUP_Merlin_HC3",
"CUP_B_MH60S_USMC",
"CUP_B_AW159_Unarmed_BAF",
"CUP_B_CH47F_USA",
"CUP_B_UH60M_US",
"CUP_B_UH60L_US",
"CUP_B_MI6A_CDF",
"CUP_B_AH6J_ESCORT_USA",
"CUP_B_MH6J_USA"

	
];

/**
 * List of class names of objects which can be lifted.
 * Liste des noms de classes des objets héliportables.
 */
R3F_LOG_CFG_can_be_lifted = R3F_LOG_CFG_can_be_lifted +
[
	"CargoNet_01_box_F",
	"Box_NATO_AmmoVeh_F",
	"Box_NATO_Ammo_F",
	"box_NATO_AmmoOrd_F",
	"Exile_Container_SupplyBox",
	"B_supplyCrate_F",
	"I_CargoNET_01_F",
	"Box_FIA_Support_F",
	"Box_NATO_Wps_F",
	"C_supplyCrate_F",
	"IG_supplyCrate_F",
	"Box_IND_AmmoVeh_F",
	"Box_FIA_Ammo_F",
	"Box_FIA_Wps_F", 
	"I_SupplyCrate_F", 
	"Box_East_AmmoVeh_F",
	"B_Slingload_01_Cargo_F",
	"B_Slingload_01_Fuel_F",
	"B_Slingload_01_Ammo_F",
	"B_Slingload_01_Medevac_F",
	"B_Slingload_01_Repair_F",
	"Land_Pod_Heli_Transport_04_covered_F",
	"Land_Pod_Heli_Transport_04_fuel_F",
	"Land_Pod_Heli_Transport_04_box_F",
	"Land_Pod_Heli_Transport_04_repair_F",
	"Land_Pod_Heli_Transport_04_medevac_F",
	"Land_Pod_Heli_Transport_04_bench_F",
	"Land_Pod_Heli_Transport_04_covered_black_F",
	"Land_Pod_Heli_Transport_04_fuel_black_F",
	"Land_Pod_Heli_Transport_04_box_black_F",
	"Land_Pod_Heli_Transport_04_repair_black_F",
	"Land_Pod_Heli_Transport_04_medevac_black_F",
	"Land_Pod_Heli_Transport_04_bench_black_F",
	"RHS_BTR70",
			//"RHS_BTR70_MSV",
			//"RHS_BTR70_VDV",
			//"RHS_BTR70_VMF",
			//"RHS_BTR70_VV",
			"RHS_BTR80A_MSV",
			//"RHS_BTR80A_VDV",
			//"RHS_BTR80A_VMF",
			//"RHS_BTR80A_VV",
			//"RHS_BTR80_MSV",
			//"RHS_BTR80_VDV",
			//"RHS_BTR80_VMF",
			//"RHS_BTR80_VV",
			"RHS_Civ_Truck_02_covered_F",
			"RHS_Civ_Truck_02_transport_F",
			//"RHS_M2A3",
			//"RHS_M2A3_BUSKI",
			"RHS_UAZ_MSV_01",
			"RHS_Ural_Civ_01",
			"RHS_Ural_Civ_02",
			"RHS_Ural_Civ_03",
			"RHS_Ural_Flat_MSV_01",
			"RHS_Ural_Flat_VDV_01",
			"RHS_Ural_Flat_VMF_01",
			"RHS_Ural_Flat_VV_01",
			"RHS_Ural_Fuel_MSV_01",
			"RHS_Ural_Fuel_VDV_01",
			"RHS_Ural_Fuel_VMF_01",
			"RHS_Ural_Fuel_VV_01",
			"RHS_Ural_MSV_01",
			"RHS_Ural_Open_Civ_01",
			"RHS_Ural_Open_Civ_02",
			"RHS_Ural_Open_Civ_03",
			"RHS_Ural_Open_Flat_MSV_01",
			"RHS_Ural_Open_Flat_VDV_01",
			"RHS_Ural_Open_Flat_VMF_01",
			"RHS_Ural_Open_Flat_VV_01",
			"RHS_Ural_Open_MSV_01",
			"RHS_Ural_Open_VDV_01",
			"RHS_Ural_Open_VMF_01",
			"RHS_Ural_Open_VV_01",
			"RHS_Ural_Repair_MSV_01",
			"RHS_Ural_Repair_VDV_01",
			"RHS_Ural_Repair_VMF_01",
			"RHS_Ural_Repair_VV_01",
			"RHS_Ural_VDV_01",
			"RHS_Ural_VMF_01",
			"RHS_Ural_VV_01",
			"rhs_bmp3_late_msv",
			"rhs_bmp3mera_msv",
			"rhs_btr60_chdkz",
			//"rhs_btr60_vdv",
			//"rhs_btr60_vmf",
			//"rhs_btr70_chdkz",
			"rhs_gaz66_ammo_msv",
			"rhs_gaz66_ammo_vdv",
			"rhs_gaz66_ammo_vmf",
			"rhs_gaz66_ammo_vv",
			"rhs_gaz66_ap2_msv",
			"rhs_gaz66_ap2_vdv",
			"rhs_gaz66_ap2_vmf",
			"rhs_gaz66_ap2_vv",
			"rhs_gaz66_flat_msv",
			"rhs_gaz66_flat_vdv",
			"rhs_gaz66_flat_vmf",
			"rhs_gaz66_flat_vv",
			"rhs_gaz66_msv",
			"rhs_gaz66_r142_msv",
			"rhs_gaz66_r142_vdv",
			"rhs_gaz66_r142_vmf",
			"rhs_gaz66_r142_vv",
			"rhs_gaz66_repair_msv",
			"rhs_gaz66_repair_vdv",
			"rhs_gaz66_repair_vmf",
			"rhs_gaz66_repair_vv",
			"rhs_gaz66_vdv",
			"rhs_gaz66_vmf",
			"rhs_gaz66_vv",
			"rhs_gaz66o_flat_msv",
			"rhs_gaz66o_flat_vdv",
			"rhs_gaz66o_flat_vmf",
			"rhs_gaz66o_flat_vv",
			"rhs_gaz66o_msv",
			"rhs_gaz66o_vdv",
			"rhs_gaz66o_vmf",
			"rhs_gaz66o_vv",
			"rhs_kamaz5350",
			"rhs_kamaz5350_flatbed",
			"rhs_kamaz5350_flatbed_cover",
			"rhs_kamaz5350_flatbed_cover_msv",
			"rhs_kamaz5350_flatbed_cover_vdv",
			"rhs_kamaz5350_flatbed_cover_vmf",
			"rhs_kamaz5350_flatbed_cover_vv",
			"rhs_kamaz5350_flatbed_msv",
			"rhs_kamaz5350_flatbed_vdv",
			"rhs_kamaz5350_flatbed_vmf",
			"rhs_kamaz5350_flatbed_vv",
			"rhs_kamaz5350_msv",
			"rhs_kamaz5350_open",
			"rhs_kamaz5350_open_msv",
			"rhs_kamaz5350_open_vdv",
			"rhs_kamaz5350_open_vmf",
			"rhs_kamaz5350_open_vv",
			"rhs_kamaz5350_vdv",
			"rhs_kamaz5350_vmf",
			"rhs_kamaz5350_vv",
			"rhs_tigr_3camo_vdv",
			"rhs_tigr_3camo_vmf",
			"rhs_tigr_3camo_vv",
			"rhs_tigr_ffv_3camo_msv",
			"rhs_tigr_ffv_3camo_vdv",
			"rhs_tigr_ffv_3camo_vmf",
			"rhs_tigr_ffv_3camo_vv",
			"rhs_tigr_ffv_msv",
			"rhs_tigr_ffv_vdv",
			"rhs_tigr_ffv_vmf",
			"rhs_tigr_ffv_vv",
			"rhs_tigr_m_3camo_msv",
			"rhs_tigr_m_3camo_vdv",
			"rhs_tigr_m_3camo_vmf",
			"rhs_tigr_m_3camo_vv",
			"rhs_tigr_m_msv",
			"rhs_tigr_m_vdv",
			"rhs_tigr_m_vmf",
			"rhs_tigr_m_vv",
			"rhs_tigr_msv",
			"rhs_tigr_sts_3camo_msv",
			"rhs_tigr_sts_3camo_vdv",
			"rhs_tigr_sts_3camo_vmf",
			"rhs_tigr_sts_3camo_vv",
			"rhs_tigr_sts_msv",
			"rhs_tigr_sts_vdv",
			"rhs_tigr_sts_vmf",
			"rhs_tigr_sts_vv",
			"rhs_tigr_vdv",
			"rhs_tigr_vmf",
			"rhs_tigr_vv",
			"rhs_truck",
			"rhs_typhoon_vdv",
			"rhs_uaz_open_chdkz",
			"rhs_uaz_open_vdv",
			"rhs_uaz_open_vmf",
			"rhs_uaz_open_vv",
			"rhs_uaz_spg9_chdkz",
			"rhs_uaz_vdv",
			"rhs_uaz_vv",
			"rhs_ural_chdkz",
			"rhs_ural_open_chdkz",
			"rhs_ural_work_chdkz",
			"rhs_ural_work_open_chdkz",
			"rhsusf_M1078A1P2_B_CP_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_D_CP_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_M2_D_flatbed_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_M2_D_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_M2_D_open_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_M2_WD_flatbed_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_M2_WD_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_M2_WD_open_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_M2_flatbed_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_M2_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_M2_open_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_WD_CP_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_d_flatbed_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_d_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_d_open_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_flatbed_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_open_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_wd_flatbed_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_wd_fmtv_usarmy",
			"rhsusf_M1078A1P2_B_wd_open_fmtv_usarmy",
			"rhsusf_M1078A1P2_d_flatbed_fmtv_usarmy",
			"rhsusf_M1078A1P2_d_fmtv_usarmy",
			"rhsusf_M1078A1P2_d_open_fmtv_usarmy",
			"rhsusf_M1078A1P2_flatbed_fmtv_usarmy",
			"rhsusf_M1078A1P2_fmtv_usarmy",
			"rhsusf_M1078A1P2_open_fmtv_usarmy",
			"rhsusf_M1078A1P2_wd_flatbed_fmtv_usarmy",
			"rhsusf_M1078A1P2_wd_fmtv_usarmy",
			"rhsusf_M1078A1P2_wd_open_fmtv_usarmy",
			"rhsusf_M1078A1R_SOV_M2_D_fmtv_socom",
			"rhsusf_M1078A1R_SOV_M2_WD_fmtv_socom",
			"rhsusf_M1083A1P2_B_D_flatbed_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_D_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_D_open_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_M2_D_flatbed_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_M2_D_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_M2_D_open_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_M2_WD_flatbed_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_M2_WD_open_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_M2_d_MHQ_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_M2_d_Medical_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_M2_flatbed_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_M2_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_M2_open_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_M2_wd_MHQ_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_M2_wd_Medical_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_M2_wd_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_WD_flatbed_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_WD_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_WD_open_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_flatbed_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_fmtv_usarmy",
			"rhsusf_M1083A1P2_B_open_fmtv_usarmy",
			"rhsusf_M1083A1P2_D_flatbed_fmtv_usarmy",
			"rhsusf_M1083A1P2_D_fmtv_usarmy",
			"rhsusf_M1083A1P2_D_open_fmtv_usarmy",
			"rhsusf_M1083A1P2_WD_flatbed_fmtv_usarmy",
			"rhsusf_M1083A1P2_WD_fmtv_usarmy",
			"rhsusf_M1083A1P2_WD_open_fmtv_usarmy",
			"rhsusf_M1083A1P2_flatbed_fmtv_usarmy",
			"rhsusf_M1083A1P2_fmtv_usarmy",
			"rhsusf_M1083A1P2_open_fmtv_usarmy",
			"rhsusf_M1084A1P2_B_D_fmtv_usarmy",
			"rhsusf_M1084A1P2_B_M2_D_fmtv_usarmy",
			"rhsusf_M1084A1P2_B_M2_WD_fmtv_usarmy",
			"rhsusf_M1084A1P2_B_M2_fmtv_usarmy",
			"rhsusf_M1084A1P2_B_WD_fmtv_usarmy",
			"rhsusf_M1084A1P2_B_fmtv_usarmy",
			"rhsusf_M1084A1P2_D_fmtv_usarmy",
			"rhsusf_M1084A1P2_WD_fmtv_usarmy",
			"rhsusf_M1084A1P2_fmtv_usarmy",
			"rhsusf_M1084A1R_SOV_M2_D_fmtv_socom",
			"rhsusf_M1084A1R_SOV_M2_WD_fmtv_socom",
			"rhsusf_M1085A1P2_B_D_Medical_fmtv_usarmy",
			"rhsusf_M1085A1P2_B_Medical_fmtv_usarmy",
			"rhsusf_M1085A1P2_B_WD_Medical_fmtv_usarmy",
			"rhsusf_M1232_M2_usarmy_d",
			"rhsusf_M1232_M2_usarmy_wd",
			"rhsusf_M1232_MK19_usarmy_d",
			"rhsusf_M1232_MK19_usarmy_wd",
			"rhsusf_M1232_usarmy_d",
			"rhsusf_M1232_usarmy_wd",
			"rhsusf_M1237_M2_usarmy_d",
			"rhsusf_M1237_M2_usarmy_wd",
			"rhsusf_M1237_MK19_usarmy_d",
			"rhsusf_M1237_MK19_usarmy_wd",
			"rhsusf_M977A4_AMMO_BKIT_M2_usarmy_d",
			"rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd",
			"rhsusf_M977A4_AMMO_BKIT_usarmy_d",
			"rhsusf_M977A4_AMMO_BKIT_usarmy_wd",
			"rhsusf_M977A4_AMMO_usarmy_d",
			"rhsusf_M977A4_AMMO_usarmy_wd",
			"rhsusf_M977A4_BKIT_M2_usarmy_d",
			"rhsusf_M977A4_BKIT_M2_usarmy_wd",
			"rhsusf_M977A4_BKIT_usarmy_d",
			"rhsusf_M977A4_BKIT_usarmy_wd",
			"rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_d",
			"rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd",
			"rhsusf_M977A4_REPAIR_BKIT_usarmy_d",
			"rhsusf_M977A4_REPAIR_BKIT_usarmy_wd",
			"rhsusf_M977A4_REPAIR_usarmy_d",
			"rhsusf_M977A4_REPAIR_usarmy_wd",
			"rhsusf_M977A4_usarmy_d",
			"rhsusf_M977A4_usarmy_wd",
			"rhsusf_M978A4_BKIT_usarmy_d",
			"rhsusf_M978A4_BKIT_usarmy_wd",
			"rhsusf_M978A4_usarmy_d",
			"rhsusf_M978A4_usarmy_wd",
			"rhsusf_m1025_d",
			"rhsusf_m1025_d_Mk19",
			"rhsusf_m1025_d_m2",
			"rhsusf_m1025_d_s",
			"rhsusf_m1025_d_s_Mk19",
			"rhsusf_m1025_d_s_m2",
			"rhsusf_m1025_w",
			"rhsusf_m1025_w_m2",
			"rhsusf_m1025_w_mk19",
			"rhsusf_m1025_w_s",
			"rhsusf_m1025_w_s_Mk19",
			"rhsusf_m1025_w_s_m2",
			"rhsusf_m113_usarmy_M240",
			"rhsusf_m113_usarmy_MK19",
			"rhsusf_m113_usarmy_supply",
			"rhsusf_m113_usarmy_unarmed",
			"rhsusf_m113d_usarmy",
			"rhsusf_m113d_usarmy_M240",
			"rhsusf_m113d_usarmy_MK19",
			"rhsusf_m113d_usarmy_medical",
			"rhsusf_m113d_usarmy_supply",
			"rhsusf_m113d_usarmy_unarmed",
			//"rhsusf_m1a1aim_tuski_d",
			//"rhsusf_m1a1aim_tuski_wd",
			//"rhsusf_m1a1aimd_usarmy",
			//"rhsusf_m1a1fep_d",
			//"rhsusf_m1a1fep_od",
			//"rhsusf_m1a1fep_wd",
			//"rhsusf_m1a1hc_wd",
			//"rhsusf_m1a2sep1d_usarmy",
			//"rhsusf_m1a2sep1tuskid_usarmy",
			//"rhsusf_m1a2sep1tuskiid_usarmy",
			//"rhsusf_m1a2sep1tuskiiwd_usarmy",
			//"rhsusf_m1a2sep1tuskiwd_usarmy",
			//"rhsusf_m1a2sep1wd_usarmy",
			"rhsusf_m998_d_2dr",
			"rhsusf_m998_d_2dr_fulltop",
			"rhsusf_m998_d_2dr_halftop",
			"rhsusf_m998_d_4dr",
			"rhsusf_m998_d_4dr_fulltop",
			"rhsusf_m998_d_4dr_halftop",
			"rhsusf_m998_d_s_2dr",
			"rhsusf_m998_d_s_2dr_fulltop",
			"rhsusf_m998_d_s_2dr_halftop",
			"rhsusf_m998_d_s_4dr",
			"rhsusf_m998_d_s_4dr_fulltop",
			"rhsusf_m998_d_s_4dr_halftop",
			"rhsusf_m998_w_2dr",
			"rhsusf_m998_w_2dr_fulltop",
			"rhsusf_m998_w_2dr_halftop",
			"rhsusf_m998_w_4dr",
			"rhsusf_m998_w_4dr_fulltop",
			"rhsusf_m998_w_4dr_halftop",
			"rhsusf_m998_w_s_2dr",
			"rhsusf_m998_w_s_2dr_fulltop",
			"rhsusf_m998_w_s_2dr_halftop",
			"rhsusf_m998_w_s_4dr",
			"rhsusf_m998_w_s_4dr_fulltop",
			"rhsusf_mrzr4_d",
			"rhsusf_mrzr4_d_mud",
			"rhsusf_mrzr4_w_mud",
			"rhsusf_rg33_d",
			"rhsusf_rg33_m2_usmc_wd",
			"rhsusf_rg33_m2_wd",
			"rhsusf_rg33_usmc_d",
			"rhsusf_rg33_usmc_wd",
			//"rhs_sprut_vdv",
			//"rhs_2s3_tv",
			"rhs_bmd1_chdkz",
			"rhs_bmd2_chdkz",
			"rhs_bmd4_vdv",
			"rhs_bmd4ma_vdv",
			"rhs_bmd4m_vdv",
			"rhs_bmp1_chdkz",
			"rhs_bmp1d_chdkz",
			"rhs_bmp1k_chdkz",
			"rhs_bmp1p_chdkz",
			"rhs_bmp2e_chdkz",
			"rhs_bmp2_chdkz",
			"rhs_bmp2d_chdkz",
			"rhs_bmp2k_chdkz",
			"rhsusf_m109_usarmy",
			"rhsusf_m109d_usarmy",
			"rhsusf_M1117_W",
			"rhsusf_m113_usarmy",
			"rhsusf_m113_usarmy_M2_90",
			"rhsusf_m113_usarmy_medical",
			"rhsusf_m113_usarmy_MK19_90",
			//"rhs_t72bb_chdkz",
			//"rhs_t72bb_tv",
			//"rhs_t72bd_tv",
			//"rhs_t80",
			//"rhs_t80a",
			//"rhs_t80b",
			//"rhs_t80bk",
			//"rhs_t80bv",
			//"rhs_t80bvk",
			//"rhs_t80u45m",
			//"rhs_t80u",
			//"rhs_t80ue1",
			//"rhs_t80uk",
			//"rhs_t80um",
			//"rhs_t90_tv",
			//"rhs_t90a_tv",
			"rhs_zsu234_chdkz",
			"CUP_O_LR_MG_TKM",
			"CUP_O_LR_MG_TKA",
			"CUP_I_Datsun_PK",
			"CUP_I_Datsun_PK_Random",
			"CUP_I_Datsun_PK_TK",
			"CUP_I_Datsun_PK_TK_Random",
			"CUP_O_Datsun_PK",
			"CUP_O_Datsun_PK_Random",
			"CUP_O_UAZ_MG_CHDKZ",
			"CUP_O_UAZ_MG_RU",
			"CUP_O_UAZ_MG_TKA",
			//"CUP_I_UAZ_MG_UN",
			"CUP_B_UAZ_MG_ACR",
			"CUP_B_UAZ_MG_CDF",
			"CUP_B_UAZ_AGS30_CDF",
			"CUP_O_UAZ_AGS30_CHDKZ",
			"CUP_O_UAZ_AGS30_RU",
			"CUP_O_UAZ_AGS30_TKA",
			//"CUP_I_UAZ_AGS30_UN",
			"CUP_I_M113_RACS",
			//"CUP_I_M113_UN",
			"CUP_BAF_Jackal2_L2A1_W",
			"CUP_BAF_Jackal2_L2A1_D",
			"CUP_BAF_Jackal2_GMG_D",
			"CUP_BAF_Jackal2_GMG_W",
			"CUP_B_LR_Special_CZ_W",
			"CUP_B_LR_Special_Des_CZ_D",
			"CUP_B_LR_MG_CZ_W",
			"CUP_B_LR_MG_GB_W",
			"CUP_B_HMMWV_M1114_USMC",
			"CUP_B_HMMWV_Avenger_USA",
			"CUP_B_HMMWV_M2_USMC",
			"CUP_B_HMMWV_Crows_M2_USA",
			"CUP_B_HMMWV_M2_GPK_USA",
			"CUP_B_HMMWV_M2_USA",
			"CUP_B_HMMWV_DSHKM_GPK_ACR",
			"CUP_B_HMMWV_AGS_GPK_ACR",
			"CUP_B_HMMWV_MK19_USMC",
			"CUP_B_HMMWV_MK19_USA",
			"CUP_B_HMMWV_Crows_MK19_USA",
			"CUP_B_HMMWV_SOV_USA",
			"CUP_B_BRDM2_HQ_CDF",
			"CUP_O_BRDM2_HQ_SLA",
			//"CUP_I_BRDM2_HQ_UN",
			"CUP_I_BRDM2_HQ_NAPA",
			"CUP_I_BRDM2_HQ_TK_Gue",
			"CUP_O_BRDM2_HQ_TKA",
			"CUP_O_BRDM2_HQ_CHDKZ",
			"CUP_O_BRDM2_CHDKZ",
			"CUP_O_BRDM2_SLA",
			"CUP_O_BRDM2_TKA",
			"CUP_I_BRDM2_NAPA",
			"CUP_I_BRDM2_TK_Gue",
			//"CUP_I_BRDM2_UN",
			"CUP_B_BRDM2_CDF",
			"CUP_B_FV432_Bulldog_GB_W_RWS",
			"CUP_B_Dingo_GER_Wdl",
			"CUP_B_Mastiff_HMG_GB_W",
			"CUP_B_Ridgback_HMG_GB_W",
			"CUP_I_SUV_Armored_ION",
			"CUP_O_BTR90_RU",
			"CUP_B_LAV25M240_USMC",
			"CUP_B_LAV25_HQ_USMC",
			"CUP_B_LAV25_USMC",
			"CUP_O_BTR90_HQ_RU",
			"CUP_O_GAZ_Vodnik_PK_RU",
			"CUP_B_BAF_Coyote_L2A1_W",
			"CUP_B_BAF_Coyote_L2A1_D",
			"CUP_C_Datsun",
			"CUP_C_Datsun_4seat",
			"CUP_C_Datsun_Plain",
			"CUP_C_Datsun_Covered",
			"CUP_C_Datsun_Tubeframe",
			"CUP_C_Ural_Civ_01",
			"CUP_C_Ural_Civ_02",
			"CUP_C_Ural_Civ_03",
			"CUP_C_Ural_Open_Civ_01",
			"CUP_C_Ural_Open_Civ_02",
			"CUP_C_Ural_Open_Civ_03",
			"CUP_O_Ural_TKA",
			"CUP_O_Ural_RU",
			//"CUP_I_Ural_UN",
			"CUP_B_Ural_CDF",
			//"CUP_O_Ural_CHDKZ",
			//"CUP_O_Ural_SLA",
			//"CUP_O_Ural_Open_TKA",
			//"CUP_B_Ural_Open_CDF",
			//"CUP_O_Ural_Open_RU",
			//"CUP_O_Ural_Open_CHDKZ",
			//"CUP_O_Ural_Open_SLA",
			//"CUP_O_Ural_Empty_SLA",
			//"CUP_B_Ural_Empty_CDF",
			//"CUP_I_Ural_Empty_UN",
			//"CUP_O_Ural_Empty_RU",
			//"CUP_O_Ural_Empty_CHDKZ",
			//"CUP_O_Ural_Empty_TKA",
			//"CUP_O_Ural_Repair_SLA",
			//"CUP_O_Ural_Repair_TKA",
			//"CUP_O_Ural_Repair_CHDKZ",
			//"CUP_O_Ural_Repair_RU",
			//"CUP_I_Ural_Repair_UN",
			//"CUP_B_Ural_Repair_CDF",
			//"CUP_B_Ural_Refuel_CDF",
			//"CUP_O_Ural_Refuel_RU",
			"CUP_O_Ural_Refuel_CHDKZ",
			//"CUP_O_Ural_Refuel_TKA",
			//"CUP_O_Ural_Refuel_SLA",
			"CUP_C_LR_Transport_CTK",
			"CUP_O_LR_Transport_TKA",
			"CUP_O_LR_Transport_TKM",
			"CUP_B_LR_Transport_CZ_W",
			"CUP_B_LR_Transport_CZ_D",
			"CUP_B_LR_Transport_GB_W",
			"CUP_B_LR_Transport_GB_D",
			//"CUP_B_LR_Ambulance_CZ_W",
			//"CUP_B_LR_Ambulance_CZ_D",
			//"CUP_B_LR_Ambulance_GB_W",
			//"CUP_B_LR_Ambulance_GB_D",
			//"CUP_O_LR_Ambulance_TKA",
			"CUP_C_UAZ_Unarmed_TK_CIV",
			//"CUP_O_UAZ_Unarmed_RU",
			//"CUP_I_UAZ_Unarmed_UN",
			//"CUP_O_UAZ_Unarmed_TKA",
			"CUP_O_UAZ_Unarmed_CHDKZ",
			//"CUP_B_UAZ_Unarmed_ACR",
			//"CUP_B_UAZ_Unarmed_CDF",
			"CUP_C_UAZ_Open_TK_CIV",
			"CUP_O_UAZ_Open_CHDKZ",
			//"CUP_O_UAZ_Open_RU",
			//"CUP_O_UAZ_Open_TKA",
			//"CUP_I_UAZ_Open_UN",
			//"CUP_B_UAZ_Open_ACR",
			//"CUP_B_UAZ_Open_CDF",
			"CUP_B_HMMWV_Unarmed_USA",
			//"CUP_B_HMMWV_Unarmed_USMC",
			"CUP_B_HMMWV_Ambulance_USMC",
			//"CUP_B_HMMWV_Ambulance_USA",
			//"CUP_B_HMMWV_Ambulance_ACR",
			"CUP_B_HMMWV_Transport_USA",
			"CUP_I_M113_Med_RACS",
			//"CUP_I_M113_Med_UN",
			"CUP_I_BTR40_TKG"
];


/****** LOAD IN VEHICLE / CHARGER DANS LE VEHICULE ******/

/*
* (EN)
 * This section uses a numeric quantification of capacity and cost of the objets.
 * For example, in a vehicle has a capacity of 100, we will be able to load in 5 objects costing 20 capacity units.
 * The capacity doesn't represent a real volume or weight, but a choice made for gameplay.
 * 
 * (FR)
 * Cette section utilise une quantification numérique de la capacité et du coût des objets.
 * Par exemple, dans un véhicule d'une capacité de 100, nous pouvons charger 5 objets coûtant 20 unités de capacité.
 * La capacité ne représente ni un poids, ni un volume, mais un choix fait pour la jouabilité.
 */

/**
 * List of class names of vehicles or cargo objects which can transport objects.
 * The second element of the nested arrays is the load capacity (in relation with the capacity cost of the objects).
 * 
 * Liste des noms de classes des véhicules ou "objets contenant" pouvant transporter des objets.
 * Le deuxième élément des sous-tableaux est la capacité de chargement (en relation avec le coût de capacité des objets).
 */
R3F_LOG_CFG_can_transport_cargo = R3F_LOG_CFG_can_transport_cargo +
[
	
["Exile_Boat_RubberDuck_CSAT",500],
["Exile_Boat_RubberDuck_Digital",500],
["Exile_Boat_RubberDuck_Orange",500],
["Exile_Boat_RubberDuck_Blue",500],
["Exile_Boat_RubberDuck_Black",500],
["Exile_Boat_MotorBoat_Police",500],
["Exile_Boat_MotorBoat_Orange",500],
["Exile_Boat_MotorBoat_White",500],
["Exile_Boat_SDV_CSAT",500],
["Exile_Boat_SDV_Digital",500],
["Exile_Boat_SDV_Grey",500],
["I_Boat_Armed_01_minigun_F",500],
["rhsusf_mkvsoc",500],
["RHS_MELB_MH6M",500],
["Exile_Chopper_Hummingbird_Civillian_Wasp",500],
["Exile_Chopper_Huey_Green",500],
["Exile_Chopper_Taru_Transport_Black",500],
["rhs_ka60_c",500],
["rhs_ka60_grey",500],
["Exile_Chopper_Mohawk_FIA", 500],
["Exile_Chopper_Hellcat_Green", 500],
["RHS_UH60M2",500],
["RHS_UH60M2_d",500],
["RHS_UH1Y_UNARMED",500],
["rhsusf_CH53E_USMC",500],
["RHS_Mi8mt_Cargo_vdv",500],
["Exile_Chopper_Huey_Armed_Green",500],
["I_Heli_light_03_F",500],
["B_Heli_Attack_01_F",500],
["O_Heli_Light_02_F",500],
["RHS_MELB_AH6M_H",500],
["RHS_MELB_AH6M_L",500],
["RHS_MELB_AH6M_M",500],
["RHS_MELB_AH6M",500],
["RHS_CH_47F",500],
["RHS_CH_47F_light",500],
["RHS_AH1Z",500],
["RHS_AH1Z_CS",500],
["RHS_AH1Z_GS",500],
["RHS_UH60M",500],
["RHS_UH60M_d",500],
["RHS_AH64D_noradar",500],
["RHS_AH64D_noradar_GS",500],
["RHS_AH64D_noradar_CS",500],
["RHS_AH64D_noradar_AA",500],
["RHS_AH64D",500],
["RHS_AH64D_GS",500],
["RHS_AH64D_CS",500],
["RHS_AH64D_AA",500],
["RHS_AH64DGrey",500],
["RHS_UH1Y",500],
["RHS_UH1Y_FFAR",500],
["RHS_UH1Y_d_GS",500],
["RHS_Mi8mt_vdv",500],
["RHS_Mi8MTV3_vdv",500],
["RHS_Mi8MTV3_UPK23_vdv",500],
["RHS_Mi8MTV3_FAB_vdv",500],
["RHS_Mi8MTV3_heavy_vdv",500],
["RHS_Ka52_UPK23_vvsc",500],
["RHS_Ka52_vvsc",500],
["RHS_Mi24V_vvsc",500],
["RHS_Mi24V_FAB_vvsc",500],
["RHS_Mi24V_UPK23_vvsc",500],
["RHS_Mi24V_AT_vvsc",500],
["RHS_Mi24P_CAS_vvsc",500],
["rhs_mi28n_vvsc",500],
["rhs_mi28n_s13_vvsc",500],
["Exile_Car_Octavius_White", 200],
["Exile_Car_Golf_Red", 200],
["Exile_Car_LandRover_Green", 200],
["Exile_Car_LandRover_Ambulance_Green", 200],
["Exile_Car_Lada_Green", 200],
["Exile_Car_Volha_White", 200],
["Exile_Car_Hatchback_Rusty1", 200],
["Exile_Car_Hatchback_Rusty2", 200],
["Exile_Car_Hatchback_Rusty3", 200],
["Exile_Car_Hatchback_Sport_Red", 200],
["Exile_Car_SUV_Red", 200],
["Exile_Car_SUVXL_Black", 200],
["Exile_Car_SUV_Armed_Black", 200],
["Exile_Car_Offroad_Rusty1", 200],
["Exile_Car_Offroad_Rusty2", 200],
["Exile_Car_Offroad_Rusty3", 200],
["Exile_Car_Offroad_Repair_Civillian", 200],
["Exile_Car_Offroad_Armed_Guerilla01", 200],
["Exile_Car_BTR40_MG_Green", 200],
["Exile_Car_BTR40_Green", 200],
["Exile_Car_Octavius_Black", 200],
["RHS_UAZ_MSV_01", 200],
["rhs_uaz_open_MSV_01", 200],
["rhsgref_cdf_reg_uaz_dshkm", 200],
["rhsgref_cdf_reg_uaz_ags", 200],
["rhsgref_cdf_reg_uaz_spg9", 200],
["rhsusf_m1025_w_m2", 200],
["rhsusf_m1025_w_mk19", 200],
["rhsusf_m1025_w_s", 200],
["rhsusf_m1025_w", 200],
["rhsusf_m1025_w_s_Mk19", 200],
["rhsusf_m1025_w_s_m2", 200],
["rhsusf_m998_w_2dr", 200],
["rhsusf_m998_w_2dr_fulltop", 200],
["rhsusf_m998_w_2dr_halftop", 200],
["rhsusf_m998_w_4dr", 200],
["rhsusf_m998_w_4dr_fulltop", 200],
["rhsusf_m998_w_4dr_halftop", 200],
["rhsusf_m998_w_s_2dr", 200],
["rhsusf_m998_w_s_2dr_fulltop", 200],
["rhsusf_m998_w_s_2dr_halftop", 200],
["rhsusf_m998_w_s_4dr", 200],
["rhsusf_m998_w_s_4dr_fulltop", 200],
["rhsusf_m998_w_s_4dr_halftop", 200],
["Exile_Car_ProwlerLight", 200],
["Exile_Car_ProwlerUnarmed", 200],
["Exile_Car_QilinUnarmed", 200],
["Exile_Car_MB4WD", 200],
["Exile_Car_MB4WDOpen", 200],
["Exile_Car_HMMWV_M2_Green", 200],
["Exile_Car_HMMWV_M134_Green", 200],
["Exile_Car_Van_Black", 200],
["Exile_Car_Van_Box_Black", 200],
["Exile_Car_Van_Fuel_Black", 200],
["Exile_Car_V3S_Covered", 200],
["Exile_Car_Tempest", 200],
["Exile_Car_HEMMT", 200],
["Exile_Car_Ikarus_Blue", 200],
["rhs_gaz66_ap2_msv", 200],
["rhs_gaz66_flat_msv", 200],
["rhs_gaz66_msv", 200],
["rhs_gaz66_r142_msv", 200],
["rhs_gaz66_repair_msv", 200],
["rhs_gaz66o_flat_msv", 200],
["rhs_gaz66o_msv", 200],
["rhsusf_M1078A1P2_B_M2_WD_fmtv_usarmy", 200],
["rhsusf_M1078A1P2_B_M2_WD_flatbed_fmtv_usarmy", 200],
["rhsusf_M1078A1P2_B_WD_open_fmtv_usarmy", 200],
["rhsusf_M1078A1P2_B_M2_WD_open_fmtv_usarmy", 200],
["rhsusf_M1078A1P2_B_WD_CP_fmtv_usarmy", 200],
["rhsusf_M1078A1P2_B_WD_fmtv_usarmy", 200],
["rhsusf_M1078A1P2_B_WD_flatbed_fmtv_usarmy", 200],
["rhs_kamaz5350_msv", 200],
["rhs_kamaz5350_open_msv", 200],
["rhs_kamaz5350_flatbed_msv", 200],
["rhs_kamaz5350_flatbed_cover_msv", 200],
["RHS_Ural_MSV_01", 200],
["RHS_Ural_Flat_MSV_01", 200],
["RHS_Ural_Open_MSV_01", 200],
["RHS_Ural_Open_Flat_MSV_01", 200],
["RHS_Ural_Fuel_MSV_01", 200],
["RHS_Ural_Repair_MSV_01", 200],
["Exile_Car_Strider", 200],
["Exile_Car_Hunter", 200],
["Exile_Car_Ifrit", 200],
["rhs_tigr_3camo_msv", 200],
["rhs_tigr_ffv_3camo_msv", 200],
["rhs_tigr_ffv_msv", 200],
["rhs_tigr_m_3camo_msv", 200],
["rhs_tigr_m_msv", 200],
["rhs_tigr_msv", 200],
["rhs_tigr_sts_3camo_msv", 200],
["rhs_tigr_sts_msv", 200],
["rhsusf_rg33_wd", 200],
["rhsusf_rg33_usmc_wd", 200],
["rhsusf_rg33_m2_wd", 200],
	["rhsusf_rg33_m2_usmc_wd", 200],
	["rhsusf_M1220_usarmy_wd", 200],
	["rhsusf_M1220_M2_usarmy_wd", 200],
	["rhsusf_M1220_MK19_usarmy_wd", 200],
	["rhsusf_M1230_M2_usarmy_wd", 200],
	["rhsusf_M1230_MK19_usarmy_wd", 200],
	["rhsusf_M1220_M153_M2_usarmy_wd", 200],
	["rhsusf_M1230a1_usarmy_wd", 200],
	["rhsusf_M1232_usarmy_wd", 200],
	["rhsusf_M1232_M2_usarmy_wd", 200],
	["rhsusf_M1232_MK19_usarmy_wd", 200],
	["rhsusf_M1237_M2_usarmy_wd", 200],
	["rhsusf_M1237_MK19_usarmy_wd", 200],
	["rhsusf_M1084A1R_SOV_M2_WD_fmtv_socom", 200],
	["rhsusf_M1078A1R_SOV_M2_WD_fmtv_socom", 200],
	["rhsusf_M1117_W", 200],
	["rhsusf_M1117_O", 200],
	["CUP_C_Datsun", 400],
["CUP_C_Datsun_4seat", 400],
["CUP_C_Datsun_Plain", 400],
["CUP_C_Datsun_Covered", 400],
["CUP_C_Datsun_Tubeframe", 400],
["CUP_C_Ural_Civ_01", 400],
["CUP_C_Ural_Civ_02", 400],
["CUP_C_Ural_Civ_03", 400],
["CUP_C_Ural_Open_Civ_01", 400],
["CUP_C_Ural_Open_Civ_02", 400],
["CUP_C_Ural_Open_Civ_03", 400],
["CUP_O_Ural_TKA", 400],
["CUP_O_Ural_RU", 400],
["CUP_B_Ural_CDF", 400],
["CUP_O_Ural_Refuel_CHDKZ", 400],
["CUP_C_LR_Transport_CTK", 400],
["CUP_O_LR_Transport_TKA", 400],
["CUP_O_LR_Transport_TKM", 400],
["CUP_B_LR_Transport_CZ_W", 400],
["CUP_B_LR_Transport_CZ_D", 400],
["CUP_B_LR_Transport_GB_W", 400],
["CUP_B_LR_Transport_GB_D", 400],
["CUP_C_UAZ_Unarmed_TK_CIV", 400],
["CUP_O_UAZ_Unarmed_CHDKZ", 400],
["CUP_C_UAZ_Open_TK_CIV", 400],
["CUP_O_UAZ_Open_CHDKZ", 400],
["CUP_B_HMMWV_Unarmed_USA", 400],
["CUP_B_HMMWV_Ambulance_USMC", 400],
["CUP_B_HMMWV_Transport_USA", 400],
["CUP_I_M113_Med_RACS", 400],
["CUP_I_BTR40_TKG", 400],
["CUP_O_LR_MG_TKM", 400],
["CUP_O_LR_MG_TKA", 400],
["CUP_I_Datsun_PK", 400],
["CUP_I_Datsun_PK_Random", 400],
["CUP_I_Datsun_PK_TK", 400],
["CUP_I_Datsun_PK_TK_Random", 400],
["CUP_O_Datsun_PK", 400],
["CUP_O_Datsun_PK_Random", 400],
["CUP_O_UAZ_MG_CHDKZ", 400],
["CUP_O_UAZ_MG_RU", 400],
["CUP_O_UAZ_MG_TKA", 400],
["CUP_B_UAZ_MG_ACR", 400],
["CUP_B_UAZ_MG_CDF", 400],
["CUP_B_UAZ_AGS30_CDF", 400],
["CUP_O_UAZ_AGS30_CHDKZ", 400],
["CUP_O_UAZ_AGS30_RU", 400],
["CUP_O_UAZ_AGS30_TKA", 400],
["CUP_I_M113_RACS", 400],
["CUP_BAF_Jackal2_L2A1_W", 400],
["CUP_BAF_Jackal2_L2A1_D", 400],
["CUP_BAF_Jackal2_GMG_D", 400],
["CUP_BAF_Jackal2_GMG_W", 400],
["CUP_B_LR_Special_CZ_W", 400],
["CUP_B_LR_Special_Des_CZ_D", 400],
["CUP_B_LR_MG_CZ_W", 400],
["CUP_B_LR_MG_GB_W", 400],
["CUP_B_HMMWV_M1114_USMC", 400],
["CUP_B_HMMWV_Avenger_USA", 400],
["CUP_B_HMMWV_M2_USMC", 400],
["CUP_B_HMMWV_Crows_M2_USA", 400],
["CUP_B_HMMWV_M2_GPK_USA", 400],
["CUP_B_HMMWV_M2_USA", 400],
["CUP_B_HMMWV_DSHKM_GPK_ACR", 400],
["CUP_B_HMMWV_AGS_GPK_ACR", 400],
["CUP_B_HMMWV_MK19_USMC", 400],
["CUP_B_HMMWV_MK19_USA", 400],
["CUP_B_HMMWV_Crows_MK19_USA", 400],
["CUP_B_HMMWV_SOV_USA", 400],
["CUP_B_BRDM2_HQ_CDF", 400],
["CUP_O_BRDM2_HQ_SLA", 400],
["CUP_I_BRDM2_HQ_NAPA", 400],
["CUP_I_BRDM2_HQ_TK_Gue", 400],
["CUP_O_BRDM2_HQ_TKA", 400],
["CUP_O_BRDM2_HQ_CHDKZ", 400],
["CUP_O_BRDM2_CHDKZ", 400],
["CUP_O_BRDM2_SLA", 400],
["CUP_O_BRDM2_TKA", 400],
["CUP_I_BRDM2_NAPA", 400],
["CUP_I_BRDM2_TK_Gue", 400],
["CUP_B_BRDM2_CDF", 400],
["CUP_B_FV432_Bulldog_GB_W_RWS", 400],
["CUP_B_Dingo_GER_Wdl", 400],
["CUP_B_Mastiff_HMG_GB_W", 400],
["CUP_B_Ridgback_HMG_GB_W", 400],
["CUP_I_SUV_Armored_ION", 400],
["CUP_O_BTR90_RU", 400],
["CUP_B_LAV25M240_USMC", 400],
["CUP_B_LAV25_HQ_USMC", 400],
["CUP_B_LAV25_USMC", 400],
["CUP_O_BTR90_HQ_RU", 400],
["CUP_O_GAZ_Vodnik_PK_RU", 400],
["CUP_B_BAF_Coyote_L2A1_W", 400],
["CUP_B_BAF_Coyote_L2A1_D", 400]

];


/**
 * List of class names of objects which can be loaded in transport vehicle/cargo.
 * The second element of the nested arrays is the cost capacity (in relation with the capacity of the vehicles).
 * 
 * Liste des noms de classes des objets transportables.
 * Le deuxième élément des sous-tableaux est le coût de capacité (en relation avec la capacité des véhicules).
 */
R3F_LOG_CFG_can_be_transported_cargo = R3F_LOG_CFG_can_be_transported_cargo +
[
	// e.g. : ["MyTransportableObjectClassName1", itsCost], ["MyTransportableObjectClassName2", itsCost]
	// Here Comes the Stuff what you want to load in the Vehicle  example: ["IG_supplyCrate_F", 40]
	["CargoNet_01_box_F", 100],
	["Box_NATO_AmmoVeh_F", 100],
	["Box_NATO_Ammo_F", 100],
	["Box_FIA_Support_F", 100],
	["box_NATO_AmmoOrd_F", 100],
	["Exile_Container_SupplyBox", 200],
	["B_supplyCrate_F", 100],
	["I_CargoNET_01_F", 100],
	["Box_NATO_Wps_F", 100],
	["C_supplyCrate_F", 100],
	["IG_supplyCrate_F", 100],
	["Box_IND_AmmoVeh_F", 100],
	["B_Slingload_01_Cargo_F", 100],
	["B_Slingload_01_Fuel_F", 100],
	["B_Slingload_01_Ammo_F", 100],
	["B_Slingload_01_Medevac_F", 100],
	["B_Slingload_01_Repair_F", 100],
	["Land_Pod_Heli_Transport_04_covered_F", 100],
	["Land_Pod_Heli_Transport_04_fuel_F", 100],
	["Land_Pod_Heli_Transport_04_box_F", 100],
	["Land_Pod_Heli_Transport_04_repair_F", 100],
	["Land_Pod_Heli_Transport_04_medevac_F", 100],
	["Land_Pod_Heli_Transport_04_bench_F", 100],
	["Land_Pod_Heli_Transport_04_covered_black_F", 100],
	["Land_Pod_Heli_Transport_04_fuel_black_F", 100],
	["Land_Pod_Heli_Transport_04_box_black_F", 100],
	["Land_Pod_Heli_Transport_04_repair_black_F", 100],
	["Land_Pod_Heli_Transport_04_medevac_black_F", 100],
	["Land_Pod_Heli_Transport_04_bench_black_F", 100]
];

/****** MOVABLE-BY-PLAYER OBJECTS / OBJETS DEPLACABLES PAR LE JOUEUR ******/

/**
 * List of class names of objects which can be carried and moved by a player.
 * Liste des noms de classes des objets qui peuvent être portés et déplacés par le joueur.
 */
R3F_LOG_CFG_can_be_moved_by_player = R3F_LOG_CFG_can_be_moved_by_player +
[
	// Here Comes that stuff in what a player can Move 
	// e.g. : "MyMovableObjectClassName1", "MyMovableObjectClassName2"
	"CargoNet_01_box_F",
	"Box_NATO_AmmoVeh_F",
	"Box_NATO_Ammo_F",
	"box_NATO_AmmoOrd_F",
	"Exile_Container_SupplyBox",
	"B_supplyCrate_F",
	"I_CargoNET_01_F",
	"Box_FIA_Support_F",
	"Box_NATO_Wps_F",
	"C_supplyCrate_F",
	"IG_supplyCrate_F",
	"Box_IND_AmmoVeh_F",
	"B_Slingload_01_Cargo_F",
	"B_Slingload_01_Fuel_F",
	"B_Slingload_01_Ammo_F",
	"B_Slingload_01_Medevac_F",
	"B_Slingload_01_Repair_F",
	"Land_Pod_Heli_Transport_04_covered_F",
	"Land_Pod_Heli_Transport_04_fuel_F",
	"Land_Pod_Heli_Transport_04_box_F",
	"Land_Pod_Heli_Transport_04_repair_F",
	"Land_Pod_Heli_Transport_04_medevac_F",
	"Land_Pod_Heli_Transport_04_bench_F",
	"Land_Pod_Heli_Transport_04_covered_black_F",
	"Land_Pod_Heli_Transport_04_fuel_black_F",
	"Land_Pod_Heli_Transport_04_box_black_F",
	"Land_Pod_Heli_Transport_04_repair_black_F",
	"Land_Pod_Heli_Transport_04_medevac_black_F",
	"Land_Pod_Heli_Transport_04_bench_black_F",
	"Box_FIA_Ammo_F",
	"Box_FIA_Wps_F", 
	"I_SupplyCrate_F", 
	"Box_East_AmmoVeh_F"


	
];
