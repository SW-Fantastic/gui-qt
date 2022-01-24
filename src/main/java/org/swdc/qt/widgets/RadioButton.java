package org.swdc.qt.widgets;

import org.swdc.qt.internal.widgets.SRadioButton;

public class RadioButton extends AbstractButton<SRadioButton> {

    @Override
    protected SRadioButton createButton() {
        return new SRadioButton();
    }

    @Override
    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = button.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create a radiobutton");
        }
        button.address(pointer);
    }

    public long getPointer() {
        return button.address();
    }
}
