package org.swdc.qt.widgets.action;

public enum ActionPriority {

    LowPriority(0),
    NormalPriority(128),
    HighPriority(256);

    private int val;
    ActionPriority(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static ActionPriority valueOf(int val) {
        switch (val) {
            case 0:
                return LowPriority;
            case 1:
                return NormalPriority;
            case 2:
                return HighPriority;
            default:
                return null;
        }
    }
}
