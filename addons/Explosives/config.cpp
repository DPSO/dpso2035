#include "script_component.hpp"

class CfgPatches {
    class DPSO_Explosives {
        author = AUTHOR;
        name = NAME;
        url = URL;
        units[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_UI_F","cba_main","cba_xeh"};
        version = VERSION;
        authors[] = {"MitchJC"};
        weapons[] = {};
    };
};

class CfgFunctions {
    #include "cfgFunctions.hpp"
};

#include "CfgVehicles.hpp"
