package org.swdc.qt.widgets.graphics;

import org.swdc.qt.internal.graphics.SPen;

public class Pen {

    private SPen pen = new SPen();

    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = pen.create();
        if (pointer <= 0) {
            throw new Exception("failed to create pen");
        }
        pen.address(pointer);
    }

    private void wrap(long pointer) {
        if (getPointer() > 0) {
            return;
        }
        if (pointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        pen.address(pointer);
    }

    public long getPointer() {
        return pen.address();
    }


    public PenStyle getStyle() {
        if (getPointer() > 0) {
            int val = pen.style(getPointer());
            return PenStyle.valueOf(val);
        } else {
            return null;
        }
    }

    public void setStyle(PenStyle style) {
        if (getPointer() > 0) {
            pen.setStyle(getPointer(),style.getVal());
        }
    }

    public double[] dashPattern() {
        if (getPointer() > 0) {
            return pen.dashPattern(getPointer());
        } else {
            return new double[0];
        }
    }
    public void setDashPattern(double[] pattern) {
        if (getPointer() > 0) {
            pen.setDashPattern(getPointer(),pattern);
        }
    }

    public double dashOffset() {
        if (getPointer() > 0) {
            return pen.dashOffset(getPointer());
        }
        return 0;
    }

    public void setDashOffset(double doffset) {
        if (getPointer() > 0) {
            pen.setDashOffset(getPointer(),doffset);
        }
    }

    public double miterLimit() {
        if (getPointer() > 0) {
            return pen.miterLimit(getPointer());
        }
        return 0;
    }

    public void setMiterLimit(double limit){
        if (getPointer() > 0) {
            pen.setMiterLimit(getPointer(),limit);
        }
    }

    public int getWidth() {
        if (getPointer() > 0) {
            pen.width(getPointer());
        }
        return 0;
    }

    public void setWidth(int width) {
        if (getPointer() > 0) {
            pen.setWidth(getPointer(),width);
        }
    }

    public Color getColor() {
        if (getPointer() > 0) {
            long color = pen.color(getPointer());
            Color result = new Color();
            result.allocate(color);
            return result;
        } else {
            return null;
        }
    }

    public void setColor(Color color) {
        if (getPointer() > 0) {
            pen.setColor(getPointer(),color.getVal());
        }
    }

    public PenCapStyle getCapStyle() {
        if (getPointer() > 0) {
            int val = pen.capStyle(getPointer());
            return PenCapStyle.valueOf(val);
        } else {
            return null;
        }
    }

    public void setCapStyle(PenCapStyle pcs) {
        if (getPointer() > 0) {
            pen.setCapStyle(getPointer(),pcs.getVal());
        }
    }

    public PenJoinStyle getJoinStyle() {
        if (getPointer() > 0) {
            int joinStyle = pen.joinStyle(getPointer());
            return PenJoinStyle.valueOf(joinStyle);
        }
        return null;
    }

    public void setJoinStyle(PenJoinStyle pcs) {
        if (getPointer() > 0) {
            pen.setJoinStyle(getPointer(),pcs.getVal());
        }
    }

    public boolean isCosmetic() {
        if (getPointer() > 0) {
            return pen.isCosmetic(getPointer());
        }
        return false;
    }

    public void setCosmetic(boolean cosmetic) {
        if (getPointer() > 0) {
            pen.setCosmetic(getPointer(),cosmetic);
        }
    }

    public void dispose() {
        if (getPointer() > 0) {
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
        return pen;
    }

}
