#include "\z\dpso\addons\adminmenu\script_component.hpp"

disableSerialization;
params ["_display"];

_display call FUNC(playerManagement_updateList);
