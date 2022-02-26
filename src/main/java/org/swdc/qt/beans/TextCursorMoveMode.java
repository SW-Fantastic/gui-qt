package org.swdc.qt.beans;

public enum TextCursorMoveMode {
    MoveAnchor(0),
    KeepAnchor(1);
    private int val;
    TextCursorMoveMode(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextCursorMoveMode valueOf(int val) {
        switch (val) {
            case 0: return MoveAnchor;
            case 1: return KeepAnchor;
            default:return null;
        }
    }
}
