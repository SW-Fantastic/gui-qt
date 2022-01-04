package org.swdc.qt.beans;

public enum ContextMenuPolicy {

    NoContextMenu(0),
    DefaultContextMenu(1),
    ActionsContextMenu(2),
    CustomContextMenu(3),
    PreventContextMenu(4)
    ;

    private int val;

    ContextMenuPolicy(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }
}
