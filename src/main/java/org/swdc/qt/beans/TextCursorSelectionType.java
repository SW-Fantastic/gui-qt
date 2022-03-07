package org.swdc.qt.beans;

public enum TextCursorSelectionType {

    WordUnderCursor(0),
    LineUnderCursor(1),
    BlockUnderCursor(2),
    Document(3);
    private int val;
    TextCursorSelectionType(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextCursorSelectionType valueOf(int val) {
        for (TextCursorSelectionType type: TextCursorSelectionType.values()) {
            if (type.getVal() == val) {
                return type;
            }
        }
        return null;
    }
}
