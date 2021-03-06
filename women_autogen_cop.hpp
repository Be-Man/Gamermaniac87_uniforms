class B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL0_01 : B_RangeMaster_F {
	author = "Kane Messias";
	scope = 2;
	displayName = "Police Women Uniform LvL0 Trainee";
	model = "\EF\data\FEM4_7.p3d";
	hiddenSelections[] = {
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]={
		"\Gamermaniac87_uniforms\textures\Skins\police_uniform_woman_pants.paa",
		"\Gamermaniac87_uniforms\textures\Skins\Police_Woman_Lv0_Trainee.paa"
	};    //Uniform textures
	
	side = 1;
	faction = "FACTION_POLICE_gamermaniac";
	
	backpack = "tf_anprc155_coyote";
	
	weapons[] = {"ASN_Taser_F"};
	respawnWeapons[] = {"ASN_Taser_F"};
	
	magazines[] = {"1Rnd_ASN_Taser_F","1Rnd_ASN_Taser_F"};
	respawnMagazines[] = {"1Rnd_ASN_Taser_F","1Rnd_ASN_Taser_F"};

	linkedItems[] = {"police_belt_Without_pistol","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass"};
	respawnlinkedItems[] = {"police_belt_Without_pistol","ItemMap","ItemGPS","The_Programmer_Iphone","ItemCompass"};

	nakedUniform="max_femaleBasicBody";
	uniformClass="U_FACTIONPOLICE_Police_Uniform_LvL0_women_01";
};

class B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL1_01 : B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL0_01 {
	displayName = "Police Women Uniform LvL1 Recruit";
	hiddenSelectionsTextures[]={
		"\Gamermaniac87_uniforms\textures\Skins\police_uniform_woman_pants.paa",
		"\Gamermaniac87_uniforms\textures\Skins\Police_Woman_Lv1_Recruit.paa"
	};
	uniformClass="U_FACTIONPOLICE_Police_Uniform_LvL1_women_01";
};

class B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL2_01 : B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL0_01 {
	displayName = "Police Women Uniform LvL2 Officer";
	hiddenSelectionsTextures[]={
		"\Gamermaniac87_uniforms\textures\Skins\police_uniform_woman_pants.paa",
		"\Gamermaniac87_uniforms\textures\Skins\Police_Woman_Lv2_Officer.paa"
	};
	uniformClass="U_FACTIONPOLICE_Police_Uniform_LvL2_women_01";
};

class B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL3_01 : B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL0_01 {
	displayName = "Police Women Uniform LvL3 Detective";
	hiddenSelectionsTextures[]={
		"\Gamermaniac87_uniforms\textures\Skins\police_uniform_woman_pants.paa",
		"\Gamermaniac87_uniforms\textures\Skins\Police_Woman_Lv3_Detective.paa"
	};    //Uniform textures
	uniformClass="U_FACTIONPOLICE_Police_Uniform_LvL3_women_01";
};

class B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL4_01 : B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL0_01 {
	displayName = "Police Women Uniform LvL4 Sergeant";
	hiddenSelectionsTextures[]={
		"\Gamermaniac87_uniforms\textures\Skins\police_uniform_woman_pants.paa",
		"\Gamermaniac87_uniforms\textures\Skins\Police_Woman_Lv4_Sergeant.paa"
	};    //Uniform textures
	uniformClass="U_FACTIONPOLICE_Police_Uniform_LvL4_women_01";
};

class B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL5_01 : B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL0_01 {
	displayName = "Police Women Uniform LvL5 Lieutenant";
	hiddenSelectionsTextures[]={
		"\Gamermaniac87_uniforms\textures\Skins\police_uniform_woman_pants.paa",
		"\Gamermaniac87_uniforms\textures\Skins\Police_Woman_Lv5_Lieutenant.paa"
	};    //Uniform textures
	uniformClass="U_FACTIONPOLICE_Police_Uniform_LvL5_women_01";
};

class B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL6_01 : B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL0_01 {
	displayName = "Police Women Uniform LvL6 Captian";
	hiddenSelectionsTextures[]={
		"\Gamermaniac87_uniforms\textures\Skins\police_uniform_woman_pants.paa",
		"\Gamermaniac87_uniforms\textures\Skins\Police_Woman_Lv6_Captain.paa"
	};    //Uniform textures
	uniformClass="U_FACTIONPOLICE_Police_Uniform_LvL6_women_01";
};

class B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL7_01 : B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL0_01 {
	displayName = "Police Women Uniform LvL7 Deputy Chief";
	hiddenSelectionsTextures[]={
		"\Gamermaniac87_uniforms\textures\Skins\police_uniform_woman_pants.paa",
		"\Gamermaniac87_uniforms\textures\Skins\Police_Woman_Lv7_Deputy-Chief.paa"
	};    //Uniform textures
	uniformClass="U_FACTIONPOLICE_Police_Uniform_LvL7_women_01";
};

class B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL8_01 : B_FACTIONPOLICEgamermaniac_Police_Women_Uniform_LvL0_01 {
	displayName = "Police Women Uniform LvL8 Chief of Police";
	hiddenSelectionsTextures[]={
		"\Gamermaniac87_uniforms\textures\Skins\police_uniform_woman_pants.paa",
		"\Gamermaniac87_uniforms\textures\Skins\Police_Woman_Lv8_Chief-of-Police.paa"
	};    //Uniform textures
	uniformClass="U_FACTIONPOLICE_Police_Uniform_LvL8_women_01";
};