package org.swdc.qt.beans;

public enum Axis {
    XAxis(0),
    YAxis(1),
    ZAxis(2);

    private int val;
    Axis(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static Axis valueOf(int val) {
        switch (val) {
            case 0: return XAxis;
            case 1: return YAxis;
            case 2: return ZAxis;
            default:return null;
        }
    }
}
