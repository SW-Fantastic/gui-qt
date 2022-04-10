package org.swdc.qt.internal.text;

import org.swdc.qt.internal.SPointer;

public class SAbstractTextLayout extends SPointer {


    public native void draw(long pointer,long painterPointer,long paintContext);
    // virtual int hitTest(const QPointF &point, Qt::HitTestAccuracy accuracy) const = 0;

    public native String anchorAt(long pointer,long posPointer);
    public native String imageAt(long pointer,long posPointer);
    public native long formatAt(long pointer,long posPointer);
    public native long blockWithMarkerAt(long pointer,long posPointer);

    public native int pageCount(long pointer);
    public native long documentSize(long pointer);

    public native long frameBoundingRect(long pointer,long textFramePointer);
    public native long blockBoundingRect(long pointer,long blockPointer);

    //public native void setPaintDevice(QPaintDevice *device);
    //QPaintDevice *paintDevice() const;

    public native long document(long pointer);

    public native void registerHandler(long pointer,int objectType, long componentPointer);
    public native void unregisterHandler(long pointer,int objectType, long componentPointer);
    //QTextObjectInterface *handlerForObject(int objectType) const;


}
