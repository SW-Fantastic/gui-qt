package org.swdc.qt.widgets.graphics;

public enum PenCapStyle {

    FlatCap(0x00),
    SquareCap(0x10),
    RoundCap (0x20),
    MPenCapStyle(0x30);

    private int val;
    PenCapStyle(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static PenCapStyle valueOf(int val) {
        switch (val) {
            case 0x00: return FlatCap;
            case 0x10: return SquareCap;
            case 0x20: return RoundCap;
            case 0x30: return MPenCapStyle;
            default: return null;
        }
    }
}
