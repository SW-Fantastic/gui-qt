package org.swdc.qt.internal.text;


public class STextList extends STextObject {

    public native long create(long docPointer);
    public native void dispose(long pointer);

    public native int count(long pointer);

    public native long item(long pointer,int i);

    public native int itemNumber(long pointer,long textBlockPointer);
    public native String itemText(long pointer,long textBlockPointer);

    public native void removeItem(long pointer,int i);
    public native void remove(long pointer,long textBlockPointer);

    public native void add(long pointer,long textBlock);

    public native void setFormat(long pointer,long textListFormatPointer);
    public native long format(long pointer);

}
