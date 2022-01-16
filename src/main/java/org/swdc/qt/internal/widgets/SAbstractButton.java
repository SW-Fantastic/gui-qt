package org.swdc.qt.internal.widgets;

public abstract class SAbstractButton extends SWidget {

    public native void setText(long pointer,String text);
    public native String getText(long pointer);

    public native void setCheckable(long pointer,boolean val);
    public native boolean isCheckable(long pointer);

    public native boolean isChecked(long pointer);
    public native void setDown(long pointer,boolean val);
    public native boolean isDown(long pointer);

    public native void setAutoRepeat(long pointer,boolean val);
    public native boolean autoRepeat(long pointer);

    public native void setAutoRepeatDelay(long pointer,int value);
    public native int autoRepeatDelay(long pointer);

    public native void setAutoRepeatInterval(long pointer,int val);
    public native int autoRepeatInterval(long pointer);

    public native void setAutoExclusive(long pointer,boolean val);
    public native boolean autoExclusive(long pointer);

    public native void setChecked(long pointer,boolean checked);

    public native void setIcon(long pointer,long icon);
    public native long icon(long pointer);

    public native long iconSize(long pointer);
    public native void setIconSize(long pointer,long size);

}
