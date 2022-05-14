package org.swdc.qt.widgets;

public enum ListViewResizeMode {

    Fixed(0),
    Adjust(1);

    private int val;
    ListViewResizeMode(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static ListViewResizeMode valueOf(int val) {
        for (ListViewResizeMode mode : values()) {
            if (mode.getVal() == val) {
                return mode;
            }
        }
        return null;
    }
}
