package org.swdc.qt.beans;

public enum SizeMode {

    AbsoluteSize(0),
    RelativeSize(1);

    private int val;
    SizeMode(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static SizeMode valueOf(int val) {
        switch (val) {
            case 0: return AbsoluteSize;
            case 1: return RelativeSize;
            default: return null;
        }
    }
}
