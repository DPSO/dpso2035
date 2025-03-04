#define COMPONENT adminmenu

#include "\z\dpso\addons\main\script_mod.hpp"
#include "\z\dpso\addons\main\script_macros.hpp"

#define DPSO_ADMINMENU_STD_WIDTH     (((safezoneW / safezoneH) min 1.2) / 40)
#define DPSO_ADMINMENU_STD_HEIGHT    ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)
#define DPSO_ADMINMENU_STD_SIZEX     (DPSO_ADMINMENU_STD_HEIGHT * 0.8)
#define DPSO_ADMINMENU_STD_SIZEX_L   (DPSO_ADMINMENU_STD_HEIGHT * 0.9)

#define DPSO_GROUPBASE_W             (37.8 * DPSO_ADMINMENU_STD_WIDTH)
#define DPSO_GROUPBASE_H             (20.6 * DPSO_ADMINMENU_STD_HEIGHT)

#define IDD_DPSO_ADMINMENU           56100

#define IDC_DPSO_ADMINMENU_FPS       56101
#define IDC_DPSO_ADMINMENU_DASH      56102
#define IDC_DPSO_ADMINMENU_PMAN      56103
#define IDC_DPSO_ADMINMENU_RESP      56104
#define IDC_DPSO_ADMINMENU_ENDM      56105
#define IDC_DPSO_ADMINMENU_MSGS      56106
#define IDC_DPSO_ADMINMENU_ADME      56107
#define IDCS_DPSO_ADMINMENU_BTNS     [IDC_DPSO_ADMINMENU_DASH, IDC_DPSO_ADMINMENU_PMAN, IDC_DPSO_ADMINMENU_RESP, IDC_DPSO_ADMINMENU_ENDM, IDC_DPSO_ADMINMENU_MSGS]

#define IDC_DPSO_ADMINMENU_G_DASH    56200
#define IDC_DPSO_ADMINMENU_G_PMAN    56300
#define IDC_DPSO_ADMINMENU_G_RESP    56400
#define IDC_DPSO_ADMINMENU_G_ENDM    56500
#define IDC_DPSO_ADMINMENU_G_MSGS    56600
#define IDCS_DPSO_ADMINMENU_GRPS     [IDC_DPSO_ADMINMENU_G_DASH, IDC_DPSO_ADMINMENU_G_PMAN, IDC_DPSO_ADMINMENU_G_RESP, IDC_DPSO_ADMINMENU_G_ENDM, IDC_DPSO_ADMINMENU_G_MSGS]

/* DASHBOARD */

#define IDC_DPSO_ADMINMENU_DASH_DEBUGCON                 56201
#define IDC_DPSO_ADMINMENU_DASH_CLAIMZEUS                56202
#define IDC_DPSO_ADMINMENU_DASH_CAMERA                   56203
#define IDC_DPSO_ADMINMENU_DASH_ARSENAL                  56204
#define IDC_DPSO_ADMINMENU_DASH_SAFESTART                56205
#define IDC_DPSO_ADMINMENU_DASH_SPECTATORTALK            56206
#define IDCS_DPSO_ADMINMENU_DASH_ALL1                    [IDC_DPSO_ADMINMENU_DASH_DEBUGCON, IDC_DPSO_ADMINMENU_DASH_CLAIMZEUS, IDC_DPSO_ADMINMENU_DASH_CAMERA, IDC_DPSO_ADMINMENU_DASH_ARSENAL, IDC_DPSO_ADMINMENU_DASH_SAFESTART, IDC_DPSO_ADMINMENU_DASH_SPECTATORTALK]

