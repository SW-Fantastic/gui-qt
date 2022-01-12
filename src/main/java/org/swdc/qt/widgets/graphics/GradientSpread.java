package org.swdc.qt.widgets.graphics;

public enum GradientSpread {

    PadSpread(0),
    ReflectSpread(1),
    RepeatSpread(2);

    private int val;
    GradientSpread(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static GradientSpread valueOf(int val) {
        switch (val) {
            case 0: return PadSpread;
            case 1: return ReflectSpread;
            case 2: return RepeatSpread;
            default:return null;
        }
    }
}
