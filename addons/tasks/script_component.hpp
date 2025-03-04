#define COMPONENT tasks
#include "\z\dpso\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_TASKS
    #define DEBUG_MODE_FULL
#endif
    #ifdef DEBUG_SETTINGS_TASKS
    #define DEBUG_SETTINGS DEBUG_SETTINGS_TASKS
#endif

#include "\z\dpso\addons\main\script_macros.hpp"

#define DEFAULT_TITLE_FORMAT "STR_Task_%1_Title"
#define DEFAULT_TITLE_FORMAT_WITH_COMPONENT "STR_%1_Task_%2_Title"
#define DEFAULT_DESCRIPTION_FORMAT "STR_Task_%1_Description"
#define DEFAULT_DESCRIPTION_FORMAT_WITH_COMPONENT "STR_%1_Task_%2_Description"

#define FINISHED_TASK_STATES ["SUCCEEDED", "FAILED", "CANCELED"]
