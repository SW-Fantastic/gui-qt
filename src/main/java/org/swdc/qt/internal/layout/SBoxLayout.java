package org.swdc.qt.internal.layout;

public abstract class SBoxLayout extends SLayout {

    public enum Directions {

    }

    public native void doSetDirection(long pointer,int direction);
    public native int doGetDirection(long pointer);
    public native void addSpacing(long pointer,int spacing);
    public native void addStretch(long pointer, int stretch);
    public native void addSpacerItem(long pointer, long spacerItemPointer);
    public native void addLayout(long pointer,long layout);
    public native void addStrut(long pointer,int strut);
    public native void insertSpacing(long pointer, int index, int spac);
    public native void insertStretch(long pointer, int index, int stretch);
    public native void insertSpacerItem(long pointer, int index, long spacerItemPointer);
    public native void insertLayout(long pointer,int index, long layoutPointer);
    public native void insertItem(long pointer,int index, long item);


}
