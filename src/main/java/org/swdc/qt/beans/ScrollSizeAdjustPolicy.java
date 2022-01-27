package org.swdc.qt.beans;

public enum ScrollSizeAdjustPolicy {

    AdjustIgnored(0),
    AdjustToContentsOnFirstShow(1),
    AdjustToContents(2);

    private int val;
    ScrollSizeAdjustPolicy(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static ScrollSizeAdjustPolicy valueOf(int val) {
        switch (val) {
            case 0: return AdjustIgnored;
            case 1: return AdjustToContentsOnFirstShow;
            case 2: return AdjustToContents;
            default:return null;
        }
    }
}
