#include "\z\dpso\addons\common\script_component.hpp"
/*
 * Name: DPSO_common_fnc_mouseOver
 * Author: Nick
 *
 * Arguments:
 * None
 *
 * Return:
 * nil
 *
 * Description:
 * Set dpso_common_edenMouseObjects and fires mouseOver events?
 *
 */

// Get intersected objects, sort them by distance, and select the one closest to the camera.
private _intersects = lineIntersectsSurfaces [getPosASL get3denCamera,ATLToASL screenToWorld getMousePosition,objNull,objNull,true,5,"FIRE","GEOM"];
_intersects = _intersects apply {_x select 2};
_intersects = _intersects select {!(isNull _x)};
if !(current3denOperation == "") then {
    _intersects = _intersects select {!(_x in (get3denSelected "object"))};     // Remove selected objects if they're being dragged.
};

if !(GVAR(edenMouseObjects) isEqualTo _intersects) then {
    GVAR(edenMouseObjects) = _intersects;
    [QGVAR(edenMouseOverChanged),GVAR(edenMouseObjects)] call CBA_fnc_localEvent;
} else {
    GVAR(edenMouseObjects) = _intersects;
};
