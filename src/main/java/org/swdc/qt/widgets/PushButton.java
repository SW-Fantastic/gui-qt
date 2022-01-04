package org.swdc.qt.widgets;

import org.swdc.qt.internal.widgets.SButton;
import org.swdc.qt.listeners.ClickedListener;

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
    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = button.create(0L,"");
        if (pointer <= 0) {
            throw new Exception("failed to create button");
        }
        button.address(pointer);
    }

    @Override
    public long getPointer() {
        return button.address();
    }
}
