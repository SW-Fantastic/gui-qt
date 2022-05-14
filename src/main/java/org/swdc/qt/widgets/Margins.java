package org.swdc.qt.widgets;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.common.SMargins;

import java.util.function.Consumer;

public class Margins implements NativeAllocated {

    private SMargins margins = new SMargins();

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

    public void allocate(int left, int top, int right, int bottom) throws Exception {
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

    public int getLeft() {
        if (accessible()) {
            return margins.left(getPointer());
        }
        return 0;
    }

    public int getTop() {
        if (accessible()) {
            return margins.top(getPointer());
        }
        return 0;
    }

    public int getRight() {
        if (accessible()) {
            return margins.right(getPointer());
        }
        return 0;
    }

    public int getBottom() {
        if (accessible()) {
            return margins.bottom(getPointer());
        }
        return 0;
    }

    public void setLeft(int left) {
        if (accessible()) {
            margins.setLeft(getPointer(),left);
        }
    }

    public void setTop(int top) {
        if (accessible()) {
            margins.setTop(getPointer(),top);
        }
    }

    public void setRight(int right) {
        if (accessible()) {
            margins.setRight(getPointer(),right);
        }
    }

    public void setBottom(int bottom) {
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

    @Override
    public Consumer<Long> disposer() {
        return SMargins.CLEANER;
    }

    public static Margins asMargins(long nativePointer) {
        if (nativePointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        Margins margins = new Margins();
        margins.wrap(nativePointer);
        MemoryHolder.allocated(margins);
        return margins;
    }

    @Override
    public String toString() {
        return "Margins{" +
                "top = " + getTop() +
                ", left = " + getLeft() +
                ", right = " + getRight() +
                ", bottom = " + getBottom() +
                '}';
    }
}
