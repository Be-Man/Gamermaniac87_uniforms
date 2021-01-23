class ItemCore;
class UniformItem;
class Uniform_Base: ItemCore {};

class U_FACTIONADAC_adac_Uniform_women_01: Uniform_Base {
	author = "Kane Messias";
	scope = 2;
	displayName="ADAC Woman Uniform";
	picture="\Gamermaniac87_uniforms\textures\Gamermaniac87.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\adac_uniform.paa"};
	class Wounds {
		tex[]={};
		mat[]={};
	};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="I_FACTIONADACgamermaniac_ADAC_Uniform_women_01";
		containerClass="Supply40";
		mass=10;
	};
};