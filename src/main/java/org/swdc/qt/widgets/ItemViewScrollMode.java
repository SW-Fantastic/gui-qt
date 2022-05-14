package org.swdc.qt.widgets;

public enum ItemViewScrollMode {

    ScrollPerItem(0),
    ScrollPerPixel(1);

    private int val;
    ItemViewScrollMode(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static ItemViewScrollMode valueOf(int val) {
        for (ItemViewScrollMode mode : values()){
            if (mode.getVal() == val) {
                return mode;
            }
        }
        return null;
    }
}
