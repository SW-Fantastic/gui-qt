package org.swdc.qt.internal;


public class SPointer {

    private long pointer;

    public void address(long pointer) {
        if (pointer <= 0 || this.pointer > 0) {
            return;
        }
        this.pointer = pointer;
    }

    public long address() {
        if (pointer <= 0){
            return 0;
        }
        return pointer;
    }

    public void cleanAddress() {
        MemoryHolder.onDispose(pointer);
        this.pointer = 0;
    }

    public boolean isUsable() {
        return pointer > 0;
    }

}
