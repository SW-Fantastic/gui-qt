package org.swdc.qt.internal.widgets;

public class SScrollBar extends SAbstractSlider {

    public native long create(long parent);
    public native long sizeHint(long pointer);

    public native void wrap(long pointer);

}
