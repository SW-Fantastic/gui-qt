package org.swdc.qt.widgets;

public enum SpinBoxButtonSymbol {

    UpDownArrows(0),
    PlusMinus(1),
    NoButtons(2);

    private int val;
    SpinBoxButtonSymbol(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }
}
