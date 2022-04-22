package org.swdc.qt.internal.widgets;

public class SAbstractSpinBox extends SWidget {

    public native void setCorrectionMode(long pointer,int cm);
    public native int correctionMode(long pointer);

    public native boolean hasAcceptableInput(long pointer);
    public native String text(long pointer);

    public native String specialValueText(long pointer);
    public native void setSpecialValueText(long pointer,String txt);

    public native boolean wrapping(long pointer);
    public native void setWrapping(long pointer,boolean w);

    public native void setReadOnly(long pointer,boolean r);
    public native boolean isReadOnly(long pointer);

    public native void setKeyboardTracking(long pointer,boolean kt);
    public native boolean keyboardTracking(long pointer);

    public native void setAlignment(long pointer,long alignment);
    public native long alignment(long pointer);

    public native void setFrame(long pointer,boolean val);
    public native boolean hasFrame(long pointer);

    public native void setAccelerated(long pointer,boolean on);
    public native boolean isAccelerated(long pointer);

    public native void setGroupSeparatorShown(long pointer,boolean shown);
    public native boolean isGroupSeparatorShown(long pointer);

    public native long sizeHint(long pointer);
    public native long minimumSizeHint(long pointer);
    public native void interpretText(long pointer);

    public native void stepUp(long pointer);
    public native void stepDown(long pointer);
    public native void selectAll(long pointer);
    public native void clear(long pointer);


}
