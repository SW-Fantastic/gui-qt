package org.swdc.qt.internal.common;

import org.swdc.qt.internal.SPointer;

public class SRealPoint extends SPointer {

    public native long create();
    public native long create(double x,double y);

    public native double x(long pointer);
    public native double y(long pointer);
    public native void setX(long pointer,double x);
    public native void setY(long pointer,double y);

    public native long transposed(long pointer);
    public native double manhattanLength(long pointer);
    public native long toPoint(long pointer);

    public native void dispose(long pointer);

}
