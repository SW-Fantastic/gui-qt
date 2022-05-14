package org.swdc.qt.widgets;

public enum ListViewFlow {

    LeftToRight(0),
    TopToBottom(1);

    private int val;
    ListViewFlow(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static ListViewFlow valueOf(int val) {
        for (ListViewFlow flow : values()) {
            if (flow.getVal() == val) {
                return flow;
            }
        }
        return null;
    }
}
