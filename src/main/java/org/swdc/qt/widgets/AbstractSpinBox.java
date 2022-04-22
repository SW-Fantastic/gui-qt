package org.swdc.qt.widgets;

import org.swdc.qt.beans.Alignment;
import org.swdc.qt.internal.widgets.SAbstractSpinBox;
import org.swdc.qt.widgets.pane.Widget;

public abstract class AbstractSpinBox extends Widget {

    private SAbstractSpinBox abstractSpinBox = new SAbstractSpinBox();

    public abstract long getPointer();

    public void setCorrectionMode(SpinBoxCorrectionMode cm) {
        if (accessible(cm)) {
            abstractSpinBox.setCorrectionMode(getPointer(),cm.getVal());
        }
    }

    public SpinBoxCorrectionMode getCorrectionMode() {
        if (accessible()) {
            int val = abstractSpinBox.correctionMode(getPointer());
            return SpinBoxCorrectionMode.valueOf(val);
        }
        return null;
    }

    public boolean hasAcceptableInput() {
        if (accessible()) {
            return abstractSpinBox.hasAcceptableInput(getPointer());
        }
        return false;
    }

    public String getText() {
        if (accessible()) {
            return abstractSpinBox.text(getPointer());
        }
        return null;
    }

    public String getSpecialValueText(){
        if (accessible()) {
            return abstractSpinBox.specialValueText(getPointer());
        }
        return null;
    }

    public void setSpecialValueText(String txt) {
        if (accessible(txt)) {
            abstractSpinBox.setSpecialValueText(getPointer(),txt);
        }
    }

    public boolean wrapping() {
        return ! accessible() || abstractSpinBox.wrapping(getPointer());
    }

    public void setWrapping(boolean w) {
        if (accessible()) {
            abstractSpinBox.setWrapping(getPointer(),w);
        }
    }

    public void setReadOnly(boolean r) {
        if (accessible()) {
            abstractSpinBox.setReadOnly(getPointer(),r);
        }
    }

    public boolean isReadOnly() {
        return accessible() && abstractSpinBox.isReadOnly(getPointer());
    }

    public void setKeyboardTracking(boolean kt) {
        if (accessible()) {
            abstractSpinBox.setKeyboardTracking(getPointer(),kt);
        }
    }

    public boolean isKeyboardTracking() {
        return accessible() && abstractSpinBox.keyboardTracking(getPointer());
    }

    public void setAlignment(Alignment alignment) {
        if (accessible(alignment)) {
            abstractSpinBox.setAlignment(getPointer(),alignment.getFlagValue());
        }
    }

    public Alignment getAlignment() {
        if (accessible()) {
            long val = abstractSpinBox.alignment(getPointer());
            return Alignment.valueOf(val);
        }
        return null;
    }

    public void setFrame(boolean val) {
        if (accessible()) {
            abstractSpinBox.setFrame(getPointer(),val);
        }
    }

    public boolean hasFrame() {
        return accessible() && abstractSpinBox.hasFrame(getPointer());
    }

    public void setAccelerated(boolean on) {
        if (accessible()) {
            abstractSpinBox.setAccelerated(getPointer(),on);
        }
    }

    public boolean isAccelerated() {
        if (accessible()) {
            return abstractSpinBox.isAccelerated(getPointer());
        }
        return false;
    }

    public void setGroupSeparatorShown(boolean shown) {
        if (accessible()) {
            abstractSpinBox.setGroupSeparatorShown(getPointer(),shown);
        }
    }

    public boolean isGroupSeparatorShown() {
        return accessible() && abstractSpinBox.isGroupSeparatorShown(getPointer());
    }

    public Size getSizeHint() {
        if (accessible()) {
            long pointer = abstractSpinBox.sizeHint(getPointer());
            return pointer > 0 ? Size.asSize(pointer) : null;
        }
        return null;
    }

    public Size getMinimumSizeHint() {
        if (accessible()) {
            long pointer = abstractSpinBox.minimumSizeHint(getPointer());
            return pointer > 0 ? Size.asSize(pointer) : null;
        }
        return null;
    }

    public void interpretText() {
        if (accessible()) {
            abstractSpinBox.interpretText(getPointer());
        }
    }

    public void stepUp() {
        if (accessible()) {
            abstractSpinBox.stepUp(getPointer());
        }
    }

    public void stepDown() {
        if (accessible()) {
            abstractSpinBox.stepDown(getPointer());
        }
    }

    public void selectAll() {
        if (accessible()) {
            abstractSpinBox.selectAll(getPointer());
        }
    }

    public void clear() {
        if (accessible()) {
            abstractSpinBox.clear(getPointer());
        }
    }

}
