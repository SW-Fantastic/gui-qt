package org.swdc.qt.internal.text;

import org.swdc.qt.internal.SPointer;

import java.util.function.Consumer;

/**
 * QAbstractTextDocumentLayout::Selection。
 */
public class STextDocumentLayoutSelection extends SPointer {

    private static final STextDocumentLayoutSelection instance = new STextDocumentLayoutSelection();
    public static final Consumer<Long> CLEANER = instance::dispose;

    public native long create();
    public native void dispose(long pointer);

    public native long cursor(long pointer);
    public native void cursor(long pointer, long cursor);

    public native long format(long pointer);
    public native void format(long pointer, long format);
}
