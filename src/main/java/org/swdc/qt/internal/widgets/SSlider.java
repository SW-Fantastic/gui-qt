package org.swdc.qt.internal.widgets;

import java.util.function.Consumer;

public class SSlider extends SAbstractSlider {

    private static final SSlider instance = new SSlider();
    public static final Consumer<Long> CLEANER = instance::dispose;

    public native long create(long parentPointer);
    public native void dispose(long pointer);

    public native long sizeHint(long pointer);
    public native long minimumSizeHint(long pointer);

    public native void setTickPosition(long pointer,int position);
    public native int tickPosition(long pointer);

    public native void setTickInterval(long pointer,int ti);
    public native int tickInterval(long pointer);

}
