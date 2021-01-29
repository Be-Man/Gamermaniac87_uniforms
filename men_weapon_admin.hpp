class Vest_Camo_Base;
class vest_base;
class VestItem;
class V_HarnessO_brn;

class ADMIN_Vest_01: V_HarnessO_brn
{
	scope=2;
	displayName="Admin Weste";
	picture="\Gamermaniac87_uniforms\textures\Gamermaniac87.paa";
	model="Smill_VHO\S_os_pistolvest_radio.p3d";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\Gamermaniac87_uniforms\textures\Skins\admin_west_uniform.paa"
	};
	class ItemInfo: VestItem
	{
		uniformModel="Smill_VHO\S_os_pistolvest_radio.p3d";
		containerClass="Supply60";
		mass=20;
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName="HitHead";
				armor=100;
				passThrough=0.1;
			};
			class Face
			{
				hitpointName="HitFace";
				armor=100;
				passThrough=0.1;
			};
			class Hands
			{
				hitpointName="HitHands";
				armor=100;
				passThrough=0.1;
			};
			class Neck
			{
				hitpointName="HitNeck";
				armor=100;
				passThrough=0.1;
			};
			class Arms
			{
				hitpointName="HitArms";
				armor=100;
				passThrough=0.1;
			};
			class Chest
			{
				hitpointName="HitChest";
				armor=100;
				passThrough=0.1;
			};
			class Diaphragm
			{
				hitpointName="HitDiaphragm";
				armor=100;
				passThrough=0.1;
			};
			class Abdomen
			{
				hitpointName="HitAbdomen";
				armor=100;
				passThrough=0.1;
			};
			class Body
			{
				hitpointName="HitBody";
				armor=100;
				passThrough=0.1;
			};
			class Pelvis
			{
				hitpointName="HitPelvis";
				armor=100;
				passThrough=0.1;
			};
			class Legs
			{
				hitpointName="HitLegs";
				armor=100;
				passThrough=0.1;
			};
		};
		hiddenSelections[]=
		{
			"camo"
		};
	};
};