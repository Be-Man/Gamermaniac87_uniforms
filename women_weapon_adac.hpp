class ItemCore;
class UniformItem;
class Uniform_Base: ItemCore {
	class ItemInfo;
}

class U_FACTIONADAC_adac_Uniform_women_01: Uniform_Base {
	author="$STR_A3_Bohemia_Interactive";
	scope=2;
	displayName="ADAC Woman Uniform";
	picture="-";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\Gamermaniac87_uniforms\textures\Skins\adac_uniform.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="I_FACTIONADACgamermaniac_ADAC_Uniform_women_01";
		containerClass="Supply30";
		mass=30;
	};
};