package org.swdc.qt.beans;

public enum TextCharFormatFontBehavior {

    FontPropertiesSpecifiedOnly(0),
    FontPropertiesAll(1);

    private int val;
    TextCharFormatFontBehavior(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextCharFormatFontBehavior valueOf(int val) {
        switch (val) {
            case 0:
                return FontPropertiesSpecifiedOnly;
            case 1:
                return FontPropertiesAll;
            default:
                return null;
        }
    }
}
