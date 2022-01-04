package org.swdc.qt.widgets.action;

public enum ToolButtonPopupMode {
    DelayedPopup(0),
    MenuButtonPopup(1),
    InstantPopup(2);

    private int val;
    ToolButtonPopupMode(int val){
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static ToolButtonPopupMode valueOf(int val) {
        switch (val) {
            case 0:
                return DelayedPopup;
            case 1:
                return MenuButtonPopup;
            case 2:
                return InstantPopup;
            default:
                return null;
        }
    }
}
