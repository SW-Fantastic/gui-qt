package org.swdc.qt.internal.widgets;

public class SAbstractItemView extends SAbstractScrollArea {

    public native void setModel(long pointer,long model);
    public native long model(long pointer);

    public native void setSelectionModel(long pointer,long selectionModel);
    public native long selectionModel(long pointer);

    // void setItemDelegate(QAbstractItemDelegate *delegate);
    // QAbstractItemDelegate *itemDelegate() ;

    public native void setSelectionMode(long pointer,int mode);
    public native int selectionMode(long pointer);

    public native void setSelectionBehavior(long pointer,int behavior);
    public native int selectionBehavior(long pointer);

    public native long currentIndex(long pointer);
    public native long rootIndex(long pointer);

    public native void setEditTriggers(long pointer,int triggers);

    public native void setVerticalScrollMode(long pointer,int mode);
    public native int verticalScrollMode(long pointer) ;
    public native void resetVerticalScrollMode(long pointer);

    public native void setHorizontalScrollMode(long pointer,int mode);
    public native int horizontalScrollMode(long pointer) ;
    public native void resetHorizontalScrollMode(long pointer);

    public native void setAutoScroll(long pointer,boolean enable);
    public native boolean hasAutoScroll(long pointer) ;

    public native void setAutoScrollMargin(long pointer,int margin);
    public native int autoScrollMargin(long pointer) ;

    public native void setTabKeyNavigation(long pointer,boolean enable);
    public native boolean tabKeyNavigation(long pointer) ;

    public native void setDropIndicatorShown(long pointer,boolean enable);
    public native boolean showDropIndicator(long pointer);

    public native void setDragEnabled(long pointer,boolean enable);
    public native boolean dragEnabled(long pointer);

    public native void setDragDropOverwriteMode(long pointer,boolean overwrite);
    public native boolean dragDropOverwriteMode(long pointer);

    public native void setDragDropMode(long pointer,int dragMode);
    public native int dragDropMode(long pointer);

    public native void setDefaultDropAction(long pointer,int dropAction);
    public native int defaultDropAction(long pointer);

    public native void setAlternatingRowColors(long pointer,boolean enable);
    public native boolean alternatingRowColors(long pointer);

    public native void setIconSize(long pointer,long size);
    public native long iconSize(long pointer);

    public native void setTextElideMode(long pointer,int mode);
    public native int  textElideMode(long pointer);

    public native void keyboardSearch(long pointer,String search);

    public native long visualRect(long pointer,long index);
    public native void scrollTo(long pointer,long index, int hint);
    public native long indexAt(long pointer,long point);

    public native long sizeHintForIndex(long pointer,long index);
    public native int  sizeHintForRow(long pointer,int row);
    public native int sizeHintForColumn(long pointer,int column);

    public native void openPersistentEditor(long pointer, long index);
    public native void closePersistentEditor(long pointer,long index);
    public native boolean isPersistentEditorOpen(long pointer,long index);

    public native void setIndexWidget(long pointer,long index,long widget);
    public native long indexWidget(long pointer,long index);

    //void setItemDelegateForRow(int row, QAbstractItemDelegate *delegate);
    //QAbstractItemDelegate *itemDelegateForRow(int row) const;

    //void setItemDelegateForColumn(int column, QAbstractItemDelegate *delegate);
    //QAbstractItemDelegate *itemDelegateForColumn(int column) const;

    //QAbstractItemDelegate *itemDelegate(const QModelIndex &index) const;

    public native long inputMethodQuery(long pointer, int query);

    public native void reset(long pointer);
    public native void setRootIndex(long pointer,long index);
    public native void doItemsLayout(long pointer);
    public native void selectAll(long pointer);
    public native void edit(long pointer,long index);
    public native void clearSelection(long pointer);
    public native void setCurrentIndex(long pointer,long index);
    public native void scrollToTop(long pointer);
    public native void scrollToBottom(long pointer);
    public native void update(long pointer,long index);

}
