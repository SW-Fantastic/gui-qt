package org.swdc.qt.widgets.pane;

public enum MidAreaOption {

    DontMaximizeSubWindowOnActivation(0x1);

    private int val;
    MidAreaOption(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static MidAreaOption valueOf(int val) {
        if (val == 0x1) {
            return DontMaximizeSubWindowOnActivation;
        }
        return null;
    }
}
