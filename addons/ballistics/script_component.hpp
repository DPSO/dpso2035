#define COMPONENT ballistics
#define COMPONENT_BEAUTIFIED Ballistics
#include "\z\dpso\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define CBA_DEBUG_SYNCHRONOUS
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_BALLISTICS
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_BALLISTICS
    #define DEBUG_SETTINGS DEBUG_SETTINGS_BALLISTICS
#endif

#include "\z\dpso\addons\main\script_macros.hpp"
