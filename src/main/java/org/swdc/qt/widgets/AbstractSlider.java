package org.swdc.qt.widgets;

import org.swdc.qt.beans.Orientation;
import org.swdc.qt.beans.SliderAction;
import org.swdc.qt.internal.widgets.SAbstractSlider;
import org.swdc.qt.widgets.pane.Widget;

public abstract class AbstractSlider extends Widget {

    private SAbstractSlider abstractSlider = new SAbstractSlider();

    public Orientation getOrientation() {
        if (getPointer() > 0) {
            long val = abstractSlider.orientation(getPointer());
            return Orientation.valueOf(val);
        }
        return null;
    }

    public void setMinimum(int min) {
        if (getPointer() > 0) {
            abstractSlider.setMinimum(getPointer(),min);
        }
    }

    public int getMinimum() {
        if (getPointer() > 0) {
            return abstractSlider.minimum(getPointer());
        }
        return 0;
    }

    public void setMaximum(int val) {
        if (getPointer() > 0) {
            abstractSlider.setMaximum(getPointer(),val);
        }
    }
    public int getMaximum() {
        if (getPointer() > 0) {
            return abstractSlider.maximum(getPointer());
        }
        return 0;
    }

    public void setSingleStep(int val) {
        if (getPointer() > 0) {
            abstractSlider.setSingleStep(getPointer(),val);
        }
    }

    public int getSingleStep() {
        if (getPointer() > 0) {
            abstractSlider.singleStep(getPointer());
        }
        return 0;
    }

    public void setPageStep(int val) {
        if (getPointer() > 0) {
            abstractSlider.setPageStep(getPointer(),val);
        }
    }

    public int getPageStep() {
        if (getPointer() > 0) {
            return abstractSlider.pageStep(getPointer());
        }
        return 0;
    }

    public void setTracking(boolean enable) {
        if (getPointer() > 0) {
            abstractSlider.setTracking(getPageStep(),enable);
        }
    }

    public boolean hasTracking() {
        if (getPointer() > 0) {
            return abstractSlider.hasTracking(getPointer());
        }
        return false;
    }

    public void setSliderDown(boolean val) {
        if (getPointer() > 0) {
            abstractSlider.setSliderDown(getPointer(),val);
        }
    }

    public boolean isSliderDown() {
        if (getPointer() > 0) {
            return abstractSlider.isSliderDown(getPointer());
        }
        return false;
    }

    public void setSliderPosition(int val) {
        if (getPointer() > 0) {
            abstractSlider.setSliderPosition(getPointer(),val);
        }
    }

    public int getSliderPosition() {
        if (getPointer() > 0) {
            return abstractSlider.sliderPosition(getPointer());
        }
        return 0;
    }

    public void setInvertedAppearance(boolean val){
        if (getPointer() > 0) {
            abstractSlider.setInvertedAppearance(getPointer(),val);
        }
    }

    public boolean isInvertedAppearance(){
        if (getPointer() > 0) {
            return abstractSlider.invertedAppearance(getPointer());
        }
        return false;
    }

    public void setInvertedControls(boolean val) {
        if (getPointer() > 0) {
            abstractSlider.setInvertedControls(getPointer(),val);
        }
    }

    public boolean isInvertedControls() {
        if (getPointer() > 0) {
            return abstractSlider.invertedControls(getPointer());
        }
        return false;
    }

    public int value() {
        if (getPointer() > 0) {
            return abstractSlider.value(getPointer());
        }
        return 0;
    }

    public void triggerAction(SliderAction action) {
        if (getPointer() > 0) {
            abstractSlider.triggerAction(getPointer(),action.getVal());
        }
    }

    public void setValue(int val) {
        if (getPointer() > 0) {
            abstractSlider.setValue(getPointer(),val);
        }
    }

    public void setOrientation(Orientation orientation) {
        if (getPointer() > 0) {
            abstractSlider.setOrientation(getPointer(),orientation.getVal());
        }
    }

    public void setRange(int min, int max) {
        if (getPointer() > 0) {
            abstractSlider.setRange(getPointer(),min,max);
        }
    }

    public abstract long getPointer();

}
