package org.swdc.qt.widgets.graphics;

public enum FontStyleHint {

    Helvetica(0),
    Times(1),
    Courier(2),
    OldEnglish(3),
    System(4),
    AnyStyle(5),
    Cursive(6),
    Monospace(7),
    Fantasy(8);

    private int val;
    FontStyleHint(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static FontStyleHint valueOf(int val) {
        for (FontStyleHint item : FontStyleHint.values()) {
            if (item.getVal() == val) {
                return item;
            }
        }
        return null;
    }

}
