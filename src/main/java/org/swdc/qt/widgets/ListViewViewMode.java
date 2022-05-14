package org.swdc.qt.widgets;

public enum ListViewViewMode {

    ListMode(0),
    IconMode(1);

    private int val;
    ListViewViewMode(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static ListViewViewMode valueOf(int val) {
        for (ListViewViewMode mode : values()) {
            if (mode.getVal() == val) {
                return mode;
            }
        }
        return null;
    }
}
