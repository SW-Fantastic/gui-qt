package org.swdc.qt.internal.text;

import java.util.function.Consumer;

public class STextFrame extends STextObject {

    private static final STextFrame instance = new STextFrame();
    public static final Consumer<Long> CLEANER = instance::dispose;

    public native long create(long documentPointer);
    public native void dispose(long pointer);

    public native void setFrameFormat(long pointer,long formatPointer);
    public native long frameFormat(long pointer);

    public native long firstCursorPosition(long pointer);
    public native long lastCursorPosition(long pointer);
    public native int firstPosition(long pointer);
    public native int lastPosition(long pointer);

    public native long[] childFrames(long pointer);
    public native long parentFrame(long pointer);

    private native long iterator(long pointer);
    public STextFrameIterator iterator() {
        return address() > 0 ? new STextFrameIterator(iterator(address())) : null;
    }


}
