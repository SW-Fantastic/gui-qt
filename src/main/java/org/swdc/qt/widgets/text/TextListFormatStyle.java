package org.swdc.qt.widgets.text;

public enum TextListFormatStyle {

    ListDisc(-1),
    ListCircle(-2),
    ListSquare(-3),
    ListDecimal(-4),
    ListLowerAlpha(-5),
    ListUpperAlpha(-6),
    ListLowerRoman(-7),
    ListUpperRoman(-8),
    ListStyleUndefined(0);

    private int val;
    TextListFormatStyle(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextListFormatStyle valueOf(int val) {
        for (TextListFormatStyle item : TextListFormatStyle.values()) {
            if (val == item.getVal()) {
                return item;
            }
        }
        return null;
    }
}
