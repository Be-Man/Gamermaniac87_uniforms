class O_Soldier_base_F;
class O_Protagonist_VR_F;

class I_FACTIONADACgamermaniac_ADMIN_Uniform_01 : O_Protagonist_VR_F {
	author = "Kane Messias";
	scope = 1;
	displayName = "ADMIN Uniform";
	editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_Protagonist_VR_F.jpg";
	model="\A3\Characters_F_Bootcamp\Common\VR_Protagonist_F.p3d";
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
	
	side = 2;
	faction = "FACTION_ADMIN_gamermaniac";
	
	backpack = "tf_anprc155_coyote";

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};

	linkedItems[] = {"ADMIN_Vest_01","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass","ItemWatch","TAC_PMC_ID_W2"};
	respawnlinkedItems[] = {"ADMIN_Vest_01","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass","ItemWatch","TAC_PMC_ID_W2"};

	nakedUniform="U_BasicBody";
	engineer=1;
	canDeactivateMines=1;
	class HitPoints
	{
		class HitFace
		{
			armor=1000;
			minimalHit=0.0099999998;
		};
		class HitNeck: HitFace
		{
			armor=1000;
			minimalHit=0.0099999998;
		};
		class HitHead: HitNeck
		{
			armor=1000;
			minimalHit=0.0099999998;
		};
		class HitPelvis: HitHead
		{
			armor=1000;
			minimalHit=0.0099999998;
		};
		class HitAbdomen: HitPelvis
		{
			armor=1000;
			minimalHit=0.0099999998;
		};
		class HitDiaphragm: HitAbdomen
		{
			armor=1000;
			minimalHit=0.0099999998;
		};
		class HitChest: HitDiaphragm
		{
			armor=1000;
			minimalHit=0.0099999998;
		};
		class HitBody: HitChest
		{
			armor=1000;
			minimalHit=0.0099999998;
		};
		class hand_l: HitBody
		{
			armor=1000;
			minimalHit=0.0099999998;
		};
		class hand_r: hand_l
		{
			armor=1000;
			minimalHit=0.0099999998;
		};
		class HitArms: hand_r
		{
			armor=1000;
			minimalHit=0.0099999998;
		};
		class HitHands: HitArms
		{
			armor=1000;
			minimalHit=0.0099999998;
		};
		class leg_l: HitHands
		{
			armor=1000;
			minimalHit=0.0099999998;
		};
		class leg_r: leg_l
		{
			armor=1000;
			minimalHit=0.0099999998;
		};
		class HitLegs: leg_r
		{
			armor=1000;
			minimalHit=0.0099999998;
		};
		class Incapacitated: HitLegs
		{
			armor=1000;
			minimalHit=0.0099999998;
		};
	};
	armor=1000;
	armorStructural=4;
	explosionShielding=0.40000001;
};