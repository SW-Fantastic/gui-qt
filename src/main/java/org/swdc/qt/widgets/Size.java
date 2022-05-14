package org.swdc.qt.widgets;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.beans.AspectRatioMode;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.common.SSize;

import java.util.function.Consumer;

public class Size implements NativeAllocated {

    private SSize size = new SSize();

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

    public int getWidth() {
        if (accessible()) {
            return size.width(getPointer());
        }
        return 0;
    }

    public int getHeight() {
        if (accessible()) {
            return size.height(getPointer());
        }
        return 0;
    }

    public void setWidth(int w) {
        if (accessible()) {
            size.setWidth(getPointer(),w);
        }
    }

    public void setHeight(int h){
        if (accessible()) {
            size.setHeight(getPointer(),h);
        }
    }

    public void transpose(Size size) {
        if (accessible(size)) {
            this.size.transpose(size.getPointer());
        }
    }

    public Size transposed() {
        if (accessible()) {
            long pointer = size.transposed(getPointer());
            if (pointer <= 0) {
                return null;
            }
            try {
                Size size = new Size();
                size.wrap(pointer);
                return size;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        }
        return null;
    }

    public void scale(int w, int h, AspectRatioMode mode) {
        if (accessible(w,h,mode)) {
            this.size.scale(getPointer(),w,h,mode.getVal());
        }
    }

    public Size scaled(int w, int h,AspectRatioMode mode) {
        if (accessible(w,h,mode)) {
            long pointer = this.size.scaled(getPointer(),w,h,mode.getVal());
            if (getPointer() < 0) {
                return null;
            }
            try {
                Size size = new Size();
                size.allocate();
                return size;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        }
        return null;
    }

    public Size expandedTo(Rect another){
        if (accessible(another)) {
            long pointer = size.expandedTo(getPointer(),another.getPointer());
            if (pointer <= 0) {
                return null;
            }
            try {
                Size size = new Size();
                size.wrap(pointer);
                return size;
            } catch (Exception e){
                throw new RuntimeException(e);
            }
        } else {
            return null;
        }
    }
    public Size boundedTo(Size another) {
        if (accessible(another)) {
            long pointer = size.boundedTo(getPointer(),another.getPointer());
            if (pointer <= 0) {
                return null;
            }
            try {
                Size size = new Size();
                size.wrap(pointer);
                return size;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        }
        return null;
    }

    public void dispose(){
        if (accessible()) {
            this.size.dispose(getPointer());
            this.size.cleanAddress();
        }
    }

    public Size grownBy(Margins margin) {
        if (accessible(margin)) {
            long pointer = size.grownBy(getPointer(),margin.getPointer());
            if (pointer <= 0) {
                return null;
            }
            try {
                Size size = new Size();
                size.wrap(pointer);
                return size;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        } else {
            return null;
        }
    }

    public Size shrunkBy(Margins margin) {
        if (accessible(margin)) {
            long pointer = size.shrunkBy(getPointer(),margin.getPointer());
            if (pointer <= 0) {
                return null;
            }
            try {
                Size size = new Size();
                size.wrap(pointer);
                return size;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        }
        return null;
    }

    public static Size asSize(long nativePointer) {
        if (nativePointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        Size size = new Size();
        size.wrap(nativePointer);
        MemoryHolder.allocated(size);
        return size;
    }

    public long getPointer() {
        return size.address();
    }

    @Override
    public Consumer<Long> disposer() {
        return SSize.CLEANER;
    }

    @Override
    public String toString() {
        return "Size{" +
                "width = " + getWidth() +
                ", height = " + getHeight() +
                '}';
    }
}
