package org.swdc.qt.internal.text;

import org.swdc.qt.internal.SPointer;

public class STextCursor extends SPointer {

    public native long create();
    public native long create(long document);

    public native void dispose(long pointer);

    public native void setPosition(int pos, int mode);
    public native int position();
    public native int positionInBlock();

    public native int anchor();

    public native void insertText(String text);
    public native void insertText(String text, long charFormat);

    public native boolean movePosition(int op, int moveMode, int n);

    public native boolean visualNavigation();
    public native void setVisualNavigation(boolean b);

    public native void setVerticalMovementX(int x);
    public native int verticalMovementX();

    public native void setKeepPositionOnInsert(boolean b);
    public native void keepPositionOnInsert();

    public native void deleteChar();
    public native void deletePreviousChar();

    public native void select(int selection);

    public native boolean hasSelection();
    public native boolean hasComplexSelection();
    public native void removeSelectedText();
    public native void clearSelection();
    public native int selectionStart();
    public native int selectionEnd();

    public native String selectedText();
    public native long selection();
    //void selectedTableCells(int *firstRow, int *numRows, int *firstColumn, int *numColumns);

    public native long block();

    public native long charFormat();
    public native void setCharFormat(long charFormat);
    public native void mergeCharFormat(long charFormat);

    public native long blockFormat();
    public native void setBlockFormat(long blockFormat);
    public native void mergeBlockFormat(long blockFormat);

    public native long blockCharFormat();
    public native void setBlockCharFormat(long blockCharFormat);
    public native void mergeBlockCharFormat(long blockCharFormat);

    public native boolean atBlockStart();
    public native boolean atBlockEnd();
    public native boolean atStart();
    public native boolean atEnd();

    public native void insertBlock();
    public native void insertBlock(long blockFormat);
    public native void insertBlock(long blockformat,long charFormat);

    public native long insertList(long listFormat);
    public native long insertList(int style);

    public native long createList(long listFormat);
    public native long createList(int listFormatStyle);
    public native long currentList();

    public native long insertTable(int rows, int cols, int tableFormat);
    public native long insertTable(int rows, int cols);
    public native long currentTable();

    public native long insertFrame(int format);
    public native long currentFrame();

    public native void insertFragment(long docFragment);

    public native void insertImage(long imageFormat,int alignment);
    public native void insertImage(long imageFormat);
    public native void insertImage(String name);
    public native void insertImage(long image, String name);

    public native void beginEditBlock();
    public native void joinPreviousEditBlock();
    public native void endEditBlock();

    public native boolean isCopyOf(long other);

    public native int blockNumber();
    public native int columnNumber();

    public native long document();

}