#define IDC_DPSO_ADMINMENU_DASH_STATS_BLUFOR_AI          56207
#define IDC_DPSO_ADMINMENU_DASH_STATS_BLUFOR_PLAYERS     56208
#define IDC_DPSO_ADMINMENU_DASH_STATS_BLUFOR_SPECTATORS  56209
#define IDC_DPSO_ADMINMENU_DASH_STATS_BLUFOR_TOTAL       56210
#define IDCS_DPSO_ADMINMENU_DASH_STATS_BLUFOR            [IDC_DPSO_ADMINMENU_DASH_STATS_BLUFOR_AI, IDC_DPSO_ADMINMENU_DASH_STATS_BLUFOR_PLAYERS, IDC_DPSO_ADMINMENU_DASH_STATS_BLUFOR_SPECTATORS, IDC_DPSO_ADMINMENU_DASH_STATS_BLUFOR_TOTAL]
#define IDC_DPSO_ADMINMENU_DASH_STATS_OPFOR_AI           56211
#define IDC_DPSO_ADMINMENU_DASH_STATS_OPFOR_PLAYERS      56212
#define IDC_DPSO_ADMINMENU_DASH_STATS_OPFOR_SPECTATORS   56213
#define IDC_DPSO_ADMINMENU_DASH_STATS_OPFOR_TOTAL        56214
#define IDCS_DPSO_ADMINMENU_DASH_STATS_OPFOR             [IDC_DPSO_ADMINMENU_DASH_STATS_OPFOR_AI, IDC_DPSO_ADMINMENU_DASH_STATS_OPFOR_PLAYERS, IDC_DPSO_ADMINMENU_DASH_STATS_OPFOR_SPECTATORS, IDC_DPSO_ADMINMENU_DASH_STATS_OPFOR_TOTAL]
#define IDC_DPSO_ADMINMENU_DASH_STATS_INDEP_AI           56215
#define IDC_DPSO_ADMINMENU_DASH_STATS_INDEP_PLAYERS      56216
#define IDC_DPSO_ADMINMENU_DASH_STATS_INDEP_SPECTATORS   56217
#define IDC_DPSO_ADMINMENU_DASH_STATS_INDEP_TOTAL        56218
#define IDCS_DPSO_ADMINMENU_DASH_STATS_INDEP             [IDC_DPSO_ADMINMENU_DASH_STATS_INDEP_AI, IDC_DPSO_ADMINMENU_DASH_STATS_INDEP_PLAYERS, IDC_DPSO_ADMINMENU_DASH_STATS_INDEP_SPECTATORS, IDC_DPSO_ADMINMENU_DASH_STATS_INDEP_TOTAL]
#define IDC_DPSO_ADMINMENU_DASH_STATS_CIV_AI             56219
#define IDC_DPSO_ADMINMENU_DASH_STATS_CIV_PLAYERS        56220
#define IDC_DPSO_ADMINMENU_DASH_STATS_CIV_SPECTATORS     56221
#define IDC_DPSO_ADMINMENU_DASH_STATS_CIV_TOTAL          56222
#define IDCS_DPSO_ADMINMENU_DASH_STATS_CIV               [IDC_DPSO_ADMINMENU_DASH_STATS_CIV_AI, IDC_DPSO_ADMINMENU_DASH_STATS_CIV_PLAYERS, IDC_DPSO_ADMINMENU_DASH_STATS_CIV_SPECTATORS, IDC_DPSO_ADMINMENU_DASH_STATS_CIV_TOTAL]
#define IDC_DPSO_ADMINMENU_DASH_STATS_TOTAL_AI           56223
#define IDC_DPSO_ADMINMENU_DASH_STATS_TOTAL_PLAYERS      56224
#define IDC_DPSO_ADMINMENU_DASH_STATS_TOTAL_SPECTATORS   56225
#define IDC_DPSO_ADMINMENU_DASH_STATS_TOTAL_TOTAL        56226
#define IDCS_DPSO_ADMINMENU_DASH_STATS_TOTAL             [IDC_DPSO_ADMINMENU_DASH_STATS_TOTAL_AI, IDC_DPSO_ADMINMENU_DASH_STATS_TOTAL_PLAYERS, IDC_DPSO_ADMINMENU_DASH_STATS_TOTAL_SPECTATORS, IDC_DPSO_ADMINMENU_DASH_STATS_TOTAL_TOTAL]
#define IDCS_DPSO_ADMINMENU_DASH_STATS_ALLSIDES          [IDCS_DPSO_ADMINMENU_DASH_STATS_BLUFOR, IDCS_DPSO_ADMINMENU_DASH_STATS_OPFOR, IDCS_DPSO_ADMINMENU_DASH_STATS_INDEP, IDCS_DPSO_ADMINMENU_DASH_STATS_CIV]

