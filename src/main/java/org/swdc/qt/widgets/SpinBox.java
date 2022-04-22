package org.swdc.qt.widgets;

import org.swdc.qt.internal.widgets.SSpinBox;

public class SpinBox extends AbstractSpinBox {

    private SSpinBox spinBox = new SSpinBox();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = spinBox.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create the spin-box, invalid pointer");
        }
        spinBox.address(pointer);
    }

    @Override
    public void dispose() {
        if (accessible()) {
            spinBox.dispose(getPointer());
            spinBox.cleanAddress();
        }
    }

    @Override
    public long getPointer() {
        return spinBox.address();
    }


    public int value() {
        return !accessible() ? 0 : spinBox.value(getPointer());
    }

    public String getPrefix()  {
        return !accessible() ? null : spinBox.prefix(getPointer());
    }

    public void setPrefix(String prefix) {
        if (accessible(prefix)) {
            spinBox.setPrefix(getPointer(),prefix);
        }
    }

    public String getSuffix() {
        return accessible() ? spinBox.suffix(getPointer()) : null;
    }

    public void setSuffix(String suffix) {
        if (accessible(suffix)) {
            spinBox.setSuffix(getPointer(),suffix);
        }
    }

    public String cleanText() {
        return accessible() ? spinBox.cleanText(getPointer()) : null;
    }

    public int getSingleStep() {
        return accessible() ? spinBox.singleStep(getPointer()) : 0;
    }

    public void setSingleStep(int val) {
        if (accessible()) {
            spinBox.setSingleStep(getPointer(),val);
        }
    }

    public int getMinimum() {
        return accessible() ? spinBox.minimum(getPointer()) : 0;
    }

    public void setMinimum(int min) {
        if (accessible()) {
            spinBox.setMinimum(getPointer(),min);
        }
    }

    public int getMaximum() {
        return accessible() ? spinBox.maximum(getPointer()) : 0;
    }

    public void setMaximum(int max) {
        if (accessible()) {
            spinBox.setMaximum(getPointer(),max);
        }
    }

    public void setRange(int min, int max) {
        if (accessible()) {
            spinBox.setRange(getPointer(),min,max);
        }
    }

    public SpinBoxStepType getStepType() {
        return !accessible() ? null : SpinBoxStepType.valueOf(spinBox.stepType(getPointer()));
    }

    public void setStepType(SpinBoxStepType stepType) {
        if (accessible(stepType)) {
            spinBox.setStepType(getPointer(),stepType.getVal());
        }
    }

    public int getDisplayIntegerBase() {
        if (accessible()) {
            return spinBox.displayIntegerBase(getPointer());
        }
        return 0;
    }

    public void setDisplayIntegerBase(int base) {
        if (accessible()) {
            spinBox.setDisplayIntegerBase(getPointer(),base);
        }
    }

    public void setValue(int val) {
        if (accessible()) {
            spinBox.setValue(getPointer(),val);
        }
    }
}
