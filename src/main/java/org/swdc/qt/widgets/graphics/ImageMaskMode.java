package org.swdc.qt.widgets.graphics;

public enum ImageMaskMode {

    MaskInColor(0),
    MaskOutColor(1);

    private int val;
    ImageMaskMode(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static ImageMaskMode valueOf(int val) {
        switch (val) {
            case 0 : return MaskInColor;
            case 1 : return MaskOutColor;
            default: return null;
        }
    }
}
