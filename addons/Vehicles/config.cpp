#include "script_component.hpp"

class CfgPatches {
    class DPSO_Vehicles {
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

class CfgVehicles {
    class Logic;
    class Module_F: Logic {
        class AttributesBase {
            class Default;
            class Edit;
            class Combo;
            class Checkbox;
            class CheckboxNumber;
            class ModuleDescription;
            class Units;
        };

        class ModuleDescription {
            class AnyBrain;
        };
    };
    #include "ServicingModule.hpp"
};


class CfgFunctions {

    #include "CfgFunctions.hpp"
};
