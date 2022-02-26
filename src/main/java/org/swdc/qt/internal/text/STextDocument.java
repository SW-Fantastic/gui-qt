package org.swdc.qt.internal.text;

import org.swdc.qt.internal.SPointer;

public class STextDocument extends SPointer {

    public native long create();
    public native void dispose(long pointer);

    public native boolean isEmpty();
    public native void clear();

    public native void setUndoRedoEnabled(boolean enable);
    public native boolean isUndoRedoEnabled();

    public native boolean isUndoAvailable();
    public native boolean isRedoAvailable();

    public native int availableUndoSteps();
    public native int availableRedoSteps();

    public native int revision();


}
