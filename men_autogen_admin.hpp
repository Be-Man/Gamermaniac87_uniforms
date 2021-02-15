class I_FACTIONADACgamermaniac_ADMIN_Uniform_01 : B_RangeMaster_F {
	author = "Kane Messias";
	scope = 2;
	displayName = "ADMIN Uniform";
	editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_Protagonist_VR_F.jpg";
	model="\A3\Characters_F_Bootcamp\Common\VR_Protagonist_F.p3d";
	modelSides[] = {3, 2, 1, 0};
	hiddenSelections[]=
	{
		"camo_stripes",
		"camo1",
		"camo2",
		"camo3"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,8,8,3)color(0.8,0.2,0.2,1,ca)",
		"a3\characters_f_bootcamp\common\data\vrsuit_01_co.paa",
		"a3\characters_f_bootcamp\common\data\vrsuit_02_co.paa",
		"a3\characters_f_bootcamp\common\data\vrarmor_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
	};
	
	faction = "FACTION_ADMIN_gamermaniac";
	
	backpack = "tf_anprc155_coyote";

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};

	linkedItems[] = {"ADMIN_Vest_01","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass","ItemWatch","TAC_PMC_ID_W2"};
	respawnlinkedItems[] = {"ADMIN_Vest_01","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass","ItemWatch","TAC_PMC_ID_W2"};

	nakedUniform="U_BasicBody";
	uniformClass="U_FACTIONADMIN_ADMIN_Uniform_01";
	engineer=1;
	canDeactivateMines=1;

	armor=1000;
	armorStructural=4;
	explosionShielding=0.40000001;
};