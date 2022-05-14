package org.swdc.qt.internal.graphics;

import org.swdc.qt.internal.SPointer;

import java.util.function.Consumer;

public class SLinearGradient extends SGradient {

    private static final SLinearGradient instance = new SLinearGradient();
    public static final Consumer<Long> CLEANER = instance::dispose;

    public native long create();
    public native long create(double startX,double startY, double endX, double endY);

    public native long start(long pointer);
    public native void setStart(long pointer,long startRealPoint);
    public native void setStart(long pointer,double x, double y);

    public native long finalStop(long pointer);
    public native void setFinalStop(long pointer,long stopRealPoint);
    public native void setFinalStop(long pointer,double x, double y);

    public native void dispose(long pointer);

}
