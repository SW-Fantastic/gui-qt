package org.swdc.qt.internal.common;

import org.swdc.qt.internal.SPointer;

import java.util.function.Consumer;

public class SMargins extends SPointer {

    private static final SMargins instance = new SMargins();
    public static final Consumer<Long> CLEANER = instance::dispose;

    public native long create();
    public native long create(int left, int top, int right, int bottom);

    public native int left(long pointer);
    public native int top(long pointer);
    public native int right(long pointer);
    public native int bottom(long pointer);

    public native void setLeft(long pointer,int left);
    public native void setTop(long pointer,int top);
    public native void setRight(long pointer,int right);
    public native void setBottom(long pointer,int bottom);

    public native void dispose(long pointer);

}
