package org.swdc.qt.internal.widgets;

import java.util.function.Consumer;

public class SSpinBox extends SAbstractSpinBox {

    private static final SSpinBox instance = new SSpinBox();
    public static final Consumer<Long> CLEANER = instance::dispose;

    public native long create(long parentPointer);
    public native void dispose(long pointer);

    public native int value(long pointer);

    public native String prefix(long pointer);
    public native void setPrefix(long pointer,String prefix);

    public native String suffix(long pointer);
    public native void setSuffix(long pointer,String suffix);

    public native String cleanText(long pointer);

    public native int singleStep(long pointer);
    public native void setSingleStep(long pointer,int val);

    public native int minimum(long pointer);
    public native void setMinimum(long pointer,int min);

    public native int maximum(long pointer);
    public native void setMaximum(long pointer,int max);

    public native void setRange(long pointer,int min, int max);

    public native int stepType(long pointer);
    public native void setStepType(long pointer,int stepType);

    public native int displayIntegerBase(long pointer);
    public native void setDisplayIntegerBase(long pointer,int base);
    public native void setValue(long pointer,int val);

}
