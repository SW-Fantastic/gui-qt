package org.swdc.qt.beans;

public enum CaseSensitive {

    CaseInsensitive(0),
    CaseSensitive(1);

    private int val;
    CaseSensitive(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static CaseSensitive valueOf(int val) {
        switch (val) {
            case 0: return CaseInsensitive;
            case 1: return CaseSensitive;
            default:return null;
        }
    }
}
