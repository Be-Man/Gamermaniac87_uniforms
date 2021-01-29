class B_Soldier_base_F;

class O_FACTIONMEDICgamermaniac_Medical_Men_Uniform_01 : B_Soldier_base_F {
	author = "Kane Messias";
	scope = 2;
	displayName = "Medical Men Uniform";
	model="\EF\data\KJKT_EMS.p3d";
	hiddenSelections[] =	{"camo1"};
	hiddenSelectionsTextures[]=	{"\Gamermaniac87_uniforms\textures\Skins\medic_uniform_pants.paa"};
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

	nakedUniform="U_BasicBody";
	uniformClass="U_FACTIONMEDIC_Medic_Uniform_men_01";
};