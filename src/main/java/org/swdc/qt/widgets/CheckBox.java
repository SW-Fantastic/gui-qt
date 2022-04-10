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
        if (accessible()) {
            return;
        }
        long pointer = button.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create a checkbox");
        }
        button.address(pointer);
    }

    public <T extends Widget> void allocate(T parent) throws Exception {
        if (accessible()) {
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
        if (accessible()) {
            long pointer = button.sizeHint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public Size minimumSizeHint() {
        if (accessible()) {
            long pointer = button.minimumSizeHint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public void setTristate(boolean y) {
        if (accessible()) {
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
        if (accessible()) {
            int state = button.checkState(getPointer());
            return CheckState.valueOf(state);
        }
        return null;
    }

    public void setCheckState(CheckState state) {
        if (accessible(state)) {
            button.setCheckState(getPointer(),state.getVal());
        }
    }

    public long getPointer() {
        return button.address();
    }

}
