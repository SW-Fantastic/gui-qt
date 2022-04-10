package org.swdc.qt.widgets.graphics;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.beans.SizeMode;
import org.swdc.qt.internal.graphics.SPainterPath;

public class PainterPath implements NativeAllocated {

    private SPainterPath painterPath = new SPainterPath();

    public void allocate() throws Exception {
        if (accessible() ) {
            return;
        }
        long pointer = painterPath.create();
        if (pointer <= 0 ){
            throw new Exception("can not create a painter path");
        }
        painterPath.address(pointer);
    }

    void wrap(long pointer) throws Exception {
        if (accessible()) {
            return;
        }
        if (pointer <= 0) {
            throw new Exception("invalid pointer");
        }
        painterPath.address(pointer);
    }

    public void swap(PainterPath painterPath) {
        if (accessible() && painterPath.accessible()) {
            this.painterPath.swap(getPointer(),painterPath.getPointer());
        }
    }

    public void clear() {
        if (accessible()) {
            painterPath.clear(getPointer());
        }
    }

    public void reserve(int size) {
        if (accessible()) {
            painterPath.reserve(getPointer(),size);
        }
    }

    public int capacity() {
        if (accessible()) {
            return painterPath.capacity(getPointer());
        }
        return 0;
    }

    public void closeSubpath() {
        if (accessible() ) {
            this.painterPath.closeSubpath(getPointer());
        }
    }

    public void moveTo(double x, double y) {
        if (accessible()) {
            painterPath.moveTo(getPointer(),x,y);
        }
    }

    public void lineTo(double x, double y) {
        if (accessible()) {
            painterPath.lineTo(getPointer(),x,y);
        }
    }

    public void arcMoveTo(double x, double y, double w, double h, double angle) {
        if (accessible()) {
            painterPath.arcMoveTo(getPointer(),x,y,w,h,angle);
        }
    }

    public void arcTo(double x, double y, double w, double h, double startAngle, double arcLength) {
        if (accessible()) {
            painterPath.arcTo(getPointer(),x,y,w,h,startAngle,arcLength);
        }
    }

    public void cubicTo(double ctrlPt1x, double ctrlPt1y, double ctrlPt2x, double ctrlPt2y,
                               double endPtx, double endPty) {
        if (accessible()) {
            painterPath.cubicTo(getPointer(),ctrlPt1x,ctrlPt1y,ctrlPt2x,ctrlPt2y,endPtx,endPty);
        }
    }

    public void quadTo(double ctrlPtx, double ctrlPty, double endPtx, double endPty) {
        if (accessible()) {
            painterPath.quadTo(getPointer(),ctrlPtx,ctrlPty,endPtx,endPty);
        }
    }

    public void addRect(double x, double y, double w, double h) {
        if (accessible()) {
            painterPath.addRect(getPointer(),x,y,w,h);
        }
    }

    public void addEllipse(double x, double y, double w, double h) {
        if (accessible()) {
            painterPath.addEllipse(getPointer(),x,y,w,h);
        }
    }

    //public native void addText(double x, double y, const QFont &f, const QString &text);
    public void addPath(PainterPath path) {
        if (accessible(path)){
            painterPath.addPath(getPointer(),path.getPointer());
        }
    }
    //void addRegion(const QRegion &region);

    public void addRoundedRect(double x, double y, double w, double h,
                                      double xRadius, double yRadius,
                                      SizeMode sizeMode) {
        if (accessible(sizeMode)) {
            painterPath.addRoundedRect(getPointer(),x,y,w,h,xRadius,yRadius,sizeMode.getVal());
        }
    }

    public void connectPath(PainterPath path) {
        if (accessible(path)) {
            painterPath.connectPath(getPointer(),path.getPointer());
        }
    }

    public void translate(double dx, double dy) {
        if (accessible()) {
            painterPath.translate(getPointer(),dx,dy);
        }
    }

    public boolean isEmpty() {
        if (accessible()) {
            return painterPath.isEmpty(getPointer());
        }
        return false;
    }

    public PainterFillRule fillRule(){
        if(accessible()) {
            int rule = painterPath.fillRule(getPointer());
            return PainterFillRule.valueOf(rule);
        }
        return null;
    }

    public void setFillRule(PainterFillRule fillRule) {
        if (accessible(fillRule)) {
            painterPath.setFillRule(getPointer(),fillRule.getVal());
        }
    }

    public double length() {
        if (accessible()) {
            return painterPath.length(getPointer());
        }
        return 0;
    }

    public double percentAtLength(double t) {
        if (accessible()) {
            return painterPath.percentAtLength(getPointer(),t);
        }
        return 0;
    }

    public double angleAtPercent(double t) {
        if (accessible()) {
            return painterPath.angleAtPercent(getPointer(),t);
        }
        return 0;
    }

    public double slopeAtPercent(double t) {
        if (accessible()){
            return painterPath.slopeAtPercent(getPointer(),t);
        }
        return 0;
    }

    public PainterPath intersects(PainterPath path){
        if (accessible(path)) {
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
        if (accessible(path)) {
            return painterPath.contains(getPointer(),path.getPointer());
        }
        return false;
    }

    public void dispose() {
        if (accessible()) {
            painterPath.dispose(getPointer());
            painterPath.cleanAddress();
        }
    }

    public long getPointer() {
        return painterPath.address();
    }

}
