class ItemCore;
class UniformItem;
class Uniform_Base: ItemCore {};

class U_FACTIONMEDIC_Medic_Uniform_men_01: Uniform_Base {
	author = "Kane Messias";
	scope = 2;
	displayName="Medic Men Uniform";
	picture="\Gamermaniac87_uniforms\textures\Gamermaniac87.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	class Wounds {
		tex[]={};
		mat[]={};
	};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="O_FACTIONMEDICgamermaniac_Medical_Men_Uniform_01";
		containerClass="Supply40";
		mass=10;
	};
};