// not documented: postInit function

if (!isserver) exitwith {}; {
    _class = typeOf (_x);

    _result  = call {
        if (_class isKindOf "Man") exitWith {
            private _Group = call {
                if ((typeName _x) isEqualTo "GROUP") exitWith { _x };
                if ((typeName _x) isEqualTo "OBJECT") exitWith { group _x };
                _x;
            };

            [_Group, "DPSO Default"] remoteExec ["dpso_fnc_SetUnitSkill",2];
            [_Group, true] remoteExec ["enableDynamicSimulation",2];
        };

        if (_class isKindOf "AllVehicles") exitWith { {
                [_x, "DPSO Default"] remoteExec ["dpso_fnc_SetUnitSkill",2];
            } forEach crew _x;
            [group _x , true] remoteExec ["enableDynamicSimulation",2];
        };
    };
} foreach Allunits;
