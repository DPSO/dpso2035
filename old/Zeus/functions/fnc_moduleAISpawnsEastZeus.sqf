params ["_pos"];

if (_pos isEqualTo [0, 0, 0]) exitWith {
	[format ["Error: Invalid position for module"], "ZeusLog"] call YAINA_F_fnc_log;
};

["east", _pos] call DPSO_fnc_SpawnAIZeusWrapper;
