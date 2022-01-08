package org.swdc.qt.widgets;

import org.swdc.qt.internal.common.SMargins;

public class Margins {

    private SMargins margins = new SMargins();

    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = margins.create();
        if (pointer <= 0) {
            throw new Exception("failed to create margin.");
        }
        margins.address(pointer);
    }

    public void allocate(int left, int top, int right, int bottom) throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = margins.create(left, top, right, bottom);
        if (pointer <= 0) {
            throw new Exception("failed to create margin.");
        }
        margins.address(pointer);
    }

    public void wrap(long pointer) throws Exception {
        if (getPointer() > 0) {
            return;
        }
        if (pointer <= 0) {
            throw new Exception("invalid pointer !");
        }
        margins.address(pointer);
    }

    public int getLeft() {
        if (getPointer() > 0) {
            return margins.left(getPointer());
        }
        return 0;
    }

    public int getTop() {
        if (getPointer() > 0) {
            return margins.top(getPointer());
        }
        return 0;
    }

    public int getRight() {
        if (getPointer() > 0) {
            return margins.right(getPointer());
        }
        return 0;
    }

    public int getBottom() {
        if (getPointer() > 0) {
            return margins.bottom(getPointer());
        }
        return 0;
    }

    public void setLeft(int left) {
        if (getPointer() > 0) {
            margins.setLeft(getPointer(),left);
        }
    }

    public void setTop(int top) {
        if (getPointer() > 0) {
            margins.setTop(getPointer(),top);
        }
    }

    public void setRight(int right) {
        if (getPointer() > 0) {
            margins.setRight(getPointer(),right);
        }
    }

    public void setBottom(int bottom) {
        if (getPointer() > 0) {
            margins.setBottom(getPointer(),bottom);
        }
    }

    public void dispose() {
        if (getPointer() > 0) {
            margins.dispose(getPointer());
            margins.cleanAddress();
        }
    }

    public long getPointer() {
        return margins.address();
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
