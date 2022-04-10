package org.swdc.qt.beans;

public enum InputMethodQuery {

    ImEnabled(0x1),
    ImCursorRectangle(0x2),
    ImFont(0x4),
    ImCursorPosition(0x8),
    ImSurroundingText(0x10),
    ImCurrentSelection(0x20),
    ImMaximumTextLength(0x40),
    ImAnchorPosition(0x80),
    ImHints(0x100),
    ImPreferredLanguage(0x200),

    ImAbsolutePosition(0x400),
    ImTextBeforeCursor(0x800),
    ImTextAfterCursor(0x1000),
    ImEnterKeyType(0x2000),
    ImAnchorRectangle(0x4000),
    ImInputItemClipRectangle(0x8000),

    ImPlatformData(0x80000000),
    ImQueryInput(ImCursorRectangle.val |
            ImCursorPosition.val |
            ImSurroundingText.val |
            ImCurrentSelection.val |
            ImAnchorRectangle.val |
            ImAnchorPosition.val
    ),
    ImQueryAll(0xffffffff);

    private int val;
    InputMethodQuery(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static InputMethodQuery valueOf(int val) {
        for (InputMethodQuery q: InputMethodQuery.values()) {
            if (q.getVal() == val) {
                return q;
            }
        }
        return null;
    }

}
