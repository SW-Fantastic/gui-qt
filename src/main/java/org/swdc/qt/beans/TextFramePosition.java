package org.swdc.qt.beans;

public enum TextFramePosition {

    InFlow(0),
    FloatLeft(1),
    FloatRight(2);

    private int val;
    TextFramePosition(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextFramePosition valueOf(int val ) {
        for (TextFramePosition pos : TextFramePosition.values()) {
            if (pos.getVal() == val) {
                return pos;
            }
        }
        return null;
    }
}
