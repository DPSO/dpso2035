/*
 * ARMA EXTENDED ENVIRONMENT
 * \DPSO_common\functions\videos\fn_playVideo.sqf
 * by Ojemineh
 *
 * play video
 *
 * Arguments:
 * 0: filename - <STRING>
 * 1: canSkip - <BOOLEAN>
 * 2: showSkip - <BOOLEAN>
 * 3: showTime - <ARRAY>  (FadeIn, FadeOut)
 *
 * Return:
 * <NUMBER>
 *
 * Example:
 * ["data\video\intro.ogv"] call DPSO_common_fnc_playVideo;
 *
 */

// -------------------------------------------------------------------------------------------------

if (Not hasInterface) exitWith {};

// -------------------------------------------------------------------------------------------------

private ["_filename", "_canSkip", "_showSkip", "_showTime"];

_filename = [_this, 0, "", [""]] call BIS_fnc_param;
_canSkip = [_this, 1, true, [true]] call BIS_fnc_param;
_showSkip = [_this, 2, true, [true]] call BIS_fnc_param;
_showTime = [_this, 3, [3,3], [[]]] call BIS_fnc_param;

// -------------------------------------------------------------------------------------------------

if (_filename isEqualTo "") exitWith {};
if (_showTime isEqualTo []) then {_showTime = [3,3];};

// -------------------------------------------------------------------------------------------------

private _return = [_filename, _canSkip, _showSkip, _showTime] spawn {

    params ["_filename", "_canSkip", "_showSkip", "_showTime"];

    missionNamespace setVariable ["BIS_fnc_playVideo_skipVideo", false];

    if (_canSkip) then {
        missionNamespace setVariable ["BIS_fnc_playVideo_canSkip", true];
    } else {
        missionNamespace setVariable ["BIS_fnc_playVideo_canSkip", false];
    };

    private _script = 0 spawn {};

    if ( (_canSkip) && (_showSkip) ) then {
        _script = [_showTime] spawn {

            params ["_showTime"];

            private _r = profileNamespace getVariable ['GUI_BCG_RGB_R',0];
            private _g = profileNamespace getVariable ['GUI_BCG_RGB_G',0];
            private _b = profileNamespace getVariable ['GUI_BCG_RGB_B',0];
            private _a = profileNamespace getVariable ['GUI_BCG_RGB_A',1];
            private _rgb = [_r,_g,_b] call BIS_fnc_colorRGBtoHTML;

            private _keyName = format ["<t color='%1'>[%2]</t>", _rgb, toUpper(((keyname 57) splitString '"') joinString '')];
            private _skipMsg = format ["<t font='RobotoCondensed' color='#ffffff' shadow='2' size='1.6'>%1</t>", localize "STR_DPSO_Message_SkipVideo"];
            private _message = format [_skipMsg, _keyName];

            uiSleep (_showTime select 0);
            99 cutText [_message, "PLAIN DOWN", 0.5, true, true];
            uiSleep (_showTime select 1);
            99 cutFadeOut 0.5;

        };
    };

    private _keyHandler = (findDisplay 46) displayAddEventHandler ["KeyDown", "_this call DPSO_common_fnc_videoKeyDown"];
    private _video = [_filename] spawn BIS_fnc_playVideo;

    waitUntil {if (scriptDone _video) exitWith {true}; false};

    (findDisplay 46) displayRemoveEventHandler ["KeyDown", _keyHandler];
    if ( (_canSkip) && (_showSkip) && (!scriptDone _script) ) then { 99 cutFadeOut 0.01; terminate _script; };

};

_return;
