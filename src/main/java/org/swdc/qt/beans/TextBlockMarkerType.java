package org.swdc.qt.beans;

public enum TextBlockMarkerType {

    NoMarker(0),
    Unchecked(1),
    Checked(2);

    private int val;
    TextBlockMarkerType(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextBlockMarkerType valueOf(int val) {
        switch (val) {
            case 0: return NoMarker;
            case 1: return Unchecked;
            case 2: return Checked;
            default: return null;
        }
    }
}
