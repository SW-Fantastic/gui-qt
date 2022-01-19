package org.swdc.qt.widgets.dialogs;

public enum DialogCode {

    Rejected(0), Accepted(1);

    private int val;
    DialogCode(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static DialogCode valueOf(int val) {
        switch (val) {
            case 0: return Rejected;
            case 1: return Accepted;
            default:return null;
        }
    }
}
