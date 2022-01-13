package org.swdc.qt.internal.common;

import org.swdc.qt.internal.SPointer;

public class SRealSize extends SPointer {

    public native long create();
    public native long create(double width, double height);

    public native boolean isEmpty(long pointer) ;
    public native boolean isValid(long pointer) ;

    public native double width(long pointer) ;
    public native double height(long pointer) ;
    public native void setWidth(long pointer,double w);
    public native void setHeight(long pointer,double h);
    public native void transpose(long pointer);
    public native long transposed(long pointer) ;

    public native void scale(long pointer,double w, double h, int mode);
    public native long scaled(long pointer,double w, double h,int mode);

    public native long expandedTo(long pointer,long anotherOne);
    public native long boundedTo(long pointer,long anotherOne);

    public native void dispose(long pointer);

    public native long grownBy(long pointer,long marginPointer);
    public native long shrunkBy(long pointer,long marginPointer);
    
}
