package org.swdc.qt.internal.widgets;

public class SAbstractScrollArea extends SFrame {

    public native int verticalScrollBarPolicy(long pointer);
    public native void setVerticalScrollBarPolicy(long pointer,int val);
    public native long verticalScrollBar(long pointer);
    public native void setVerticalScrollBar(long pointer,long scrollbar);

    public native int horizontalScrollBarPolicy(long pointer);
    public native void setHorizontalScrollBarPolicy(long pointer,int val);
    public native long horizontalScrollBar(long pointer);
    public native void setHorizontalScrollBar(long pointer,long scrollbar);

    public native long cornerWidget(long pointer);
    public native void setCornerWidget(long pointer,long widget);

    public native void addScrollBarWidget(long pointer,long widget, long alignment);
    public native long[] scrollBarWidgets(long pointer,long alignment);

    public native long viewport(long pointer);
    public native void setViewport(long pointer,long widget);
    public native long maximumViewportSize(long pointer);

    public native long minimumSizeHint(long pointer);

    public native long sizeHint(long pointer);

    public native void setupViewport(long pointer,long viewport);

    public native int sizeAdjustPolicy(long pointer);
    public native void setSizeAdjustPolicy(long pointer,int policy);

}
