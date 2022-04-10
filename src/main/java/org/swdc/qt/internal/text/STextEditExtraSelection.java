package org.swdc.qt.internal.text;

import org.swdc.qt.internal.SPointer;

public class STextEditExtraSelection extends SPointer {

    public native long create();
    public native void dispose(long pointer);

    public native long cursor(long pointer);
    public native void cursor(long pointer,long cursorPointer);
    public native long format(long pointer);
    public native void format(long pointer, long formatPointer);


}
