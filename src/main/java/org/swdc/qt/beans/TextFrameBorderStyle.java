package org.swdc.qt.beans;

public enum TextFrameBorderStyle {

    BorderStyle_None(0),
    BorderStyle_Dotted(1),
    BorderStyle_Dashed(2),
    BorderStyle_Solid(3),
    BorderStyle_Double(4),
    BorderStyle_DotDash(5),
    BorderStyle_DotDotDash(6),
    BorderStyle_Groove(7),
    BorderStyle_Ridge(8),
    BorderStyle_Inset(9),
    BorderStyle_Outset(10);

    private int val;
    TextFrameBorderStyle(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextFrameBorderStyle valueOf(int val) {
        for (TextFrameBorderStyle style: TextFrameBorderStyle.values()) {
            if (style.getVal() == val){
                return style;
            }
        }
        return null;
    }
}
