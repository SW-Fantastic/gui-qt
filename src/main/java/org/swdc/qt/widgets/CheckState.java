package org.swdc.qt.widgets;

public enum CheckState {

    Unchecked(0),
    PartiallyChecked(1),
    Checked(2);

    private int val;
    CheckState(int val) {
        this.val = val;
    }
    public int getVal() {
        return val;
    }

    public static CheckState valueOf(int val) {
        switch (val) {
            case 0: return Unchecked;
            case 1: return PartiallyChecked;
            case 2: return Checked;
            default:return null;
        }
    }
}
