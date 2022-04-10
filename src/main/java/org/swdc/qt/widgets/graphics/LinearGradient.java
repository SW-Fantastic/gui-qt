package org.swdc.qt.widgets.graphics;

import org.swdc.qt.internal.graphics.SLinearGradient;
import org.swdc.qt.widgets.RealPoint;

public class LinearGradient extends Gradient {

    private SLinearGradient linearGradient = new SLinearGradient();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = linearGradient.create();
        if (pointer <= 0) {
            throw new Exception("can not create a linear gradient");
        }
        linearGradient.address(pointer);
    }

    public void allocate(double xStart, double yStart, double xEnd, double yEnd) throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = linearGradient.create(xStart,yStart,xEnd,yEnd);
        if (pointer <= 0) {
            throw new Exception("can not create a linear gradient");
        }
        linearGradient.address(pointer);
    }

    public RealPoint start() {
        if (accessible()) {
            long pointer = linearGradient.start(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return RealPoint.asRealPoint(pointer);
        }
        return null;
    }

    public void setStart(RealPoint start){
        if (accessible(start)) {
            linearGradient.setStart(getPointer(),start.getPointer());
        }
    }

    public void setStart(double x, double y) {
        if (accessible()) {
            linearGradient.setStart(getPointer(),x,y);
        }
    }

    public RealPoint finalStop() {
        if (accessible()) {
            long pointer = linearGradient.finalStop(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return RealPoint.asRealPoint(pointer);
        }
        return null;
    }

    public void setFinalStop(RealPoint stop) {
        if (accessible(stop)) {
            linearGradient.setFinalStop(getPointer(),stop.getPointer());
        }
    }
    public void setFinalStop(double x, double y) {
        if (accessible()) {
            linearGradient.setFinalStop(getPointer(),x,y);
        }
    }

    public void dispose() {
        if (accessible()) {
            linearGradient.dispose(getPointer());
        }
    }

    @Override
    public long getPointer() {
        return linearGradient.address();
    }

}
