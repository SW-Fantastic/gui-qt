package org.swdc.qt.internal.text;

import org.swdc.qt.internal.SPointer;

/**
 * QTextLayout::FormatRange
 */
public class STextLayoutFormatRange extends SPointer {

    public native long create();
    public native void dispose(long pointer);

    public native int start(long pointer);
    public native void start(long pointer, int val);
    public native int length(long pointer);
    public native void length(long pointer, int length);
    public native long format(long pointer);
    public native void format(long pointer,long formatPointer);


}
