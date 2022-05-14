package org.swdc.qt.widgets.graphics;

import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.graphics.SConicalGradient;
import org.swdc.qt.widgets.RealPoint;

import java.util.function.Consumer;

public class ConicalGradient extends Gradient {

    private SConicalGradient gradient = new SConicalGradient();

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

    public void allocate(double cx, double cy, double startAngle) throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = gradient.create(cx,cy,startAngle);
        if (pointer <= 0) {
            throw new Exception("can not create a radial-gradient");
        }
        gradient.address(pointer);
        MemoryHolder.allocated(this);
    }

    public RealPoint center() {
        if (accessible()) {
            long pointer = gradient.center(getPointer());
            if (pointer <= 0) {
                throw null;
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

    public double angle() {
        if (accessible()) {
            return gradient.angle(getPointer());
        }
        return 0;
    }

    public void setAngle(double angle) {
        if (accessible()) {
            gradient.setAngle(getPointer(),angle);
        }
    }

    public void dispose() {
        if (accessible()) {
            gradient.dispose(getPointer());
            gradient.cleanAddress();
        }
    }

    @Override
    public long getPointer() {
        return gradient.address();
    }

    @Override
    public Consumer<Long> disposer() {
        return SConicalGradient.CLEANER;
    }
}
