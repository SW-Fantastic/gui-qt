package org.swdc.qt.widgets.graphics;

public enum IconMode {

    Normal(0), Disabled(1), Active(2), Selected(3);

    private int val;
    IconMode(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static IconMode valueOf(int val) {
        switch (val) {
            case 0: return Normal;
            case 1: return Disabled;
            case 2: return Active;
            case 3: return Selected;
            default:return null;
        }
    }
}
