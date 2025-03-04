
class CfgMainMenuSpotlight {

    class GVAR(server1) {
        text = "Dropping Purple Smoke Operations";
        textIsQuote = 0;
        picture = QUOTE(\z\dpso\addons\media\images\logo_sm_ca.paa);
        action = QUOTE(_this call (uiNamespace getVariable QQFUNC(join)));
        actionText = CSTRING(SpotlightHeader);
        condition = QUOTE(true);
    };
    class GVAR(server2) {
        text = "Dropping Purple Smoke Training";
        textIsQuote = 0;
        picture = QUOTE(\z\dpso\addons\media\images\logo_sm_ca.paa);
        action = QUOTE(_this call (uiNamespace getVariable QQFUNC(joint)));
        actionText = CSTRING(SpotlightHeader);
        condition = QUOTE(true);
    };
    class GVAR(server3) {
        text = "Dropping Purple Smoke Events";
        textIsQuote = 0;
        picture = QUOTE(\z\dpso\addons\media\images\logo_sm_ca.paa);
        action = QUOTE(_this call (uiNamespace getVariable QQFUNC(joine)));
        actionText = CSTRING(SpotlightHeader);
        condition = QUOTE(true);
    };
    delete ApexProtocol;
    delete BootCamp;
    delete EastWind;

    delete Orange_CampaignGerman;
    delete Orange_Showcase_IDAP;
    delete Orange_Showcase_LoW;
    delete Orange_Campaign;

    delete Showcase_TankDestroyers;

    delete Tacops_Campaign_03;
    delete Tacops_Campaign_02;
    delete Tacops_Campaign_01;

    delete Tanks_Campaign_01;

    delete OldMan;

    delete Contact_Campaign;

    delete gm_campaign_01;

    delete SP_FD14;

    delete AoW_Showcase_AoW;
    delete AoW_Showcase_Future;
};
