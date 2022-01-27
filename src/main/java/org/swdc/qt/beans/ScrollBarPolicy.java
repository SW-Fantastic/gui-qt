package org.swdc.qt.beans;

public enum ScrollBarPolicy {
    ScrollBarAsNeeded(0),
    ScrollBarAlwaysOff(1),
    ScrollBarAlwaysOn(2);

    private int val;
    ScrollBarPolicy(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static ScrollBarPolicy valueOf(int val) {
        switch (val) {
            case 0: return ScrollBarAsNeeded;
            case 1: return ScrollBarAlwaysOff;
            case 2: return ScrollBarAlwaysOn;
            default:return null;
        }
    }
}
