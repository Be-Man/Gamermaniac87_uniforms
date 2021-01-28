class O_Protagonist_VR_F;

class I_FACTIONADACgamermaniac_ADMIN_Uniform_men_01 : O_Protagonist_VR_F {
	author = "Kane Messias";
	scope = 1;
	displayName = "ADMIN Men Uniform";
	model="\A3\characters_F\common\coveralls";
	hiddenSelections[] = {"camo"};
	HiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Data\UI\icon_U_O_protagonist_VR_ca.paa"};    //Uniform textures
	hiddenSelectionsMaterials[] = {};
	
	side = 2;
	faction = "FACTION_ADMIN_gamermaniac";
	
	backpack = "tf_anprc155_coyote";

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};

	linkedItems[] = {"ADMIN_Vest_men_01","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass","ItemWatch","TAC_PMC_ID_W2"};
	respawnlinkedItems[] = {"ADMIN_Vest_men_01","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass","ItemWatch","TAC_PMC_ID_W2"};

	nakedUniform="U_BasicBody";
};