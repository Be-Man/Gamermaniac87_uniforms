class B_soldier_F;
class CAManBase : B_soldier_F {
	class HitPoints {
		class HitHead;
		class HitPelvis;
		class HitAbdomen;
		class HitDiaphragm;
		class HitChest;
		class HitBody;
		class HitArms;
		class arm_l;
		class arm_r;
		class leg_l;
		class leg_r;
		class HitLegs;
	};
}

class B_FACTIONPOLICEgamermaniac_Police_Men_Uniform_LvL1_01 : CAManBase {
	author = "Kane Messias";
	scope = 2;
	displayName = "Police Men Uniform LvL1 Trainee";
	model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
	hiddenSelections[] = {"camo"};
	HiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\Police_Men_Lv1_Trainee.paa"};    //Uniform textures
	hiddenSelectionsMaterials[]={};
	
	side = 1;
	faction = "FACTION_POLICE_gamermaniac";
	
	backpack = "tf_anprc155_coyote";
	
	weapons[] = {"ASN_Taser_F"};
	respawnWeapons[] = {"ASN_Taser_F"};
	
	magazines[] = {"1Rnd_ASN_Taser_F","1Rnd_ASN_Taser_F"};
	respawnMagazines[] = {"1Rnd_ASN_Taser_F","1Rnd_ASN_Taser_F"};

	linkedItems[] = {"police_belt_Without_pistol","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass"};
	respawnlinkedItems[] = {"police_belt_Without_pistol","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass"};

