package org.swdc.qt.widgets.graphics;

import org.swdc.qt.beans.FillRule;
import org.swdc.qt.beans.SizeMode;
import org.swdc.qt.internal.graphics.SPainterPath;

public class PainterPath {

    private SPainterPath painterPath = new SPainterPath();

    public void allocate() throws Exception {
        if (getPointer() > 0 ) {
            return;
        }
        long pointer = painterPath.create();
        if (pointer <= 0 ){
            throw new Exception("can not create a painter path");
        }
        painterPath.address(pointer);
    }

    void wrap(long pointer) throws Exception {
        if (getPointer() > 0) {
            return;
        }
        if (pointer <= 0) {
            throw new Exception("invalid pointer");
        }
        painterPath.address(pointer);
    }

    public void swap(PainterPath painterPath) {
        if (getPointer() > 0 && painterPath.getPointer() > 0) {
            this.painterPath.swap(getPointer(),painterPath.getPointer());
        }
    }

    public void clear() {
        if (getPointer() > 0) {
            painterPath.clear(getPointer());
        }
    }

    public void reserve(int size) {
        if (getPointer() > 0) {
            painterPath.reserve(getPointer(),size);
        }
    }

    public int capacity() {
        if (getPointer() > 0) {
            return painterPath.capacity(getPointer());
        }
        return 0;
    }

    public void closeSubpath() {
        if (getPointer() > 0 ) {
            this.painterPath.closeSubpath(getPointer());
        }
    }

    public void moveTo(double x, double y) {
        if (getPointer() > 0) {
            painterPath.moveTo(getPointer(),x,y);
        }
    }

    public void lineTo(double x, double y) {
        if (getPointer() > 0) {
            painterPath.lineTo(getPointer(),x,y);
        }
    }

    public void arcMoveTo(double x, double y, double w, double h, double angle) {
        if (getPointer() > 0) {
            painterPath.arcMoveTo(getPointer(),x,y,w,h,angle);
        }
    }

    public void arcTo(double x, double y, double w, double h, double startAngle, double arcLength) {
        if (getPointer() > 0) {
            painterPath.arcTo(getPointer(),x,y,w,h,startAngle,arcLength);
        }
    }

    public void cubicTo(double ctrlPt1x, double ctrlPt1y, double ctrlPt2x, double ctrlPt2y,
                               double endPtx, double endPty) {
        if (getPointer() > 0) {
            painterPath.cubicTo(getPointer(),ctrlPt1x,ctrlPt1y,ctrlPt2x,ctrlPt2y,endPtx,endPty);
        }
    }

    public void quadTo(double ctrlPtx, double ctrlPty, double endPtx, double endPty) {
        if (getPointer() > 0) {
            painterPath.quadTo(getPointer(),ctrlPtx,ctrlPty,endPtx,endPty);
        }
    }

    public void addRect(double x, double y, double w, double h) {
        if (getPointer() > 0) {
            painterPath.addRect(getPointer(),x,y,w,h);
        }
    }

    public void addEllipse(double x, double y, double w, double h) {
        if (getPointer() > 0) {
            painterPath.addEllipse(getPointer(),x,y,w,h);
        }
    }

    //public native void addText(double x, double y, const QFont &f, const QString &text);
    public void addPath(PainterPath path) {
        if (getPointer() > 0 && path.getPointer() > 0){
            painterPath.addPath(getPointer(),path.getPointer());
        }
    }
    //void addRegion(const QRegion &region);

    public void addRoundedRect(double x, double y, double w, double h,
                                      double xRadius, double yRadius,
                                      SizeMode sizeMode) {
        if (getPointer() > 0) {
            painterPath.addRoundedRect(getPointer(),x,y,w,h,xRadius,yRadius,sizeMode.getVal());
        }
    }

    public void connectPath(PainterPath path) {
        if (getPointer() > 0 && path.getPointer() > 0) {
            painterPath.connectPath(getPointer(),path.getPointer());
        }
    }

    public void translate(double dx, double dy) {
        if (getPointer() > 0) {
            painterPath.translate(getPointer(),dx,dy);
        }
    }

    public boolean isEmpty() {
        if (getPointer() > 0) {
            return painterPath.isEmpty(getPointer());
        }
        return false;
    }

    public FillRule fillRule(){
        if(getPointer() > 0) {
            int rule = painterPath.fillRule(getPointer());
            return FillRule.valueOf(rule);
        }
        return null;
    }

    public void setFillRule(FillRule fillRule) {
        if (getPointer() > 0) {
            painterPath.setFillRule(getPointer(),fillRule.getVal());
        }
    }

    public double length() {
        if (getPointer() > 0) {
            return painterPath.length(getPointer());
        }
        return 0;
    }

    public double percentAtLength(double t) {
        if (getPointer() > 0) {
            return painterPath.percentAtLength(getPointer(),t);
        }
        return 0;
    }

    public double angleAtPercent(double t) {
        if (getPointer() > 0) {
            return painterPath.angleAtPercent(getPointer(),t);
        }
        return 0;
    }

    public double slopeAtPercent(double t) {
        if (getPointer() > 0){
            return painterPath.slopeAtPercent(getPointer(),t);
        }
        return 0;
    }

    public PainterPath intersects(PainterPath path){
        if (getPointer() > 0 && path.getPointer() > 0) {
            long pointer = painterPath.intersects(getPointer(),path.getPointer());
            try {
                PainterPath painterPath = new PainterPath();
                painterPath.wrap(pointer);
                return painterPath;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        }
        return null;
    }

    public boolean contains(PainterPath path) {
        if (getPointer() > 0 && path.getPointer() > 0) {
            return painterPath.contains(getPointer(),path.getPointer());
        }
        return false;
    }

    public void dispose() {
        if (getPointer() > 0) {
            painterPath.dispose(getPointer());
            painterPath.cleanAddress();
        }
    }

    public long getPointer() {
        return painterPath.address();
    }

}
