package org.swdc.qt.internal.graphics;

import org.swdc.qt.internal.SPointer;

public class SConicalGradient extends SPointer {

    public native long create();
    public native long create(double cx, double cy, double startAngle);

    public native long center(long pointer);
    public native void setCenter(long pointer,long center);
    public native void setCenter(long pointer,double x, double y);

    public native double angle(long pointer);
    public native void setAngle(long ponter,double angle);

    public native void dispose(long pointer);

}
