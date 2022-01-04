package org.swdc.qt.widgets.action;

import org.swdc.qt.beans.SSize;
import org.swdc.qt.internal.widgets.SToolButton;
import org.swdc.qt.widgets.AbstractButton;

public class ToolButton extends AbstractButton<SToolButton> {

    @Override
    protected SToolButton createButton() {
        return new SToolButton();
    }

    public SSize getSizeHint() {
        if(getPointer() > 0) {
            return button.sizeHint(getPointer());
        }
        return null;
    }

    public SSize getMinimumSizeHint() {
        if (getPointer() > 0) {
            return button.minimumSizeHint(getPointer());
        }
        return null;
    }

    public void setToolButtonStyle(ToolButtonStyle style) {
        if (getPointer() > 0) {
            button.setToolButtonStyle(getPointer(),style.getVal());
        }
    }

    public int getToolButtonStyle() {
        if (getPointer() > 0) {
            return button.toolButtonStyle(getPointer());
        }
        return 0;
    }

    public void setAutoRaise(boolean enable) {
        if (getPointer() > 0) {
            button.setAutoRaise(getPointer(),enable);
        }
    }

    public boolean isAutoRaise() {
        if (getPointer() > 0) {
            return button.autoRaise(getPointer());
        }
        return false;
    }

    public ToolArrowType getArrowType() {
        if (getPointer() > 0) {
            int val = button.arrowType(getPointer());
            return ToolArrowType.valueOf(val);
        }
        return null;
    }

    public void setArrowType(ToolArrowType type) {
        if (getPointer() > 0) {
            button.setArrowType(getPointer(),type.getVal());
        }
    }

    public void setMenu(Menu menu) {
        if (getPointer() > 0 && menu.getPointer() > 0) {
            button.setMenu(getPointer(),menu.getPointer());
        }
    }

    public void setPopupMode(ToolButtonPopupMode mode) {
        if (getPointer() > 0) {
            button.setPopupMode(getPointer(),mode.getVal());
        }
    }

    public ToolButtonPopupMode getPopupMode() {
        if (getPointer() > 0) {
            int val = button.popupMode(getPointer());
            return ToolButtonPopupMode.valueOf(val);
        }
        return null;
    }

    public void showMenu() {
        if (getPointer() > 0) {
            button.showMenu(getPointer());
        }
    }


    public void setDefaultAction(Action action) {
        if (getPointer() > 0 && action.getPointer() > 0) {
            button.setDefaultAction(getPointer(),action.getPointer());
        }
    }

    @Override
    public void allocate() throws Exception {
        if (getPointer() > 0) {
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
