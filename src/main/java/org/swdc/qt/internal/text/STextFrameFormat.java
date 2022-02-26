package org.swdc.qt.internal.text;

public class STextFrameFormat extends STextFormat {

    public native long create();
    public native void dispose(long pointer);

    public native void setPosition(long pointer,int f);
    public native int position(long pointer);

    public native void setBorder(long pointer,double border);
    public native double border(long pointer);

    public native void setBorderBrush(long pointer,long brush);
    public native long borderBrush(long pointer);

    public native void setBorderStyle(long pointer,int style);
    public native int borderStyle(long pointer);

    public native void setMargin(long pointer,double margin);
    public native double margin(long pointer);

    public native void setTopMargin(long pointer,double margin);
    public native double topMargin(long pointer);

    public native void setBottomMargin(long pointer,double margin);
    public native double bottomMargin(long pointer);

    public native void setLeftMargin(long pointer,double margin);
    public native double leftMargin(long pointer);

    public native void setRightMargin(long pointer,double margin);
    public native double rightMargin(long pointer);

    public native void setPadding(long pointer,double padding);
    public native double padding(long pointer);

    public native void setWidth(long pointer,double width);
    public native void setWidth(long pointer,long length);
    public native long width(long pointer);

    public native void setHeight(long pointer,double height);
    public native void setHeight(long pointer,long height);
    public native long height(long pointer);

    public native void setPageBreakPolicy(long pointer,int flags);

}
