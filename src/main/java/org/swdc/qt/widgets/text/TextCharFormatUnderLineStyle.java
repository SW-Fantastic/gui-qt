package org.swdc.qt.widgets.text;

public enum TextCharFormatUnderLineStyle {

    NoUnderline(0),
    SingleUnderline(1),
    DashUnderline(2),
    DotLine(3),
    DashDotLine(4),
    DashDotDotLine(5),
    WaveUnderline(6),
    SpellCheckUnderline(7);

    private int val;

    TextCharFormatUnderLineStyle(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextCharFormatUnderLineStyle valueOf(int val) {
        for (TextCharFormatUnderLineStyle style : values()) {
            if (style.val == val) {
                return style;
            }
        }
        return null;
    }
}
