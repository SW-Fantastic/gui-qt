package org.swdc.qt.widgets.text;

public enum TextLineEdge {

    Leading(0),
    Trailing(1);

    private int val;
    TextLineEdge(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextLineEdge valueOf(int val) {
        for (TextLineEdge e: values()) {
            if (e.getVal() == val) {
                return e;
            }
        }
        return null;
    }
}
