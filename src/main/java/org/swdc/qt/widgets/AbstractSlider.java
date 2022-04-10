package org.swdc.qt.widgets;

import org.swdc.qt.beans.Orientation;
import org.swdc.qt.beans.SliderAction;
import org.swdc.qt.internal.widgets.SAbstractSlider;
import org.swdc.qt.widgets.pane.Widget;

public abstract class AbstractSlider extends Widget {

    private SAbstractSlider abstractSlider = new SAbstractSlider();

    public Orientation getOrientation() {
        if (accessible()) {
            long val = abstractSlider.orientation(getPointer());
            return Orientation.valueOf(val);
        }
        return null;
    }

    public void setMinimum(int min) {
        if (accessible()) {
            abstractSlider.setMinimum(getPointer(),min);
        }
    }

    public int getMinimum() {
        if (accessible()) {
            return abstractSlider.minimum(getPointer());
        }
        return 0;
    }

    public void setMaximum(int val) {
        if (accessible()) {
            abstractSlider.setMaximum(getPointer(),val);
        }
    }
    public int getMaximum() {
        if (accessible()) {
            return abstractSlider.maximum(getPointer());
        }
        return 0;
    }

    public void setSingleStep(int val) {
        if (accessible()) {
            abstractSlider.setSingleStep(getPointer(),val);
        }
    }

    public int getSingleStep() {
        if (accessible()) {
            abstractSlider.singleStep(getPointer());
        }
        return 0;
    }

    public void setPageStep(int val) {
        if (accessible()) {
            abstractSlider.setPageStep(getPointer(),val);
        }
    }

    public int getPageStep() {
        if (accessible()) {
            return abstractSlider.pageStep(getPointer());
        }
        return 0;
    }

    public void setTracking(boolean enable) {
        if (accessible()) {
            abstractSlider.setTracking(getPageStep(),enable);
        }
    }

    public boolean hasTracking() {
        if (accessible()) {
            return abstractSlider.hasTracking(getPointer());
        }
        return false;
    }

    public void setSliderDown(boolean val) {
        if (accessible()) {
            abstractSlider.setSliderDown(getPointer(),val);
        }
    }

    public boolean isSliderDown() {
        if (accessible()) {
            return abstractSlider.isSliderDown(getPointer());
        }
        return false;
    }

    public void setSliderPosition(int val) {
        if (accessible()) {
            abstractSlider.setSliderPosition(getPointer(),val);
        }
    }

    public int getSliderPosition() {
        if (accessible()) {
            return abstractSlider.sliderPosition(getPointer());
        }
        return 0;
    }

    public void setInvertedAppearance(boolean val){
        if (accessible()) {
            abstractSlider.setInvertedAppearance(getPointer(),val);
        }
    }

    public boolean isInvertedAppearance(){
        if (accessible()) {
            return abstractSlider.invertedAppearance(getPointer());
        }
        return false;
    }

    public void setInvertedControls(boolean val) {
        if (accessible()) {
            abstractSlider.setInvertedControls(getPointer(),val);
        }
    }

    public boolean isInvertedControls() {
        if (accessible()) {
            return abstractSlider.invertedControls(getPointer());
        }
        return false;
    }

    public int value() {
        if (accessible()) {
            return abstractSlider.value(getPointer());
        }
        return 0;
    }

    public void triggerAction(SliderAction action) {
        if (accessible()) {
            abstractSlider.triggerAction(getPointer(),action.getVal());
        }
    }

    public void setValue(int val) {
        if (accessible()) {
            abstractSlider.setValue(getPointer(),val);
        }
    }

    public void setOrientation(Orientation orientation) {
        if (accessible()) {
            abstractSlider.setOrientation(getPointer(),orientation.getVal());
        }
    }

    public void setRange(int min, int max) {
        if (accessible()) {
            abstractSlider.setRange(getPointer(),min,max);
        }
    }

    public abstract long getPointer();

}
