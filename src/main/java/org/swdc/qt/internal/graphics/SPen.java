package org.swdc.qt.internal.graphics;

import org.swdc.qt.internal.SPointer;

import java.util.List;

public class SPen extends SPointer {

    public native long create();

    public native int style(long pointer);
    public native void setStyle(long pointer,int style);

    public native double[] dashPattern(long pointer);
    public native void setDashPattern(long pointer,double[] pattern);

    public native double dashOffset(long pointer);
    public native void setDashOffset(long pointer,double doffset);

    public native double miterLimit(long pointer);
    public native void setMiterLimit(long pointer,double limit);

    public native int width(long pointer);
    public native void setWidth(long pointer,int width);

    public native long color(long pointer);
    public native void setColor(long pointer,long color);

    public native int capStyle(long pointer);
    public native void setCapStyle(long pointer,int pcs);

    public native int joinStyle(long pointer);
    public native void setJoinStyle(long pointer,int pcs);

    public native boolean isCosmetic(long pointer);
    public native void setCosmetic(long pointer,boolean cosmetic);

    public native void dispose(long pointer);

}
