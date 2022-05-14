package org.swdc.qt.widgets;

public enum ItemViewScrollHint {

    EnsureVisible(0),
    PositionAtTop(1),
    PositionAtBottom(2),
    PositionAtCenter(3);

    private int val;
    ItemViewScrollHint(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static ItemViewScrollHint valueOf(int val) {
        for (ItemViewScrollHint hint : values()) {
            if (hint.getVal() == val) {
                return hint;
            }
        }
        return null;
    }
}
