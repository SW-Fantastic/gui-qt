package org.swdc.qt.beans;

public enum ColorMarkMode {
    MaskInColor(0),
    MaskOutColor(1);

    private int val;
    ColorMarkMode(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static ColorMarkMode valueOf(int val){
        switch (val) {
            case 0: return MaskInColor;
            case 1: return MaskOutColor;
            default: return null;
        }
    }
}
