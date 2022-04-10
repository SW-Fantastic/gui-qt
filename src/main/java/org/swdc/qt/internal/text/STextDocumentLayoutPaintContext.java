package org.swdc.qt.internal.text;

import org.swdc.qt.internal.SPointer;

/**
 * QAbstractTextDocumentLayout::PaintContext
 */
public class STextDocumentLayoutPaintContext extends SPointer {

    public native long create();
    public native void dispose(long pointer);

    public native int cursorPosition(long pointer);
    public native void cursorPosition(long pointer,int val);
    public native long palette(long pointer);
    public native void palette(long pointer,long palettePointer);
    public native long clip(long pointer);
    public native void clip(long pointer, long rectF);
    public native long[] selections(long pointer);
    public native void selections(long pointer, long[] selections);

}
