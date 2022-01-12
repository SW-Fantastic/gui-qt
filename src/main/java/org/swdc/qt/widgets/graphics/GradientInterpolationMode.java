package org.swdc.qt.widgets.graphics;

public enum GradientInterpolationMode {

    ColorInterpolation(0),
    ComponentInterpolation(1);

    private int val;
    GradientInterpolationMode(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static GradientInterpolationMode valueOf(int val) {
        switch (val) {
            case 0: return ColorInterpolation;
            case 1: return ComponentInterpolation;
            default:return null;
        }
    }

}
