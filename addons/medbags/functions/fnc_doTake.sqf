#include "..\script_component.hpp"
/*
 * ARMA EXTENDED ENVIRONMENT
 * \dpso_medical\supplies\functions\fn_doUnpackFirstAid.sqf
 * by Ojemineh
 *
 * unpack medical supplies
 *
 * Arguments:
 * 0: unit - <OBJECT>
 *
 * Return:
 * nothing
 *
 * Example:
 * [player] call DPSO_medical_supplies_fnc_doUnpackFirstAid;
 *
 */

// -------------------------------------------------------------------------------------------------

params ["_unit", "_target"];

_target removeItem "dpso_medbags_FirstAid";

[_unit, "dpso_medbags_FirstAid", 1, _order, _overflow] call dpso_common_fnc_addItem;
