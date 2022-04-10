package org.swdc.qt.widgets.text;

public enum TextEditLineWrapMode {

    NoWrap(0),
    WidgetWidth(1),
    FixedPixelWidth(2),
    FixedColumnWidth(3);

    private int val;
    TextEditLineWrapMode(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextEditLineWrapMode valueOf(int val) {
        for (TextEditLineWrapMode mode: TextEditLineWrapMode.values()) {
            if (val == mode.getVal() ) {
                return mode;
            }
        }
        return null;
    }
}
