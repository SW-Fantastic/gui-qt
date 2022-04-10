package org.swdc.qt.internal.text;

import org.swdc.qt.internal.SPointer;

public class STextLine extends SPointer {

    public native long create();
    public native void dispose(long pointer);

    public native boolean isValid(long pointer);

    public native long rect(long pointer);
    public native double x(long pointer);
    public native double y(long pointer);
    public native double width(long pointer);
    public native double ascent(long pointer);
    public native double descent(long pointer);
    public native double height(long pointer);
    public native double leading(long pointer);

    public native void setLeadingIncluded(long pointer,boolean included);
    public native boolean leadingIncluded(long pointer);

    public native double naturalTextWidth(long pointer);
    public native double horizontalAdvance(long pointer);
    public native long naturalTextRect(long pointer);

    public native double cursorToX(long pointer,int cursorPos, int edge);
    public native int xToCursor(long pointer,double x, int cursorPos);

    public native void setLineWidth(long pointer,double width);
    public native void setNumColumns(long pointer,int columns);
    public native void setNumColumns(long pointer,int columns, double alignmentWidth);

    public native void setPosition(long pointer,long pos);
    public native long position(long pointer);

    public native int textStart(long pointer);
    public native int textLength(long pointer);

    public native int lineNumber(long pointer);

    public native void draw(long pointer,long painter,long pointF,long formatRange);

}
