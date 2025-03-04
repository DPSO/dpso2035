/*
 * ARMA EXTENDED ENVIRONMENT
 * \DPSO_common\functions\sounds\fn_playSoundLocal.sqf
 * by Ojemineh
 *
 * play sound for single player
 *
 * Arguments:
 * 0: soundClass - <STRING>
 * 1: isSpeech   - <BOOLEAN>
 *
 * Return:
 * nothing
 *
 * Example:
 * ["Earthquake_01"] call DPSO_common_fnc_playSoundLocal;
 *
 */

// -------------------------------------------------------------------------------------------------

if (Not hasInterface) exitWith {};

// -------------------------------------------------------------------------------------------------

private ["_soundClass", "_isSpeech"];

_soundClass = [_this, 0, "", [""]] call BIS_fnc_param;
_isSpeech   = [_this, 1, true, [true]] call BIS_fnc_param;

// -------------------------------------------------------------------------------------------------

if (_soundClass isEqualTo "") exitWith {};

// -------------------------------------------------------------------------------------------------

playSound [_soundClass, _isSpeech];
