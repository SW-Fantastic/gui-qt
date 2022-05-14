package org.swdc.qt.widgets;

public enum ItemViewSelectionMode {

    NoSelection(0),
    SingleSelection(1),
    MultiSelection(2),
    ExtendedSelection(3),
    ContiguousSelection(4);

    private int val;
    ItemViewSelectionMode(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static ItemViewSelectionMode valueOf(int val) {
        for (ItemViewSelectionMode mode : values()) {
            if (mode.val == val) {
                return mode;
            }
        }
        return null;
    }
}