#define IDC_DPSO_ADMINMENU_DASH_VEHICLES         56227
#define IDC_DPSO_ADMINMENU_DASH_DEADMEN          56228
#define IDC_DPSO_ADMINMENU_DASH_HEADLESS         56229
#define IDC_DPSO_ADMINMENU_DASH_CURATORS         56230
#define IDC_DPSO_ADMINMENU_DASH_CURRADMIN        56231
#define IDC_DPSO_ADMINMENU_DASH_RUNTIME          56232
#define IDC_DPSO_ADMINMENU_G_DASH_MISSIONNOTES   56233
#define IDC_DPSO_ADMINMENU_DASH_MISSIONNOTES     56234

/* PLAYER MANAGMENT */

#define IDC_DPSO_ADMINMENU_PMAN_FILTER_SIDE      56301
#define IDC_DPSO_ADMINMENU_PMAN_FILTER_STATE     56302
#define IDC_DPSO_ADMINMENU_PMAN_FILTER_RESET     56303
#define IDC_DPSO_ADMINMENU_PMAN_LIST             56304
#define IDC_DPSO_ADMINMENU_PMAN_SEL_ALL          56305
#define IDC_DPSO_ADMINMENU_PMAN_SEL_NONE         56306
#define IDC_DPSO_ADMINMENU_PMAN_SEL_INVERT       56307
#define IDC_DPSO_ADMINMENU_PMAN_TELEPORT         56309
#define IDC_DPSO_ADMINMENU_PMAN_MESSAGE          56310
#define IDC_DPSO_ADMINMENU_PMAN_ASSIGNGEAR       56311
#define IDC_DPSO_ADMINMENU_PMAN_SETUPPLAYER       56312
#define IDC_DPSO_ADMINMENU_PMAN_ASSIGNTRAITS     56313
#define IDC_DPSO_ADMINMENU_PMAN_HEAL             56314
#define IDC_DPSO_ADMINMENU_PMAN_RUNCODE          56315
#define IDC_DPSO_ADMINMENU_PMAN_GRANTZEUS        56316
#define IDC_DPSO_ADMINMENU_PMAN_CONFIGPLAYER    56317
#define IDC_DPSO_ADMINMENU_PMAN_GROUPLIST        56318
#define IDC_DPSO_ADMINMENU_PMAN_REFRESH          56319
#define IDC_DPSO_ADMINMENU_PMAN_STEAM            56320
#define IDC_DPSO_ADMINMENU_PMAN_QRESPAWN         56321

#define DPSO_ADMINMENU_PMAN_W_LISTGROUP (29.9 * (((safezoneW / safezoneH) min 1.2) / 40))
#define DPSO_ADMINMENU_PMAN_H_LISTGROUP (19.4 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))

// 4.4*stdwidth
#define DPSO_ADMINMENU_PMAN_W_LIST   (DPSO_ADMINMENU_PMAN_W_LISTGROUP - (6.6 * DPSO_ADMINMENU_STD_WIDTH))
#define DPSO_ADMINMENU_PMAN_X_DEAD   0
#define DPSO_ADMINMENU_PMAN_X_SIDE   (DPSO_ADMINMENU_PMAN_X_DEAD + (1.1 * DPSO_ADMINMENU_STD_WIDTH))
#define DPSO_ADMINMENU_PMAN_X_LIST   (DPSO_ADMINMENU_PMAN_X_SIDE + (1.1 * DPSO_ADMINMENU_STD_WIDTH))
#define DPSO_ADMINMENU_PMAN_X_QRESP  (DPSO_ADMINMENU_PMAN_X_LIST + DPSO_ADMINMENU_PMAN_W_LIST + (0.1 * DPSO_ADMINMENU_STD_WIDTH))
#define DPSO_ADMINMENU_PMAN_X_STEAM  (DPSO_ADMINMENU_PMAN_X_QRESP + (1.1 * DPSO_ADMINMENU_STD_WIDTH))

/* RESPAWN MENU */

