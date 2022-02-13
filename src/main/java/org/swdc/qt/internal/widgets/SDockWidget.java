package org.swdc.qt.internal.widgets;

public class SDockWidget extends SWidget {

    public native long create(long parentPointer);

    public native void setFeatures(long pointer,int features);

    public native void setFloating(long pointer,boolean floating);
    public native boolean isFloating(long pointer);

    public native void setAllowedAreas(long pointer,int areas);

    public native void setTitleBarWidget(long pointer,long widget);
    public native long titleBarWidget(long pointer);

    public native boolean isAreaAllowed(long pointer,int area);

}