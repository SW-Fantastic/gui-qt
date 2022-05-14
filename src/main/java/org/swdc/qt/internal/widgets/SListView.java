package org.swdc.qt.internal.widgets;

import java.util.function.Consumer;

public class SListView extends SAbstractItemView {

    private static final SListView instance = new SListView();
    public static final Consumer<Long> CLEANER = instance::dispose;

    public native long create(long parent);
    public native void dispose(long pointer);

    public native void setMovement(long pointer,int movement);
    public native int movement(long pointer);

    public native void setFlow(long pointer,int flow);
    public native int flow(long pointer);

    public native void setWrapping(long pointer,boolean enable);
    public native boolean isWrapping(long pointer);

    public native void setResizeMode(long pointer,int mode);
    public native int resizeMode(long pointer);

    public native void setLayoutMode(long pointer,int mode);
    public native int layoutMode(long pointer);

    public native void setSpacing(long pointer,int space);
    public native int spacing(long pointer);

    public native void setBatchSize(long pointer,int batchSize);
    public native int batchSize(long pointer);

    public native void setGridSize(long pointer,long size);
    public native long gridSize(long pointer);

    public native void setViewMode(long pointer,int mode);
    public native int viewMode(long pointer);

    public native void clearPropertyFlags(long pointer);

    public native boolean isRowHidden(long pointer,int row);
    public native void setRowHidden(long pointer,int row, boolean hide);

    public native void setModelColumn(long pointer,int column);
    public native int modelColumn(long pointer);

    public native void setUniformItemSizes(long pointer,boolean enable);
    public native boolean uniformItemSizes(long pointer);

    public native void setWordWrap(long pointer,boolean on);
    public native boolean wordWrap(long pointer);

    public native void setSelectionRectVisible(long pointer,boolean show);
    public native boolean isSelectionRectVisible(long pointer);

    public native void setItemAlignment(long pointer,long alignment);
    public native long itemAlignment(long pointer);

    public native long visualRect(long pointer,long index);
    public native void scrollTo(long pointer,long index,int hint);
    public native long indexAt(long pointer,long p);

    public native void doItemsLayout(long pointer);
    public native void reset(long pointer);
    public native void setRootIndex(long pointer,long index);

}
