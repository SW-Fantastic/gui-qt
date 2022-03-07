package org.swdc.qt.internal.text;

import org.swdc.qt.internal.SPointer;

public class STextOption extends SPointer {

    public native long create();
    public native long create(long anotherOne);

    public native void dispose(long pointer);

    public native void setAlignment(long pointer,long alignment);
    public native long alignment(long pointer);

    public native void setTextDirection(long pointer,int direction);
    public native int textDirection(long pointer);

    public native void setWrapMode(long pointer,int wrap);
    public native int wrapMode(long pointer);

    public native void setFlags(long pointer,int flags);

    public native void setTabStopDistance(long pointer,double tabStopDistance);
    public native double tabStopDistance(long pointer);

    public native void setTabArray(long pointer,double[] tabStops);
    public native double[] tabArray(long pointer);

    public native void setTabs(long pointer,long[] tabStops);
    public native long[] tabs(long pointer);

    public native void setUseDesignMetrics(long pointer,boolean b);
    public native boolean useDesignMetrics(long pointer);


}
