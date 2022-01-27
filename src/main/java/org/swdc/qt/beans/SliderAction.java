package org.swdc.qt.beans;

public enum SliderAction {

    SliderNoAction(0),
    SliderSingleStepAdd(1),
    SliderSingleStepSub(2),
    SliderPageStepAdd(3),
    SliderPageStepSub(4),
    SliderToMinimum(5),
    SliderToMaximum(6),
    SliderMove(7);

    private int val;
    SliderAction(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static SliderAction valueOf(int val) {
        for (SliderAction action : SliderAction.values()) {
            if (action.getVal() == val) {
                return action;
            }
        }
        return null;
    }
}
