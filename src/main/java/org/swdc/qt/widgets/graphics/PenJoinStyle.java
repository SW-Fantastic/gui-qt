package org.swdc.qt.widgets.graphics;

public enum PenJoinStyle {

    MiterJoin(0x00),
    BevelJoin(0x40),
    RoundJoin(0x80),
    SvgMiterJoin(0x100),
    MPenJoinStyle(0x1c0);

    private int val;
    PenJoinStyle(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static PenJoinStyle valueOf(int val) {
        switch (val) {
            case 0x00: return MiterJoin;
            case 0x40: return BevelJoin;
            case 0x80: return RoundJoin;
            case 0x100: return SvgMiterJoin;
            case 0x1c0: return MPenJoinStyle;
            default: return null;
        }
    }
}
