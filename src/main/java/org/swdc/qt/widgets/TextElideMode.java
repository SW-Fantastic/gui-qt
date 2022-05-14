package org.swdc.qt.widgets;

public enum TextElideMode {

    ElideLeft(0),
    ElideRight(1),
    ElideMiddle(2),
    ElideNone(3);

    private int val;
    TextElideMode(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextElideMode valueOf(int val) {
        for (TextElideMode mode : values()) {
            if (mode.getVal() == val) {
                return mode;
            }
        }
        return null;
    }
}
