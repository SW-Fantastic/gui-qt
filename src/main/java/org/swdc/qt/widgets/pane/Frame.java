package org.swdc.qt.widgets.pane;

import org.swdc.qt.internal.widgets.SFrame;
import org.swdc.qt.widgets.Rect;

public class Frame extends Widget{

    private SFrame frame = new SFrame();

    @Override
    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = frame.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create a frame");
        }
        frame.address(pointer);
    }

    public <T extends Widget> void allocate(T parent) throws Exception {
        if (getPointer() > 0) {
            return;
        }
        if (parent.getPointer() <= 0) {
            throw new Exception("invalid parent widget.");
        }
        long pointer = frame.create(parent.getPointer());
        if (pointer <= 0) {
            throw new Exception("can not create a frame");
        }
        frame.address(pointer);
    }

    public int getLineWidth() {
        if (getPointer() > 0) {
            return frame.lineWidth(getPointer());
        }
        return 0;
    }

    public void setLineWidth(int width) {
        if (getPointer() > 0) {
            frame.setLineWidth(getPointer(),width);
        }
    }

    public int getMidLineWidth() {
        if (getPointer() > 0) {
            return frame.midLineWidth(getPointer());
        }
        return 0;
    }

    public void setMidLineWidth(int val) {
        if (getPointer() > 0) {
            frame.setMidLineWidth(getPointer(),val);
        }
    }

    public Rect getFrameRect() {
        if (getPointer() > 0) {
            long pointer = frame.frameRect(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Rect.asRect(pointer);
        }
        return null;
    }

    public void setFrameRect(Rect rect) {
        if (getPointer() > 0 && rect.getPointer() > 0) {
            frame.setFrameRect(getPointer(),rect.getPointer());
        }
    }

    public FrameShape getFrameShape() {
        if (getPointer() > 0) {
            int shape = frame.frameShape(getPointer());
            return FrameShape.valueOf(shape);
        }
        return null;
    }

    public void setFrameShape(FrameShape shape) {
        if (getPointer() > 0) {
            frame.setFrameShape(getPointer(),shape.getVal());
        }
    }

    public FrameShadow getFrameShadow() {
        if (getPointer() > 0) {
            int val = frame.frameShadow(getPointer());
            return FrameShadow.valueOf(val);
        }
        return null;
    }

    public void setFrameShadow(FrameShadow shadow) {
        if (getPointer() > 0) {
            frame.setFrameShadow(getPointer(),shadow.getVal());
        }
    }

    @Override
    public long getPointer() {
        return frame.address();
    }
}
