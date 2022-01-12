package org.swdc.qt.widgets.graphics;

import org.apache.commons.lang3.tuple.Pair;
import org.swdc.qt.internal.graphics.SGradient;

import java.util.Arrays;
import java.util.List;

public abstract class Gradient {

    private SGradient gradient = new SGradient();

    public abstract long getPointer();

    public GradientType type() {
        if (getPointer() > 0) {
            int type = gradient.type(getPointer());
            return GradientType.valueOf(type);
        }
        return null;
    }

    public void setSpread(GradientSpread gradientSpread) {
        if (getPointer() > 0) {
            gradient.setSpread(getPointer(),gradientSpread.getVal());
        }
    }

    public GradientSpread getSpread() {
        if (getPointer() > 0) {
            int val = gradient.spread(getPointer());
            return GradientSpread.valueOf(val);
        }
        return null;
    }

    public void setColorAt(double pos, Color color) {
        if (getPointer() > 0) {
            gradient.setColorAt(getPointer(),pos,color.getVal());
        }
    }

    public void setStops(List<Pair<Double, Long>> colors) {
        if (getPointer() > 0) {
            Pair[] values = colors.toArray(new Pair[0]);
            gradient.setStops(getPointer(),values);
        }
    }

    public List<Pair<Double,Long>> getStops() {
        if (getPointer() > 0) {
            Pair<Double,Long>[] colors = gradient.stops(getPointer());
            return Arrays.asList(colors);
        }
        return null;
    }

    public GradientCoordinateMode coordinateMode(){
        if (getPointer() > 0) {
            int val = gradient.coordinateMode(getPointer());
            return GradientCoordinateMode.valueOf(val);
        }
        return null;
    }

    public void setCoordinateMode(GradientCoordinateMode mode) {
        if (getPointer() > 0) {
            gradient.setCoordinateMode(getPointer(),mode.getVal());
        }
    }

    public GradientInterpolationMode interpolationMode() {
        if (getPointer() > 0) {
            int val = gradient.interpolationMode(getPointer());
            return GradientInterpolationMode.valueOf(val);
        }
        return null;
    }

    public void setInterpolationMode(GradientInterpolationMode mode) {
        if (getPointer() > 0) {
            gradient.setInterpolationMode(getPointer(),mode.getVal());
        }
    }

    public void dispose() {
        if (getPointer() > 0) {
            gradient.dispose(getPointer());
            gradient.cleanAddress();
        }
    }

}
