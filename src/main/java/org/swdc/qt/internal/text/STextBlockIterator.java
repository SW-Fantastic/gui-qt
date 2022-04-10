package org.swdc.qt.internal.text;

import org.swdc.qt.internal.SPointer;

import java.util.Iterator;

public class STextBlockIterator extends SPointer implements Iterator<Long> {

    public STextBlockIterator(long textIterPointer) {
        if (textIterPointer <= 0) {
            throw new RuntimeException("invalid text block pointer");
        }
        address(textIterPointer);
    }

    public native boolean hasNext(long iterPointer);

    /**
     * 返回QTextFragment的指针。
     * @param iterPointer iterator指针
     * @return QTextFragment
     */
    public native long next(long iterPointer);

    public native void dispose(long iterPointer);

    @Override
    public boolean hasNext() {
        return hasNext(address());
    }

    @Override
    public Long next() {
        return next(address());
    }
}
