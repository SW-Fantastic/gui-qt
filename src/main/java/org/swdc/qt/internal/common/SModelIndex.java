package org.swdc.qt.internal.common;

import org.swdc.qt.internal.SPointer;

public class SModelIndex extends SPointer {

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
