package org.swdc.qt.widgets.text;

public enum TextInteractionFlags {


    NoTextInteraction         (0),
    TextSelectableByMouse     (1),
    TextSelectableByKeyboard  (2),
    LinksAccessibleByMouse    (4),
    LinksAccessibleByKeyboard (8),
    TextEditable              (16),

    TextEditorInteraction     (TextSelectableByMouse.getVal()| TextSelectableByKeyboard.getVal() | TextEditable.getVal()),
    TextBrowserInteraction    (TextSelectableByMouse.getVal() | LinksAccessibleByMouse.getVal() | LinksAccessibleByKeyboard.getVal());

    private int val;
    TextInteractionFlags(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextInteractionFlags valueOf(int val) {
        for (TextInteractionFlags flags: TextInteractionFlags.values()) {
            if (flags.getVal() == val) {
                return flags;
            }
        }
        return null;
    }

}
