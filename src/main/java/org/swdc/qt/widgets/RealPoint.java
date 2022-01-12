package org.swdc.qt.widgets;

import org.swdc.qt.internal.common.SRealPoint;

public class RealPoint {

    private SRealPoint realPoint = new SRealPoint();

    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = realPoint.create();
        if (pointer <= 0) {
            throw new Exception("failed to create real point");
        }
        realPoint.address(pointer);
    }

    public void allocate(double x,double y) throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = realPoint.create(x,y);
        if (pointer <= 0) {
            throw new Exception("failed to create real point");
        }
        realPoint.address(pointer);
    }

    private void wrap(long pointer){
        if (getPointer() > 0) {
            return;
        }
        if (pointer <= 0) {
            throw new RuntimeException("invalid Pointer");
        }
        realPoint.address(pointer);
    }

    public double getX() {
        if (getPointer() > 0) {
            return realPoint.x(getPointer());
        }
        return 0;
    }

    public double getY() {
        if (getPointer() > 0) {
            return realPoint.y(getPointer());
        }
        return 0;
    }

    public void setX(double x) {
        if (getPointer() > 0) {
            realPoint.setX(getPointer(),x);
        }
    }

    public void setY(double y){
        if (getPointer() > 0) {
            realPoint.setY(getPointer(),y);
        }
    }

    public RealPoint transposed() {
        if (getPointer() > 0) {
            long pointer = realPoint.transposed(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return RealPoint.asRealPoint(pointer);
        }
        return null;
    }

    public double manhattanLength() {
        if (getPointer() > 0){
            return realPoint.manhattanLength(getPointer());
        }
        return 0;
    }

    public Point toPoint() {
        if (getPointer() > 0) {
            long pointer = realPoint.toPoint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Point.asPoint(pointer);
        }
        return null;
    }

    public void dispose() {
        if (getPointer() > 0) {
            realPoint.dispose(getPointer());
            realPoint.cleanAddress();
        }
    }

    public long getPointer() {
        return realPoint.address();
    }

    public static RealPoint asRealPoint(long nativePointer) {
        if (nativePointer <= 0) {
            throw new RuntimeException("invalid Pointer");
        }
        RealPoint point = new RealPoint();
        point.wrap(nativePointer);
        return point;
    }

}
