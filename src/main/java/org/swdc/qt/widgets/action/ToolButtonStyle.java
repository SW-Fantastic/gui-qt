package org.swdc.qt.widgets.action;

public enum ToolButtonStyle {

    ToolButtonIconOnly(0),
    ToolButtonTextOnly(1),
    ToolButtonTextBesideIcon(2),
    ToolButtonTextUnderIcon(3),
    ToolButtonFollowStyle(4);

    private final int val;
    ToolButtonStyle(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static ToolButtonStyle valueOf(int idx) {
        switch (idx) {
            case 0:
                return ToolButtonIconOnly;
            case 1:
                return ToolButtonTextOnly;
            case 2:
                return ToolButtonTextBesideIcon;
            case 3:
                return ToolButtonTextUnderIcon;
            case 4:
                return ToolButtonFollowStyle;
            default:
                return null;
        }
    }
}
