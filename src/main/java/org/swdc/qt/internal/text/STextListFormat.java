package org.swdc.qt.internal.text;

public class STextListFormat extends STextFormat {

    public native long create();
    public native void dispose(long pointer);

    public native void setStyle(long pointer,int style);
    public native int style(long pointer);

    public native void setIndent(long pointer ,int indent);
    public native int indent(long pointer);

    public native void setNumberPrefix(long pointer,String numberPrefix);
    public native String numberPrefix(long pointer);

    public native void setNumberSuffix(long pointer,String numberSuffix);
    public native String numberSuffix(long pointer);

}
