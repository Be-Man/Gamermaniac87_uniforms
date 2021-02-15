class O_Protagonist_VR_F;
class CAManBase : O_Protagonist_VR_F {
	class HitPoints {
		class HitFace;
		class HitNeck;
		class HitHead;
		class HitPelvis;
		class HitAbdomen;
		class HitDiaphragm;
		class HitChest;
		class HitBody;
		class hand_l;
		class hand_r;
		class HitArms;
		class arm_l;
		class arm_r;
		class HitHands;
		class leg_l;
		class leg_r;
		class HitLegs;
	};
}

class I_FACTIONADACgamermaniac_ADMIN_Uniform_01 : CAManBase {
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
	class HitPoints
	{
		class HitFace
		{
			armor=1000;
			name="face_hub";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class HitNeck: HitFace
		{
			armor=1000;
			name="neck";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class HitHead: HitNeck
		{
			armor=1000;
			name="head";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class HitPelvis: HitHead
		{
			armor=1000;
			name="pelvis";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class HitAbdomen: HitPelvis
		{
			armor=1000;
			name="spine1";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class HitDiaphragm: HitAbdomen
		{
			armor=1000;
			name="spine2";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class HitChest: HitDiaphragm
		{
			armor=1000;
			name="spine3";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class HitBody: HitChest
		{
			armor=1000;
			name="body";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class hand_l: HitBody
		{
			armor=1000;
			name="hand_l";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class hand_r: hand_l
		{
			armor=1000;
			name="hand_r";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class HitLeftArm: hand_r
		{
			armor=1000;
			name="arm_l";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class HitRightArm: hand_r
		{
			armor=1000;
			name="arm_r";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class HitArms: hand_r
		{
			armor=1000;
			name="arms";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class HitHands: HitArms
		{
			armor=1000;
			name="hands";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class leg_l: HitHands
		{
			armor=1000;
			name="leg_l";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class HitLeftLeg: HitHands
		{
			armor=1000;
			name="leg_l";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class leg_r: leg_l
		{
			armor=1000;
			name="leg_r";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class HitRightLeg: leg_l
		{
			armor=1000;
			name="leg_r";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class HitLegs: leg_r
		{
			armor=1000;
			name="legs";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class Incapacitated: HitLegs
		{
			armor=1000;
			name="body";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class ACE_HDBracket: HitLegs
		{
			armor=1000;
			name="body";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
	};
	armor=1000;
	armorStructural=4;
	explosionShielding=0.40000001;
};