#define IDC_DPSO_ADMINMENU_RESP_SOMETHING            5641243
#define IDC_DPSO_ADMINMENU_RESP_SPECTATORLIST        26891
#define IDC_DPSO_ADMINMENU_RESP_GROUPLIST            26892
#define IDC_DPSO_ADMINMENU_RESP_ADDBUTTON            1600
#define IDC_DPSO_ADMINMENU_RESP_REMOVEBUTTON         1601
#define IDC_DPSO_ADMINMENU_RESP_SPAWNBUTTON          1602
#define IDC_DPSO_ADMINMENU_RESP_GROUPNAME            26898
#define IDC_DPSO_ADMINMENU_RESP_GROUPMARKERNAME      26899
#define IDC_DPSO_ADMINMENU_RESP_GROUPMARKERCHECKBOX  26903
#define IDC_DPSO_ADMINMENU_RESP_SPECTATORTEXT        26895
#define IDC_DPSO_ADMINMENU_RESP_ROLECOMBO            26896
#define IDC_DPSO_ADMINMENU_RESP_RANK                 26897
#define IDC_DPSO_ADMINMENU_RESP_MARKERTYPE           26900
#define IDC_DPSO_ADMINMENU_RESP_MARKERCOLOUR         26901
#define IDC_DPSO_ADMINMENU_RESP_SPECTATORVOIP        26927
#define IDC_DPSO_ADMINMENU_RESP_FACTIONCATEGORY      26894
#define IDC_DPSO_ADMINMENU_RESP_FACTION              26928
#define IDC_DPSO_ADMINMENU_RESP_SIDE                 26929

#define IDC_DPSO_ADMINMENU_RESP_MAP_DISPLAY          26950
#define IDC_DPSO_ADMINMENU_RESP_MAP_CONTROL          26902

//37.8 max width let's do 37.8 - 10
// max H is 20
#define DPSO_ADMINMENU_RESP_W_COL1 (10 * (((safezoneW / safezoneH) min 1.2) / 40))
#define DPSO_ADMINMENU_RESP_X_COL1 0

#define DPSO_ADMINMENU_RESP_W_COL2 (4.8 * (((safezoneW / safezoneH) min 1.2) / 40))
#define DPSO_ADMINMENU_RESP_X_COL2 (11 * (((safezoneW / safezoneH) min 1.2) / 40))

#define DPSO_ADMINMENU_RESP_X_COL3 (16.8 * (((safezoneW / safezoneH) min 1.2) / 40))
#define DPSO_ADMINMENU_RESP_W_COL3 (10 * (((safezoneW / safezoneH) min 1.2) / 40))

// COL3 is same as COL1 Width
#define DPSO_ADMINMENU_RESP_W_COL4 (10 * (((safezoneW / safezoneH) min 1.2) / 40))
#define DPSO_ADMINMENU_RESP_X_COL4 (27.8 * (((safezoneW / safezoneH) min 1.2) / 40))

