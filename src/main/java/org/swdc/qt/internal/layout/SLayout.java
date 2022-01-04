package org.swdc.qt.internal.layout;

import org.swdc.qt.beans.Margins;

public abstract class SLayout extends SLayoutItem {

    public native boolean doActive(long pointer);
    public native void addWidget(long pointer, long widgetPointer);
    public native int count(long pointer);
    public native void setSpacing(long pointer, int spac);
    public native int getSpacing(long pointer);
    public native void removeWidget(long pointer, long widgetPointer);
    public native void addItem(long pointer,long itemPointer);
    public native void removeItem(long pointer,long itemPointer);

    public native Margins getContentsMargins(long pointer);
    public native void setContentsMargins(long pointer,int top, int bottom, int left,int right);
    public native boolean doDispose(long pointer);

}
