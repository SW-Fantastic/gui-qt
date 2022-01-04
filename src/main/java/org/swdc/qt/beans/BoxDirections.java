package org.swdc.qt.beans;

public enum BoxDirections {


    LEFT_TO_RIGHT(0),
    RIGHT_TO_LEFT(1),
    TOP_TO_BOTTOM(2),
    BOTTOM_TO_TOP(3),
    DOWN(TOP_TO_BOTTOM.value),
    UP(BOTTOM_TO_TOP.value);

    public final int value;
    BoxDirections(int val) {
        this.value = val;
    }

    public int getValue() {
        return value;
    }

    public static BoxDirections valueOf(int val) {
        switch (val) {
            case 0:
                return BoxDirections.LEFT_TO_RIGHT;
            case 1:
                return BoxDirections.RIGHT_TO_LEFT;
            case 2:
                return BoxDirections.TOP_TO_BOTTOM;
            case 3:
                return BoxDirections.BOTTOM_TO_TOP;
            default:
                return null;
        }
    }

}
