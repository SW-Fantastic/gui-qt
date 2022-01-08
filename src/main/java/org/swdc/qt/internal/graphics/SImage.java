package org.swdc.qt.internal.graphics;

import org.swdc.qt.internal.SPointer;

public class SImage extends SPointer {

    public native long create(byte[] data);
    public native long create(String absolutePath);

    public native int width(long pointer);
    public native int height(long pointer);
    public native long size(long pointer);
    public native long rect(long pointer);

    public native int depth(long pointer);
    public native int colorCount(long pointer);
    public native int bitPlaneCount(long pointer);

    public native boolean allGray(long pointer);
    public native boolean isGrayscale(long pointer);

    public native long copy(long pointer,int x, int y, int w, int h);
    public native int format(long pointer);

    public native SRgb color(long pointer,int i);
    public native void setColor(long pointer,int i, long rgb);
    public native void setColorCount(long pointer,int count);

    public native boolean valid(long pointer,int x, int y);
    public native int pixelIndex(long pointer,int x, int y);

    public native SRgb pixel(long pointer,int x, int y);
    public native void setPixel(long pointer,int x, int y, long index_or_rgb);

    public native boolean hasAlphaChannel(long pointer);
    public native void setAlphaChannel(long pointer,long alphaChannelImage);
    public native long alphaChannel(long pointer);

    public native long createAlphaMask(long pointer,long val);
    public native long createHeuristicMask(long pointer,boolean clipTight);
    public native long createMaskFromColor(long pointer,long colorRgb, int maskMode);

    public native long scaled(long pointer,int width, int height, int aspectMode, int transformationMode);
    public native long scaledToWidth(long pointer,int w,int transformationMode);
    public native long scaledToHeight(long pointer,int h, int transformationMode);
    public native long transformed(long pointer,long matrixPointer, int mode);

    public native long mirrored(long pointer,boolean horizontally, boolean vertically);
    public native long rgbSwapped(long pointer);

    public native boolean load(long pointer,String fileName);
    public native boolean loadFromData(long pointer,byte[] data);

    public native boolean save(long pointer,String fileName,String format);

    public static native long fromData(byte[] data);

    public native void dispose(long pointer);

}
