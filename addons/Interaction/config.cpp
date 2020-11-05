#include "script_component.hpp"

class CfgPatches
{
	class DPSO_Interaction
	{
		author = AUTHOR;
		 name = COMPONENT_NAME;
		url = URL;
		units[] = {};
		requiredVersion = DPSO_REQUIRED_VERSION;
		requiredAddons[] = {"A3_UI_F","cba_main","cba_xeh"};
		version = DPSO_VERSION;
		authors[] = {"MitchJC"};
		weapons[] = {};
	};
};
class CfgFunctions {

    #include "cfgFunctions.hpp"
};

class Extended_PreInit_EventHandlers {
    class DPSOFundamentals_Interaction_Event {
        init = "call compile preprocessFileLineNumbers 'z\dpso\Addons\Interaction\XEH_preInit.sqf'";
    };
};
