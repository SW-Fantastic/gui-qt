package org.swdc.qt.internal.widgets;

public class SSlider extends SAbstractSlider {

    public native long create(long parentPointer);
    public native void dispose(long pointer);

    public native long sizeHint(long pointer);
    public native long minimumSizeHint(long pointer);

    public native void setTickPosition(long pointer,int position);
    public native int tickPosition(long pointer);

    public native void setTickInterval(long pointer,int ti);
    public native int tickInterval(long pointer);

}
