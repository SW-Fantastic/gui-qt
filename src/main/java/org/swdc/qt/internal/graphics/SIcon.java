package org.swdc.qt.internal.graphics;

import org.swdc.qt.internal.SPointer;

public class SIcon extends SPointer {

    public native long create();
    public native long createWithFile(String filePath);
    public native long createWithPixmap(long pixmapPointer);

    public native long actualSize(long pointer,long sizePointer, int iconMode, int iconState);
    public native String name(long pointer);

    public native void paint(long pointer,long painter, long rect, long alignment, int iconMode, int iconState);
    public native void paint(long pointer,long painter, int x, int y, int w, int h,long alignment, int iconMode, int iconState);

    public native void addPixmap(long pointer, long pixmap, int iconMode, int iconState);
    public native void addFile(long pointer,String fileName, long sizePointer, int iconMode, int state);

    public native void setIsMask(long pointer,boolean isMask);
    public native boolean isMask(long pointer);

    public native void dispose(long pointer);

}
