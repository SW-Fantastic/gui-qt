package org.swdc.qt.beans;

public enum TextOptionWrapMode {

    NoWrap(0),
    WordWrap(1),
    ManualWrap(2),
    WrapAnywhere(3),
    WrapAtWordBoundaryOrAnywhere(4);

    private int val;
    TextOptionWrapMode(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextOptionWrapMode valueOf(int val) {
        for (TextOptionWrapMode mode: TextOptionWrapMode.values()) {
            if (mode.val == val) {
                return mode;
            }
        }
        return null;
    }

}
