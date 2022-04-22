package org.swdc.qt.widgets;

public enum SpinBoxStepType {

    DefaultStepType(0),
    AdaptiveDecimalStepType(1);

    private int val;
    SpinBoxStepType(int val){
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static SpinBoxStepType valueOf(int val) {
        switch (val) {
            case 0: return DefaultStepType;
            case 1: return AdaptiveDecimalStepType;
            default:return null;
        }
    }
}
