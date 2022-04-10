package org.swdc.qt.widgets;

public enum PlainTextEditWrapMode {

    NoWrap(0),
    WidgetWidth(1);

    private int val;
    PlainTextEditWrapMode(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }


    public static PlainTextEditWrapMode valueOf(int val) {
        switch (val) {
            case 0: return NoWrap;
            case 1: return WidgetWidth;
            default:return null;
        }
    }

}
