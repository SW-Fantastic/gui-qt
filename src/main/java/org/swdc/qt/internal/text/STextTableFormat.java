package org.swdc.qt.internal.text;

public class STextTableFormat extends STextFormat {

    public native long create();
    public native void dispose(long pointer);

    public native int columns(long pointer);

    public native void setColumnWidthConstraints(long pointer,long[] constraints);
    public native long[] columnWidthConstraints(long pointer);

    public native void clearColumnWidthConstraints(long pointer);

    public native double cellSpacing(long pointer);
    public native void setCellSpacing(long pointer,double spacing);

    public native double cellPadding(long pointer);
    public native void setCellPadding(long pointer,double padding);

    public native void setAlignment(long pointer,long alignment);
    public native long alignment(long pointer);

    public native void setHeaderRowCount(long pointer,int count);
    public native int headerRowCount(long pointer);

    public native void setBorderCollapse(long pointer,boolean borderCollapse);
    public native boolean borderCollapse(long pointer);

}
