package org.swdc.qt.widgets.pane;

import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.widgets.SFrame;
import org.swdc.qt.widgets.Rect;

public class Frame extends Widget{

    private SFrame frame = new SFrame();

    @Override
    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = frame.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create a frame");
        }
        frame.address(pointer);
        MemoryHolder.allocated(this);
    }

    public <T extends Widget> void allocate(T parent) throws Exception {
        if (accessible()) {
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
        MemoryHolder.allocated(this);
    }

    public int getLineWidth() {
        if (accessible()) {
            return frame.lineWidth(getPointer());
        }
        return 0;
    }

    public void setLineWidth(int width) {
        if (accessible()) {
            frame.setLineWidth(getPointer(),width);
        }
    }

    public int getMidLineWidth() {
        if (accessible()) {
            return frame.midLineWidth(getPointer());
        }
        return 0;
    }

    public void setMidLineWidth(int val) {
        if (accessible()) {
            frame.setMidLineWidth(getPointer(),val);
        }
    }

    public Rect getFrameRect() {
        if (accessible()) {
            long pointer = frame.frameRect(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Rect.asRect(pointer);
        }
        return null;
    }

    public void setFrameRect(Rect rect) {
        if (accessible(rect)) {
            frame.setFrameRect(getPointer(),rect.getPointer());
        }
    }

    public FrameShape getFrameShape() {
        if (accessible()) {
            int shape = frame.frameShape(getPointer());
            return FrameShape.valueOf(shape);
        }
        return null;
    }

    public void setFrameShape(FrameShape shape) {
        if (accessible(shape)) {
            frame.setFrameShape(getPointer(),shape.getVal());
        }
    }

    public FrameShadow getFrameShadow() {
        if (accessible()) {
            int val = frame.frameShadow(getPointer());
            return FrameShadow.valueOf(val);
        }
        return null;
    }

    public void setFrameShadow(FrameShadow shadow) {
        if (accessible(shadow)) {
            frame.setFrameShadow(getPointer(),shadow.getVal());
        }
    }

    @Override
    public long getPointer() {
        return frame.address();
    }
}
