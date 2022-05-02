package org.swdc.qt.internal.widgets;

public class SLabel extends SFrame {

    public native long create(long parent);
    public native void dispose(long pointer);

    public native String text(long pointer);
    public native int textFormat(long pointer);
    public native void setTextFormat(long pointer,int format);

    public native long alignment(long pointer);
    public native void setAlignment(long pointer,long alignment);

    public native void setWordWrap(long pointer,boolean on);
    public native boolean wordWrap(long pointer);

    public native int indent(long pointer);
    public native void setIndent(long pointer,int val);

    public native int margin(long pointer);
    public native void setMargin(long pointer,int val);

    public native boolean hasScaledContents(long pointer);
    public native void setScaledContents(long pointer,boolean val);
    public native long sizeHint(long pointer);
    public native long minimumSizeHint(long pointer);

    public native int heightForWidth(long pointer,int val);

    public native boolean openExternalLinks(long pointer);
    public native void setOpenExternalLinks(long pointer,boolean open);

    public native void setSelection(long pointer,int  st, int ed);
    public native boolean hasSelectedText(long pointer);
    public native String selectedText(long pointer);
    public native int selectionStart(long pointer);

    public native void setText(long pointer,String text);
    public native void setPixmap(long pointer,long pixmap);
    public native void setNum(long pointer,double val);
    public native void clear(long pointer);
}
