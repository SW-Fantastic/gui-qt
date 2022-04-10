package org.swdc.qt.internal.text;

public class STextFrameIterItem {

    private long blockPointer;

    private long framePointer;

    STextFrameIterItem(long blockPointer, long framePointer) {
        this.blockPointer = blockPointer;
        this.framePointer = framePointer;
    }

    public long getFramePointer() {
        return framePointer;
    }

    public long getBlockPointer() {
        return blockPointer;
    }

}
