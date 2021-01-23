class C_man_polo_1_F;
class C_man_polo_1_F_OCimport_01 : C_man_polo_1_F { scope = 0; class EventHandlers; };
class C_man_polo_1_F_OCimport_02 : C_man_polo_1_F_OCimport_01 { class EventHandlers; };

class O_FACTIONMEDICgamermaniac_Medical_Men_Uniform_01 : C_man_polo_1_F_OCimport_02 {
	author = "Kane Messias";
	scope = 2;
	scopeCurator = 2;
	displayName = "Medical Men Uniform";
	side = 0;
	faction = "FACTION_MEDIC_gamermaniac";

	identityTypes[] = {"Head_Euro","G_CIVIL_male"};

	uniformClass = "EF_MKJKT_EMS2";

	linkedItems[] = {"EF_BLT_MEMS","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"EF_BLT_MEMS","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass","ItemWatch"};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};

	backpack = "tf_anprc155_coyote";

	ALiVE_orbatCreator_loadout[] = {{},{},{},{"EF_MKJKT_EMS2",{{"ACE_quikclot",3},{"ACE_bloodIV_250",2},{"ACE_bloodIV_500",1},{"ACE_epinephrine",3},{"ACE_salineIV_250",2},{"ACE_salineIV_500",1},{"ACE_plasmaIV_250",1},{"ACE_morphine",3},{"ACE_adenosine",3},{"ACE_WaterBottle",1}}},{"EF_BLT_MEMS",{}},{"tf_anprc155_coyote",{}},"","",{},{"ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass","ItemWatch",""}};


	class EventHandlers : EventHandlers {
		class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};

	};

	// custom attributes (do not delete)
	ALiVE_orbatCreator_owned = 1;

};