package org.swdc.qt.internal.widgets;

public class SFrame extends SWidget {

    public native long create(long parent);

    public native int lineWidth(long pointer);
    public native void setLineWidth(long pointer,int width);

    public native int midLineWidth(long pointer);
    public native void setMidLineWidth(long pointer,int val);

    public native long frameRect(long pointer);
    public native void setFrameRect(long pointer,long rect);

    public native int frameShape(long pointer);
    public native void setFrameShape(long pointer,int shape);
    public native int frameShadow(long pointer);
    public native void setFrameShadow(long pointer,int shadow);



}
