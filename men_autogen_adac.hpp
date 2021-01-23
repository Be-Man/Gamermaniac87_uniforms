class C_man_w_worker_F;

class I_FACTIONADACgamermaniac_ADAC_Uniform_men_01 : C_man_w_worker_F {
	author = "Kane Messias";
	_generalMacro = "C_man_w_worker_F";
	scope = 2;
	displayName = "ADAC Men Uniform";
	side = 2;
	faction = "FACTION_ADAC_gamermaniac";

	identityTypes[] = {"Head_Euro"};

	backpack = "tf_anprc155_coyote";

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};

	linkedItems[] = {"EF_BLT_MEMS","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"EF_BLT_MEMS","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass","ItemWatch"};
	
	model="\A3\characters_F\common\coveralls";
	modelSides[]={3};

	nakedUniform="U_BasicBody";
	uniformClass = "U_FACTIONADAC_adac_Uniform_men_01";

	hiddenSelections[] = {"camo"};
	HiddenSelectionsTextures[] = {"Gamermaniac87_uniforms\textures\Skins\adac_uniform.paa"};    //Uniform textures

};