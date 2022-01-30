package org.swdc.qt.widgets.pane;

public enum MdiWindowViewMode {

    SubWindowView(0),
    TabbedView(1);

    private int val;
    MdiWindowViewMode(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static MdiWindowViewMode valueOf(int val) {
        switch (val) {
            case 0: return SubWindowView;
            case 1: return TabbedView;
            default:return null;
        }
    }
}
