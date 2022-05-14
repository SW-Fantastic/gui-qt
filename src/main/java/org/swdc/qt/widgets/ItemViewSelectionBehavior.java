package org.swdc.qt.widgets;

public enum ItemViewSelectionBehavior {

    SelectItems(0),
    SelectRows(1),
    SelectColumns(2);

    private int val;
    ItemViewSelectionBehavior(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static ItemViewSelectionBehavior valueOf(int val) {
        for (ItemViewSelectionBehavior behavior:values()) {
            if (behavior.getVal() == val) {
                return behavior;
            }
        }
        return null;
    }
}
