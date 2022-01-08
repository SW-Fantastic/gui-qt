package org.swdc.qt.internal.widgets;

public class SMenuBar extends SWidget {

    public native long create();
    public native long addAction(long pointer,String text);
    public native long addMenu(long pointer,long menuPointer);
    public native long addMenu(long pointer,String title);

    public native long addSeparator(long pointer);
    public native long insertSeparator(long pointer,long beforeAction);

    public native long insertMenu(long pointer,long beforeAction, long menuPointer);
    public native void clear(long pointer);

    public native void setActiveAction(long pointer,long action);

    public native void setDefaultUp(long pointer,boolean val);
    public native boolean isDefaultUp(long pointer);

    public native long sizeHint(long pointer);
    public native long minimumSizeHint(long pointer);
    public native int heightForWidth(long pointer,int val);
    public native void setVisible(long pointer,boolean visible);


}
