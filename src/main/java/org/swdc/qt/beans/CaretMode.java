package org.swdc.qt.beans;

public enum CaretMode {

    CaretAtZero(0),
    CaretAtOffset(1),
    CaretWontMatch(2);

    private int val;
    CaretMode(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static CaretMode valueOf(int val) {
        for (CaretMode mode: CaretMode.values()) {
            if (mode.getVal() == val) {
                return mode;
            }
        }
        return null;
    }
}
