#include "script_component.hpp"
/*
 * Author: 3Mydlo3
 * Function enables spectator functionality.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * 0: New spectator state <BOOL>
 *
 * Example:
 * [1] call dpso_spectator_fnc_enable
 *
 * Public: No
 */
 {
    [QGVAR(start), [_x], _x] call CBA_fnc_targetEvent;
} forEach (allPlayers select {[_x] call FUNC(canSpectate)});

true
