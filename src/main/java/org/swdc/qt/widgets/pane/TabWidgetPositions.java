package org.swdc.qt.widgets.pane;

public enum TabWidgetPositions {

    North(0), South(1), West(2), East(3);

    private int val;
    TabWidgetPositions(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TabWidgetPositions valueOf(int val) {
        switch (val){
            case 0:
                return North;
            case 1:
                return South;
            case 2:
                return West;
            case 3:
                return East;
            default:
                return null;
        }
    }

}
