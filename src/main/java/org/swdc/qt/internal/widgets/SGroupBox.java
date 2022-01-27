package org.swdc.qt.internal.widgets;

public class SGroupBox extends SWidget {

    public native long create(long parent);
    public native String title(long pointer);
    public native void setTitle(long pointer,String title);

    public native long alignment(long pointer);
    public native void setAlignment(long pointer,long alignment);

    public native long minimumSizeHint(long pointer);

    public native boolean isFlat(long pointer);
    public native void setFlat(long pointer,boolean flat);
    public native boolean isCheckable(long pointer);
    public native void setCheckable(long pointer,boolean checkable);
    public native boolean isChecked(long pointer);
    public native void setChecked(long pointer,boolean checked);

}
