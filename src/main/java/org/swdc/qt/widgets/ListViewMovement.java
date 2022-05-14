package org.swdc.qt.widgets;

public enum ListViewMovement {

    Static(0),
    Free(1),
    Snap(2);
    private int val;
    ListViewMovement(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static ListViewMovement valueOf(int val) {
        for (ListViewMovement movement : values()) {
            if (movement.val == val) {
                return movement;
            }
        }
        return null;
    }
}
