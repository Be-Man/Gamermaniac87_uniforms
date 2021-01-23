class B_soldier_F;

class I_FACTIONADACgamermaniac_ADAC_Uniform_women_01: B_soldier_F {
	author = "Kane Messias";
	scope = 2;
	displayName = "ADAC Woman Uniform";
	model="\women\Uniform.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"Gamermaniac87_uniforms\textures\Skins\adac_uniform_woman.paa"};
	hiddenSelectionsMaterials[] = {};
	
	side = 2;
	faction = "FACTION_ADAC_gamermaniac";
	
	backpack = "tf_anprc155_coyote";

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};

	linkedItems[] = {"EF_BLT_MEMS","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"EF_BLT_MEMS","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass","ItemWatch"};

	nakedUniform="max_femaleBasicBody";
};