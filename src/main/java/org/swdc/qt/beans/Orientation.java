package org.swdc.qt.beans;

public enum Orientation {

    Horizontal(0x1),
    Vertical(0x2);

    private long val;
    Orientation(long val) {
        this.val = val;
    }

    public long getVal() {
        return val;
    }

    public static Orientation valueOf(long val) {
        if (val == 0x1) {
            return Horizontal;
        } else if (val == 0x2) {
            return Vertical;
        }
        return null;
    }
}
