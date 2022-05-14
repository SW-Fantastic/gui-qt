package org.swdc.qt.widgets.graphics;

import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.graphics.SRadialGradient;
import org.swdc.qt.widgets.RealPoint;

import java.util.function.Consumer;

public class RadialGradient extends Gradient {

    private SRadialGradient gradient = new SRadialGradient();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = gradient.create();
        if (pointer <= 0) {
            throw new Exception("can not create a radial-gradient");
        }
        gradient.address(pointer);
        MemoryHolder.allocated(this);
    }

    public void allocate(double cx, double cy, double radius, double fx, double fy) throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = gradient.create(cx, cy, radius, fx, fy);
        if (pointer <= 0) {
            throw new Exception("can not create a radial-gradient");
        }
        gradient.address(pointer);
        MemoryHolder.allocated(this);
    }

    @Override
    public long getPointer() {
        return gradient.address();
    }

    @Override
    public Consumer<Long> disposer() {
        return SRadialGradient.CLEANER;
    }

    public RealPoint center() {
        if(accessible()) {
            long pointer = gradient.center(getPointer());
            if (pointer <= 0 ) {
                return null;
            }
            return RealPoint.asRealPoint(pointer);
        }
        return null;
    }

    public void setCenter(RealPoint center) {
        if (accessible(center)) {
            gradient.setCenter(getPointer(),center.getPointer());
        }
    }

    public void setCenter(double x, double y) {
        if (accessible()) {
            gradient.setCenter(getPointer(),x,y);
        }
    }

    public RealPoint focalPoint() {
        if (accessible()) {
            long pointer = gradient.focalPoint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return RealPoint.asRealPoint(pointer);
        }
        return null;
    }

    public void setFocalPoint(RealPoint focalPoint) {
        if (accessible(focalPoint)) {
            gradient.setFocalPoint(getPointer(),focalPoint.getPointer());
        }
    }

    public void setFocalPoint(double x, double y) {
        if(accessible()) {
            gradient.setFocalPoint(getPointer(),x,y);
        }
    }

    public double radius() {
        if (accessible()) {
            return gradient.radius(getPointer());
        }
        return 0;
    }

    public void setRadius(double radius) {
        if (accessible()) {
            gradient.setRadius(getPointer(),radius);
        }
    }

    public double centerRadius() {
        if (accessible()) {
            return gradient.centerRadius(getPointer());
        }
        return 0;
    }

    public void setCenterRadius(double radius) {
        if(accessible()) {
            gradient.setCenterRadius(getPointer(),radius);
        }
    }

    public RealPoint focalRadius() {
        if (accessible()) {
            long pointer = gradient.focalRadius(getPointer());
            if (pointer <= 0 ) {
                return null;
            }
            return RealPoint.asRealPoint(pointer);
        }
        return null;
    }

    public void setFocalRadius(double radius) {
        if (accessible()) {
            gradient.setFocalRadius(getPointer(),radius);
        }
    }

    public void dispose() {
        if (accessible()) {
            gradient.dispose(getPointer());
            gradient.cleanAddress();
        }
    }

}
