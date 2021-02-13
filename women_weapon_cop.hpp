class ItemCore;
class UniformItem;
class Uniform_Base: ItemCore {};

class U_FACTIONPOLICE_Police_Uniform_LvL1_women_01: Uniform_Base {
	author = "Kane Messias";
	scope = 2;
	displayName="Police Women Uniform LvL1 Trainee";
	picture="\Gamermaniac87_uniforms\textures\Gamermaniac87.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\Police_Woman_Lv1_Trainee.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL1_01";
		containerClass="Supply40";
		mass=10;
		
		//more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
		class HitpointsProtectionInfo {
			class Neck
			{
				hitpointName	= "HitNeck";	// reference to the hit point class defined in the man base class
				armor			= 8;			// addition to armor of referenced hitpoint
				passThrough		= 0.5;			// multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor			= 8;
				passThrough		= 0.5;
			};
			class Chest
			{
				hitpointName	= "HitChest";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				armor			= 8;
				passThrough		= 0.1;
			};
			class pelvis
			{
				hitpointName	= "HitPelvis";
				armor			= 8;
				passThrough		= 0.1;
			};
			class legs
			{
				hitpointName	= "HitLegs";
				armor			= 8;
				passThrough		= 0.1;
			};
		};
	};
};

class U_FACTIONPOLICE_Police_Uniform_LvL2_women_01: Uniform_Base {
	author = "Kane Messias";
	scope = 2;
	displayName="Police Women Uniform LvL2 Officer";
	picture="\Gamermaniac87_uniforms\textures\Gamermaniac87.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\Police_Woman_Lv2_Officer.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL2_01";
		containerClass="Supply40";
		mass=10;
		
		//more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
		class HitpointsProtectionInfo {
			class Neck
			{
				hitpointName	= "HitNeck";	// reference to the hit point class defined in the man base class
				armor			= 8;			// addition to armor of referenced hitpoint
				passThrough		= 0.5;			// multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor			= 8;
				passThrough		= 0.5;
			};
			class Chest
			{
				hitpointName	= "HitChest";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				armor			= 8;
				passThrough		= 0.1;
			};
			class pelvis
			{
				hitpointName	= "HitPelvis";
				armor			= 8;
				passThrough		= 0.1;
			};
			class legs
			{
				hitpointName	= "HitLegs";
				armor			= 8;
				passThrough		= 0.1;
			};
		};
	};
};

class U_FACTIONPOLICE_Police_Uniform_LvL3_women_01: Uniform_Base {
	author = "Kane Messias";
	scope = 2;
	displayName="Police Women Uniform LvL3 Private";
	picture="\Gamermaniac87_uniforms\textures\Gamermaniac87.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\Police_Woman_Lv3_Private.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL3_01";
		containerClass="Supply40";
		mass=10;
		
		//more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
		class HitpointsProtectionInfo {
			class Neck
			{
				hitpointName	= "HitNeck";	// reference to the hit point class defined in the man base class
				armor			= 8;			// addition to armor of referenced hitpoint
				passThrough		= 0.5;			// multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor			= 8;
				passThrough		= 0.5;
			};
			class Chest
			{
				hitpointName	= "HitChest";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				armor			= 8;
				passThrough		= 0.1;
			};
			class pelvis
			{
				hitpointName	= "HitPelvis";
				armor			= 8;
				passThrough		= 0.1;
			};
			class legs
			{
				hitpointName	= "HitLegs";
				armor			= 8;
				passThrough		= 0.1;
			};
		};
	};
};

class U_FACTIONPOLICE_Police_Uniform_LvL4_women_01: Uniform_Base {
	author = "Kane Messias";
	scope = 2;
	displayName="Police Women Uniform LvL4 Private-First-Class";
	picture="\Gamermaniac87_uniforms\textures\Gamermaniac87.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\Police_Woman_Lv4_Private-First-Class.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL4_01";
		containerClass="Supply40";
		mass=10;
		
		//more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
		class HitpointsProtectionInfo {
			class Neck
			{
				hitpointName	= "HitNeck";	// reference to the hit point class defined in the man base class
				armor			= 8;			// addition to armor of referenced hitpoint
				passThrough		= 0.5;			// multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor			= 8;
				passThrough		= 0.5;
			};
			class Chest
			{
				hitpointName	= "HitChest";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				armor			= 8;
				passThrough		= 0.1;
			};
			class pelvis
			{
				hitpointName	= "HitPelvis";
				armor			= 8;
				passThrough		= 0.1;
			};
			class legs
			{
				hitpointName	= "HitLegs";
				armor			= 8;
				passThrough		= 0.1;
			};
		};
	};
};

class U_FACTIONPOLICE_Police_Uniform_LvL5_women_01: Uniform_Base {
	author = "Kane Messias";
	scope = 2;
	displayName="Police Women Uniform LvL5 Corporal";
	picture="\Gamermaniac87_uniforms\textures\Gamermaniac87.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\Police_Woman_Lv5_Corporal.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL5_01";
		containerClass="Supply40";
		mass=10;
		
