class ItemCore;
class UniformItem;
class Uniform_Base: ItemCore {};

class U_FACTIONPOLICE_Police_Uniform_LvL1_men_01: Uniform_Base {
	author = "Kane Messias";
	scope = 2;
	displayName="Police Men Uniform LvL1";
	picture="\Gamermaniac87_uniforms\textures\Gamermaniac87.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\police_uniform_men_recruit.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="B_FACTIONPOLICEgamermaniac_Police_Men_Uniform_LvL1_01";
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

class U_FACTIONPOLICE_Police_Uniform_LvL2_men_01: Uniform_Base {
	author = "Kane Messias";
	scope = 2;
	displayName="Police Men Uniform LvL2";
	picture="\Gamermaniac87_uniforms\textures\Gamermaniac87.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\police_uniform_men_officer.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="B_FACTIONPOLICEgamermaniac_Police_Men_Uniform_LvL2_01";
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

class U_FACTIONPOLICE_Police_Uniform_LvL3_men_01: Uniform_Base {
	author = "Kane Messias";
	scope = 2;
	displayName="Police Men Uniform LvL3";
	picture="\Gamermaniac87_uniforms\textures\Gamermaniac87.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\police_uniform_men_corporal.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="B_FACTIONPOLICEgamermaniac_Police_Men_Uniform_LvL3_01";
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

class U_FACTIONPOLICE_Police_Uniform_LvL4_men_01: Uniform_Base {
	author = "Kane Messias";
	scope = 2;
	displayName="Police Men Uniform LvL4";
	picture="\Gamermaniac87_uniforms\textures\Gamermaniac87.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\police_uniform_men_sergeant.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="B_FACTIONPOLICEgamermaniac_Police_Men_Uniform_LvL4_01";
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

class U_FACTIONPOLICE_Police_Uniform_LvL5_men_01: Uniform_Base {
	author = "Kane Messias";
	scope = 2;
	displayName="Police Men Uniform LvL5";
	picture="\Gamermaniac87_uniforms\textures\Gamermaniac87.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\police_uniform_men_deputy_chief.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="B_FACTIONPOLICEgamermaniac_Police_Men_Uniform_LvL5_01";
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

class U_FACTIONPOLICE_Police_Uniform_LvL6_men_01: Uniform_Base {
	author = "Kane Messias";
	scope = 2;
	displayName="Police Men Uniform LvL6";
	picture="\Gamermaniac87_uniforms\textures\Gamermaniac87.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\police_uniform_men_chief_of_department.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="B_FACTIONPOLICEgamermaniac_Police_Men_Uniform_LvL6_01";
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