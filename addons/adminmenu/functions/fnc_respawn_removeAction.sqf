#include "\z\dpso\addons\adminmenu\script_component.hpp"

disableSerialization;
params ["_display"];


private _ctrlGroupListBox = (_display displayCtrl IDC_DPSO_ADMINMENU_RESP_GROUPLIST);

GVAR(selectedRespawnGroup) deleteAt (lbCurSel _ctrlGroupListBox);

[_display] call FUNC(respawn_refreshSpectatorList);
[_display] call FUNC(respawn_refreshGroupBox);
