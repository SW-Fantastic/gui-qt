package org.swdc.qt.internal.graphics;

import java.util.function.Consumer;

public class SRadialGradient extends SGradient {

    private static final SRadialGradient instance = new SRadialGradient();
    public static final Consumer<Long> CLEANER = instance::dispose;

    public native long create();
    public native long create(double cx, double cy, double radius, double fx, double fy);

    public native long center(long pointer);
    public native void setCenter(long pointer,long center);
    public native void setCenter(long pointer,double x, double y);

    public native long focalPoint(long pointer);
    public native void setFocalPoint(long pointer,long focalPoint);
    public native void setFocalPoint(long pointer,double x, double y);

    public native double radius(long pointer);
    public native void setRadius(long pointer,double radius);

    public native double centerRadius(long pointer);
    public native void setCenterRadius(long pointer,double radius);

    public native long focalRadius(long pointer);
    public native void setFocalRadius(long pointer,double radius);

    public native void dispose(long pointer);

}
