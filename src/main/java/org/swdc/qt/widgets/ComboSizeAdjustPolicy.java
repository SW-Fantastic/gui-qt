package org.swdc.qt.widgets;

public enum ComboSizeAdjustPolicy {

    AdjustToContents(0),
    AdjustToContentsOnFirstShow(1),
    AdjustToMinimumContentsLengthWithIcon(3);

    private int val;
    ComboSizeAdjustPolicy(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static ComboSizeAdjustPolicy valueOf(int val) {
        for (ComboSizeAdjustPolicy size: ComboSizeAdjustPolicy.values()) {
            if (size.getVal() == val) {
                return size;
            }
        }
        return null;
    }
}
