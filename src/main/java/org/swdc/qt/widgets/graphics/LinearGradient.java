package org.swdc.qt.widgets.graphics;

import org.swdc.qt.internal.graphics.SLinearGradient;
import org.swdc.qt.widgets.RealPoint;

public class LinearGradient extends Gradient {

    private SLinearGradient linearGradient = new SLinearGradient();

    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = linearGradient.create();
        if (pointer <= 0) {
            throw new Exception("can not create a linear gradient");
        }
        linearGradient.address(pointer);
    }

    public void allocate(double xStart, double yStart, double xEnd, double yEnd) throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = linearGradient.create(xStart,yStart,xEnd,yEnd);
        if (pointer <= 0) {
            throw new Exception("can not create a linear gradient");
        }
        linearGradient.address(pointer);
    }

    public RealPoint start() {
        if (getPointer() > 0) {
            long pointer = linearGradient.start(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return RealPoint.asRealPoint(pointer);
        }
        return null;
    }

    public void setStart(RealPoint start){
        if (getPointer() > 0 && start.getPointer() > 0) {
            linearGradient.setStart(getPointer(),start.getPointer());
        }
    }

    public void setStart(double x, double y) {
        if (getPointer() > 0) {
            linearGradient.setStart(getPointer(),x,y);
        }
    }

    public RealPoint finalStop() {
        if (getPointer() > 0) {
            long pointer = linearGradient.finalStop(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return RealPoint.asRealPoint(pointer);
        }
        return null;
    }

    public void setFinalStop(RealPoint stop) {
        if (getPointer() > 0 && stop.getPointer() > 0) {
            linearGradient.setFinalStop(getPointer(),stop.getPointer());
        }
    }
    public void setFinalStop(double x, double y) {
        if (getPointer() > 0) {
            linearGradient.setFinalStop(getPointer(),x,y);
        }
    }

    public void dispose() {
        if (getPointer() > 0) {
            linearGradient.dispose(getPointer());
        }
    }

    @Override
    public long getPointer() {
        return linearGradient.address();
    }

}