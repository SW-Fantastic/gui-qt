package org.swdc.qt.internal.graphics;

import org.swdc.qt.internal.SPointer;

import java.util.function.Consumer;

public class SPixmap extends SPointer {

    private static final SPixmap instance = new SPixmap();
    public  static final Consumer<Long> CLEANER = instance::dispose;

    public native long create(int width, int height);
    public native long create(String absolutePath);

    public native int width(long pointer);
    public native int height(long pointer);
    public native long size(long pointer);
    public native long rect(long pointer);
    public native int depth(long pointer);

    public native void fill(long pointer,long color);

    public native double devicePixelRatio(long pointer);
    public native void setDevicePixelRatio(long pointer,double scaleFactor);

    public native boolean hasAlpha(long pointer);
    public native boolean hasAlphaChannel(long pointer);

    public native long scaled(long pointer,int width, int height, int aspectMode,int transformationMode);
    public native long scaledToWidth(long pointer,int w, int transformationMode);
    public native long scaledToHeight(long pointer,int h, int transformationMode);

    public native long transformed(long pointer,long transformPointer, int transformationMode);
    public native long toImage(long pointer);

    public native boolean load(long pointer,String absolutePath, String format, long conversation);
    public native boolean loadFromData(long pointer,byte[] data, String format, long conversation);
    public native boolean save(long pointer,String absolutePath, String format);
    public native boolean convertFromImage(long pointer,long pointerImage, long conversation);
    public native long copy(long pointer,int x, int y, int width, int height);
    public native boolean isQBitmap(long pointer);

    public native long mask(long pointer);
    public native void setMask(long pointer,long bitmapPointer);
    public native long createHeuristicMask(long pointer,boolean clipTight);
    public native long createMaskFromColor(long pointer,long maskColor, int imageMaskMode);

    public native void dispose(long pointer);

    public static native long grabWidget(long widgetPointer, int x, int y, int w, int h);
    public static native long fromImage(long imagePointer, long conversation);


}
