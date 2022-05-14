package org.swdc.qt.internal.text;

import org.swdc.qt.internal.SPointer;

import java.util.function.Consumer;

public class SRegularExpression extends SPointer {

    private static final SRegularExpression instance = new SRegularExpression();
    public static final Consumer<Long> CLEANER = instance::dispose;

    public native long create();
    public native long create(String pattern,int options);

    public native void dispose(long pointer);

    public native void setPatternOptions(long pointer,int options);
    public native String pattern(long pointer);
    public native void setPattern(long pointer,String pattern);

    public native boolean isValid(long pointer);
    public native int patternErrorOffset(long pointer);
    public native String errorString(long pointer);

    public native int captureCount(long pointer);
    public native String[] namedCaptureGroups(long pointer);

    public native long match(long pointer,
                             String subject,
                             int offset,
                             int matchType,
                             int matchOptions);

    private native long globalMatch(long pointer,
                                    String subject,
                                    int offset,
                                    int matchType,
                                    int matchOptions);

    public SRegularExpressionMatchIterator globalMatch(String subject,
                                                       int offset,
                                                       int matchType,
                                                       int matchOptions) {

        long iter = globalMatch(address(),subject,offset,matchType,matchOptions);
        if (iter <= 0) {
            return null;
        }
        return new SRegularExpressionMatchIterator(iter);
    }

    public native void optimize(long pointer);

    public native static String escape(String str);
    public native static String wildcardToRegularExpression(String str);
    public native static String anchoredPattern(String expression);

}
