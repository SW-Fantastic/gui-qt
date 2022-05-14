package org.swdc.qt.widgets;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.beans.AspectRatioMode;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.common.SRealSize;

import java.util.function.Consumer;

public class RealSize implements NativeAllocated {

    private SRealSize size = new SRealSize();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = size.create();
        if (pointer <= 0) {
            throw new Exception("can not create size");
        }
        size.address(pointer);
        MemoryHolder.allocated(this);
    }

    private void wrap(long nativePointer) {
        if (accessible()) {
            return;
        }
        if (nativePointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        size.address(nativePointer);
    }

    public boolean isEmpty() {
        if (accessible()) {
            return size.isEmpty(getPointer());
        }
        return false;
    }

    public boolean isValid() {
        if (accessible()) {
            return size.isValid(getPointer());
        }
        return false;
    }

    public double getWidth() {
        if (accessible()) {
            return size.width(getPointer());
        }
        return 0;
    }

    public double getHeight() {
        if (accessible()) {
            return size.height(getPointer());
        }
        return 0;
    }

    public void setWidth(double w) {
        if (accessible()) {
            size.setWidth(getPointer(),w);
        }
    }

    public void setHeight(double h){
        if (accessible()) {
            size.setHeight(getPointer(),h);
        }
    }

    public void transpose(RealSize size) {
        if (accessible(size)) {
            this.size.transpose(size.getPointer());
        }
    }

    public RealSize transposed() {
        if (accessible()) {
            long pointer = size.transposed(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return RealSize.asRealSize(pointer);
        }
        return null;
    }

    public void scale(double w, double h, AspectRatioMode mode) {
        if (accessible()) {
            this.size.scale(getPointer(),w,h,mode.getVal());
        }
    }

    public RealSize scaled(int w, int h,AspectRatioMode mode) {
        if (accessible(mode)) {
            long pointer = this.size.scaled(getPointer(),w,h,mode.getVal());
            if (getPointer() < 0) {
                return null;
            }
            return RealSize.asRealSize(pointer);
        }
        return null;
    }

    public RealSize expandedTo(RealRect another){
        if (accessible(another)) {
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
        if (accessible(another)) {
            long pointer = size.boundedTo(getPointer(),another.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return asRealSize(pointer);
        }
        return null;
    }

    public void dispose(){
        if (accessible()) {
            this.size.dispose(getPointer());
        }
    }

    public RealSize grownBy(RealMargins margin) {
        if (accessible(margin)) {
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
        if (accessible(margin)) {
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
        MemoryHolder.allocated(size);
        return size;
    }

    public long getPointer() {
        return size.address();
    }

    @Override
    public Consumer<Long> disposer() {
        return SRealSize.CLEANER;
    }

    @Override
    public String toString() {
        return "Size{" +
                "width = " + getWidth() +
                ", height = " + getHeight() +
                '}';
    }

}
