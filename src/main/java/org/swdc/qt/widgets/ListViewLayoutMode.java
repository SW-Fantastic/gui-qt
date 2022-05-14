package org.swdc.qt.widgets;

public enum ListViewLayoutMode {

    SinglePass(0),
    Batched(1);

    private int val;
    ListViewLayoutMode(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static ListViewLayoutMode valueOf(int val) {
        for (ListViewLayoutMode mode : values()) {
            if (mode.getVal() == val) {
                return mode;
            }
        }
        return null;
    }
}
