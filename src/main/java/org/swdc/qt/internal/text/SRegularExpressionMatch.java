package org.swdc.qt.internal.text;

import org.swdc.qt.internal.SPointer;

import java.util.function.Consumer;

public class SRegularExpressionMatch extends SPointer {

    private static final SRegularExpressionMatch instance = new SRegularExpressionMatch();
    public static final Consumer<Long> CLEANER = instance::dispose;

    public native long create();

    public native void dispose(long pointer);
    public native long regularExpression(long pointer);
    public native int matchType(long pointer);

    public native boolean hasMatch(long pointer);
    public native boolean hasPartialMatch(long pointer);

    public native boolean isValid(long pointer);

    public native int lastCapturedIndex(long pointer);

    public native String captured(long pointer,int nth);
    public native String captured(long pointer,String name);

    public native String[] capturedTexts(long pointer);

    public native int capturedStart(long pointer,int nth);
    public native int capturedLength(long pointer,int nth);
    public native int capturedEnd(long pointer,int nth);

    public native int capturedStart(long pointer,String name);
    public native int capturedLength(long pointer,String name);
    public native int capturedEnd(long pointer,String name);

}
