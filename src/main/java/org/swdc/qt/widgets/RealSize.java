package org.swdc.qt.widgets;

import org.swdc.qt.beans.AspectRatioMode;
import org.swdc.qt.internal.common.SRealSize;

public class RealSize {

    private SRealSize size = new SRealSize();

    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = size.create();
        if (pointer <= 0) {
            throw new Exception("can not create size");
        }
        size.address(pointer);
    }

    private void wrap(long nativePointer) {
        if (getPointer() > 0) {
            return;
        }
        if (nativePointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        size.address(nativePointer);
    }

    public boolean isEmpty() {
        if (getPointer() > 0) {
            return size.isEmpty(getPointer());
        }
        return false;
    }

    public boolean isValid() {
        if (getPointer() > 0) {
            return size.isValid(getPointer());
        }
        return false;
    }

    public double getWidth() {
        if (getPointer() > 0) {
            return size.width(getPointer());
        }
        return 0;
    }

    public double getHeight() {
        if (getPointer() > 0) {
            return size.height(getPointer());
        }
        return 0;
    }

    public void setWidth(double w) {
        if (getPointer() > 0) {
            size.setWidth(getPointer(),w);
        }
    }

    public void setHeight(double h){
        if (getPointer() > 0) {
            size.setHeight(getPointer(),h);
        }
    }

    public void transpose(RealSize size) {
        if (getPointer() > 0 && size.getPointer() > 0) {
            this.size.transpose(size.getPointer());
        }
    }

    public RealSize transposed() {
        if (getPointer() > 0) {
            long pointer = size.transposed(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return RealSize.asRealSize(pointer);
        }
        return null;
    }

    public void scale(double w, double h, AspectRatioMode mode) {
        if (getPointer() > 0) {
            this.size.scale(getPointer(),w,h,mode.getVal());
        }
    }

    public RealSize scaled(int w, int h,AspectRatioMode mode) {
        if (getPointer() > 0) {
            long pointer = this.size.scaled(getPointer(),w,h,mode.getVal());
            if (getPointer() < 0) {
                return null;
            }
            return RealSize.asRealSize(pointer);
        }
        return null;
    }

    public RealSize expandedTo(RealRect another){
        if (getPointer() > 0 && another.getPointer() > 0) {
            long pointer = size.expandedTo(getPointer(),another.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return asRealSize(pointer);
        } else {
            return null;
        }
    }
    public RealSize boundedTo(RealSize another) {
        if (getPointer() > 0 && another.getPointer() > 0) {
            long pointer = size.boundedTo(getPointer(),another.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return asRealSize(pointer);
        }
        return null;
    }

    public void dispose(){
        if (getPointer() > 0) {
            this.size.dispose(getPointer());
        }
    }

    public RealSize grownBy(RealMargins margin) {
        if (getPointer() > 0 && margin.getPointer() > 0) {
            long pointer = size.grownBy(getPointer(),margin.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return asRealSize(pointer);
        } else {
            return null;
        }
    }

    public RealSize shrunkBy(RealMargins margin) {
        if (getPointer() > 0 && margin.getPointer() > 0) {
            long pointer = size.shrunkBy(getPointer(),margin.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return asRealSize(pointer);
        }
        return null;
    }

    public static RealSize asRealSize(long nativePointer) {
        if (nativePointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        RealSize size = new RealSize();
        size.wrap(nativePointer);
        return size;
    }

    public long getPointer() {
        return size.address();
    }

    @Override
    public String toString() {
        return "Size{" +
                "width = " + getWidth() +
                ", height = " + getHeight() +
                '}';
    }

}
