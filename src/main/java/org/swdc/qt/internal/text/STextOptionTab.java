package org.swdc.qt.internal.text;

import org.swdc.qt.internal.SPointer;

public class STextOptionTab extends SPointer {

    public native long create();
    public native long create(double pos, int tabType, char delim);

    public native void dispose(long pointer);

    public native double position(long pointer);
    public native void position(long pointer,double val);
    public native int type(long pointer);
    public native void type(long pointer, int type);
    public native char delimiter(long pointer);
    public native void delimiter(long pointer, char delim);

}
