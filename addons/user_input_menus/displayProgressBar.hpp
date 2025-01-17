/*──────────────────────────────────────────────────────┐
│   Author: Connor                                      │
│   Steam:  https://steamcommunity.com/id/_connor       │
│   Github: https://github.com/ConnorAU                 │
│                                                       │
│   Please do not modify or remove this comment block   │
└──────────────────────────────────────────────────────*/

#define DIALOG_Y safeZoneY + (0.15 * safeZoneH)
#define DIALOG_W 120
#define DIALOG_H SIZE_XXL

class CAU_UserInputMenus_displayProgressBar: CAU_UserInputMenus_ctrlControlsGroupNoScrollbars {
    onLoad = "uiNamespace setVariable ['CAU_UserInputMenus_displayProgressBar', _this#0];";

    x = QUOTE(CENTER_XA(DIALOG_W));
    y = QUOTE(DIALOG_Y);
    w = QUOTE(PX_WA(DIALOG_W));
    h = QUOTE(PX_HA(DIALOG_H));

    class controls {
        class background: CAU_UserInputMenus_ctrlStaticBackground {
            onLoad = "(ctrlParentControlsGroup(_this#0)) setVariable ['ctrlBackground',_this#0]";

            w = QUOTE(PX_WA(DIALOG_W));
            h = QUOTE(PX_HA(DIALOG_H));
        };
        class bar: CAU_UserInputMenus_ctrlStatic {
            onLoad = "(ctrlParentControlsGroup(_this#0)) setVariable ['ctrlBar',_this#0]";

            colorBackground[] = {
                "(profileNamespace getVariable ['GUI_BCG_RGB_R',0.77])",
                "(profileNamespace getVariable ['GUI_BCG_RGB_G',0.51])",
                "(profileNamespace getVariable ['GUI_BCG_RGB_B',0.08])", 1};

            h = QUOTE(PX_HA(DIALOG_H));
        };
        class image: CAU_UserInputMenus_ctrlStaticPicture {
            onLoad = "(ctrlParentControlsGroup(_this#0)) setVariable ['ctrlImage',_this#0]";

            w = QUOTE(PX_WA(DIALOG_H));
            h = QUOTE(PX_HA(DIALOG_H));
        };
        class text: CAU_UserInputMenus_ctrlStaticTitle {
            onLoad = "(ctrlParentControlsGroup(_this#0)) setVariable ['ctrlText',_this#0]";
            sizeEx = QUOTE((4.32 * (1 / (getResolution select 3)) * pixelGrid * 0.5) * (SIZE_XL / SIZE_M));

            colorBackground[] = {0, 0, 0, 0};

            w = QUOTE(PX_WA(DIALOG_W));
            h = QUOTE(PX_HA(DIALOG_H));
        };
        class button: CAU_UserInputMenus_ctrlButtonPicture {
            onLoad = "(ctrlParentControlsGroup(_this#0)) setVariable ['ctrlButton',_this#0]";
            text = "\a3\3DEN\Data\ControlsGroups\Tutorial\close_ca.paa";

            colorBackground[] = {0, 0, 0, 0};
            colorBackgroundActive[] = {COLOR_NOTE_ERROR_RGB, 1};
            colorFocused[] = {COLOR_NOTE_ERROR_RGB, 1};

            x = QUOTE(PX_WA(DIALOG_W) - PX_WA(DIALOG_H));
            w = QUOTE(PX_WA(DIALOG_H));
            h = QUOTE(PX_HA(DIALOG_H));
        };
    };
};

#undef DIALOG_W
#undef DIALOG_H
#undef DIALOG_Y