		//more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
		class HitpointsProtectionInfo {
			class Neck
			{
				hitpointName	= "HitNeck";	// reference to the hit point class defined in the man base class
				armor			= 8;			// addition to armor of referenced hitpoint
				passThrough		= 0.5;			// multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor			= 8;
				passThrough		= 0.5;
			};
			class Chest
			{
				hitpointName	= "HitChest";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				armor			= 8;
				passThrough		= 0.1;
			};
			class pelvis
			{
				hitpointName	= "HitPelvis";
				armor			= 8;
				passThrough		= 0.1;
			};
			class legs
			{
				hitpointName	= "HitLegs";
				armor			= 8;
				passThrough		= 0.1;
			};
		};
	};
};

class U_FACTIONPOLICE_Police_Uniform_LvL6_women_01: Uniform_Base {
	author = "Kane Messias";
	scope = 2;
	displayName="Police Women Uniform LvL6 Sergeant";
	picture="\Gamermaniac87_uniforms\textures\Gamermaniac87.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\Police_Woman_Lv6_Sergeant.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL6_01";
		containerClass="Supply40";
		mass=10;
		
		//more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
		class HitpointsProtectionInfo {
			class Neck
			{
				hitpointName	= "HitNeck";	// reference to the hit point class defined in the man base class
				armor			= 8;			// addition to armor of referenced hitpoint
				passThrough		= 0.5;			// multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor			= 8;
				passThrough		= 0.5;
			};
			class Chest
			{
				hitpointName	= "HitChest";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				armor			= 8;
				passThrough		= 0.1;
			};
			class pelvis
			{
				hitpointName	= "HitPelvis";
				armor			= 8;
				passThrough		= 0.1;
			};
			class legs
			{
				hitpointName	= "HitLegs";
				armor			= 8;
				passThrough		= 0.1;
			};
		};
	};
};

class U_FACTIONPOLICE_Police_Uniform_LvL7_women_01: Uniform_Base {
	author = "Kane Messias";
	scope = 2;
	displayName="Police Women Uniform LvL7 Staff-Sergeant";
	picture="\Gamermaniac87_uniforms\textures\Gamermaniac87.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\Police_Woman_Lv7_Staff-Sergeant.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL7_01";
		containerClass="Supply40";
		mass=10;
		
		//more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
		class HitpointsProtectionInfo {
			class Neck
			{
				hitpointName	= "HitNeck";	// reference to the hit point class defined in the man base class
				armor			= 8;			// addition to armor of referenced hitpoint
				passThrough		= 0.5;			// multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor			= 8;
				passThrough		= 0.5;
			};
			class Chest
			{
				hitpointName	= "HitChest";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				armor			= 8;
				passThrough		= 0.1;
			};
			class pelvis
			{
				hitpointName	= "HitPelvis";
				armor			= 8;
				passThrough		= 0.1;
			};
			class legs
			{
				hitpointName	= "HitLegs";
				armor			= 8;
				passThrough		= 0.1;
			};
		};
	};
};

class U_FACTIONPOLICE_Police_Uniform_LvL8_women_01: Uniform_Base {
	author = "Kane Messias";
	scope = 2;
	displayName="Police Women Uniform LvL8 Master-Sergeant";
	picture="\Gamermaniac87_uniforms\textures\Gamermaniac87.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\Police_Woman_Lv8_Master-Sergeant.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL8_01";
		containerClass="Supply40";
		mass=10;
		
		//more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
		class HitpointsProtectionInfo {
			class Neck
			{
				hitpointName	= "HitNeck";	// reference to the hit point class defined in the man base class
				armor			= 8;			// addition to armor of referenced hitpoint
				passThrough		= 0.5;			// multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor			= 8;
				passThrough		= 0.5;
			};
			class Chest
			{
				hitpointName	= "HitChest";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				armor			= 8;
				passThrough		= 0.1;
			};
			class pelvis
			{
				hitpointName	= "HitPelvis";
				armor			= 8;
				passThrough		= 0.1;
			};
			class legs
			{
				hitpointName	= "HitLegs";
				armor			= 8;
				passThrough		= 0.1;
			};
		};
	};
};

class U_FACTIONPOLICE_Police_Uniform_LvL9_women_01: Uniform_Base {
	author = "Kane Messias";
	scope = 2;
	displayName="Police Women Uniform LvL9 Second-Lieutenant";
	picture="\Gamermaniac87_uniforms\textures\Gamermaniac87.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\Police_Woman_Lv9_Second-Lieutenant.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL9_01";
		containerClass="Supply40";
		mass=10;
		
