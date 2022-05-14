package org.swdc.qt.widgets;

import org.swdc.qt.beans.Alignment;
import org.swdc.qt.beans.Orientation;
import org.swdc.qt.internal.widgets.SProgressBar;
import org.swdc.qt.widgets.pane.Widget;

public class ProgressBar extends Widget {

    private SProgressBar bar = new SProgressBar();

    @Override
    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = bar.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create a progress-bar , allocation failed");
        }
        bar.address(pointer);
    }

    @Override
    public long getPointer() {
        return bar.address();
    }

    @Override
    public void dispose() {
        if (accessible()) {
            bar.dispose(getPointer());
            bar.cleanAddress();
        }
    }

    public int getMinimum() {
        return accessible() ? bar.minimum(getPointer()) : 0;
    }

    public int getMaximum() {
        return accessible() ? bar.maximum(getPointer()) : 0;
    }

    public int getValue() {
        return accessible() ? bar.value(getPointer()) : 0;
    }

    public String getText() {
        return accessible() ? bar.text(getPointer()) : null;
    }

    public void setTextVisible(boolean visible) {
        if (accessible()) {
            bar.setTextVisible(getPointer(),visible);
        }
    }

    public boolean isTextVisible() {
        return accessible() && bar.isTextVisible(getPointer());
    }

    public Alignment getAlignment() {
        return accessible() ? Alignment.valueOf(bar.alignment(getPointer())) : null;
    }

    public void setAlignment(Alignment alignment) {
        if (accessible(alignment)) {
            bar.setAlignment(getPointer(),alignment.getFlagValue());
        }
    }

    public Point getSizeHint() {
        if (accessible()) {
            long pointer = bar.sizeHint(getPointer());
            if (pointer  > 0) {
                return Point.asPoint(pointer);
            }
        }
        return null;
    }

    public Point getMinimumSizeHint() {
        if (accessible()) {
            long pointer = bar.minimumSizeHint(getPointer());
            if (pointer > 0) {
                return Point.asPoint(pointer);
            }
        }
        return null;
    }

    public Orientation getOrientation() {
        return accessible() ? Orientation.valueOf(bar.orientation(getPointer())) : null;
    }

    public void setInvertedAppearance(boolean invert) {
        if (accessible()) {
            bar.setInvertedAppearance(getPointer(),invert);
        }
    }

    public boolean invertedAppearance() {
        return accessible() && bar.invertedAppearance(getPointer());
    }

    public void setTextDirection(ProgressDirection textDirection) {
        if (accessible(textDirection)) {
            bar.setTextDirection(getPointer(),textDirection.getVal());
        }
    }

    public ProgressDirection getTextDirection() {
        return accessible() ? ProgressDirection.valueOf(bar.textDirection(getPointer())) : null;
    }

    public void setFormat(String format) {
        if (accessible(format)) {
            bar.setFormat(getPointer(),format);
        }
    }

    public void resetFormat() {
        if (accessible()) {
            bar.resetFormat(getPointer());
        }
    }

    public String getFormat() {
        return accessible() ? bar.format(getPointer()) : null;
    }

    public void reset() {
        if (accessible()) {
            bar.reset(getPointer());
        }
    }

    public void setRange(int minimum, int maximum) {
        if (accessible()) {
            bar.setRange(getPointer(),minimum,maximum);
        }
    }

    public void setMinimum(int minimum) {
        if (accessible(minimum)) {
            bar.setMinimum(getPointer(),minimum);
        }
    }

    public void setMaximum(int maximum) {
        if (accessible(maximum)) {
            bar.setMaximum(getPointer(),maximum);
        }
    }

    public void setValue(int value) {
        if (accessible()) {
            bar.setValue(getPointer(),value);
        }
    }

    public void setOrientation(Orientation orientation) {
        if (accessible(orientation))  {
            bar.setOrientation(getPointer(),orientation.getVal());
        }
    }
}
