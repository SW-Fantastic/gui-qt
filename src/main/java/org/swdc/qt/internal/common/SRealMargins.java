package org.swdc.qt.internal.common;

import org.swdc.qt.internal.SPointer;

import java.util.function.Consumer;

public class SRealMargins extends SPointer {

    private static final SRealMargins instance = new SRealMargins();
    public static final Consumer<Long> CLEANER = instance::dispose;

    public native long create();
    public native long create(double left, double top, double right, double bottom);

    public native double left(long pointer);
    public native double top(long pointer);
    public native double right(long pointer);
    public native double bottom(long pointer);

    public native void setLeft(long pointer,double left);
    public native void setTop(long pointer,double top);
    public native void setRight(long pointer,double right);
    public native void setBottom(long pointer,double bottom);

    public native void dispose(long pointer);

}
