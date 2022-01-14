package org.swdc.qt.widgets.graphics;

public enum FontHintingPreference {

    PreferDefaultHinting       (0),
    PreferNoHinting            (1),
    PreferVerticalHinting      (2),
    PreferFullHinting          (3);

    private int val;

    FontHintingPreference(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static FontHintingPreference valueOf(int val) {
        switch (val) {
            case 0: return PreferDefaultHinting;
            case 1: return PreferNoHinting;
            case 2: return PreferVerticalHinting;
            case 3: return PreferFullHinting;
            default:return null;
        }
    }

}
