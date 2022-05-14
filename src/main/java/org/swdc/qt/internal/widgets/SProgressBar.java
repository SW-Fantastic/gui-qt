package org.swdc.qt.internal.widgets;

public class SProgressBar extends SWidget {

    public native long create(long parent);
    public native void dispose(long pointer);

    public native int minimum(long pointer);
    public native int maximum(long pointer);

    public native int value(long pointer);

    public native String text(long pointer);
    public native void setTextVisible(long pointer,boolean visible);
    public native boolean isTextVisible(long pointer);

    public native long alignment(long pointer);
    public native void setAlignment(long pointer,long alignment);

    public native long sizeHint(long pointer);
    public native long minimumSizeHint(long pointer);

    public native int orientation(long pointer);

    public native void setInvertedAppearance(long pointer,boolean invert);
    public native boolean invertedAppearance(long pointer);
    public native void setTextDirection(long pointer,int textDirection);
    public native int textDirection(long pointer);

    public native void setFormat(long pointer,String format);
    public native void resetFormat(long pointer);
    public native String format(long pointer);

    public native void reset(long pointer);
    public native void setRange(long pointer,int minimum, int maximum);
    public native void setMinimum(long pointer,int minimum);
    public native void setMaximum(long pointer,int maximum);
    public native void setValue(long pointer,int value);
    public native void setOrientation(long pointer,long orientation);

}
