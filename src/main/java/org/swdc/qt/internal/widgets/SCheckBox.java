package org.swdc.qt.internal.widgets;

import org.swdc.qt.internal.SPointer;

public class SCheckBox extends SAbstractButton {

    public native long create(long parent);
    public native long sizeHint(long pointer);
    public native long minimumSizeHint(long pointer);

    public native void setTristate(long pointer,boolean y);
    public native boolean isTristate(long pointer);

    public native int checkState(long pointer);
    public native void setCheckState(long pointer, int state);

}
