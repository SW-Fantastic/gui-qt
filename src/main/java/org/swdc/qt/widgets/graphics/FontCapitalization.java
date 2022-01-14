package org.swdc.qt.widgets.graphics;

public enum FontCapitalization {

    MixedCase(0),
    AllUppercase(1),
    AllLowercase(2),
    SmallCaps(3),
    Capitalize(4);

    private int val;
    FontCapitalization(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static FontCapitalization valueOf(int val) {
        switch (val) {
            case 0: return MixedCase;
            case 1: return AllUppercase;
            case 2: return AllLowercase;
            case 3: return SmallCaps;
            case 4: return Capitalize;
            default:return null;
        }
    }

}
