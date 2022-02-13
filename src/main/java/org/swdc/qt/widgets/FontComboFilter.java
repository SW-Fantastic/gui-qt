package org.swdc.qt.widgets;

public enum FontComboFilter {

    AllFonts (0),
    ScalableFonts (0x1),
    NonScalableFonts (0x2),
    MonospacedFonts (0x4),
    ProportionalFonts (0x8);

    private int val;
    FontComboFilter(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static FontComboFilter valueOf(int val) {
        for (FontComboFilter f: FontComboFilter.values()) {
            if (f.getVal() == val) {
                return f;
            }
        }
        return null;
    }
}
