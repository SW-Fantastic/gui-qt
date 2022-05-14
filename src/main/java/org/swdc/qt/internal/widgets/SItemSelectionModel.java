package org.swdc.qt.internal.widgets;

import org.swdc.qt.internal.SPointer;

import java.util.function.Consumer;

public class SItemSelectionModel extends SPointer {

    private static final SItemSelectionModel instance = new SItemSelectionModel();
    public static final Consumer<Long> CLEANER = instance::dispose;

    public native long create(long modelPointer);
    public native void dispose(long pointer);

    public native long currentIndex(long pointer) ;

    public native boolean isSelected(long pointer,long index) ;
    public native boolean isRowSelected(long pointer,int row,long parent) ;
    public native boolean isColumnSelected(long pointer,int column,long parent) ;

    public native boolean rowIntersectsSelection(long pointer,int row, long parent) ;
    public native boolean columnIntersectsSelection(long pointer,int column, long parent) ;

    public native boolean hasSelection(long pointer);

    public native long[] selectedIndexes(long pointer);
    public native long[] selectedRows(long pointer,int column);
    public native long[] selectedColumns(long pointer,int row);

    public native long model(long pointer);

    public native void setModel(long pointer,long model);

    public native void setCurrentIndex(long pointer,long index,int itemSelectionFlags);
    public native void select(long pointer,long index, int itemSelectionFlags);
    public native void clear(long pointer);
    public native void reset(long pointer);

    public native void clearSelection(long pointer);
    public native void clearCurrentIndex(long pointer);

}
