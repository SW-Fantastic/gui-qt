package org.swdc.qt.internal.text;

import org.swdc.qt.internal.SPointer;

import java.util.function.Consumer;

public class SRegExp extends SPointer {

    private static final SRegExp instance = new SRegExp();
    public static final Consumer<Long> CLEANER = instance::dispose;

    public native long create();
    public native long create(long anotherRegexPointer);
    public native long create(String pattern,int caseSensitive, int syntax);

    public native void dispose(long pointer);

    public native boolean isEmpty(long pointer);
    public native boolean isValid(long pointer);
    public native String pattern(long pointer);
    public native void setPattern(long pointer,String pattern);
    public native int caseSensitivity(long pointer);
    public native void setCaseSensitivity(long pointer,int caseSensitivity);
    public native int patternSyntax(long pointer);
    public native void setPatternSyntax(long pointer,int syntax);

    public native boolean isMinimal(long pointer);
    public native void setMinimal(long pointer,boolean minimal);

    public native boolean exactMatch(long pointer,String str);

    public native int indexIn(long pointer,String str, int offset, int caretMode);
    public native int lastIndexIn(long pointer,String str, int offset,int caretMode);
    public native int matchedLength(long pointer);

    public native int captureCount(long pointer);
    public native String[] capturedTexts(long pointer);
    public native String cap(long pointer,int nth);
    public native int pos(long pointer,int nth);
    public native String errorString(long pointer);

    public native static String escape(String str);

}
