package org.swdc.qt.internal.common;

import org.swdc.qt.internal.SPointer;

import java.util.function.Consumer;

public class SRealRect extends SPointer {

    private static final SRealRect instance = new SRealRect();
    public static final Consumer<Long> CLEANER = instance::dispose;

    public native long create();
    public native long create(double left,double top, double width, double height);


    public native boolean isEmpty(long pointer);
    public native boolean isValid(long pointer);

    public native double left(long pointer);
    public native double top(long pointer);
    public native double right(long pointer);
    public native double bottom(long pointer);
    public native long normalized(long pointer);

    public native double x(long pointer);
    public native double y(long pointer);
    public native void setLeft(long pointer,double pos);
    public native void setTop(long pointer,double pos) ;
    public native void setRight(long pointer,double pos);
    public native void setBottom(long pointer,double pos);
    public native void setX(long pointer,double x);
    public native void setY(long pointer,double y) ;

    public native void setTopLeft(long pointer,long point) ;
    public native void setBottomRight(long pointer,long point) ;
    public native void setTopRight(long pointer,long point) ;
    public native void setBottomLeft(long pointer,long point) ;

    public native long topLeft(long pointer);
    public native long bottomRight(long pointer);
    public native long topRight(long pointer);
    public native long bottomLeft(long pointer);
    public native long center(long pointer);

    public native void moveLeft(long pointer,double pos);
    public native void moveTop(long pointer,double pos);
    public native void moveRight(long pointer,double pos);
    public native void moveBottom(long pointer,double pos);

    public native void moveTopLeft(long pointer,long point) ;
    public native void moveBottomRight(long pointer,long point);
    public native void moveTopRight(long pointer,long point);
    public native void moveBottomLeft(long pointer,long point);
    public native void moveCenter(long pointer,long point);

    public native void translate(long pointer,double dx, double dy) ;
    public native void translate(long pointer,long point) ;
    public native long transposed(long pointer);

    public native void moveTo(long pointer,double x, double t);
    public native void moveTo(long pointer,long point) ;

    public native void adjust(long pointer,double x1, double y1, double x2, double y2) ;

    public native double width(long pointer) ;
    public native double height(long pointer);
    public native void setWidth(long pointer,double w) ;
    public native void setHeight(long pointer,double h) ;

    public native long size(long pointer);
    public native void setSize(long pointer,long sPointer) ;

    public native boolean contains(long pointer,long anotherRect) ;
    public native boolean contains(long pointer,double x, double y);

    public native boolean intersects(long pointer,long anotherRect);

    public native long marginsAdded(long pointer,long margins);
    public native long marginsRemoved(long pointer,long margins);

    public native void dispose(long pointer);

}
