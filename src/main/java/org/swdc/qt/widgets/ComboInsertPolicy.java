package org.swdc.qt.widgets;

public enum ComboInsertPolicy {

    NoInsert(0),
    InsertAtTop(1),
    InsertAtCurrent(2),
    InsertAtBottom(3),
    InsertAfterCurrent(4),
    InsertBeforeCurrent(5),
    InsertAlphabetically(6);

    private int val;
    ComboInsertPolicy(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static ComboInsertPolicy valueOf(int val) {
        for (ComboInsertPolicy p: ComboInsertPolicy.values()) {
            if (p.getVal() == val) {
                return p;
            }
        }
        return null;
    }

}
