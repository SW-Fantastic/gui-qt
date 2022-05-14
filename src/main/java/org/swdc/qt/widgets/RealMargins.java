package org.swdc.qt.widgets;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.common.SRealMargins;

import java.util.function.Consumer;

public class RealMargins implements NativeAllocated {


    private SRealMargins margins = new SRealMargins();


    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = margins.create();
        if (pointer <= 0) {
            throw new Exception("failed to create margin.");
        }
        margins.address(pointer);
        MemoryHolder.allocated(this);
    }

    public void allocate(double left, double top, double right, double bottom) throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = margins.create(left, top, right, bottom);
        if (pointer <= 0) {
            throw new Exception("failed to create margin.");
        }
        margins.address(pointer);
        MemoryHolder.allocated(this);
    }

    private void wrap(long pointer) {
        if (accessible()) {
            return;
        }
        if (pointer <= 0) {
            throw new RuntimeException("invalid pointer !");
        }
        margins.address(pointer);
    }

    public double getLeft() {
        if (accessible()) {
            return margins.left(getPointer());
        }
        return 0;
    }

    public double getTop() {
        if (accessible()) {
            return margins.top(getPointer());
        }
        return 0;
    }

    public double getRight() {
        if (accessible()) {
            return margins.right(getPointer());
        }
        return 0;
    }

    public double getBottom() {
        if (accessible()) {
            return margins.bottom(getPointer());
        }
        return 0;
    }

    public void setLeft(double left) {
        if (accessible()) {
            margins.setLeft(getPointer(),left);
        }
    }

    public void setTop(double top) {
        if (accessible()) {
            margins.setTop(getPointer(),top);
        }
    }

    public void setRight(double right) {
        if (accessible()) {
            margins.setRight(getPointer(),right);
        }
    }

    public void setBottom(double bottom) {
        if (accessible()) {
            margins.setBottom(getPointer(),bottom);
        }
    }

    public void dispose() {
        if (accessible()) {
            margins.dispose(getPointer());
            margins.cleanAddress();
        }
    }

    public long getPointer() {
        return margins.address();
    }

    public static RealMargins asMargins(long nativePointer) {
        if (nativePointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        RealMargins margins = new RealMargins();
        margins.wrap(nativePointer);
        MemoryHolder.allocated(margins);
        return margins;
    }

    @Override
    public String toString() {
        return "RealMargins{" +
                "top = " + getTop() +
                ", left = " + getLeft() +
                ", right = " + getRight() +
                ", bottom = " + getBottom() +
                '}';
    }

    @Override
    public Consumer<Long> disposer() {
        return SRealMargins.CLEANER;
    }
}
