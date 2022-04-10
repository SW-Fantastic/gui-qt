package org.swdc.qt.internal.text;

import org.swdc.qt.internal.SPointer;

public class STextTable extends SPointer {

    public native long create(long documentPointer);
    public native void dispose(long pointer);

    public native void resize(long pointer,int rows, int cols);
    public native void insertRows(long pointer,int pos, int num);
    public native void insertColumns(long pointer,int pos, int num);
    public native void appendRows(long pointer,int count);
    public native void appendColumns(long pointer,int count);
    public native void removeRows(long pointer,int pos, int num);
    public native void removeColumns(long pointer,int pos, int num);

    public native void mergeCells(long pointer,int row, int col, int numRows, int numCols);
    public native void mergeCells(long pointer,long textCursorPointer);
    public native void splitCell(long pointer,int row, int col, int numRows, int numCols);

    public native int rows(long pointer);
    public native int columns(long pointer);

    public native long cellAt(long pointer,int row, int col);
    public native long cellAt(long pointer,int position);
    public native long cellAt(long pointer,long textCursor);

    public native long rowStart(long pointer,long textCursor);
    public native long rowEnd(long pointer,long textCursor);

    public native void setFormat(long pointer,long tableFormat);
    public native long format(long pointer);


}
