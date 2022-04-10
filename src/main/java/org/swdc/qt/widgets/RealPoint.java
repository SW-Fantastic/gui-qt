package org.swdc.qt.widgets;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.internal.common.SRealPoint;

public class RealPoint implements NativeAllocated {

    private SRealPoint realPoint = new SRealPoint();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = realPoint.create();
        if (pointer <= 0) {
            throw new Exception("failed to create real point");
        }
        realPoint.address(pointer);
    }

    public void allocate(double x,double y) throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = realPoint.create(x,y);
        if (pointer <= 0) {
            throw new Exception("failed to create real point");
        }
        realPoint.address(pointer);
    }

    private void wrap(long pointer){
        if (accessible()) {
            return;
        }
        if (pointer <= 0) {
            throw new RuntimeException("invalid Pointer");
        }
        realPoint.address(pointer);
    }

    public double getX() {
        if (accessible()) {
            return realPoint.x(getPointer());
        }
        return 0;
    }

    public double getY() {
        if (accessible()) {
            return realPoint.y(getPointer());
        }
        return 0;
    }

    public void setX(double x) {
        if (accessible()) {
            realPoint.setX(getPointer(),x);
        }
    }

    public void setY(double y){
        if (accessible()) {
            realPoint.setY(getPointer(),y);
        }
    }

    public RealPoint transposed() {
        if (accessible()) {
            long pointer = realPoint.transposed(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return RealPoint.asRealPoint(pointer);
        }
        return null;
    }

    public double manhattanLength() {
        if (accessible()){
            return realPoint.manhattanLength(getPointer());
        }
        return 0;
    }

    public Point toPoint() {
        if (accessible()) {
            long pointer = realPoint.toPoint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Point.asPoint(pointer);
        }
        return null;
    }

    public void dispose() {
        if (accessible()) {
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
