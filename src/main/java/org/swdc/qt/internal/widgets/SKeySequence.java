package org.swdc.qt.internal.widgets;

import org.swdc.qt.internal.SPointer;

public class SKeySequence extends SPointer {

    public native long create();
    public native long create(String text);
    public native long create(int val);

    public native void dispose(long pointer);

    public native int matches(long pointer,long seq);
    public native String toString(long pointer,int format);
    public native boolean isDetached(long pointer);

    public native static long fromString(String str,int format);
    public native static long mnemonic(String text);
    public native static long[] keyBindings(int key);

}
