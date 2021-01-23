class Max_W_Prisoner;

class I_FACTIONADACgamermaniac_ADAC_Uniform_women_01 : Max_W_Prisoner {
	author = "Kane Messias";
	_generalMacro = "Max_W_Prisoner";
	scope = 2;
	displayName = "ADAC Woman Uniform";
	side = 2;
	faction = "FACTION_ADAC_gamermaniac";

	identityTypes[]=
	{
		"max_female1"
	};
	faceType="Man_A3";

	backpack = "tf_anprc155_coyote";

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};

	linkedItems[] = {"EF_BLT_FEMS","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass","ItemWatch"};
	respawnlinkedItems[] = {"EF_BLT_FEMS","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass","ItemWatch"};
	
	model="\women\Uniform.p3d";
	modelSides[]={3};

	nakedUniform="max_femaleBasicBody";
	uniformClass = "U_FACTIONADAC_adac_Uniform_women_01";

	hiddenSelections[] = {"camo"};
	HiddenSelectionsTextures[] = {"Gamermaniac87_uniforms\textures\Skins\adac_uniform.paa"};    //Uniform textures

};