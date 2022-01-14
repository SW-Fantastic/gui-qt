package org.swdc.qt.widgets.graphics;

public enum FontStyleStrategy {

    PreferDefault      (0x0001),
    PreferBitmap       (0x0002),
    PreferDevice       (0x0004),
    PreferOutline      (0x0008),
    ForceOutline       (0x0010),
    PreferMatch        (0x0020),
    PreferQuality      (0x0040),
    PreferAntialias    (0x0080),
    NoAntialias        (0x0100),
    NoSubpixelAntialias(0x0800),
    PreferNoShaping    (0x1000),
    NoFontMerging      (0x8000);

    private long val;
    FontStyleStrategy(long val) {
        this.val = val;
    }

    public long getVal() {
        return val;
    }

    public static FontStyleStrategy valueOf(long val) {
        for (FontStyleStrategy stg: FontStyleStrategy.values()) {
            if (stg.getVal() == val) {
                return stg;
            }
        }
        return null;
    }

}
