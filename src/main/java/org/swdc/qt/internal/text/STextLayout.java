package org.swdc.qt.internal.text;

import org.swdc.qt.internal.SPointer;

public class STextLayout extends SPointer {

    public native long create();
    public native long create(String text);
    public native void dispose(long pointer);

    public native void setFont(long pointer,long font);
    public native long font(long pointer);

    public native void setText(long pointer,String string);
    public native String text(long pointer);

    public native void setTextOption(long pointer,long option);
    public native long textOption(long pointer);

    public native void setPreeditArea(long pointer,int position, String text);
    public native int preeditAreaPosition(long pointer);
    public native String preeditAreaText(long pointer);

    public native void setFormats(long pointer,long[] formatRanges);
    public native long[] formats(long pointer);
    public native void clearFormats(long pointer);

    public native void setCacheEnabled(long pointer,boolean enable);
    public native boolean cacheEnabled(long pointer);

    public native void setCursorMoveStyle(long pointer,int style);
    public native int cursorMoveStyle(long pointer);

    public native void beginLayout(long pointer);
    public native void endLayout(long pointer);
    public native void clearLayout(long pointer);

    public native long createLine(long pointer);

    public native int lineCount(long pointer);
    public native long lineAt(long pointer,int i);
    public native long lineForTextPosition(long pointer,int pos);

    public native boolean isValidCursorPosition(long pointer,int pos);
    public native int nextCursorPosition(long pointer,int oldPos, int mode);
    public native int previousCursorPosition(long pointer,int oldPos, int mode);
    public native int leftCursorPosition(long pointer,int oldPos);
    public native int rightCursorPosition(long pointer,int oldPos);

    public native void draw(long pointer,long painter,long pos,long[] selections, long clip);
    public native void drawCursor(long pointer,long painter,long pos, int cursorPosition);
    public native void drawCursor(long pointer,long painter,long pos, int cursorPosition, int width);

    public native long position(long pointer);
    public native void setPosition(long pointer,long p);

    public native long boundingRect(long pointer);

    public native double minimumWidth(long pointer);
    public native double maximumWidth(long pointer);

}
