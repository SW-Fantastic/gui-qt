package org.swdc.qt.widgets.graphics;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.graphics.SPen;

import java.util.function.Consumer;

public class Pen implements NativeAllocated {

    private SPen pen = new SPen();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = pen.create();
        if (pointer <= 0) {
            throw new Exception("failed to create pen");
        }
        pen.address(pointer);
        MemoryHolder.allocated(this);
    }

    private void wrap(long pointer) {
        if (accessible()) {
            return;
        }
        if (pointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        pen.address(pointer);
    }

    @Override
    public long getPointer() {
        return pen.address();
    }


    public PenStyle getStyle() {
        if (accessible()) {
            int val = pen.style(getPointer());
            return PenStyle.valueOf(val);
        } else {
            return null;
        }
    }

    public void setStyle(PenStyle style) {
        if (accessible()) {
            pen.setStyle(getPointer(),style.getVal());
        }
    }

    public double[] dashPattern() {
        if (accessible()) {
            return pen.dashPattern(getPointer());
        } else {
            return new double[0];
        }
    }
    public void setDashPattern(double[] pattern) {
        if (accessible()) {
            pen.setDashPattern(getPointer(),pattern);
        }
    }

    public double dashOffset() {
        if (accessible()) {
            return pen.dashOffset(getPointer());
        }
        return 0;
    }

    public void setDashOffset(double doffset) {
        if (accessible()) {
            pen.setDashOffset(getPointer(),doffset);
        }
    }

    public double miterLimit() {
        if (accessible()) {
            return pen.miterLimit(getPointer());
        }
        return 0;
    }

    public void setMiterLimit(double limit){
        if (accessible()) {
            pen.setMiterLimit(getPointer(),limit);
        }
    }

    public int getWidth() {
        if (accessible()) {
            pen.width(getPointer());
        }
        return 0;
    }

    public void setWidth(int width) {
        if (accessible()) {
            pen.setWidth(getPointer(),width);
        }
    }

    public Color getColor() {
        if (accessible()) {
            long color = pen.color(getPointer());
            Color result = new Color();
            result.allocate(color);
            return result;
        } else {
            return null;
        }
    }

    public void setColor(Color color) {
        if (accessible()) {
            pen.setColor(getPointer(),color.getVal());
        }
    }

    public PenCapStyle getCapStyle() {
        if (accessible()) {
            int val = pen.capStyle(getPointer());
            return PenCapStyle.valueOf(val);
        } else {
            return null;
        }
    }

    public void setCapStyle(PenCapStyle pcs) {
        if (accessible()) {
            pen.setCapStyle(getPointer(),pcs.getVal());
        }
    }

    public PenJoinStyle getJoinStyle() {
        if (accessible()) {
            int joinStyle = pen.joinStyle(getPointer());
            return PenJoinStyle.valueOf(joinStyle);
        }
        return null;
    }

    public void setJoinStyle(PenJoinStyle pcs) {
        if (accessible()) {
            pen.setJoinStyle(getPointer(),pcs.getVal());
        }
    }

    public boolean isCosmetic() {
        if (accessible()) {
            return pen.isCosmetic(getPointer());
        }
        return false;
    }

    public void setCosmetic(boolean cosmetic) {
        if (accessible()) {
            pen.setCosmetic(getPointer(),cosmetic);
        }
    }

    @Override
    public void dispose() {
        if (accessible()) {
            pen.dispose(getPointer());
            pen.cleanAddress();
        }
    }

    public static Pen asPen(long nativePointer) {
        if (nativePointer <= 0) {
            throw new RuntimeException("invalid Pointer");
        }
        Pen pen = new Pen();
        pen.wrap(nativePointer);
        MemoryHolder.allocated(pen);
        return pen;
    }

    @Override
    public Consumer<Long> disposer() {
        return SPen.CLEANER;
    }
}
