package org.swdc.qt.internal.text;

import org.swdc.qt.internal.SPointer;

import java.util.function.Consumer;

public class STextBlock extends SPointer {

    private static final STextBlock instance = new STextBlock();
    public static final Consumer<Long> CLEANER = instance::dispose;

    public native long create();
    public native long create(long anotherTextBlock);
    public native void dispose(long pointer);

    public native boolean isValid(long pointer);
    public native int position(long pointer);
    public native int length(long pointer);
    public native boolean contains(long pointer,int position);

    public native long layout(long pointer);
    public native void clearLayout(long pointer);
    public native long blockFormat(long pointer);
    public native int blockFormatIndex(long pointer);
    public native long charFormat(long pointer);
    public native int charFormatIndex(long pointer);

    public native int textDirection(long pointer);

    public native String text(long pointer);

    public native long[] textFormats(long pointer);

    public native long document(long pointer);

    public native long textList(long pointer);

    /*QTextBlockUserData *userData() const;
    void setUserData(QTextBlockUserData *data);*/

    public native int userState(long pointer);
    public native void setUserState(long pointer,int state);

    public native int revision(long pointer);
    public native void setRevision(long pointer,int rev);

    public native boolean isVisible(long pointer);
    public native void setVisible(long pointer,boolean visible);

    public native int blockNumber(long pointer);
    public native int firstLineNumber(long pointer);

    public native void setLineCount(long pointer,int count);
    public native int lineCount(long pointer);

    public native long next(long pointer);
    public native long previous(long pointer);

    private native long iterator(long pointer);

    public STextBlockIterator iterator() {
        return address() > 0 ? new STextBlockIterator(iterator(address())) : null;
    }

    public native int fragmentIndex(long pointer);
}
