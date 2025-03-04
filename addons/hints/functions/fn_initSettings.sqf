#include "\z\dpso\addons\hints\script_component.hpp"
/*
 * ARMA EXTENDED ENVIRONMENT
 * \z\dpso\addons\hints\functions\fn_initSettings.sqf
 * by Ojemineh
 *
 * register cba settings
 *
 * Arguments:
 * nothing
 *
 * Return:
 * nothing
 *
 * Example:
 * [] call DPSO_hints_fnc_initSettings;
 *
 */

// -------------------------------------------------------------------------------------------------

// EXTENDED HINTS

[
    "dpso_hint_position",
    "LIST",
    [
        localize "STR_DPSO_Hints_CBA_Position_Title",
        localize "STR_DPSO_Hints_CBA_Position_Tip"
    ],
    [
        COMPONENT_NAME,
        localize "STR_DPSO_Hints_CBA_Category_core"
    ],
    [
        [0,1,2,3],
        [
            "STR_DPSO_Hints_CBA_Position_0",
            "STR_DPSO_Hints_CBA_Position_1",
            "STR_DPSO_Hints_CBA_Position_2",
            "STR_DPSO_Hints_CBA_Position_3"
        ],
        3
    ],
    0, {}
] call CBA_fnc_addSetting;

[
    "dpso_hint_duration",
    "SLIDER",
    [
        localize "STR_DPSO_Hints_CBA_Duration_Title",
        localize "STR_DPSO_Hints_CBA_Duration_Tip"
    ],
    [
        COMPONENT_NAME,
        localize "STR_DPSO_Hints_CBA_Category_core"
    ],
    [5,30,15,0],
    0, {}
] call CBA_fnc_addSetting;

[
    "dpso_hint_queue_size",
    "SLIDER",
    [
        localize "STR_DPSO_Hints_CBA_Queue_Size_Title",
        localize "STR_DPSO_Hints_CBA_Queue_Size_Tip"
    ],
    [
        COMPONENT_NAME,
        localize "STR_DPSO_Hints_CBA_Category_core"
    ],
    [0,9,3,0],
    0, {}
] call CBA_fnc_addSetting;

[
    "dpso_hint_queue_alpha",
    "SLIDER",
    [
        localize "STR_DPSO_Hints_CBA_Queue_Alpha_Title",
        localize "STR_DPSO_Hints_CBA_Queue_Alpha_Tip"
    ],
    [
        COMPONENT_NAME,
        localize "STR_DPSO_Hints_CBA_Category_core"
    ],
    [0.0,0.8,0.4,2],
    0, {}
] call CBA_fnc_addSetting;

[
    "dpso_hint_sound",
    "LIST",
    [
        localize "STR_DPSO_Hints_CBA_Sound_Title",
        localize "STR_DPSO_Hints_CBA_Sound_Tip"
    ],
    [
        COMPONENT_NAME,
        localize "STR_DPSO_Hints_CBA_Category_core"
    ],
    [
        [0,1,2,3,4],
        [
            "STR_DPSO_Hints_CBA_Sound_0",
            "STR_DPSO_Hints_CBA_Sound_1",
            "STR_DPSO_Hints_CBA_Sound_2",
            "STR_DPSO_Hints_CBA_Sound_3",
            "STR_DPSO_Hints_CBA_Sound_4"
        ],
        1
    ],
    0, {}
] call CBA_fnc_addSetting;

// -------------------------------------------------------------------------------------------------

[
    "dpso_hint_color_background",
    "COLOR",
    [
        localize "STR_DPSO_Hints_CBA_Color_Background_Title",
        localize "STR_DPSO_Hints_CBA_Color_Background_Tip"
    ],
    [
        COMPONENT_NAME,
        localize "STR_DPSO_Hints_CBA_Category_Colors"
    ],
    [0.000,0.000,0.000,0.5],
    0, {}
] call CBA_fnc_addSetting;

[
    "dpso_hint_color_default",
    "COLOR",
    [
        localize "STR_DPSO_Hints_CBA_Color_Default_Title",
        localize "STR_DPSO_Hints_CBA_Color_Default_Tip"
    ],
    [
        COMPONENT_NAME,
        localize "STR_DPSO_Hints_CBA_Category_Colors"
    ],
    [0.000,0.824,0.000,1],
    0, {}
] call CBA_fnc_addSetting;

[
    "dpso_hint_color_info",
    "COLOR",
    [
        localize "STR_DPSO_Hints_CBA_Color_Info_Title",
        localize "STR_DPSO_Hints_CBA_Color_Info_Tip"
    ],
    [
        COMPONENT_NAME,
        localize "STR_DPSO_Hints_CBA_Category_Colors"
    ],
    [0.824,0.824,0.000,1],
    0, {}
] call CBA_fnc_addSetting;

[
    "dpso_hint_color_alert",
    "COLOR",
    [
        localize "STR_DPSO_Hints_CBA_Color_Alert_Title",
        localize "STR_DPSO_Hints_CBA_Color_Alert_Tip"
    ],
    [
        COMPONENT_NAME,
        localize "STR_DPSO_Hints_CBA_Category_Colors"
    ],
    [0.824,0.000,0.000,1],
    0, {}
] call CBA_fnc_addSetting;

// -------------------------------------------------------------------------------------------------

[
    "dpso_hint_option_ace",
    "CHECKBOX",
    [
        localize "STR_DPSO_Hints_CBA_Option_ACE_Title",
        localize "STR_DPSO_Hints_CBA_Option_ACE_Tip"
    ],
    [
        COMPONENT_NAME,
        localize "STR_DPSO_Hints_CBA_Category_Options"
    ],
    true,
    0, {}
] call CBA_fnc_addSetting;

[
    "dpso_hint_option_cba",
    "CHECKBOX",
    [
        localize "STR_DPSO_Hints_CBA_Option_CBA_Title",
        localize "STR_DPSO_Hints_CBA_Option_CBA_Tip"
    ],
    [
        COMPONENT_NAME,
        localize "STR_DPSO_Hints_CBA_Category_Options"
    ],
    true,
    0, {}
] call CBA_fnc_addSetting;

// -------------------------------------------------------------------------------------------------
