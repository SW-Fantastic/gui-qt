package org.swdc.qt.widgets;

import org.swdc.qt.internal.widgets.SCheckBox;
import org.swdc.qt.widgets.pane.Widget;

public class CheckBox extends AbstractButton<SCheckBox> {

    @Override
    protected SCheckBox createButton() {
        return new SCheckBox();
    }

    @Override
    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = button.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create a checkbox");
        }
        button.address(pointer);
    }

    public <T extends Widget> void allocate(T parent) throws Exception {
        if (getPointer() > 0) {
            return;
        }
        if (parent.getPointer() > 0) {
            throw new Exception("parent is invalid");
        }
        long pointer = button.create(parent.getPointer());
        if (pointer <= 0) {
            throw new Exception("can not create Checkbox");
        }
        button.address(pointer);
    }

    public Size sizeHint() {
        if (getPointer() > 0) {
            long pointer = button.sizeHint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public Size minimumSizeHint() {
        if (getPointer() > 0) {
            long pointer = button.minimumSizeHint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public void setTristate(boolean y) {
        if (getPointer() > 0) {
            button.setTristate(getPointer(),y);
        }
    }

    public boolean isTristate() {
        if (getPointer() > 0) {
            return button.isTristate(getPointer());
        }
        return false;
    }

    public CheckState checkState() {
        if (getPointer() > 0) {
            int state = button.checkState(getPointer());
            return CheckState.valueOf(state);
        }
        return null;
    }

    public void setCheckState(CheckState state) {
        if (getPointer() > 0) {
            button.setCheckState(getPointer(),state.getVal());
        }
    }

    public long getPointer() {
        return button.address();
    }

}
