package org.swdc.qt.widgets.graphics;

public enum GradientType {

    LinearGradient(0),
    RadialGradient(1),
    ConicalGradient(2),
    NoGradient(3);

    private int val;
    GradientType(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static GradientType valueOf(int val) {
        switch (val) {
            case 0: return LinearGradient;
            case 1: return RadialGradient;
            case 2: return ConicalGradient;
            case 3: return NoGradient;
            default:return null;
        }
    }
}
