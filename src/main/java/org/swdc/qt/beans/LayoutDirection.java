package org.swdc.qt.beans;

public enum LayoutDirection {

    LeftToRight(0),
    RightToLeft(1),
    LayoutDirectionAuto(2);

    private int val;
    LayoutDirection(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static LayoutDirection valueOf(int val) {
        for (LayoutDirection d: LayoutDirection.values()) {
            if (d.getVal() == val) {
                return d;
            }
        }
        return null;
    }
}
