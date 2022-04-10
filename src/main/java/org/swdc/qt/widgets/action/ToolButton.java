package org.swdc.qt.widgets.action;

import org.swdc.qt.internal.widgets.SToolButton;
import org.swdc.qt.listeners.PaintListener;
import org.swdc.qt.listeners.WindowListener;
import org.swdc.qt.widgets.AbstractButton;
import org.swdc.qt.widgets.Size;

public class ToolButton extends AbstractButton<SToolButton> {

    @Override
    protected SToolButton createButton() {
        return new SToolButton();
    }

    @Override
    public void setPaintListener(PaintListener paintListener) {
        this.button.setPaintListener(paintListener);
    }

    @Override
    public PaintListener getPaintListener() {
        return button.getPaintListener();
    }

    @Override
    public WindowListener getWindowListener() {
        return button.getWindowListener();
    }

    @Override
    public void setWindowListener(WindowListener listener) {
        button.setWindowListener(listener);
    }

    public Size getSizeHint() {
        if(accessible()) {
            long pointer = button.sizeHint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public Size getMinimumSizeHint() {
        if (accessible()) {
            long pointer = button.minimumSizeHint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public void setToolButtonStyle(ToolButtonStyle style) {
        if (accessible(style)) {
            button.setToolButtonStyle(getPointer(),style.getVal());
        }
    }

    public int getToolButtonStyle() {
        if (accessible()) {
            return button.toolButtonStyle(getPointer());
        }
        return 0;
    }

    public void setAutoRaise(boolean enable) {
        if (accessible()) {
            button.setAutoRaise(getPointer(),enable);
        }
    }

    public boolean isAutoRaise() {
        if (accessible()) {
            return button.autoRaise(getPointer());
        }
        return false;
    }

    public ToolArrowType getArrowType() {
        if (accessible()) {
            int val = button.arrowType(getPointer());
            return ToolArrowType.valueOf(val);
        }
        return null;
    }

    public void setArrowType(ToolArrowType type) {
        if (accessible(type)) {
            button.setArrowType(getPointer(),type.getVal());
        }
    }

    public void setMenu(Menu menu) {
        if (accessible(menu)) {
            button.setMenu(getPointer(),menu.getPointer());
        }
    }

    public void setPopupMode(ToolButtonPopupMode mode) {
        if (accessible(mode)) {
            button.setPopupMode(getPointer(),mode.getVal());
        }
    }

    public ToolButtonPopupMode getPopupMode() {
        if (accessible()) {
            int val = button.popupMode(getPointer());
            return ToolButtonPopupMode.valueOf(val);
        }
        return null;
    }

    public void showMenu() {
        if (accessible()) {
            button.showMenu(getPointer());
        }
    }


    public void setDefaultAction(Action action) {
        if (accessible(action)) {
            button.setDefaultAction(getPointer(),action.getPointer());
        }
    }

    @Override
    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = button.create();
        if (pointer <= 0) {
            throw new Exception("failed to create tool button");
        }
        button.address(pointer);
    }

    @Override
    public long getPointer() {
        return button.address();
    }
}
