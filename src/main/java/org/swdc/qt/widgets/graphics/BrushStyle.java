package org.swdc.qt.widgets.graphics;

public enum BrushStyle {

    NoBrush(0),
    SolidPattern(1),
    Dense1Pattern(2),
    Dense2Pattern(3),
    Dense3Pattern(4),
    Dense4Pattern(5),
    Dense5Pattern(6),
    Dense6Pattern(7),
    Dense7Pattern(8),
    HorPattern(9),
    VerPattern(10),
    CrossPattern(11),
    BDiagPattern(12),
    FDiagPattern(13),
    DiagCrossPattern(14),
    LinearGradientPattern(15),
    RadialGradientPattern(16),
    ConicalGradientPattern(17),
    TexturePattern(24);

    private int val;
    BrushStyle(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static BrushStyle valueOf(int val) {
        for (BrushStyle style : BrushStyle.values()) {
            if (style.getVal() == val) {
                return style;
            }
        }
        return null;
    }

}
