package org.swdc.qt.beans;

public enum TextBlockLineHeightTypes {

    SingleHeight(0),
    ProportionalHeight(1),
    FixedHeight(2),
    MinimumHeight(3),
    LineDistanceHeight(4);

    private int val;
    TextBlockLineHeightTypes(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextBlockLineHeightTypes valueOf(int val) {
        for (TextBlockLineHeightTypes type: TextBlockLineHeightTypes.values()) {
            if (type.getVal() == val) {
                return type;
            }
        }
        return null;
    }
}
