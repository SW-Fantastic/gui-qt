package org.swdc.qt.widgets;

public enum SpinBoxCorrectionMode {

    CorrectToPreviousValue(0),
    CorrectToNearestValue(1);

    private int val;

    SpinBoxCorrectionMode(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static SpinBoxCorrectionMode valueOf(int val) {
        switch (val) {
            case 0: return CorrectToPreviousValue;
            case 1: return CorrectToNearestValue;
            default:return null;
        }
    }
}
