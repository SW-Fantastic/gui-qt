package org.swdc.qt.widgets.graphics;

import org.swdc.qt.internal.graphics.SConicalGradient;
import org.swdc.qt.widgets.RealPoint;

public class ConicalGradient extends Gradient {

    private SConicalGradient gradient = new SConicalGradient();

    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = gradient.create();
        if (pointer <= 0) {
            throw new Exception("can not create a radial-gradient");
        }
        gradient.address(pointer);
    }

    public void allocate(double cx, double cy, double startAngle) throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = gradient.create(cx,cy,startAngle);
        if (pointer <= 0) {
            throw new Exception("can not create a radial-gradient");
        }
        gradient.address(pointer);
    }

    public RealPoint center() {
        if (getPointer() > 0) {
            long pointer = gradient.center(getPointer());
            if (pointer <= 0) {
                throw null;
            }
            return RealPoint.asRealPoint(pointer);
        }
        return null;
    }

    public void setCenter(RealPoint center) {
        if (getPointer() > 0 && center.getPointer() > 0) {
            gradient.setCenter(getPointer(),center.getPointer());
        }
    }

    public void setCenter(double x, double y) {
        if (getPointer() > 0) {
            gradient.setCenter(getPointer(),x,y);
        }
    }

    public double angle() {
        if (getPointer() > 0) {
            return gradient.angle(getPointer());
        }
        return 0;
    }

    public void setAngle(double angle) {
        if (getPointer() > 0) {
            gradient.setAngle(getPointer(),angle);
        }
    }

    public void dispose() {
        if (getPointer() > 0) {
            gradient.dispose(getPointer());
            gradient.cleanAddress();
        }
    }

    @Override
    public long getPointer() {
        return gradient.address();
    }
}
