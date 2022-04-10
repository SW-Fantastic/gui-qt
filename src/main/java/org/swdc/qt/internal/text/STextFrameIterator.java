package org.swdc.qt.internal.text;

import org.apache.commons.lang3.tuple.ImmutablePair;
import org.swdc.qt.internal.SPointer;

import java.util.Iterator;

public class STextFrameIterator extends SPointer implements Iterator<STextFrameIterItem> {


    public STextFrameIterator(long iterPointer) {
        if (iterPointer <= 0) {
            throw new RuntimeException("invalid frame iterator.");
        }
        address(iterPointer);
    }

    private STextFrameIterItem getItem(long blockPointer, long framePointer) {
        return new STextFrameIterItem(blockPointer,framePointer);
    }

    public native boolean hasNext(long iterPointer);

    public native STextFrameIterItem next(long iterPointer);

    public native void dispose(long iterPointer);

    @Override
    public boolean hasNext() {
        return hasNext(address());
    }

    @Override
    public STextFrameIterItem next() {
        return next(address());
    }
}
