package org.swdc.qt.beans;

public enum FillRule {

    OddEvenFill(0),
    WindingFill(1);

    private int val;
    FillRule(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static FillRule valueOf(int val) {
        switch (val) {
            case 0 : return OddEvenFill;
            case 1 : return WindingFill;
            default: return null;
        }
    }

}
