package org.swdc.qt.internal.widgets;

public class SAbstractSlider extends SWidget {

    public native long orientation(long pointer);

    public native void setMinimum(long pointer,int min);
    public native int minimum(long pointer);

    public native void setMaximum(long pointer,int val);
    public native int maximum(long pointer);

    public native void setSingleStep(long pointer,int val);
    public native int singleStep(long pointer);

    public native void setPageStep(long pointer,int val);
    public native int pageStep(long pointer);

    public native void setTracking(long pointer,boolean enable);
    public native boolean hasTracking(long pointer);

    public native void setSliderDown(long pointer,boolean val);
    public native boolean isSliderDown(long pointer);

    public native void setSliderPosition(long pointer,int val);
    public native int sliderPosition(long pointer);

    public native void setInvertedAppearance(long pointer,boolean val);
    public native boolean invertedAppearance(long pointer);

    public native void setInvertedControls(long pointer,boolean val);
    public native boolean invertedControls(long pointer);

    public native int value(long pointer);
    public native void triggerAction(long pointer,int action);

    public native void setValue(long pointer,int val);
    public native void setOrientation(long pointer,long orientation);
    public native void setRange(long pointer,int min, int max);

}
