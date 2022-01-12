package org.swdc.qt.widgets.graphics;

public enum RenderHint {

    Antialiasing(0x01),
    TextAntialiasing(0x02),
    SmoothPixmapTransform(0x04),
    Qt4CompatiblePainting(0x20),
    LosslessImageRendering(0x40);

    private long val;
    RenderHint(long val) {
        this.val = val;
    }

    public long getVal() {
        return val;
    }

    public static RenderHint valueOf(long val) {
        RenderHint[] hints = RenderHint.values();
        for (RenderHint item : hints) {
            if (item.getVal() == val) {
                return item;
            }
        }
        return null;
    }
}
