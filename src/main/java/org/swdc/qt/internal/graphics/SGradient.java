package org.swdc.qt.internal.graphics;

import org.apache.commons.lang3.tuple.MutablePair;
import org.apache.commons.lang3.tuple.Pair;
import org.swdc.qt.internal.SPointer;

public class SGradient extends SPointer {

    public native long create();

    private Pair<Double,Long> createStopPair(double pos, long rgba) {
        Pair<Double,Long> pair = MutablePair.of(pos,rgba);
        return pair;
    }

    private double getPairPos(Pair<Double,Long> stopPair) {
        return stopPair.getLeft();
    }

    private long getPairColor(Pair<Double,Long> stopPair) {
        return stopPair.getRight();
    }

    public native int type(long pointer);

    public native void setSpread(long pointer,int gradientSpread);
    public native int spread(long pointer);

    public native void setColorAt(long pointer,double pos, long rgbColor);

    public native void setStops(long pointer,Pair<Double,Long>[] colors);
    public native Pair<Double,Long>[] stops(long pointer);

    public native int coordinateMode(long pointer);
    public native void setCoordinateMode(long pointer,int mode);

    public native int interpolationMode(long pointer);
    public native void setInterpolationMode(long pointer,int mode);

    public native void dispose(long pointer);

}
