package org.swdc.qt.internal.graphics;

public class SRgb {

    private long val;

    public SRgb(long val) {
        this.val = val;
    }

    public SRgb(int red, int green, int blue, double alpha) {
        this.val = rgbValue(red,green,blue,alpha);
    }

    public SRgb(String colorStr) {
        this.val = this.rgbValue(colorStr);
    }

    public long getVal() {
        return val;
    }

    public void setVal(long val) {
        this.val = val;
    }

    public native int red(long val);

    public native int blue(long val);

    public native int green(long val);

    public native int alpha(long val);

    public native long rgbValue(int red, int blue, int green, double alpha);

    public native long rgbValue(String colorStr);

    public native String toHexString(long val);

    public native String toRgbString(long val);

}
