package org.swdc.qt.internal.widgets;

import org.swdc.qt.internal.SPointer;

import java.util.function.Consumer;

public class SButtonGroup extends SPointer {

    private static final SButtonGroup instance = new SButtonGroup();
    public static final Consumer<Long> CLEANER = instance::dispose;

    public native long create();

    public native void setExclusive(long pointer,boolean val);
    public native boolean exclusive(long pointer);

    public native void addButton(long pointer,long buttonPointer, int id);
    public native void removeButton(long pointer,long buttonPointer);

    public native long[] buttons(long pointer);

    public native long checkedButton(long pointer);

    public native long button(long pointer,int id);
    public native void setId(long pointer,long button, int id);
    public native int id(long pointer,long button);
    public native int checkedId(long pointer);

    public native void dispose(long pointer);

}