	nakedUniform="U_BasicBody";
	uniformClass="U_FACTIONPOLICE_Police_Uniform_LvL1_men_01";
	class HitPoints
	{
		class HitFace
		{
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class HitNeck: HitFace
		{
			armor=1;
			name="neck";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class HitHead: HitNeck
		{
			armor=1;
			name="head";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class HitPelvis: HitHead
		{
			armor=1;
			name="pelvis";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class HitAbdomen: HitPelvis
		{
			armor=1;
			name="spine1";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class HitDiaphragm: HitAbdomen
		{
			armor=1;
			name="spine2";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class HitChest: HitDiaphragm
		{
			armor=1;
			name="spine3";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class HitBody: HitChest
		{
			armor=1;
			name="body";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class hand_l: HitBody
		{
			armor=1;
			name="hand_l";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class hand_r: hand_l
		{
			armor=1;
			name="hand_r";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class HitLeftArm: hand_r
		{
			armor=1;
			name="arm_l";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class HitRightArm: hand_r
		{
			armor=1;
			name="arm_r";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class HitArms: hand_r
		{
			armor=1;
			name="arms";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class HitHands: HitArms
		{
			armor=1;
			name="hands";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class leg_l: HitHands
		{
			armor=1;
			name="leg_l";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class HitLeftLeg: HitHands
		{
			armor=1;
			name="leg_l";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class leg_r: leg_l
		{
			armor=1;
			name="leg_r";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class HitRightLeg: leg_l
		{
			armor=1;
			name="leg_r";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class HitLegs: leg_r
		{
			armor=1;
			name="legs";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class Incapacitated: HitLegs
		{
			armor=1;
			name="body";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
		class ACE_HDBracket: HitLegs
		{
			armor=1;
			name="body";
			passThrough=0.80000001;
			minimalHit=0.0099999998;
				material			= -1;
				radius				= 0.1;
				explosionShielding	= 0.5;
		};
	};
};

class B_FACTIONPOLICEgamermaniac_Police_Men_Uniform_LvL2_01 : CAManBase {
	author = "Kane Messias";
	scope = 2;
	displayName = "Police Men Uniform LvL2 Officer";
	model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
	hiddenSelections[] = {"camo"};
	HiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\Police_Men_Lv2_Officer.paa"};    //Uniform textures
	hiddenSelectionsMaterials[]={};
	
	side = 1;
	faction = "FACTION_POLICE_gamermaniac";
	
	backpack = "tf_anprc155_coyote";
	
	weapons[] = {"ASN_Taser_F"};
	respawnWeapons[] = {"ASN_Taser_F"};
	
	magazines[] = {"1Rnd_ASN_Taser_F","1Rnd_ASN_Taser_F"};
	respawnMagazines[] = {"1Rnd_ASN_Taser_F","1Rnd_ASN_Taser_F"};

	linkedItems[] = {"police_belt_Without_pistol","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass"};
	respawnlinkedItems[] = {"police_belt_Without_pistol","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass"};

	nakedUniform="U_BasicBody";
	uniformClass="U_FACTIONPOLICE_Police_Uniform_LvL2_men_01";
};

class B_FACTIONPOLICEgamermaniac_Police_Men_Uniform_LvL3_01 : CAManBase {
	author = "Kane Messias";
	scope = 2;
	displayName = "Police Men Uniform LvL3 Private";
	model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
	hiddenSelections[] = {"camo"};
	HiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\Police_Men_Lv3_Private.paa"};    //Uniform textures
	hiddenSelectionsMaterials[]={};
	
	side = 1;
	faction = "FACTION_POLICE_gamermaniac";
	
	backpack = "tf_anprc155_coyote";
	
	weapons[] = {"ASN_Taser_F"};
	respawnWeapons[] = {"ASN_Taser_F"};
	
	magazines[] = {"1Rnd_ASN_Taser_F","1Rnd_ASN_Taser_F"};
	respawnMagazines[] = {"1Rnd_ASN_Taser_F","1Rnd_ASN_Taser_F"};

	linkedItems[] = {"police_belt_Without_pistol","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass"};
	respawnlinkedItems[] = {"police_belt_Without_pistol","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass"};

	nakedUniform="U_BasicBody";
	uniformClass="U_FACTIONPOLICE_Police_Uniform_LvL3_men_01";
};

class B_FACTIONPOLICEgamermaniac_Police_Men_Uniform_LvL4_01 : CAManBase {
	author = "Kane Messias";
	scope = 2;
	displayName = "Police Men Uniform LvL4 Private-First-Class";
	model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
	hiddenSelections[] = {"camo"};
	HiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\Police_Men_Lv4_Private-First-Class.paa"};    //Uniform textures
	hiddenSelectionsMaterials[]={};
	
	side = 1;
	faction = "FACTION_POLICE_gamermaniac";
	
	backpack = "tf_anprc155_coyote";
	
	weapons[] = {"ASN_Taser_F"};
	respawnWeapons[] = {"ASN_Taser_F"};
	
	magazines[] = {"1Rnd_ASN_Taser_F","1Rnd_ASN_Taser_F"};
	respawnMagazines[] = {"1Rnd_ASN_Taser_F","1Rnd_ASN_Taser_F"};

	linkedItems[] = {"police_belt_Without_pistol","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass"};
	respawnlinkedItems[] = {"police_belt_Without_pistol","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass"};

	nakedUniform="U_BasicBody";
	uniformClass="U_FACTIONPOLICE_Police_Uniform_LvL4_men_01";
};

class B_FACTIONPOLICEgamermaniac_Police_Men_Uniform_LvL5_01 : CAManBase {
	author = "Kane Messias";
	scope = 2;
	displayName = "Police Men Uniform LvL5 Corporal";
	model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
	hiddenSelections[] = {"camo"};
	HiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\Police_Men_Lv5_Corporal.paa"};    //Uniform textures
	hiddenSelectionsMaterials[]={};
	
	side = 1;
	faction = "FACTION_POLICE_gamermaniac";
	
	backpack = "tf_anprc155_coyote";
	
	weapons[] = {"ASN_Taser_F"};
	respawnWeapons[] = {"ASN_Taser_F"};
	
	magazines[] = {"1Rnd_ASN_Taser_F","1Rnd_ASN_Taser_F"};
	respawnMagazines[] = {"1Rnd_ASN_Taser_F","1Rnd_ASN_Taser_F"};

	linkedItems[] = {"police_belt_Without_pistol","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass"};
	respawnlinkedItems[] = {"police_belt_Without_pistol","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass"};

	nakedUniform="U_BasicBody";
	uniformClass="U_FACTIONPOLICE_Police_Uniform_LvL5_men_01";
};

class B_FACTIONPOLICEgamermaniac_Police_Men_Uniform_LvL6_01 : CAManBase {
	author = "Kane Messias";
	scope = 2;
	displayName = "Police Men Uniform LvL6 Sergeant";
	model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
	hiddenSelections[] = {"camo"};
	HiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\Police_Men_Lv6_Sergeant.paa"};    //Uniform textures
	hiddenSelectionsMaterials[]={};
	
	side = 1;
	faction = "FACTION_POLICE_gamermaniac";
	
	backpack = "tf_anprc155_coyote";
	
	weapons[] = {"ASN_Taser_F"};
	respawnWeapons[] = {"ASN_Taser_F"};
	
	magazines[] = {"1Rnd_ASN_Taser_F","1Rnd_ASN_Taser_F"};
	respawnMagazines[] = {"1Rnd_ASN_Taser_F","1Rnd_ASN_Taser_F"};

	linkedItems[] = {"police_belt_Without_pistol","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass"};
	respawnlinkedItems[] = {"police_belt_Without_pistol","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass"};

	nakedUniform="U_BasicBody";
	uniformClass="U_FACTIONPOLICE_Police_Uniform_LvL6_men_01";
};

class B_FACTIONPOLICEgamermaniac_Police_Men_Uniform_LvL7_01 : CAManBase {
	author = "Kane Messias";
	scope = 2;
	displayName = "Police Men Uniform LvL7 Staff-Sergeant";
	model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
	hiddenSelections[] = {"camo"};
	HiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\Police_Men_Lv7_Staff-Sergeant.paa"};    //Uniform textures
	hiddenSelectionsMaterials[]={};
	
	side = 1;
	faction = "FACTION_POLICE_gamermaniac";
	
	backpack = "tf_anprc155_coyote";
	
	weapons[] = {"ASN_Taser_F"};
	respawnWeapons[] = {"ASN_Taser_F"};
	
	magazines[] = {"1Rnd_ASN_Taser_F","1Rnd_ASN_Taser_F"};
	respawnMagazines[] = {"1Rnd_ASN_Taser_F","1Rnd_ASN_Taser_F"};

	linkedItems[] = {"police_belt_Without_pistol","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass"};
	respawnlinkedItems[] = {"police_belt_Without_pistol","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass"};

	nakedUniform="U_BasicBody";
	uniformClass="U_FACTIONPOLICE_Police_Uniform_LvL7_men_01";
};

class B_FACTIONPOLICEgamermaniac_Police_Men_Uniform_LvL8_01 : CAManBase {
	author = "Kane Messias";
	scope = 2;
	displayName = "Police Men Uniform LvL8 Master-Sergeant";
	model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
	hiddenSelections[] = {"camo"};
	HiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\Police_Men_Lv8_Master-Sergeant.paa"};    //Uniform textures
	hiddenSelectionsMaterials[]={};
	
	side = 1;
	faction = "FACTION_POLICE_gamermaniac";
	
	backpack = "tf_anprc155_coyote";
	
	weapons[] = {"ASN_Taser_F"};
	respawnWeapons[] = {"ASN_Taser_F"};
	
	magazines[] = {"1Rnd_ASN_Taser_F","1Rnd_ASN_Taser_F"};
	respawnMagazines[] = {"1Rnd_ASN_Taser_F","1Rnd_ASN_Taser_F"};

	linkedItems[] = {"police_belt_Without_pistol","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass"};
	respawnlinkedItems[] = {"police_belt_Without_pistol","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass"};

	nakedUniform="U_BasicBody";
	uniformClass="U_FACTIONPOLICE_Police_Uniform_LvL8_men_01";
};

class B_FACTIONPOLICEgamermaniac_Police_Men_Uniform_LvL9_01 : CAManBase {
	author = "Kane Messias";
	scope = 2;
	displayName = "Police Men Uniform LvL9 Second-Lieutenant";
	model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
	hiddenSelections[] = {"camo"};
	HiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\Police_Men_Lv9_Second-Lieutenant.paa"};    //Uniform textures
	hiddenSelectionsMaterials[]={};
	
	side = 1;
	faction = "FACTION_POLICE_gamermaniac";
	
	backpack = "tf_anprc155_coyote";
	
	weapons[] = {"ASN_Taser_F"};
	respawnWeapons[] = {"ASN_Taser_F"};
	
	magazines[] = {"1Rnd_ASN_Taser_F","1Rnd_ASN_Taser_F"};
	respawnMagazines[] = {"1Rnd_ASN_Taser_F","1Rnd_ASN_Taser_F"};

	linkedItems[] = {"police_belt_Without_pistol","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass"};
	respawnlinkedItems[] = {"police_belt_Without_pistol","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass"};

	nakedUniform="U_BasicBody";
	uniformClass="U_FACTIONPOLICE_Police_Uniform_LvL9_men_01";
};

class B_FACTIONPOLICEgamermaniac_Police_Men_Uniform_LvL10_01 : CAManBase {
	author = "Kane Messias";
	scope = 2;
	displayName = "Police Men Uniform LvL10 First-Lieutenant";
	model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
	hiddenSelections[] = {"camo"};
	HiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\Police_Men_Lv10_First-Lieutenant.paa"};    //Uniform textures
	hiddenSelectionsMaterials[]={};
	
	side = 1;
	faction = "FACTION_POLICE_gamermaniac";
	
	backpack = "tf_anprc155_coyote";
	
	weapons[] = {"ASN_Taser_F"};
	respawnWeapons[] = {"ASN_Taser_F"};
	
	magazines[] = {"1Rnd_ASN_Taser_F","1Rnd_ASN_Taser_F"};
	respawnMagazines[] = {"1Rnd_ASN_Taser_F","1Rnd_ASN_Taser_F"};

	linkedItems[] = {"police_belt_Without_pistol","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass"};
	respawnlinkedItems[] = {"police_belt_Without_pistol","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass"};

	nakedUniform="U_BasicBody";
	uniformClass="U_FACTIONPOLICE_Police_Uniform_LvL10_men_01";
};

class B_FACTIONPOLICEgamermaniac_Police_Men_Uniform_LvL11_01 : CAManBase {
	author = "Kane Messias";
	scope = 2;
	displayName = "Police Men Uniform LvL11 Captain";
	model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
	hiddenSelections[] = {"camo"};
	HiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\Police_Men_Lv11_Captain.paa"};    //Uniform textures
	hiddenSelectionsMaterials[]={};
	
	side = 1;
	faction = "FACTION_POLICE_gamermaniac";
	
	backpack = "tf_anprc155_coyote";
	
	weapons[] = {"ASN_Taser_F"};
	respawnWeapons[] = {"ASN_Taser_F"};
	
	magazines[] = {"1Rnd_ASN_Taser_F","1Rnd_ASN_Taser_F"};
	respawnMagazines[] = {"1Rnd_ASN_Taser_F","1Rnd_ASN_Taser_F"};

	linkedItems[] = {"police_belt_Without_pistol","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass"};
	respawnlinkedItems[] = {"police_belt_Without_pistol","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass"};

	nakedUniform="U_BasicBody";
	uniformClass="U_FACTIONPOLICE_Police_Uniform_LvL11_men_01";
};

class B_FACTIONPOLICEgamermaniac_Police_Men_Uniform_LvL12_01 : CAManBase {
	author = "Kane Messias";
	scope = 2;
	displayName = "Police Men Uniform LvL12 Major";
	model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
	hiddenSelections[] = {"camo"};
	HiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\Police_Men_Lv12_Major.paa"};    //Uniform textures
	hiddenSelectionsMaterials[]={};
	
	side = 1;
	faction = "FACTION_POLICE_gamermaniac";
	
	backpack = "tf_anprc155_coyote";
	
	weapons[] = {"ASN_Taser_F"};
	respawnWeapons[] = {"ASN_Taser_F"};
	
	magazines[] = {"1Rnd_ASN_Taser_F","1Rnd_ASN_Taser_F"};
	respawnMagazines[] = {"1Rnd_ASN_Taser_F","1Rnd_ASN_Taser_F"};

	linkedItems[] = {"police_belt_Without_pistol","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass"};
	respawnlinkedItems[] = {"police_belt_Without_pistol","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass"};

	nakedUniform="U_BasicBody";
	uniformClass="U_FACTIONPOLICE_Police_Uniform_LvL12_men_01";
};

class B_FACTIONPOLICEgamermaniac_Police_Men_Uniform_LvL13_01 : CAManBase {
	author = "Kane Messias";
	scope = 2;
	displayName = "Police Men Uniform LvL13 Chief-of-Police";
	model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
	hiddenSelections[] = {"camo"};
	HiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\Police_Men_Lv13_Chief-of-Police.paa"};    //Uniform textures
	hiddenSelectionsMaterials[]={};
	
	side = 1;
	faction = "FACTION_POLICE_gamermaniac";
	
	backpack = "tf_anprc155_coyote";
	
	weapons[] = {"ASN_Taser_F"};
	respawnWeapons[] = {"ASN_Taser_F"};
	
	magazines[] = {"1Rnd_ASN_Taser_F","1Rnd_ASN_Taser_F"};
	respawnMagazines[] = {"1Rnd_ASN_Taser_F","1Rnd_ASN_Taser_F"};

	linkedItems[] = {"police_belt_Without_pistol","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass"};
	respawnlinkedItems[] = {"police_belt_Without_pistol","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass"};

	nakedUniform="U_BasicBody";
	uniformClass="U_FACTIONPOLICE_Police_Uniform_LvL13_men_01";
};