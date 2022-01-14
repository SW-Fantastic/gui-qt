package org.swdc.qt.widgets.graphics;

public enum FontStyle {

    StyleNormal(0),
    StyleItalic(1),
    StyleOblique(2);

    private int val;
    FontStyle(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static FontStyle valueOf(int val) {
        switch (val) {
            case 0: return StyleNormal;
            case 1: return StyleItalic;
            case 2: return StyleOblique;
            default:return null;
        }
    }
}
