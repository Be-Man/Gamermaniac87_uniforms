class B_soldier_F;

class O_FACTIONMEDICgamermaniac_Medical_Woman_Uniform_01: B_soldier_F {
	author = "Kane Messias";
	scope = 2;
	displayName = "Medical Woman Uniform";
	model="\EF\data\FEM3A_EMS.p3d";
	hiddenSelections[] = {};
	hiddenSelectionsTextures[] = {};
	hiddenSelectionsMaterials[] = {};
	
	side = 0;
	faction = "FACTION_MEDIC_gamermaniac";
	
	backpack = "tf_anprc155_coyote";

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};

	linkedItems[] = {"EF_BLT_MEMS","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"EF_BLT_MEMS","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass","ItemWatch"};

	nakedUniform="max_femaleBasicBody";
	uniformClass="U_FACTIONMEDIC_Medic_Uniform_women_01";
};