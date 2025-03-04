#include "script_component.hpp"
/*
 * Author: veteran29
 * Lowers unit weapon
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call dpso_safestart_fnc_lowerWeapon
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]]
];

[QGVAR(lowerWeapon), _unit, _unit] call CBA_fnc_targetEvent;

nil
