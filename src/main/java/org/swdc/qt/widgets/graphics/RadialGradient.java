package org.swdc.qt.widgets.graphics;

import org.swdc.qt.internal.graphics.SRadialGradient;
import org.swdc.qt.widgets.RealPoint;

public class RadialGradient extends Gradient {

    private SRadialGradient gradient = new SRadialGradient();

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

    public void allocate(double cx, double cy, double radius, double fx, double fy) throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = gradient.create(cx, cy, radius, fx, fy);
        if (pointer <= 0) {
            throw new Exception("can not create a radial-gradient");
        }
        gradient.address(pointer);
    }

    @Override
    public long getPointer() {
        return gradient.address();
    }

    public RealPoint center() {
        if(getPointer() > 0) {
            long pointer = gradient.center(getPointer());
            if (pointer <= 0 ) {
                return null;
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

    public RealPoint focalPoint() {
        if (getPointer() > 0) {
            long pointer = gradient.focalPoint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return RealPoint.asRealPoint(pointer);
        }
        return null;
    }

    public void setFocalPoint(RealPoint focalPoint) {
        if (getPointer() > 0 && focalPoint.getPointer() > 0) {
            gradient.setFocalPoint(getPointer(),focalPoint.getPointer());
        }
    }

    public void setFocalPoint(double x, double y) {
        if(getPointer() > 0) {
            gradient.setFocalPoint(getPointer(),x,y);
        }
    }

    public double radius() {
        if (getPointer() > 0) {
            return gradient.radius(getPointer());
        }
        return 0;
    }

    public void setRadius(double radius) {
        if (getPointer() > 0) {
            gradient.setRadius(getPointer(),radius);
        }
    }

    public double centerRadius() {
        if (getPointer() > 0) {
            return gradient.centerRadius(getPointer());
        }
        return 0;
    }

    public void setCenterRadius(double radius) {
        if(getPointer() > 0) {
            gradient.setCenterRadius(getPointer(),radius);
        }
    }

    public RealPoint focalRadius() {
        if (getPointer() > 0) {
            long pointer = gradient.focalRadius(getPointer());
            if (pointer <= 0 ) {
                return null;
            }
            return RealPoint.asRealPoint(pointer);
        }
        return null;
    }

    public void setFocalRadius(double radius) {
        if (getPointer() > 0) {
            gradient.setFocalRadius(getPointer(),radius);
        }
    }

    public void dispose() {
        if (getPointer() > 0) {
            gradient.dispose(getPointer());
            gradient.cleanAddress();
        }
    }

}
