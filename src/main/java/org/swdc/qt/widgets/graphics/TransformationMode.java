package org.swdc.qt.widgets.graphics;

public enum TransformationMode {
    FastTransformation(0),
    SmoothTransformation(1);

    private int val;
    TransformationMode(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TransformationMode valueOf(int val) {
        switch (val) {
            case 0: return FastTransformation;
            case 1: return SmoothTransformation;
            default: return null;
        }
    }
}
