package org.swdc.qt.internal.text;

import org.swdc.qt.internal.SPointer;

public class STextCursor extends SPointer {

    public native long create();
    public native long create(long document);

    public native void dispose(long pointer);

    public native void setPosition(long pointer,int pos, int mode);
    public native int position(long pointer);
    public native int positionInBlock(long pointer);

    public native int anchor(long pointer);

    public native void insertText(long pointer,String text);
    public native void insertText(long pointer,String text, long charFormat);

    public native boolean movePosition(long pointer,int op, int moveMode, int n);

    public native boolean visualNavigation(long pointer);
    public native void setVisualNavigation(long pointer,boolean b);

    public native void setVerticalMovementX(long pointer,int x);
    public native int verticalMovementX(long pointer);

    public native void setKeepPositionOnInsert(long pointer,boolean b);
    public native boolean keepPositionOnInsert(long pointer);

    public native void deleteChar(long pointer);
    public native void deletePreviousChar(long pointer);

    public native void select(long pointer,int selection);

    public native boolean hasSelection(long pointer);
    public native boolean hasComplexSelection(long pointer);
    public native void removeSelectedText(long pointer);
    public native void clearSelection(long pointer);
    public native int selectionStart(long pointer);
    public native int selectionEnd(long pointer);

    public native String selectedText(long pointer);
    public native long selection(long pointer);
    //void selectedTableCells(int *firstRow, int *numRows, int *firstColumn, int *numColumns);

    public native long block(long pointer);

    public native long charFormat(long pointer);
    public native void setCharFormat(long pointer,long charFormat);
    public native void mergeCharFormat(long pointer,long charFormat);

    public native long blockFormat(long pointer);
    public native void setBlockFormat(long pointer,long blockFormat);
    public native void mergeBlockFormat(long pointer,long blockFormat);

    public native long blockCharFormat(long pointer);
    public native void setBlockCharFormat(long pointer,long blockCharFormat);
    public native void mergeBlockCharFormat(long pointer,long blockCharFormat);

    public native boolean atBlockStart(long pointer);
    public native boolean atBlockEnd(long pointer);
    public native boolean atStart(long pointer);
    public native boolean atEnd(long pointer);

    public native void insertBlock(long pointer);
    public native void insertBlock(long pointer,long blockFormat);
    public native void insertBlock(long pointer,long blockformat,long charFormat);

    public native long insertList(long pointer,long listFormat);
    public native long insertList(long pointer,int style);

    public native long createList(long pointer,long listFormat);
    public native long createList(long pointer,int listFormatStyle);
    public native long currentList(long pointer);

    public native long insertTable(long pointer,int rows, int cols, long tableFormat);
    public native long insertTable(long pointer,int rows, int cols);
    public native long currentTable(long pointer);

    public native long insertFrame(long pointer,long format);
    public native long currentFrame(long pointer);

    public native void insertFragment(long pointer,long docFragment);

    public native void insertImage(long pointer,long imageFormat,int alignment);
    public native void insertImage(long pointer,long imageFormat);
    public native void insertImage(long pointer,String name);
    public native void insertImage(long pointer,long image, String name);

    public native void beginEditBlock(long pointer);
    public native void joinPreviousEditBlock(long pointer);
    public native void endEditBlock(long pointer);

    public native boolean isCopyOf(long pointer,long other);

    public native int blockNumber(long pointer);
    public native int columnNumber(long pointer);

    public native long document(long pointer);

}
