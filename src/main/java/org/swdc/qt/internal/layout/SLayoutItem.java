package org.swdc.qt.internal.layout;

import org.swdc.qt.internal.SPointer;
import org.swdc.qt.beans.SSize;

public abstract class SLayoutItem extends SPointer {


    public native SSize getSizeHint(long pointer);
    public native SSize getMinimumSize(long pointer);
    public native SSize getMaximumSize(long pointer);
    public native void setGeometry(long pointer,int x,int y,int width, int height,
                                    int top, int center, int bottom, int left, int right);
    public native long getGeometry(long pointer);
    public native boolean isEmpty(long pointer);
    public native boolean hasHeightForWidth(long pointer);
    public native int setHeightForWidth(long pointer,int value);
    public native int setMinimumHeightForWidth(long pointer,int value);
    public native void doInvalidate(long pointer);

}
