package org.swdc.qt.internal.graphics;

import org.swdc.qt.internal.SPointer;

public class SBrush extends SPointer {

    public native long create();

    public native int style(long pointer);
    public native void setStyle(long pointer,int style);

    public native long transform(long pointer);
    public native void setTransform(long pointer,long transformPointer);

    public native long texture(long pointer);
    public native void setTexture(long pointer,long pixmapPointer);

    public native long textureImage(long pointer);
    public native void setTextureImage(long pointer,long imagePointer);

    public native long color(long pointer);
    public native void setColor(long pointer,long color);

    //private native long gradient();

    public native boolean isOpaque(long pointer);

    public native void dispose(long pointer);



}
