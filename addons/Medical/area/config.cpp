#include "..\script_component.hpp"

class CfgPatches {
	
	class DPSO_Medical_Area {
		name = "$STR_DPSO_Medical_Area_Title";
		addonRootClass = "DPSO_Medical";
		requiredVersion = DPSO_REQUIRED_VERSION;
		requiredAddons[] = {
			"a3_props_f_enoch",
			"DPSO_medical"
		};
		units[] = {
			"DPSO_Item_MedicArea"
		};
		weapons[] = {
			"DPSO_MedicArea"
		};
		author = "$STR_DPSO_Medical_Area_Author";
		authors[] = {
			"O. Jemineh"
		};
		url = URL;
		VERSION_CONFIG;
	};
	
};

#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"
#include "CfgSounds.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
