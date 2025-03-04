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

private ["_unit"];

_unit = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

// -------------------------------------------------------------------------------------------------

if (isNull _unit) exitWith {};

// -------------------------------------------------------------------------------------------------

[_unit] spawn {

    params ["_unit"];

    _unit playAction "Gear";

    if (vehicle _unit != _unit) then {
        playSound QGVAR(Medical_FirstAid_Open_1);
    } else {
        private _pitch = random [0.6, 1, 1.4];
        [_unit, QGVAR(Medical_FirstAid_Open_1), [], 30, 1000, -1, _pitch] call DPSO_common_fnc_play3dSound;
    };

    DPSO_MEDICAL_SUPPLIES_UNPACK_SUCCESS = false;
    DPSO_MEDICAL_SUPPLIES_UNPACK_FAILURE = false;

    [
        2,
        [],
        { DPSO_MEDICAL_SUPPLIES_UNPACK_SUCCESS = true; },
        { DPSO_MEDICAL_SUPPLIES_UNPACK_FAILURE = true; },
        localize "Unpack IFAK....",
        {true},
        ["isNotInside", "isNotSitting", "isNotSwimming"]
    ] call ACE_common_fnc_progressBar;

    waitUntil {if ((DPSO_MEDICAL_SUPPLIES_UNPACK_SUCCESS) || (DPSO_MEDICAL_SUPPLIES_UNPACK_FAILURE)) exitWith {true}; false};

    if (DPSO_MEDICAL_SUPPLIES_UNPACK_SUCCESS) exitWith {

        _unit removeItem "dpso_medbags_FirstAid";

        private _order = [1,2,3];
        private _overflow = true;

        [_unit, "ACE_fieldDressing", 8, _order, _overflow] call dpso_common_fnc_addItem;
        [_unit, "ACE_quikClot", 8, _order, _overflow] call dpso_common_fnc_addItem;
        [_unit, "kat_Painkiller", 1, _order, _overflow] call dpso_common_fnc_addItem;
        [_unit, "ACE_tourniquet", 4, _order, _overflow] call dpso_common_fnc_addItem;
        [_unit, "ACE_EarPlugs", 1, _order, _overflow] call dpso_common_fnc_addItem;
        [_unit, "kat_chestSeal", 1, _order, _overflow] call dpso_common_fnc_addItem;
        [_unit, "kat_aatKit", 1, _order, _overflow] call dpso_common_fnc_addItem;
        [_unit, "ACE_salineIV_500", 1, _order, _overflow] call dpso_common_fnc_addItem;
        [_unit, "kat_larynx", 1, _order, _overflow] call dpso_common_fnc_addItem;
        [_unit, "kat_guedel", 1, _order, _overflow] call dpso_common_fnc_addItem;
        [_unit, "kat_TXA", 1, _order, _overflow] call dpso_common_fnc_addItem;
        [_unit, "kat_IV_16", 1, _order, _overflow] call dpso_common_fnc_addItem;
        [_unit, "kat_IO_FAST", 1, _order, _overflow] call dpso_common_fnc_addItem;
        [_unit, "ACE_splint", 02, _order, _overflow] call dpso_common_fnc_addItem;
    };

    if (DPSO_MEDICAL_SUPPLIES_UNPACK_FAILURE) exitWith {
        [_unit, QGVAR(Medical_FirstAid_Open_1)] call DPSO_common_fnc_stop3dSound;
    };

};
