package org.swdc.qt.beans;

public enum AspectRatioMode {
    IgnoreAspectRatio(0),
    KeepAspectRatio(1),
    KeepAspectRatioByExpanding(2);

    private int val;
    AspectRatioMode(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static AspectRatioMode valueOf(int val) {
        switch (val) {
            case 0: return IgnoreAspectRatio;
            case 1: return KeepAspectRatio;
            case 2: return KeepAspectRatioByExpanding;
            default:return null;
        }
    }
}
