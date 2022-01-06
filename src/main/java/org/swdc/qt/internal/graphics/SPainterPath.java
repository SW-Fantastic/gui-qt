package org.swdc.qt.internal.graphics;

import org.swdc.qt.internal.SPointer;

public class SPainterPath extends SPointer {

    public native long create();

    public native void swap(long pointer,long otherPointer);
    public native void clear(long pointer);
    public native void reserve(long pointer,int size);
    public native int capacity(long pointer);

    public native void closeSubpath(long pointer);
    public native void moveTo(long pointer,double x, double y);
    public native void lineTo(long pointer,double x, double y);
    public native void arcMoveTo(long pointer,double x, double y, double w, double h, double angle);
    public native void arcTo(long pointer,double x, double y, double w, double h, double startAngle, double arcLength);
    public native void cubicTo(long pointer,double ctrlPt1x, double ctrlPt1y, double ctrlPt2x, double ctrlPt2y,
                        double endPtx, double endPty);
    public native void quadTo(long pointer,double ctrlPtx, double ctrlPty, double endPtx, double endPty);

    public native void addRect(long pointer,double x, double y, double w, double h);
    public native void addEllipse(long pointer,double x, double y, double w, double h);
    //public native void addText(double x, double y, const QFont &f, const QString &text);
    public native void addPath(long pointer,long pathPointer);
    //void addRegion(const QRegion &region);

    public native void addRoundedRect(long pointer,double x, double y, double w, double h,
                               double xRadius, double yRadius,
                               int sizeMode);

    public native void connectPath(long pointer,long pathPointer);
    public native void translate(long pointer,double dx, double dy);
    public native boolean isEmpty(long pointer);

    public native int fillRule(long pointer);
    public native void setFillRule(long pointer,int fillRule);

    public native double length(long pointer);
    public native double percentAtLength(long pointer,double t);
    public native double angleAtPercent(long pointer,double t);
    public native double slopeAtPercent(long pointer,double t);

    public native long intersects(long pointer,long pathPointer);
    public native boolean contains(long pointer,long pathPointer);

    public native void dispose(long pointer);


}
