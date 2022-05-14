package org.swdc.qt.internal.text;

import org.swdc.qt.internal.SPointer;

import java.util.function.Consumer;

/**
 * QAbstractTextDocumentLayout::PaintContext
 */
public class STextDocumentLayoutPaintContext extends SPointer {

    private static final STextDocumentLayoutPaintContext instance = new STextDocumentLayoutPaintContext();
    public static final Consumer<Long> CLEANER = instance::dispose;

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
