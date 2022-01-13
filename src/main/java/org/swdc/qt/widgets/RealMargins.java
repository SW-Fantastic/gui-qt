package org.swdc.qt.widgets;

import org.swdc.qt.internal.common.SRealMargins;

public class RealMargins {


    private SRealMargins margins = new SRealMargins();


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

    public void allocate(double left, double top, double right, double bottom) throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = margins.create(left, top, right, bottom);
        if (pointer <= 0) {
            throw new Exception("failed to create margin.");
        }
        margins.address(pointer);
    }

    private void wrap(long pointer) {
        if (getPointer() > 0) {
            return;
        }
        if (pointer <= 0) {
            throw new RuntimeException("invalid pointer !");
        }
        margins.address(pointer);
    }

    public double getLeft() {
        if (getPointer() > 0) {
            return margins.left(getPointer());
        }
        return 0;
    }

    public double getTop() {
        if (getPointer() > 0) {
            return margins.top(getPointer());
        }
        return 0;
    }

    public double getRight() {
        if (getPointer() > 0) {
            return margins.right(getPointer());
        }
        return 0;
    }

    public double getBottom() {
        if (getPointer() > 0) {
            return margins.bottom(getPointer());
        }
        return 0;
    }

    public void setLeft(double left) {
        if (getPointer() > 0) {
            margins.setLeft(getPointer(),left);
        }
    }

    public void setTop(double top) {
        if (getPointer() > 0) {
            margins.setTop(getPointer(),top);
        }
    }

    public void setRight(double right) {
        if (getPointer() > 0) {
            margins.setRight(getPointer(),right);
        }
    }

    public void setBottom(double bottom) {
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

    public static RealMargins asMargins(long nativePointer) {
        if (nativePointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        RealMargins margins = new RealMargins();
        margins.wrap(nativePointer);
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
}
