#include "..\script_component.hpp"
/*
 * ARMA EXTENDED ENVIRONMENT
 * \dpso_medical\supplies\functions\fn_canUnpackMedicKit.sqf
 * by Ojemineh
 *
 * check if medical supplies can be unpacked
 *
 * Arguments:
 * 0: unit - <OBJECT>
 *
 * Return:
 * <BOOLEAN>
 *
 * Example:
 * [player] call DPSO_medical_supplies_fnc_canUnpackMedicKit;
 *
 */

// -------------------------------------------------------------------------------------------------

private ["_unit"];

_unit = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

// -------------------------------------------------------------------------------------------------

if (isNull _unit) exitWith {false};

// -------------------------------------------------------------------------------------------------

private _return = false;

_return = (
    ("dpso_medbags_Trauma" in items _unit) &&
    (alive _unit) &&
    !(_unit getVariable ["ace_captives_isSurrendering", false]) &&
    !(_unit getVariable ["ace_captives_isHandcuffed", false]) &&
    !(_unit getVariable ["ace_isUnconscious", false]) &&
    (Not visibleMap)
);

_return;
