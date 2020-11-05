#include "script_component.hpp"

class CfgPatches
{
	class DPSO_Media
	{
		author = AUTHOR;
		 name = COMPONENT_NAME;
		url = URL;
		units[] = {"DPSO_Flag_White", "DPSO_Flag_Black"};
		requiredVersion = DPSO_REQUIRED_VERSION;
		requiredAddons[] = {"A3_UI_F","cba_main","cba_xeh"};
		version = DPSO_VERSION;
		authors[] = {"MitchJC"};
		weapons[] = {};
	};
};

#include "CfgVehicles.hpp"
#include "CfgMusic.hpp"
#include "CfgSounds.hpp"
#include "CfgUnitInsignia.hpp"
class CfgFunctions {

    #include "cfgFunctions.hpp"
};

