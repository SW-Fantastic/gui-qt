package org.swdc.qt.widgets;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.common.SPoint;

import java.util.function.Consumer;

public class Point implements NativeAllocated {

    private SPoint point = new SPoint();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = point.create();
        if (pointer <= 0) {
            throw new Exception("failed to create point");
        }
        point.address(pointer);
        MemoryHolder.allocated(this);
    }

    public void allocate(int x, int y) throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = point.create(x, y);
        if (pointer <= 0) {
            throw new Exception("failed to create point");
        }
        point.address(pointer);
        MemoryHolder.allocated(this);
    }

    private void wrap(long nativePointer) {
        if (accessible()) {
            return;
        }
        if (nativePointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        point.address(nativePointer);
    }

    public int getX() {
        if (accessible()) {
            return point.x(getPointer());
        }
        return 0;
    }

    public int getY() {
        if (accessible()) {
            return point.y(getPointer());
        }
        return 0;
    }

    public void setX(int x) {
        if (accessible()) {
            point.setX(getPointer(),x);
        }
    }

    public void setY(int y) {
        if (accessible()) {
            point.setY(getPointer(),y);
        }
    }

    public int manhattanLength() {
        if (accessible()) {
            return point.manhattanLength(getPointer());
        }
        return 0;
    }

    public Point transposed() {
        if (accessible()) {
            long pointer = point.transposed(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Point.asPoint(pointer);
        }
        return null;
    }

    public void dispose(){
        if (accessible()) {
            point.dispose(getPointer());
        }
    }

    public long getPointer() {
        return point.address();
    }

    public static Point asPoint(long nativePointer) {
        if (nativePointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        Point point = new Point();
        point.wrap(nativePointer);
        MemoryHolder.allocated(point);
        return point;
    }

    @Override
    public Consumer<Long> disposer() {
        return SPoint.CLEANER;
    }
}
