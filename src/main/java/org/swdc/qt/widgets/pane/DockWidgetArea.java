package org.swdc.qt.widgets.pane;

public enum DockWidgetArea {

    LeftDockWidgetArea(0x1),
    RightDockWidgetArea(0x2),
    TopDockWidgetArea(0x4),
    BottomDockWidgetArea(0x8),

    DockWidgetArea_Mask(0xf),
    NoDockWidgetArea(0);

    private int val;
    DockWidgetArea(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static DockWidgetArea valueOf(int val) {
        for (DockWidgetArea area: DockWidgetArea.values()) {
            if (area.getVal() == val) {
                return area;
            }
        }
        return null;
    }

}
