package org.swdc.qt.widgets.pane;

public enum DockWidgetFuture {

    DockWidgetClosable    (0x01),
    DockWidgetMovable     (0x02),
    DockWidgetFloatable   (0x04),
    DockWidgetVerticalTitleBar(0x08),

    DockWidgetFeatureMask (0x0f),
    NoDockWidgetFeatures  (0x00),

    Reserved              (0xff);

    private int val;
    DockWidgetFuture(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static DockWidgetFuture valueOf(int val) {
        for (DockWidgetFuture w: DockWidgetFuture.values()) {
            if (w.getVal() == val) {
                return w;
            }
        }
        return null;
    }
}
