package org.swdc.qt.widgets.graphics;

public enum PenStyle {

    NoPen(0),
    SolidLine(1),
    DashLine(2),
    DotLine(3),
    DashDotLine(4),
    DashDotDotLine(5),
    CustomDashLine(6);

    private int val;

    PenStyle(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static PenStyle valueOf(int val) {
        switch (val) {
            case 0: return NoPen;
            case 1: return SolidLine;
            case 2: return DashLine;
            case 3: return DotLine;
            case 4: return DashDotLine;
            case 5: return DashDotDotLine;
            case 6: return CustomDashLine;
            default:return null;
        }
    }

}
