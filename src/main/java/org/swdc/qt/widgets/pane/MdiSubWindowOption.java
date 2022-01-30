package org.swdc.qt.widgets.pane;

public enum MdiSubWindowOption {

    AllowOutsideAreaHorizontally(0x1), // internal
    AllowOutsideAreaVertically(0x2), // internal
    RubberBandResize(0x4),
    RubberBandMove(0x8);

    private int val;
    MdiSubWindowOption(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static MdiSubWindowOption valueOf(int val) {
        for (MdiSubWindowOption opt: MdiSubWindowOption.values()) {
            if (opt.getVal() == val) {
                return opt;
            }
        }
        return null;
    }
}