#define IDC_DPSO_ADMINMENU_ENDM_LIST                 56501
#define IDC_DPSO_ADMINMENU_ENDM_ENDMISSION           56502
#define IDC_DPSO_ADMINMENU_ENDM_EXPORTAAR            56503
#define IDC_DPSO_ADMINMENU_ENDM_ACTIVATEHUNT         56504
#define IDC_DPSO_ADMINMENU_ENDM_FROMMISSION          56505
#define IDC_DPSO_ADMINMENU_ENDM_SIDESPECIFIC         56506
#define IDC_DPSO_ADMINMENU_ENDM_BLUFOR               56507
#define IDC_DPSO_ADMINMENU_ENDM_OPFOR                56508
#define IDC_DPSO_ADMINMENU_ENDM_INDEP                56509
#define IDC_DPSO_ADMINMENU_ENDM_CIVILIAN             56510
#define IDCS_DPSO_ADMINMENU_ENDM_SIDES               [IDC_DPSO_ADMINMENU_ENDM_BLUFOR, IDC_DPSO_ADMINMENU_ENDM_OPFOR, IDC_DPSO_ADMINMENU_ENDM_INDEP, IDC_DPSO_ADMINMENU_ENDM_CIVILIAN]
#define IDC_DPSO_ADMINMENU_ENDM_SIDEDRAW             56511
#define IDCS_DPSO_ADMINMENU_ENDM_SIDESPECIFIC        [IDC_DPSO_ADMINMENU_ENDM_BLUFOR, IDC_DPSO_ADMINMENU_ENDM_OPFOR, IDC_DPSO_ADMINMENU_ENDM_INDEP, IDC_DPSO_ADMINMENU_ENDM_CIVILIAN, IDC_DPSO_ADMINMENU_ENDM_SIDEDRAW]
#define IDC_DPSO_ADMINMENU_ENDM_OCCLUDER_LU          56512
#define IDC_DPSO_ADMINMENU_ENDM_OCCLUDER_LD          56513
#define IDC_DPSO_ADMINMENU_ENDM_OCCLUDER_R           56514
#define IDCS_DPSO_ADMINMENU_ENDM_OCCLUDERS           [IDC_DPSO_ADMINMENU_ENDM_OCCLUDER_LU, IDC_DPSO_ADMINMENU_ENDM_OCCLUDER_LD, IDC_DPSO_ADMINMENU_ENDM_OCCLUDER_R]
#define IDC_DPSO_ADMINMENU_ENDM_CUSTOM               56515
#define IDCS_DPSO_ADMINMENU_ENDM_CHECKBOXES          [IDC_DPSO_ADMINMENU_ENDM_FROMMISSION, IDC_DPSO_ADMINMENU_ENDM_SIDESPECIFIC, IDC_DPSO_ADMINMENU_ENDM_CUSTOM]
#define IDC_DPSO_ADMINMENU_ENDM_CUSTOM_TITLE         56516
#define IDC_DPSO_ADMINMENU_ENDM_CUSTOM_SUBTEXT       56517
#define IDC_DPSO_ADMINMENU_ENDM_CUSTOM_ISDEFEAT      56518
#define IDC_DPSO_ADMINMENU_ENDM_FROMMISSION_ISDEFEAT 56519

/* LOGS */

#define IDC_DPSO_ADMINMENU_MSGS_SOMETHING    56601

#define IDC_DPSO_ADMINMENU_MSGS_LIST         56602
#define DPSO_ADMINMENU_MSGS_W_LIST           (DPSO_GROUPBASE_W - 0.1 * DPSO_ADMINMENU_STD_WIDTH)
#define DPSO_ADMINMENU_MSGS_H_LIST           (DPSO_GROUPBASE_H - 1.1 * DPSO_ADMINMENU_STD_HEIGHT)

#define IDC_DPSO_ADMINMENU_MSGS_COPY         56603
#define IDC_DPSO_ADMINMENU_MSGS_COPYALL      56604

/* MODAL */

#define IDC_DPSO_ADMINMENU_MODAL_BACK        56701
#define IDC_DPSO_ADMINMENU_MODAL_TBACK       56702
#define IDC_DPSO_ADMINMENU_MODAL_TITLE       56703
#define IDC_DPSO_ADMINMENU_MODAL_GBACK       56704
#define IDC_DPSO_ADMINMENU_G_MODAL           56705
#define IDC_DPSO_ADMINMENU_MODAL_CLOSE       56706
#define IDCS_DPSO_ADMINMENU_MODAL            [IDC_DPSO_ADMINMENU_MODAL_TITLE, IDC_DPSO_ADMINMENU_MODAL_BACK, IDC_DPSO_ADMINMENU_MODAL_TBACK, IDC_DPSO_ADMINMENU_MODAL_GBACK, IDC_DPSO_ADMINMENU_G_MODAL, IDC_DPSO_ADMINMENU_MODAL_CLOSE]

#define IDC_DPSO_ADMINMENU_G_UTIL            56801
#define IDC_DPSO_ADMINMENU_UTIL_TITLE        56802
#define IDC_DPSO_ADMINMENU_UTIL_TBACK        56803
#define IDCS_DPSO_ADMINMENU_UTIL             [IDC_DPSO_ADMINMENU_G_UTIL, IDC_DPSO_ADMINMENU_UTIL_TITLE, IDC_DPSO_ADMINMENU_UTIL_TBACK]

/* AdminEye */
#define IDC_DPSO_ADMINMENU_ADME_MAP_DISPLAY  26850
#define IDC_DPSO_ADMINMENU_ADME_MAP_CONTROL  26851
