package org.swdc.qt.internal.common;

import org.swdc.qt.internal.SPointer;

public class SRect extends SPointer {

    public native long create();

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

//      void setTopLeft( QPoint &p) ;
//      void setBottomRight( QPoint &p) ;
//      void setTopRight( QPoint &p) ;
//      void setBottomLeft( QPoint &p) ;
//
//      QPoint topLeft()  ;
//      QPoint bottomRight()  ;
//      QPoint topRight()  ;
//      QPoint bottomLeft()  ;
//      QPoint center()  ;

    public native void moveLeft(long pointer,int pos);
    public native void moveTop(long pointer,int pos);
    public native void moveRight(long pointer,int pos);
    public native void moveBottom(long pointer,int pos);
//      void moveTopLeft( QPoint &p) ;
//      void moveBottomRight( QPoint &p) ;
//      void moveTopRight( QPoint &p) ;
//      void moveBottomLeft( QPoint &p) ;
//      void moveCenter( QPoint &p) ;

    public native void translate(long pointer,int dx, int dy) ;
    //void translate( QPoint &p) ;
    public native long transposed(long pointer);

    public native void moveTo(long pointer,int x, int t);
    //void moveTo( QPoint &p) ;


    public native void adjust(long pointer,int x1, int y1, int x2, int y2) ;

    //QSize size()  ;
    public native int width(long pointer) ;
    public native int height(long pointer);
    public native void setWidth(long pointer,int w) ;
    public native void setHeight(long pointer,int h) ;
    //void setSize( QSize &s) ;

    public native boolean contains(long pointer,long anotherRect, boolean proper) ;
    public native boolean contains(long pointer,int x, int y);
    public native boolean contains(long pointer,int x, int y, boolean proper);

    public native boolean intersects(long pointer,long anotherRect);

    public native void dispose(long pointer);

//    Q_DECL_CONSTEXPR inline QRect marginsAdded(const QMargins &margins) const noexcept;
//    Q_DECL_CONSTEXPR inline QRect marginsRemoved(const QMargins &margins) const noexcept;


}
