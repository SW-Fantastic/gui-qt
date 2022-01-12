package org.swdc.qt.widgets.graphics;

public enum GradientCoordinateMode {

    LogicalMode(0),
    StretchToDeviceMode(1),
    ObjectBoundingMode(2),
    ObjectMode(3);

    private int val;
    GradientCoordinateMode(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static GradientCoordinateMode valueOf(int val) {
        switch (val) {
            case 0: return LogicalMode;
            case 1: return StretchToDeviceMode;
            case 2: return ObjectBoundingMode;
            case 3: return ObjectMode;
            default:return null;
        }
    }
}
