package org.swdc.qt.internal.widgets;

public class SStackWidget extends SWidget {

    public native long create();

    public native int addWidget(long pointer, long widgetPointer);
    public native int insertWidget(long pointer,int index, long widgetPointer);
    public native void removeWidget(long pointer,long widgetPointer);

    public native int currentIndex(long pointer);

    public native int indexOf(long pointer,long widgetPointer);
    public native int count(long pointer);

    public native void setCurrentIndex(long pointer,int index);
    public native void setCurrentWidget(long pointer, long widgetPointer);


}
