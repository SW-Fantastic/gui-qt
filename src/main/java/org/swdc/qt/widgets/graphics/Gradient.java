package org.swdc.qt.widgets.graphics;

import org.apache.commons.lang3.tuple.Pair;
import org.swdc.qt.NativeAllocated;
import org.swdc.qt.internal.graphics.SGradient;

import java.util.Arrays;
import java.util.List;

public abstract class Gradient implements NativeAllocated {

    private SGradient gradient = new SGradient();

    public abstract long getPointer();

    public GradientType type() {
        if (accessible()) {
            int type = gradient.type(getPointer());
            return GradientType.valueOf(type);
        }
        return null;
    }

    public void setSpread(GradientSpread gradientSpread) {
        if (accessible()) {
            gradient.setSpread(getPointer(),gradientSpread.getVal());
        }
    }

    public GradientSpread getSpread() {
        if (accessible()) {
            int val = gradient.spread(getPointer());
            return GradientSpread.valueOf(val);
        }
        return null;
    }

    public void setColorAt(double pos, Color color) {
        if (accessible(color)) {
            gradient.setColorAt(getPointer(),pos,color.getVal());
        }
    }

    public void setStops(List<Pair<Double, Long>> colors) {
        if (accessible()) {
            Pair[] values = colors.toArray(new Pair[0]);
            gradient.setStops(getPointer(),values);
        }
    }

    public List<Pair<Double,Long>> getStops() {
        if (accessible()) {
            Pair<Double,Long>[] colors = gradient.stops(getPointer());
            return Arrays.asList(colors);
        }
        return null;
    }

    public GradientCoordinateMode coordinateMode(){
        if (accessible()) {
            int val = gradient.coordinateMode(getPointer());
            return GradientCoordinateMode.valueOf(val);
        }
        return null;
    }

    public void setCoordinateMode(GradientCoordinateMode mode) {
        if (accessible(mode)) {
            gradient.setCoordinateMode(getPointer(),mode.getVal());
        }
    }

    public GradientInterpolationMode interpolationMode() {
        if (accessible()) {
            int val = gradient.interpolationMode(getPointer());
            return GradientInterpolationMode.valueOf(val);
        }
        return null;
    }

    public void setInterpolationMode(GradientInterpolationMode mode) {
        if (accessible(mode)) {
            gradient.setInterpolationMode(getPointer(),mode.getVal());
        }
    }

    public void dispose() {
        if (accessible()) {
            gradient.dispose(getPointer());
            gradient.cleanAddress();
        }
    }

}
