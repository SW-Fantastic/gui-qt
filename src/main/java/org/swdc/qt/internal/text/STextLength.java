package org.swdc.qt.internal.text;

import org.swdc.qt.internal.SPointer;

public class STextLength extends SPointer {

    public native long create(int type, double value);
    public native void dispose(long pointer);

    public native int type(long pointer);
    public native double value(long pointer,double maximumLength);

    public native double rawValue(long pointer);

}
