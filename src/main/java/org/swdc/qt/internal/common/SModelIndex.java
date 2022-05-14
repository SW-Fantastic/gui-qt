package org.swdc.qt.internal.common;

import org.swdc.qt.internal.SPointer;

import java.util.function.Consumer;

public class SModelIndex extends SPointer {

    private static final SModelIndex instance = new SModelIndex();
    public static final Consumer<Long> CLEANER = instance::dispose;

    public native int row(long pointer);
    public native int column(long pointer);
    public native long parent(long pointer);
    public native long sibling(long pointer,int row, int column);
    public native long siblingAtColumn(long pointer,int column);
    public native long siblingAtRow(long pointer,int row);

    public native long data(long pointer,int role);
    public native void dispose(long pointer);
    //public native void wrap(long address);



}
