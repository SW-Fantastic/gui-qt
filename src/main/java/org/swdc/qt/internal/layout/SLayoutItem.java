package org.swdc.qt.internal.layout;

import org.swdc.qt.internal.SPointer;

public abstract class SLayoutItem extends SPointer {


    public native long getSizeHint(long pointer);
    public native long getMinimumSize(long pointer);
    public native long getMaximumSize(long pointer);
    public native void setGeometry(long pointer,int x,int y,int width, int height,
                                    int top, int center, int bottom, int left, int right);
    public native long getGeometry(long pointer);
    public native boolean isEmpty(long pointer);
    public native boolean hasHeightForWidth(long pointer);
    public native int setHeightForWidth(long pointer,int value);
    public native int setMinimumHeightForWidth(long pointer,int value);
    public native void doInvalidate(long pointer);

}
