package org.swdc.qt.internal.widgets;


public class SKeySequenceEdit extends SWidget {

    public native long create(long pointer);
    public native void dispose(long pointer);

    public native void setKeySequence(long pointer,long keySequence);
    public native void clear(long pointer);
    public native long keySequence(long pointer);
}
