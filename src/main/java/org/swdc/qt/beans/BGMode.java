package org.swdc.qt.beans;

public enum BGMode {

    TransparentMode(0),
    OpaqueMode(1);

    private int val;
    BGMode(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static BGMode valueOf(int val) {
        switch (val) {
            case 0: return TransparentMode;
            case 1: return OpaqueMode;
            default:return null;
        }
    }
}
