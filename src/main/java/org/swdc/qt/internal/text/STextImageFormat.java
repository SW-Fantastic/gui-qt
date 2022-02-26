package org.swdc.qt.internal.text;

public class STextImageFormat extends STextCharFormat {

    public native long create();
    public native void dispose(long pointer);

    public native void setName(long pointer,String name);
    public native String name(long pointer);

    public native void setWidth(long pointer,double width);
    public native double width(long pointer);

    public native void setHeight(long pointer,double height);
    public native double height(long pointer);

    public native void setQuality(long pointer,int quality);
    public native int quality(long pointer);

}
