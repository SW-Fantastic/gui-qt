package org.swdc.qt.internal.graphics;


public class SBitmap extends SPixmap {

    public native long create(long sPixmapPointer);
    public native long create(int w, int h);
    public native long create(String absolutePath, String format);

    public native void swap(long pointer,long otherBitmap);
    public native void clear(long pointer);
    public native long transformed(long pointer,long transactionPointer);

    public native void dispose(long pointer);

}
