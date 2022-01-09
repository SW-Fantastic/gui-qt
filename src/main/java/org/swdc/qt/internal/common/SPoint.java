package org.swdc.qt.internal.common;

import org.swdc.qt.internal.SPointer;

public class SPoint extends SPointer {

    public native long create();
    public native long create(int x,int y);

    public native int x(long pointer);
    public native int y(long pointer);
    public native void setX(long pointer,int x);
    public native void setY(long pointer,int y);

    public native int manhattanLength(long pointer);
    public native long transposed(long pointer);

    public native void dispose(long pointer);


}
