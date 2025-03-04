#include "script_component.hpp"

class CfgPatches {
    class DPSO_Player {

        author = QAUTHOR;
        name = COMPONENT_NAME;
        units[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_UI_F",
            "cba_main",
            "cba_xeh",
        };
        VERSION_CONFIG;
        authors[] = {"MitchJC"};
        weapons[] = {};
    };
};

#include "Cfg3DEN.hpp"

#include "CfgEventHandlers.hpp"

class CfgImprecision {
    class Primary {
        verticalRadius = 0.15;
        horizontalRadius = 0.025;
    };
    class Secondary {
        verticalRadius = 0.025;
        horizontalRadius = 0.15;
    };
};
