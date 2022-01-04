package org.swdc.qt.widgets.action;

public enum ToolArrowType {
    NoArrow(0),
    UpArrow(1),
    DownArrow(2),
    LeftArrow(3),
    RightArrow(4);

    private int val;
    ToolArrowType(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static ToolArrowType valueOf(int val) {
        switch (val) {
            case 0: return NoArrow;
            case 1: return UpArrow;
            case 2: return DownArrow;
            case 3: return LeftArrow;
            case 4: return RightArrow;
            default:
                return null;
        }
    }
}