		//more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
		class HitpointsProtectionInfo {
			class Neck
			{
				hitpointName	= "HitNeck";	// reference to the hit point class defined in the man base class
				armor			= 8;			// addition to armor of referenced hitpoint
				passThrough		= 0.5;			// multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor			= 8;
				passThrough		= 0.5;
			};
			class Chest
			{
				hitpointName	= "HitChest";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				armor			= 8;
				passThrough		= 0.1;
			};
			class pelvis
			{
				hitpointName	= "HitPelvis";
				armor			= 8;
				passThrough		= 0.1;
			};
			class legs
			{
				hitpointName	= "HitLegs";
				armor			= 8;
				passThrough		= 0.1;
			};
		};
	};
};

class U_FACTIONPOLICE_Police_Uniform_LvL10_women_01: Uniform_Base {
	author = "Kane Messias";
	scope = 2;
	displayName="Police Women Uniform LvL10 First-Lieutenant";
	picture="\Gamermaniac87_uniforms\textures\Gamermaniac87.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\Police_Woman_Lv10_First-Lieutenant.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL10_01";
		containerClass="Supply40";
		mass=10;
		
		//more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
		class HitpointsProtectionInfo {
			class Neck
			{
				hitpointName	= "HitNeck";	// reference to the hit point class defined in the man base class
				armor			= 8;			// addition to armor of referenced hitpoint
				passThrough		= 0.5;			// multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor			= 8;
				passThrough		= 0.5;
			};
			class Chest
			{
				hitpointName	= "HitChest";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				armor			= 8;
				passThrough		= 0.1;
			};
			class pelvis
			{
				hitpointName	= "HitPelvis";
				armor			= 8;
				passThrough		= 0.1;
			};
			class legs
			{
				hitpointName	= "HitLegs";
				armor			= 8;
				passThrough		= 0.1;
			};
		};
	};
};

class U_FACTIONPOLICE_Police_Uniform_LvL11_women_01: Uniform_Base {
	author = "Kane Messias";
	scope = 2;
	displayName="Police Women Uniform LvL11 Captian";
	picture="\Gamermaniac87_uniforms\textures\Gamermaniac87.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\Police_Woman_Lv11_Captian.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL11_01";
		containerClass="Supply40";
		mass=10;
		
		//more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
		class HitpointsProtectionInfo {
			class Neck
			{
				hitpointName	= "HitNeck";	// reference to the hit point class defined in the man base class
				armor			= 8;			// addition to armor of referenced hitpoint
				passThrough		= 0.5;			// multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor			= 8;
				passThrough		= 0.5;
			};
			class Chest
			{
				hitpointName	= "HitChest";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				armor			= 8;
				passThrough		= 0.1;
			};
			class pelvis
			{
				hitpointName	= "HitPelvis";
				armor			= 8;
				passThrough		= 0.1;
			};
			class legs
			{
				hitpointName	= "HitLegs";
				armor			= 8;
				passThrough		= 0.1;
			};
		};
	};
};

class U_FACTIONPOLICE_Police_Uniform_LvL12_women_01: Uniform_Base {
	author = "Kane Messias";
	scope = 2;
	displayName="Police Women Uniform LvL12 Major";
	picture="\Gamermaniac87_uniforms\textures\Gamermaniac87.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\Police_Woman_Lv12_Major.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL12_01";
		containerClass="Supply40";
		mass=10;
		
		//more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
		class HitpointsProtectionInfo {
			class Neck
			{
				hitpointName	= "HitNeck";	// reference to the hit point class defined in the man base class
				armor			= 8;			// addition to armor of referenced hitpoint
				passThrough		= 0.5;			// multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor			= 8;
				passThrough		= 0.5;
			};
			class Chest
			{
				hitpointName	= "HitChest";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				armor			= 8;
				passThrough		= 0.1;
			};
			class pelvis
			{
				hitpointName	= "HitPelvis";
				armor			= 8;
				passThrough		= 0.1;
			};
			class legs
			{
				hitpointName	= "HitLegs";
				armor			= 8;
				passThrough		= 0.1;
			};
		};
	};
};

class U_FACTIONPOLICE_Police_Uniform_LvL13_women_01: Uniform_Base {
	author = "Kane Messias";
	scope = 2;
	displayName="Police Women Uniform LvL13 Chief-of-Police";
	picture="\Gamermaniac87_uniforms\textures\Gamermaniac87.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\Police_Woman_Lv13_Chief-of-Police.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL13_01";
		containerClass="Supply40";
		mass=10;
		
		//more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
		class HitpointsProtectionInfo {
			class Neck
			{
				hitpointName	= "HitNeck";	// reference to the hit point class defined in the man base class
				armor			= 8;			// addition to armor of referenced hitpoint
				passThrough		= 0.5;			// multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor			= 8;
				passThrough		= 0.5;
			};
			class Chest
			{
				hitpointName	= "HitChest";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				armor			= 8;
				passThrough		= 0.1;
			};
			class pelvis
			{
				hitpointName	= "HitPelvis";
				armor			= 8;
				passThrough		= 0.1;
			};
			class legs
			{
				hitpointName	= "HitLegs";
				armor			= 8;
				passThrough		= 0.1;
			};
		};
	};
};