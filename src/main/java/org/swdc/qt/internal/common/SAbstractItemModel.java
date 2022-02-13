package org.swdc.qt.internal.common;

import org.swdc.qt.internal.SPointer;

public class SAbstractItemModel extends SPointer  {

    public native long create(long parentPointer);

    public native boolean hasIndex(long pointer,int row, int column,long parent);
    public native long index(long pointer,int row, int column, long parent);
    public native long parent(long pointer,long child);

    public native long sibling(long pointer,int row, int column, long idx);
    public native int rowCount(long pointer,long parent);
    public native int columnCount(long pointer,long parent);
    public native boolean hasChildren(long pointer,long parent);

    public native long data(long pointer,long index, int role);
    public native boolean setData(long pointer,long index,long value, int role);

    public native long headerData(long pointer,int section, long orientation, int role);
    public native boolean setHeaderData(long pointer,int section, long orientation, long value, int role);

    //virtual QMap<int, QVariant> itemData(const QModelIndex &index) const;
    //virtual bool setItemData(const QModelIndex &index, const QMap<int, QVariant> &roles);

    //virtual QStringList mimeTypes() const;
    //virtual QMimeData *mimeData(const QModelIndexList &indexes) const;
    //virtual bool canDropMimeData(const QMimeData *data, Qt::DropAction action,
    //                             int row, int column, const QModelIndex &parent) const;
    //virtual bool dropMimeData(const QMimeData *data, Qt::DropAction action,
    //                          int row, int column, const QModelIndex &parent);
    //virtual Qt::DropActions supportedDropActions() const;

    //virtual Qt::DropActions supportedDragActions() const;

    public native boolean insertRows(long pointer,int row, int count,long parent);
    public native boolean insertColumns(long pointer,int column, int count, long parent);
    public native boolean removeRows(long pointer,int row, int count, long parent);
    public native boolean removeColumns(long pointer,int column, int count, long parent);
    public native boolean moveRows(long pointer,long sourceParent, int sourceRow, int count,
                          long destinationParent, int destinationChild);

    public native boolean moveColumns(long pointer,long sourceParent, int sourceColumn, int count,
                             long destinationParent, int destinationChild);

    public native boolean insertRow(long pointer,int row, long parent);
    public native boolean insertColumn(long pointer,int column, long parent);
    public native boolean removeRow(long pointer,int row, long parent);
    public native boolean removeColumn(long pointer,int column, long parent);
    public native boolean moveRow(long pointer,long sourceParent, int sourceRow,
                        long destinationParent, int destinationChild);
    public native boolean moveColumn(long pointer,long sourceParent, int sourceColumn,
                           long destinationParent, int destinationChild);

    public native void fetchMore(long pointer,long parent);
    public native boolean canFetchMore(long pointer,long parent);
    //public native int flags(long pointer,long index);
    public native void sort(long pointer,int column, int order);
    public native long buddy(long pointer,long index);
    public native long[] match(long pointer,long startIndex, int role, long variantValue, int hits, int matchFlags);
    public native long span(long pointer,long index);

    public native boolean submit(long pointer);
    public native void revert(long pointer);
    public native void dispose(long pointer);

    //virtual QHash<int,QByteArray> roleNames() const;

}
