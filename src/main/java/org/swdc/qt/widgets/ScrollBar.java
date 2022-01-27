package org.swdc.qt.widgets;

import org.swdc.qt.internal.widgets.SScrollBar;

public class ScrollBar extends AbstractSlider {

    private SScrollBar bar = new SScrollBar();

    @Override
    public void allocate() throws Exception {
        if(getPointer() > 0) {
            return;
        }
        long pointer = bar.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create a scrollbar");
        }
        bar.address(pointer);
    }

    public Size getSizeHint() {
        if (getPointer() > 0) {
            long pointer = bar.sizeHint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public static ScrollBar asScrollBar(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        ScrollBar bar = new ScrollBar();
        bar.bar.address(pointer);
        bar.bar.wrap(pointer);
        return bar;
    }

    @Override
    public long getPointer() {
        return bar.address();
    }
}
