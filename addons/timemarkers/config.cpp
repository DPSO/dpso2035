class CfgPatches {
    class timemarkers {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.68;
        requiredAddons[] = {};
        version = 1.1.3;
        author[] = {"S3Savage"};
        authorUrl = "";
    };
};

class CfgFunctions {
    class S3S {
        class timemarkers {
            class init {
                file = "z\dpso\addons\timemarkers\init.sqf";
                postInit = 1;
            };
        };
    };
};
