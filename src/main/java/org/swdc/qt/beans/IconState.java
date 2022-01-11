package org.swdc.qt.beans;

public enum IconState {

    On(0),Off(1);

    private int val;
    IconState(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static IconState valueOf(int val) {
        switch (val) {
            case 0: return On;
            case 1: return Off;
            default:return null;
        }
    }

}
