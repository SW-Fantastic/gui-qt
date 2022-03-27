package org.swdc.qt.internal.text;

import org.swdc.qt.internal.SPointer;

import java.util.Iterator;

public class SRegularExpressionMatchIterator extends SPointer implements Iterator<Long> {

    public SRegularExpressionMatchIterator(long iteratorPointer) {
        if (iteratorPointer <= 0) {
            throw new RuntimeException("pointer is invalid");
        }
        address(iteratorPointer);
    }

    public native void dispose(long pointer);
    public native boolean hasNext(long pointer);
    public native long nextMatch(long pointer);
    public native long peekNextMatch(long pointer);
    public native long regularExpression(long pointer);
    public native int matchType(long pointer);

    @Override
    public boolean hasNext() {
        return hasNext(address());
    }

    @Override
    public Long next() {
        return nextMatch(address());
    }
}
