package org.swdc.qt.widgets;

import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.widgets.SSlider;

import java.util.function.Consumer;

public class Slider extends AbstractSlider {

    private SSlider slider = new SSlider();

    @Override
    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = slider.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create a slider, allocation failed");
        }
        slider.address(pointer);
        MemoryHolder.allocated(this);
    }

    @Override
    public Consumer<Long> disposer() {
        return SSlider.CLEANER;
    }

    @Override
    public void dispose() {
        if (accessible()) {
            slider.dispose(getPointer());
            slider.cleanAddress();
        }
    }

    @Override
    public long getPointer() {
        return slider.address();
    }

    public Size getSizeHint() {
        if (accessible()) {
            long pointer = slider.sizeHint(getPointer());
            if (pointer > 0) {
                return Size.asSize(pointer);
            }
        }
        return null;
    }

    public Size getMinimumSizeHint() {
        if (accessible()) {
            long pointer = slider.minimumSizeHint(getPointer());
            if (pointer > 0) {
                return Size.asSize(pointer);
            }
        }
        return null;
    }

    public void setTickPosition(TickPosition position) {
        if (accessible(position)) {
            slider.setTickPosition(getPointer(),position.getVal());
        }
    }

    public TickPosition getTickPosition() {
        if (accessible()) {
            int val = slider.tickPosition(getPointer());
            return TickPosition.valueOf(val);
        }
        return null;
    }

    public void setTickInterval(int ti) {
        if (accessible()) {
            slider.setTickInterval(getPointer(),ti);
        }
    }
    public int getTickInterval() {
        return accessible() ? slider.tickInterval(getPointer()) : 0;
    }

}
