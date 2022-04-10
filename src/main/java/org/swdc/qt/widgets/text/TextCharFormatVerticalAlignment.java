package org.swdc.qt.widgets.text;

public enum TextCharFormatVerticalAlignment {

    AlignNormal(0),
    AlignSuperScript(1),
    AlignSubScript(2),
    AlignMiddle(3),
    AlignTop(4),
    AlignBottom(5),
    AlignBaseline(6);

    private int val;
    TextCharFormatVerticalAlignment(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextCharFormatVerticalAlignment valueOf(int val) {
        for (TextCharFormatVerticalAlignment alignment : TextCharFormatVerticalAlignment.values()) {
            if (alignment.getVal() == val) {
                return alignment;
            }
        }
        return null;
    }
}
