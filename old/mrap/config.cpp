#include "script_component.hpp"



class CfgPatches
{
	class ADDON
	{
		author = AUTHOR;
		name = COMPONENT_NAME;
		url = URL;
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			"DPSO_MAIN"
		};
		units[] = {};
		weapons[] = {};
		authors[] = {
			"YonV"
		};
		version = VERSION;
	};
};
class CBA_Extended_EventHandlers_base;
class CfgVehicles
{
	class B_MRAP_01_F;
	class B_T_MRAP_01_F;
	class B_MRAP_01_gmg_F;
	class B_MRAP_01_hmg_F;
	class B_T_MRAP_01_gmg_F;
	class B_T_MRAP_01_hmg_F;

	/// sand
	class CLASS(B_MRAP_sand_camo): B_MRAP_01_F
	{
		author = AUTHOR;
		_generalMacro="B_MRAP_01_F";
		displayName="Hunter (sand)"; /// how is the heli displayed in editor
		vehicleClass="Support";
		faction=PREFIX ;
		crew="B_Soldier_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		side=1;
		scope = 2;       // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		attendant=1;
		crewCrashProtection = 0.5;
		crewExplosionProtection = .5;
		armor = 275;
		picture="\A3\Soft_F\MRAP_01\Data\UI\MRAP_01_Base_ca.paa";
		Icon="\A3\soft_f\MRAP_01\Data\UI\map_MRAP_01_CA.paa";
		threat[]={0,0,0};
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="DPSO_FirstAid";
				count=10;
			};
			class _xx_Medikit
			{
				name="ToolKit";
				count=1;
			};
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\cow\Hunter_dpso_cow.paa),
			QPATHTOF(data\MRAP_01_adds_CO.paa)
		};
	};
//
	class CLASS(B_MRAP_hmg_sand_camo): B_MRAP_01_hmg_F
	{
		author = AUTHOR;
		_generalMacro="B_MRAP_01_F";
		displayName="Hunter hmg (sand)"; /// how is the heli displayed in editor
		vehicleClass="Support";
		faction=PREFIX ;
		crew="B_Soldier_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		side=1;
		scope = 2;       // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		attendant=1;
		crewCrashProtection = 0.5;
		crewExplosionProtection = .5;
		armor = 275;
		picture="\A3\Soft_F\MRAP_01\Data\UI\MRAP_01_Base_ca.paa";
		Icon="\A3\soft_f\MRAP_01\Data\UI\map_MRAP_01_CA.paa";
		threat[]={0,0,0};
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="DPSO_FirstAid";
				count=10;
			};
			class _xx_Medikit
			{
				name="ToolKit";
				count=1;
			};
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\cow\Hunter_dpso_cow.paa),
			QPATHTOF(data\MRAP_01_adds_CO.paa),
			"\A3\Data_F\Vehicles\Turret_CO.paa"
		};
	};
//

	class CLASS(B_MRAP_gmg_sand_camo): B_MRAP_01_gmg_F
	{
		author = AUTHOR;
		_generalMacro="B_MRAP_01_F";
		displayName="Hunter gmg (sand)"; /// how is the heli displayed in editor
		vehicleClass="Support";
		faction=PREFIX ;
		crew="B_Soldier_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		side=1;
		scope = 2;       // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		attendant=1;
		crewCrashProtection = 0.5;
		crewExplosionProtection = .5;
		armor = 275;
		picture="\A3\Soft_F\MRAP_01\Data\UI\MRAP_01_Base_ca.paa";
		Icon="\A3\soft_f\MRAP_01\Data\UI\map_MRAP_01_CA.paa";
		threat[]={0,0,0};
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="DPSO_FirstAid";
				count=10;
			};
			class _xx_Medikit
			{
				name="ToolKit";
				count=1;
			};
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\cow\Hunter_dpso_cow.paa),
			QPATHTOF(data\MRAP_01_adds_CO.paa),
			"\A3\Data_F\Vehicles\Turret_CO.paa"
		};
	};
/// trop
	class CLASS(B_MRAP_tropic_camo): B_T_MRAP_01_F
	{
		author = AUTHOR;
		_generalMacro="B_MRAP_01_F";
		displayName="Hunter (tropic)"; /// how is the heli displayed in editor
		vehicleClass="Support";
		faction=PREFIX ;
		crew="B_Soldier_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		side=1;
		scope = 2;       // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		attendant=1;
		crewCrashProtection = 0.5;
		crewExplosionProtection = .5;
		armor = 275;
		picture="\A3\Soft_F\MRAP_01\Data\UI\MRAP_01_Base_ca.paa";
		Icon="\A3\soft_f\MRAP_01\Data\UI\map_MRAP_01_CA.paa";
		threat[]={0,0,0};
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="DPSO_FirstAid";
				count=10;
			};
			class _xx_Medikit
			{
				name="ToolKit";
				count=1;
			};
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\cow\Hunter_t_dpso_cow.paa),
			QPATHTOF(data\MRAP_01_adds_CO.paa)
		};
	};



//
	class CLASS(B_MRAP_hmg_tropic_camo): B_T_MRAP_01_hmg_F
	{
		author = AUTHOR;
		_generalMacro="B_MRAP_01_F";
		displayName="Hunter hmg (tropic)"; /// how is the heli displayed in editor
		vehicleClass="Support";
		faction=PREFIX ;
		crew="B_Soldier_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		side=1;
		scope = 2;       // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		attendant=1;
		crewCrashProtection = 0.5;
		crewExplosionProtection = .5;
		armor = 275;
		picture="\A3\Soft_F\MRAP_01\Data\UI\MRAP_01_Base_ca.paa";
		Icon="\A3\soft_f\MRAP_01\Data\UI\map_MRAP_01_CA.paa";
		threat[]={0,0,0};
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="DPSO_FirstAid";
				count=10;
			};
			class _xx_Medikit
			{
				name="ToolKit";
				count=1;
			};
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\cow\Hunter_t_dpso_cow.paa),
			QPATHTOF(data\MRAP_01_adds_CO.paa),
			"\A3\Data_F\Vehicles\Turret_CO.paa"
		};
	};
//

	class CLASS(B_MRAP_gmg_tropic_camo): B_T_MRAP_01_gmg_F
	{
		author = AUTHOR;
		_generalMacro="B_MRAP_01_F";
		displayName="Hunter gmg (tropic)"; /// how is the heli displayed in editor
		vehicleClass="Support";
		faction=PREFIX ;
		crew="B_Soldier_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		side=1;
		scope = 2;       // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		attendant=1;
		crewCrashProtection = 0.5;
		crewExplosionProtection = .5;
		armor = 275;
		picture="\A3\Soft_F\MRAP_01\Data\UI\MRAP_01_Base_ca.paa";
		Icon="\A3\soft_f\MRAP_01\Data\UI\map_MRAP_01_CA.paa";
		threat[]={0,0,0};
		class EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="DPSO_FirstAid";
				count=10;
			};
			class _xx_Medikit
			{
				name="ToolKit";
				count=1;
			};
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\cow\Hunter_t_dpso_cow.paa),
			QPATHTOF(data\MRAP_01_adds_CO.paa),
			"\A3\Data_F\Vehicles\Turret_CO.paa"
		};
	};
};
