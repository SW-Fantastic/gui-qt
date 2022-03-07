package org.swdc.qt.internal.text;

public class STextTableCellFormat extends STextCharFormat {

    public native long create();
    public native void dispose(long pointer);

    public native void setTopPadding(long pointer,double padding);
    public native double topPadding(long pointer);

    public native void setBottomPadding(long pointer,double padding);
    public native double bottomPadding(long pointer);

    public native void setLeftPadding(long pointer,double padding);
    public native double leftPadding(long pointer);

    public native void setRightPadding(long pointer,double padding);
    public native double rightPadding(long pointer);

    public native void setPadding(long pointer,double padding);

    public native void setTopBorder(long pointer,double width);
    public native double topBorder(long pointer);

    public native void setBottomBorder(long pointer,double width);
    public native double bottomBorder(long pointer);

    public native void setLeftBorder(long pointer,double width);
    public native double leftBorder(long pointer);

    public native void setRightBorder(long pointer,double width);
    public native double rightBorder(long pointer);

    public native void setBorder(long pointer,double width);

    public native void setTopBorderStyle(long pointer,int style);
    public native int topBorderStyle(long pointer);

    public native void setBottomBorderStyle(long pointer,int style);
    public native int bottomBorderStyle(long pointer);

    public native void setLeftBorderStyle(long pointer,int style);
    public native int leftBorderStyle(long pointer);

    public native void setRightBorderStyle(long pointer,int style);
    public native int rightBorderStyle(long pointer);

    public native void setBorderStyle(long pointer,int style);

    public native void setTopBorderBrush(long pointer,long brush);
    public native long topBorderBrush(long pointer);

    public native void setBottomBorderBrush(long pointer,long brush);
    public native long bottomBorderBrush(long pointer);

    public native void setLeftBorderBrush(long pointer,long brush);
    public native long leftBorderBrush(long pointer);

    public native void setRightBorderBrush(long pointer,long brush);
    public native long rightBorderBrush(long pointer);

    public native void setBorderBrush(long pointer,long brush);


}
