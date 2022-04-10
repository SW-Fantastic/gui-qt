package org.swdc.qt.widgets.text;

public enum TextLineCursorPosition {

    CursorBetweenCharacters(0),
    CursorOnCharacter(1);

    private int val;
    TextLineCursorPosition(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextLineCursorPosition valueOf(int val) {
        for (TextLineCursorPosition pos: values()) {
            if (pos.getVal() == val) {
                return pos;
            }
        }
        return null;
    }
}
