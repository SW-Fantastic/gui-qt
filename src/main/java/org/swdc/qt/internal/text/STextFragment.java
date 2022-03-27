package org.swdc.qt.internal.text;

import org.swdc.qt.internal.SPointer;

public class STextFragment extends SPointer {

    public native long create();
    public native long create(long anotherFragmentPointer);
    public native void dispose(long pointer);

    public native int position(long pointer);
    public native int length(long pointer);
    public native boolean contains(long pointer,int position);

    public native long charFormat(long pointer);
    public native int charFormatIndex(long pointer);
    public native String text(long pointer);

}
