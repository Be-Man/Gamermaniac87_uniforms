class B_Soldier_base_F;
class max_female_b;

class O_FACTIONMEDICgamermaniac_Medical_Woman_Uniform_01: B_Soldier_base_F {
	author = "Kane Messias";
	scope = 1;
	displayName = "Medical Woman Uniform";
	model="\EF\data\FEM3A_EMS.p3d";
	hiddenSelections[]={};
	hiddenSelectionsTextures[]={};
	hiddenSelectionsMaterials[]={};
	
	side = 0;
	faction = "FACTION_MEDIC_gamermaniac";
	
	backpack = "tf_anprc155_coyote";

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};

	linkedItems[] = {"EF_BLT_FEMS","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"EF_BLT_FEMS","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass","ItemWatch"};

	nakedUniform="max_femaleBasicBody";
};