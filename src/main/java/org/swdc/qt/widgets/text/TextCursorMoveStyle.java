package org.swdc.qt.widgets.text;

public enum TextCursorMoveStyle {

    LogicalMoveStyle(0),
    VisualMoveStyle(1);

    private int val;
    TextCursorMoveStyle(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextCursorMoveStyle valueOf(int val) {
        for (TextCursorMoveStyle style : values()) {
            if (style.getVal() == val) {
                return style;
            }
        }
        return null;
    }

}
