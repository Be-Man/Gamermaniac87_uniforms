class CfgFactionClasses {
    class FACTION_CIV_gamermaniac {
        displayName = "Civilian";
        side = 3;
        flag = "";
        icon = "";
        priority = 0;
    };
    class FACTION_ADAC_gamermaniac {
        displayName = "ADAC";
        side = 2;
        flag = "";
        icon = "\Gamermaniac87_uniforms\textures\cfgfaction_adac_icon.paa";
        priority = 1;
    };
    class FACTION_POLICE_gamermaniac {
        displayName = "Police";
        side = 1;
        flag = "\Gamermaniac87_uniforms\textures\cfgfaction_police_flag.paa";
        icon = "\Gamermaniac87_uniforms\textures\cfgfaction_police_icon.paa";
        priority = 2;
    };
    class FACTION_MEDIC_gamermaniac {
        displayName = "Medical";
        side = 0;
        flag = "";
        icon = "\Gamermaniac87_uniforms\textures\cfgfaction_medical_icon.paa";
        priority = 3;
    };
    class FACTION_ADMIN_gamermaniac {
        displayName = "Admin";
        side[] = {3, 2, 1, 0};
        flag = "";
        icon = "";
        priority = 4;
    };
};

class CfgVehicles {
	class C_man_w_worker_F;
	class B_RangeMaster_F;
	#include "men_autogen_civ.hpp"
	#include "men_autogen_adac.hpp"
	#include "men_autogen_cop.hpp"
	#include "men_autogen_med.hpp"
	#include "men_autogen_admin.hpp"
	#include "women_autogen_civ.hpp"
	#include "women_autogen_adac.hpp"
	#include "women_autogen_cop.hpp"
	#include "women_autogen_med.hpp"

};

class cfgWeapons {
	class ItemCore;
	class ItemInfo;
	class Uniform_Base;
	class UniformItem;
	class V_HarnessO_brn;
	class VestItem;
	#include "men_weapon_civ.hpp"
	#include "men_weapon_adac.hpp"
	#include "men_weapon_cop.hpp"
	#include "men_weapon_med.hpp"
	#include "men_weapon_admin.hpp"
	#include "women_weapon_civ.hpp"
	#include "women_weapon_adac.hpp"
	#include "women_weapon_cop.hpp"
	#include "women_weapon_med.hpp"
	
};