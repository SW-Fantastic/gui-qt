package org.swdc.qt.internal.widgets;


import java.util.function.Consumer;

public class SKeySequenceEdit extends SWidget {

    private static final SKeySequenceEdit instance = new SKeySequenceEdit();
    public static final Consumer<Long> CLEANER = instance::dispose;

    public native long create(long pointer);
    public native void dispose(long pointer);

    public native void setKeySequence(long pointer,long keySequence);
    public native void clear(long pointer);
    public native long keySequence(long pointer);
}
