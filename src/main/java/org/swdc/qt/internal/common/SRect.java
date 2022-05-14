package org.swdc.qt.internal.common;

import org.swdc.qt.internal.SPointer;

import java.util.function.Consumer;

public class SRect extends SPointer {

    private static final SRect instance = new SRect();
    public static final Consumer<Long> CLEANER = instance::dispose;

    public native long create();
    public native long create(int left,int top, int width, int height);

    public native boolean isEmpty(long pointer);
    public native boolean isValid(long pointer);

    public native int left(long pointer);
    public native int top(long pointer);
    public native int right(long pointer);
    public native int bottom(long pointer);
    public native long normalized(long pointer);

    public native int x(long pointer);
    public native int y(long pointer);
    public native void setLeft(long pointer,int pos);
    public native void setTop(long pointer,int pos) ;
    public native void setRight(long pointer,int pos);
    public native void setBottom(long pointer,int pos);
    public native void setX(long pointer,int x);
    public native void setY(long pointer,int y) ;

    public native void setTopLeft(long pointer,long point) ;
    public native void setBottomRight(long pointer,long point) ;
    public native void setTopRight(long pointer,long point) ;
    public native void setBottomLeft(long pointer,long point) ;

    public native long topLeft(long pointer);
    public native long bottomRight(long pointer);
    public native long topRight(long pointer);
    public native long bottomLeft(long pointer);
    public native long center(long pointer);

    public native void moveLeft(long pointer,int pos);
    public native void moveTop(long pointer,int pos);
    public native void moveRight(long pointer,int pos);
    public native void moveBottom(long pointer,int pos);

    public native void moveTopLeft(long pointer,long point) ;
    public native void moveBottomRight(long pointer,long point);
    public native void moveTopRight(long pointer,long point);
    public native void moveBottomLeft(long pointer,long point);
    public native void moveCenter(long pointer,long point);

    public native void translate(long pointer,int dx, int dy) ;
    public native void translate(long pointer,long point) ;
    public native long transposed(long pointer);

    public native void moveTo(long pointer,int x, int t);
    public native void moveTo(long pointer,long point) ;


    public native void adjust(long pointer,int x1, int y1, int x2, int y2) ;


    public native int width(long pointer) ;
    public native int height(long pointer);
    public native void setWidth(long pointer,int w) ;
    public native void setHeight(long pointer,int h) ;

    public native long size(long pointer);
    public native void setSize(long pointer,long sPointer) ;

    public native boolean contains(long pointer,long anotherRect, boolean proper) ;
    public native boolean contains(long pointer,int x, int y);
    public native boolean contains(long pointer,int x, int y, boolean proper);

    public native boolean intersects(long pointer,long anotherRect);

    public native long marginsAdded(long pointer,long marginsPointer);
    public native long marginsRemoved(long pointer,long marginsPointer);

    public native void dispose(long pointer);


}
