package org.swdc.qt.widgets;

import org.swdc.qt.internal.widgets.SButton;
import org.swdc.qt.listeners.ClickedListener;
import org.swdc.qt.listeners.PaintListener;
import org.swdc.qt.listeners.WindowListener;

public class PushButton extends AbstractButton<SButton> {

    @Override
    protected SButton createButton() {
        return new SButton();
    }

    public void setClickListener(ClickedListener listener) {
        button.setClickedListener(listener);
    }

    public ClickedListener getClickedListener() {
        return button.getClickedListener();
    }

    @Override
    public void setWindowListener(WindowListener listener) {
        button.setWindowListener(listener);
    }

    @Override
    public WindowListener getWindowListener() {
        return button.getWindowListener();
    }

    @Override
    public void setPaintListener(PaintListener paintListener) {
        button.setPaintListener(paintListener);
    }

    @Override
    public PaintListener getPaintListener() {
        return button.getPaintListener();
    }

    @Override
    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = button.create(0L);
        if (pointer <= 0) {
            throw new Exception("failed to create button");
        }
        button.address(pointer);
    }

    public static PushButton asPushButton(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        PushButton button = new PushButton();
        button.button.address(pointer);
        button.button.wrap(pointer);
        return button;
    }

    @Override
    public long getPointer() {
        return button.address();
    }
}
