package org.swdc.qt.internal.text;

import org.swdc.qt.internal.SPointer;

public class STextTableCell extends SPointer {

    public native long create();
    public native long create(long cellPointer);
    public native void dispose(long pointer);

    public native void setFormat(long pointer,long formatPointer);
    public native long format(long pointer);

    public native int row(long pointer);
    public native int column(long pointer);

    public native int rowSpan(long pointer);
    public native int columnSpan(long pointer);

    public native boolean isValid(long pointer);

    public native long firstCursorPosition(long pointer);
    public native long lastCursorPosition(long pointer);
    public native int firstPosition(long pointer);
    public native int lastPosition(long pointer);

    private native long iterator(long pointer);

    public STextFrameIterator iterator() {
        return address() > 0 ? new STextFrameIterator(this.iterator(address())) : null;
    }

    public native int tableCellFormatIndex(long pointer);

}
