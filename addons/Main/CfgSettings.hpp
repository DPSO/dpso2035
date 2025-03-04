class CfgSettings {

    class CBA {

        class Caching {
            compile = 0;
            xeh = 0;
            functions = 0;
        };
        class Versioning {
            class DPSO {
                class dependencies {
                    CBA[] = { "cba_main", REQUIRED_CBA_VERSION, "(true)" };
                    ACE[] = { "ace_main", REQUIRED_ACE_VERSION, "(true)" };
                };
            };
        };
        class DPSO {
            class dependencies {
                //ACE will hard exit if this is missing
                CBA[] = {"cba_main", REQUIRED_CBA_VERSION, "(true)"};
            };
        };
    };

};
