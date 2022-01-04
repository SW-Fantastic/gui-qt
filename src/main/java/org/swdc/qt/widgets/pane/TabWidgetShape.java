package org.swdc.qt.widgets.pane;

public enum TabWidgetShape {
    Rounded(0), Triangular(1);
    private int val;
    TabWidgetShape(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TabWidgetShape valueOf(int val) {
        switch (val) {
            case 0 :
                return Rounded;
            case 1:
                return Triangular;
            default:
                return null;
        }
    }

}
