package org.swdc.qt.widgets;

public enum TickPosition {

    NoTicks (0),
    TicksAbove (1),
    TicksLeft (TicksAbove.val),
    TicksBelow (2),
    TicksRight ( TicksBelow.val),
    TicksBothSides (3);

    private int val;

    TickPosition(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TickPosition valueOf(int val) {
        for (TickPosition pos : values()) {
            if (pos.getVal() == val) {
                return pos;
            }
        }
        return null;
    }
}
