package org.swdc.qt.widgets;

import org.swdc.qt.internal.common.SPoint;

public class Point {

    private SPoint point = new SPoint();

    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = point.create();
        if (pointer <= 0) {
            throw new Exception("failed to create point");
        }
        point.address(pointer);
    }

    public void allocate(int x, int y) throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = point.create(x, y);
        if (pointer <= 0) {
            throw new Exception("failed to create point");
        }
        point.address(pointer);
    }

    public void wrap(long nativePointer) throws Exception {
        if (getPointer() > 0) {
            return;
        }
        if (nativePointer <= 0) {
            throw new Exception("invalid pointer");
        }
        point.address(nativePointer);
    }

    public int getX() {
        if (getPointer() > 0) {
            return point.x(getPointer());
        }
        return 0;
    }

    public int getY() {
        if (getPointer() > 0) {
            return point.y(getPointer());
        }
        return 0;
    }

    public void setX(int x) {
        if (getPointer() > 0) {
            point.setX(getPointer(),x);
        }
    }

    public void setY(int y) {
        if (getPointer() > 0) {
            point.setY(getPointer(),y);
        }
    }

    public int manhattanLength() {
        if (getPointer() > 0) {
            return point.manhattanLength(getPointer());
        }
        return 0;
    }

    public Point transposed() {
        if (getPointer() > 0) {
            long pointer = point.transposed(getPointer());
            if (pointer <= 0) {
                return null;
            }
            try {
                Point point = new Point();
                point.wrap(pointer);
                return point;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        }
        return null;
    }

    public void dispose(){
        if (getPointer() > 0) {
            point.dispose(getPointer());
        }
    }

    public long getPointer() {
        return point.address();
    }

}
