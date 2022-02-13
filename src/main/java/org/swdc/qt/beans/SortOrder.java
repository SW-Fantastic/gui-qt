package org.swdc.qt.beans;

public enum SortOrder {

    AscendingOrder(0),
    DescendingOrder(1);

    private int val;
    SortOrder(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static SortOrder valueOf(int val) {
        switch (val) {
            case 0: return AscendingOrder;
            case 1: return DescendingOrder;
            default:return null;
        }
    }
}
