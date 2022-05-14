package org.swdc.qt.widgets;

public enum ItemViewEditTrigger {

    NoEditTriggers (0),
    CurrentChanged (1),
    DoubleClicked (2),
    SelectedClicked (4),
    EditKeyPressed (8),
    AnyKeyPressed (16),
    AllEditTriggers (31);

    private int val;
    ItemViewEditTrigger(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }
}
