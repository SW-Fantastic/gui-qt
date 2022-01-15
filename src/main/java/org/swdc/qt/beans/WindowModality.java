package org.swdc.qt.beans;

public enum WindowModality {

    NonModal(0),
    WindowModal(1),
    ApplicationModal(2);

    private int val;
    WindowModality(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static WindowModality valueOf(int val) {
        switch (val) {
            case 0: return NonModal;
            case 1: return WindowModal;
            case 2: return ApplicationModal;
            default:return null;
        }
    }
}
