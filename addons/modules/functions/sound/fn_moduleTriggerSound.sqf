/*
 * ARMA EXTENDED ENVIRONMENT
 * \z\dpso\addons\modules\functions\sound\fn_moduleTriggerSound.sqf
 * by Ojemineh
 *
 * module function
 *
 * Arguments:
 * 0: mode  - <STRING>
 * 1: input - <ARRAY>
 *
 * Return:
 * nothing
 *
 * Example:
 * [] call DPSO_fnc_moduleTriggerSound;
 *
 */

// -------------------------------------------------------------------------------------------------

private ["_mode", "_input"];

_mode = param [0, "", [""]];
_input = param [1, [], [[]]];

// -------------------------------------------------------------------------------------------------

switch _mode do {

    // INITIALIZE
    // =============================================================================================

    case "init": {

        private _logic    = _input param [0, objNull, [objNull]];
        private _isActivated  = _input param [1, true, [true]];
        private _isCuratorPlaced = _input param [2, false, [true]];

        private _enabled   = _logic getVariable ["enabled", 0];
        private _source    = _logic getVariable ["source", ""];
        private _offset    = _logic getVariable ["offset", []];
        private _sound    = _logic getVariable ["sound", ""];
        private _distance   = _logic getVariable ["distance", 100];
        private _maxDistance  = _logic getVariable ["maxdistance", -1];
        private _duration   = _logic getVariable ["duration", -1];
        private _loop    = _logic getVariable ["loop", false];
        private _ignoreStop   = _logic getVariable ["ignoreStop", false];

        if ((_sound isEqualTo "") || (_sound isEqualTo "$NONE$")) exitWith {};

        // VALIDATE OFFSET

        private _soundOffset = [];

        if (_offset isEqualTo "") then {_offset = "[]";};

        _soundOffset = call compile _offset;

        if (_soundOffset isEqualTo []) then {_soundOffset = [0,0,0];};

        if !((typeName _soundOffset) isEqualType "ARRAY") exitWith {
            [format [localize "STR_DPSO_ModuleError_OffsetNotValid", _soundOffset]] call BIS_fnc_error;
            [2, "ModuleTriggerSound '%1' - %2", [_logic, format [localize "STR_DPSO_ModuleError_OffsetNotValid", _soundOffset]], "modules"] call DPSO_common_fnc_log;
        };

        if !((count _soundOffset) isEqualTo 3) exitWith {
            [format [localize "STR_DPSO_ModuleError_OffsetNotValid", _soundOffset]] call BIS_fnc_error;
            [2, "ModuleTriggerSound '%1' - %2", [_logic, format [localize "STR_DPSO_ModuleError_OffsetNotValid", _soundOffset]], "modules"] call DPSO_common_fnc_log;
        };

        // VALIDATE SOURCE

        private _soundSource = objNull;

        if (_source != "") then {

            if (isNull (missionNamespace getVariable [_source, objNull])) exitWith {
                [format [localize "STR_DPSO_ModuleError_VarIsUnknown", _source]] call BIS_fnc_error;
                [2, "ModuleTriggerSound '%1' - %2", [_logic, format [localize "STR_DPSO_ModuleError_VarIsUnknown", _source]], "modules"] call DPSO_common_fnc_log;
            };

            _soundSource = missionNamespace getVariable _source;

            if !((typeName _soundSource) isEqualType "OBJECT") exitWith {
                [format [localize "STR_DPSO_ModuleError_IsNotObject", _soundSource]] call BIS_fnc_error;
                [2, "ModuleTriggerSound '%1' - %2", [_logic, format [localize "STR_DPSO_ModuleError_IsNotObject", _soundSource]], "modules"] call DPSO_common_fnc_log;
            };

        } else {

            _soundSource = _logic;
            _soundOffset = [0,0,0];

        };

        // VALIDATE CLASSNAME

        private _soundExist = 0;

        if (isClass (missionConfigFile >> "CfgSounds" >> _sound)) then {
            _soundExist = 1;
        } else {
            if (isClass (configFile >> "CfgSounds" >> _sound)) then {
                _soundExist = 2;
            };
        };

        if (_soundExist isEqualTo 0) exitWith {
            [format [localize "STR_DPSO_ModuleError_UnknownInCfgSounds", _sound]] call BIS_fnc_error;
            [2, "ModuleTriggerSound '%1' - %2", [_logic, format [localize "STR_DPSO_ModuleError_UnknownInCfgSounds", _sound]], "modules"] call DPSO_common_fnc_log;
        };

        // VALIDATE DISTANCE

        if (_distance <= 0) exitWith {
            [format [localize "STR_DPSO_ModuleError_DistanceGreaterZero", _distance]] call BIS_fnc_error;
            [2, "ModuleTriggerSound '%1' - %2", [_logic, format [localize "STR_DPSO_ModuleError_DistanceGreaterZero", _distance]], "modules"] call DPSO_common_fnc_log;
        };

        // VALIDATE MAX DISTANCE

        if ((_maxDistance > 0) && (_maxDistance <= _distance)) exitWith {
            [format [localize "STR_DPSO_ModuleError_MaxGreaterDistance", _distance, _maxDistance]] call BIS_fnc_error;
            [2, "ModuleTriggerSound '%1' - %2", [_logic, format [localize "STR_DPSO_ModuleError_MaxGreaterDistance", _distance, _maxDistance]], "modules"] call DPSO_common_fnc_log;
        };

        // VALIDATE DURATION

        if (_duration <= 0) then {_duration = [_sound] call DPSO_fnc_getSoundDuration;};
        if (_duration <= 0) exitWith {
            [format [localize "STR_DPSO_ModuleError_DurationNotDefined", _sound]] call BIS_fnc_error;
            [2, "ModuleTriggerSound '%1' - %2", [_logic, format [localize "STR_DPSO_ModuleError_DurationNotDefined", _sound]], "modules"] call DPSO_common_fnc_log;
        };

        // MODULE

        if (_isActivated) then {

            if (_enabled > 0) then {
                if (_loop) then {
                    [_soundSource, _sound, _soundOffset, _distance, _maxDistance, _duration] call DPSO_common_fnc_loop3dSound;
                } else {
                    [_soundSource, _sound, _soundOffset, _distance, _maxDistance, _duration] call DPSO_fnc_play3dSound;
                };
            };

        } else {

            if !(_ignoreStop) then {
                [_soundSource, _sound] call DPSO_fnc_stop3dSound;
            };

        };

    };

    // ATTRIBUTES
    // =============================================================================================

    case "attributesChanged3den": {

        private _logic    = _input param [0, objNull, [objNull]];

        private _enabled   = _logic getVariable ["enabled", 0];
        private _source    = _logic getVariable ["source", ""];
        private _offset    = _logic getVariable ["offset", []];
        private _sound    = _logic getVariable ["sound", ""];
        private _distance   = _logic getVariable ["distance", 100];
        private _maxDistance  = _logic getVariable ["maxdistance", -1];
        private _duration   = _logic getVariable ["duration", -1];
        private _loop    = _logic getVariable ["loop", false];
        private _ignoreStop   = _logic getVariable ["ignoreStop", false];

        if ((_sound isEqualTo "") || (_sound isEqualTo "$NONE$")) exitWith {};

        // VALIDATE OFFSET

        private _soundOffset = [];

        if (_offset isEqualTo "") then {_offset = "[]";};

        _soundOffset = call compile _offset;

        if (_soundOffset isEqualTo []) then {_soundOffset = [0,0,0];};

        if !((typeName _soundOffset) isEqualType "ARRAY") exitWith {
            [format [localize "STR_DPSO_ModuleError_OffsetNotValid", _soundOffset]] call BIS_fnc_error;
            [2, "ModuleTriggerSound '%1' - %2", [_logic, format [localize "STR_DPSO_ModuleError_OffsetNotValid", _soundOffset]], "modules"] call DPSO_common_fnc_log;
        };

        if !((count _soundOffset) isEqualTo 3) exitWith {
            [format [localize "STR_DPSO_ModuleError_OffsetNotValid", _soundOffset]] call BIS_fnc_error;
            [2, "ModuleTriggerSound '%1' - %2", [_logic, format [localize "STR_DPSO_ModuleError_OffsetNotValid", _soundOffset]], "modules"] call DPSO_common_fnc_log;
        };

        // VALIDATE CLASSNAME

        private _soundExist = 0;

        if (isClass (missionConfigFile >> "CfgSounds" >> _sound)) then {
            _soundExist = 1;
        } else {
            if (isClass (configFile >> "CfgSounds" >> _sound)) then {
                _soundExist = 2;
            };
        };

        if (_soundExist isEqualTo 0) exitWith {
            [format [localize "STR_DPSO_ModuleError_UnknownInCfgSounds", _sound]] call BIS_fnc_error;
            [2, "ModuleTriggerSound '%1' - %2", [_logic, format [localize "STR_DPSO_ModuleError_UnknownInCfgSounds", _sound]], "modules"] call DPSO_common_fnc_log;
        };

        // VALIDATE DISTANCE

        if (_distance <= 0) exitWith {
            [format [localize "STR_DPSO_ModuleError_DistanceGreaterZero", _distance]] call BIS_fnc_error;
            [2, "ModuleTriggerSound '%1' - %2", [_logic, format [localize "STR_DPSO_ModuleError_DistanceGreaterZero", _distance]], "modules"] call DPSO_common_fnc_log;
        };

        // VALIDATE MAX DISTANCE

        if ((_maxDistance > 0) && (_maxDistance <= _distance)) exitWith {
            [format [localize "STR_DPSO_ModuleError_MaxGreaterDistance", _distance, _maxDistance]] call BIS_fnc_error;
            [2, "ModuleTriggerSound '%1' - %2", [_logic, format [localize "STR_DPSO_ModuleError_MaxGreaterDistance", _distance, _maxDistance]], "modules"] call DPSO_common_fnc_log;
        };

        // VALIDATE DURATION

        if (_duration <= 0) then {_duration = [_sound] call DPSO_fnc_getSoundDuration;};
        if (_duration <= 0) exitWith {
            [format [localize "STR_DPSO_ModuleError_DurationNotDefined", _sound]] call BIS_fnc_error;
            [2, "ModuleTriggerSound '%1' - %2", [_logic, format [localize "STR_DPSO_ModuleError_DurationNotDefined", _sound]], "modules"] call DPSO_common_fnc_log;
        };

    };

};
