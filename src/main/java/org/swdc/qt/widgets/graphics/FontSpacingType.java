package org.swdc.qt.widgets.graphics;

public enum FontSpacingType {

    PercentageSpacing(0),
    AbsoluteSpacing(1);

    private int val;
    FontSpacingType(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static FontSpacingType valueOf(int val) {
        switch (val) {
            case 0: return PercentageSpacing;
            case 1: return AbsoluteSpacing;
            default:return null;
        }
    }
}
