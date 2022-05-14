package org.swdc.qt.internal.common;

import org.swdc.qt.internal.SPointer;

import java.util.function.Consumer;

public class SLine extends SPointer {

    private static final SLine instance = new SLine();
    public static final Consumer<Long> CLEANER = instance::dispose;

    public native long create();

    public native long p1(long pointer);
    public native long p2(long pointer);

    public native int x1(long pointer);
    public native int y1(long pointer);

    public native int x2(long pointer);
    public native int y2(long pointer);

    public native int dx(long pointer);
    public native int dy(long pointer);

    public native void translate(long pointer,long pointPointer);
    public native void translate(long pointer,int dx, int dy);

    public native long translated(long pointer,long pointPointer);
    public native long translated(long pointer,int dx, int dy);

    public native long center(long pointer);

    public native void setP1(long pointer,long pointPointer1);
    public native void setP2(long pointer,long pointPointer2);
    public native void setPoints(long pointer,long pointPointer1, long pointPointer2);
    public native void setLine(long pointer,int x1, int y1, int x2, int y2);

    public native void dispose(long pointer);

}
