class CfgWeapons {
    class arifle_MX_Black_F;
    class CLASS(MX_BlackCamo): arifle_MX_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "BadHabitz, Jonpas";
        displayName = CSTRING(MX_BlackCamo);
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx_blackcamo_base_co.paa),
            QPATHTOF(data\mx_blackcamo_short_co.paa)
        };
        baseWeapon = QCLASS(MX_BlackCamo);
    };

    class arifle_MX_GL_Black_F;
    class CLASS(MX_GL_BlackCamo): arifle_MX_GL_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "BadHabitz, Jonpas";
        displayName = CSTRING(MX_GL_BlackCamo);
        picture = QPATHTOF(UI\mx_gl_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx_blackcamo_base_co.paa),
            QPATHTOF(data\mx_blackcamo_gl_co.paa)
        };
        baseWeapon = QCLASS(MX_GL_BlackCamo);
    };

    class srifle_EBR_F;
    class CLASS(EBR_Black_F): srifle_EBR_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Tyrone";
        displayName = CSTRING(EBR_Black_F);
        picture = QPATHTOF(UI\mk14_ebr_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\m14_ebr01_blackcamo_co.paa),
            QPATHTOF(data\m14_ebr02_blackcamo_co.paa)
        };
        baseWeapon = QCLASS(EBR_Black_F);
    };

    class arifle_Mk20_plain_F;
    class CLASS(Mk20_Black_F): arifle_Mk20_plain_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Tyrone";
        displayName = CSTRING(Mk20_Black_F);
        picture = QPATHTOF(UI\mk20_blackcamo_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mk20_blackcamo_co.paa)
        };
        baseWeapon = QCLASS(Mk20_Black_F);
    };

    class hgun_P07_F;
    class CLASS(Walther_P99): hgun_P07_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "JoramD";
        displayName = CSTRING(Walther_P99);
        picture = QPATHTOF(UI\walther_p99_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\walther_p99_co.paa)};
        baseWeapon = QCLASS(Walther_P99);
    };

    class LAMBS_hgun_P07_blk_F : hgun_P07_F {
        author = "nopryl.no";
        baseWeapon = "LAMBS_hgun_P07_blk_F";
        //displayName = "P07 9 mm (Black)";
        displayName = "P99 (Black)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\pistol\p07.paa)};
    };

    class CLASS(Walther_P99_Tan): CLASS(Walther_P99) {
        displayName = CSTRING(Walther_P99_Tan);
        picture = QPATHTOF(UI\walther_p99_tan_ca.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\walther_p99_tan_co.paa)};
        baseWeapon = QCLASS(Walther_P99_Tan);
    };

    class launch_MRAWS_green_F;
    class CLASS(MRAWS_Black_F): launch_MRAWS_green_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Kresky";
        displayName = CSTRING(MRAWS_Black_F);
        picture = QPATHTOF(UI\mraws_black_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mraws_black_co.paa),
            "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"
        };
        baseWeapon = QCLASS(MRAWS_Black_F);
    };

    class launch_MRAWS_green_rail_F;
    class CLASS(MRAWS_Black_Rail_F): launch_MRAWS_green_rail_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Kresky";
        displayName = CSTRING(MRAWS_Black_Rail_F);
        picture = QPATHTOF(UI\mraws_black_rail_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mraws_black_co.paa),
            "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_co"
        };
        baseWeapon = QCLASS(MRAWS_Black_Rail_F);
    };

    class LMG_03_F;
    class LAMBS_LMG_03_brn_F : LMG_03_F {
        author = "nopryl.no";
        baseWeapon = "LAMBS_LMG_03_base_F";
        //displayName = "LIM-85 5.56 mm (Brown)";
        displayName = "FN Minimi SPW (Brown)";
        hiddenSelectionsTextures[] = {
			QPATHTOF(data\lmg\minimi_01.paa),
			QPATHTOF(data\lmg\minimi_02.paa),
			"\A3\weapons_f\machineguns\m200\data\grip_co.paa"
		};
    };

    // Equipped
    class CLASS(MX_BlackCamo_MRCO): CLASS(MX_BlackCamo) {
        scope = 1;

        class LinkedItems {
            class LinkedItemsOptics {
                slot = "CowsSlot";
                item = "optic_MRCO";
            };
        };
    };

    class CLASS(MX_BlackCamo_ACO): CLASS(MX_BlackCamo) {
        scope = 1;

        class LinkedItems {
            class LinkedItemsOptics {
                slot = "CowsSlot";
                item = "optic_aco";
            };
        };
    };

    class CLASS(MX_GL_BlackCamo_ACO): CLASS(MX_GL_BlackCamo) {
        scope = 1;

        class LinkedItems {
            class LinkedItemsOptics {
                slot = "CowsSlot";
                item = "optic_aco";
            };
        };
    };
};
