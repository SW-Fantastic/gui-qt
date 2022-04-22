package org.swdc.qt.widgets;

import org.swdc.qt.internal.widgets.SDoubleSpinBox;

public class DoubleSpinBox extends AbstractSpinBox {

    private SDoubleSpinBox doubleSpinBox = new SDoubleSpinBox();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = doubleSpinBox.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create the spin-box, invalid pointer");
        }
        doubleSpinBox.address(pointer);
    }

    @Override
    public void dispose() {
        if (accessible()) {
            doubleSpinBox.dispose(getPointer());
            doubleSpinBox.cleanAddress();
        }
    }


    @Override
    public long getPointer() {
        return doubleSpinBox.address();
    }

    public double getValue() {
        return accessible() ? doubleSpinBox.value(getPointer()) :0;
    }

    public String getPrefix() {
        return accessible() ? doubleSpinBox.prefix(getPointer()) : null;
    }

    public void setPrefix(String prefix) {
        if (accessible(prefix)) {
            doubleSpinBox.setPrefix(getPointer(),prefix);
        }
    }

    public String getSuffix() {
        return accessible() ? doubleSpinBox.suffix(getPointer()) : null;
    }

    public void setSuffix(String suffix) {
        if (accessible(suffix)) {
            doubleSpinBox.setSuffix(getPointer(),suffix);
        }
    }

    public String cleanText() {
        return accessible() ? doubleSpinBox.cleanText(getPointer()) : null;
    }

    public double getSingleStep() {
        return accessible() ? doubleSpinBox.singleStep(getPointer()) : 0;
    }

    public void setSingleStep(double val) {
        if (accessible()) {
            doubleSpinBox.setSingleStep(getPointer(),val);
        }
    }

    public double getMinimum() {
        if (accessible()) {
            return doubleSpinBox.minimum(getPointer());
        }
        return 0;
    }

    public void setMinimum(double min) {
        if (accessible()) {
            doubleSpinBox.setMinimum(getPointer(),min);
        }
    }

    public double getMaximum() {
        return accessible() ? doubleSpinBox.maximum(getPointer()) : 0;
    }

    public void setMaximum(double max) {
        if (accessible()) {
            doubleSpinBox.setMaximum(getPointer(),max);
        }
    }

    public void setRange(double min, double max) {
        if (accessible()) {
            doubleSpinBox.setRange(getPointer(),min,max);
        }
    }

    public SpinBoxStepType getStepType()  {
        return accessible() ? SpinBoxStepType.valueOf(doubleSpinBox.stepType(getPointer())) : null;
    }

    public void setStepType(SpinBoxStepType stepType) {
        if (accessible()) {
            doubleSpinBox.setStepType(getPointer(),stepType.getVal());
        }
    }

    public int getDecimals() {
        return accessible() ? doubleSpinBox.decimals(getPointer()) : 0;
    }

    public void setDecimals(int prec) {
        if (accessible()) {
            doubleSpinBox.setDecimals(getPointer(),prec);
        }
    }

    public double valueFromText(String text) {
        if (accessible(text)) {
            return doubleSpinBox.valueFromText(getPointer(),text);
        }
        return 0;
    }

    public String textFromValue(double val) {
        if (accessible()) {
            return doubleSpinBox.textFromValue(getPointer(),val);
        }
        return null;
    }

    public void fixup(String str) {
        if (accessible(str)) {
            doubleSpinBox.fixup(getPointer(),str);
        }
    }
}
