class ItemCore;
class UniformItem;
class Uniform_Base: ItemCore {};

class U_FACTIONMEDIC_Medic_Uniform_women_01: Uniform_Base {
	author = "Kane Messias";
	scope = 2;
	displayName="Medic Women Uniform";
	picture="\Gamermaniac87_uniforms\textures\Gamermaniac87.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	class Wounds {
		tex[]={};
		mat[]={};
	};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="O_FACTIONMEDICgamermaniac_Medical_Woman_Uniform_01";
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