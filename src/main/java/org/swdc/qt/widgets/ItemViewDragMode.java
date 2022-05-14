package org.swdc.qt.widgets;

public enum ItemViewDragMode {

    NoDragDrop(0),
    DragOnly(1),
    DropOnly(2),
    DragDrop(3),
    InternalMove(4);

    private int val;
    ItemViewDragMode(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static ItemViewDragMode valueOf(int val) {
        for (ItemViewDragMode mode : values()) {
            if (mode.getVal() == val) {
                return mode;
            }
        }
        return null;
    }
}
