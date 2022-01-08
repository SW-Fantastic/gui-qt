package org.swdc.qt.widgets;

import org.swdc.qt.beans.AspectRatioMode;
import org.swdc.qt.internal.common.SSize;

public class Size {

    private SSize size = new SSize();

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

    public void wrap(long nativePointer) throws Exception {
        if (getPointer() > 0) {
            return;
        }
        if (nativePointer <= 0) {
            throw new Exception("invalid pointer");
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

    public int getWidth() {
        if (getPointer() > 0) {
            return size.width(getPointer());
        }
        return 0;
    }

    public int getHeight() {
        if (getPointer() > 0) {
            return size.height(getPointer());
        }
        return 0;
    }

    public void setWidth(int w) {
        if (getPointer() > 0) {
            size.setWidth(getPointer(),w);
        }
    }

    public void setHeight(int h){
        if (getPointer() > 0) {
            size.setHeight(getPointer(),h);
        }
    }

    public void transpose(Size size) {
        if (getPointer() > 0 && size.getPointer() > 0) {
            this.size.transpose(size.getPointer());
        }
    }

    public Size transposed() {
        if (getPointer() > 0) {
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
        if (getPointer() > 0) {
            this.size.scale(getPointer(),w,h,mode.getVal());
        }
    }

    public Size scaled(int w, int h,AspectRatioMode mode) {
        if (getPointer() > 0) {
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
        if (getPointer() > 0 && another.getPointer() > 0) {
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
        if (getPointer() > 0 && another.getPointer() > 0) {
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
        if (getPointer() > 0) {
            this.size.dispose(getPointer());
        }
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
