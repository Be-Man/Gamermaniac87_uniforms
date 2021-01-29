class O_G_Soldier_F;

class I_FACTIONADACgamermaniac_ADAC_Uniform_men_01 : O_G_Soldier_F {
	author = "Kane Messias";
	scope = 2;
	displayName = "ADAC Men Uniform";
	model="\A3\characters_F\common\coveralls";
	hiddenSelections[] = {"camo"};
	HiddenSelectionsTextures[] = {"Gamermaniac87_uniforms\textures\Skins\adac_uniform.paa"};    //Uniform textures
	hiddenSelectionsMaterials[] = {};
	modelSides[] = {3, 2, 1};
	
	side = 2;
	faction = "FACTION_ADAC_gamermaniac";
	
	backpack = "tf_anprc155_coyote";

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};

	linkedItems[] = {"EF_BLT_MEMS","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"EF_BLT_MEMS","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass","ItemWatch"};

	nakedUniform="U_BasicBody";
	uniformClass="U_FACTIONADAC_adac_Uniform_men_01";
};