package org.swdc.qt.widgets.graphics;

public enum PainterFillRule {

    OddEvenFill(0),
    WindingFill(1);

    private int val;
    PainterFillRule(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static PainterFillRule valueOf(int val) {
        switch (val) {
            case 0 : return OddEvenFill;
            case 1 : return WindingFill;
            default: return null;
        }
    }

}
