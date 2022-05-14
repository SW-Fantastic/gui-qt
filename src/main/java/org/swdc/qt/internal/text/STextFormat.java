package org.swdc.qt.internal.text;

import org.apache.commons.lang3.tuple.ImmutablePair;
import org.swdc.qt.internal.SPointer;

import java.util.function.Consumer;

public class STextFormat extends SPointer {

    private static final STextFormat instance = new STextFormat();
    public static final Consumer<Long> CLEANER = instance::dispose;

    private ImmutablePair<Integer,Long> getPair(int propertyId, long pointer) {
        return ImmutablePair.of(propertyId,pointer);
    }

    public native long create();
    public native long create(int formatType);

    public native void dispose(long pointer);

    public native void merge(long pointer,long other);

    public native boolean isValid(long pointer);
    public native boolean isEmpty(long pointer);

    public native int type(long pointer);

    public native int objectIndex(long pointer);
    public native void setObjectIndex(long pointer,int object);

    public native long property(long pointer,int propertyId);
    public native void setProperty(long pointer,int propertyId,long value);
    public native void clearProperty(long pointer,int propertyId);
    public native boolean hasProperty(long pointer,int propertyId);

    public native boolean boolProperty(long pointer,int propertyId);
    public native int intProperty(long pointer,int propertyId);
    public native double doubleProperty(long pointer,int propertyId);
    public native String stringProperty(long pointer,int propertyId);
    public native long colorProperty(long pointer,int propertyId);
    public native long penProperty(long pointer,int propertyId);
    public native long brushProperty(long pointer,int propertyId);

    public native long lengthProperty(long pointer,int propertyId);
    public native long[] lengthVectorProperty(long pointer,int propertyId);
    public native void setProperty(long pointer,int propertyId, long[] textLengths);
    public native ImmutablePair<Integer,Long>[] properties(long pointer);

    public native int propertyCount(long pointer);

    public native void setObjectType(long pointer,int type);
    public native int objectType(long pointer);

    public native boolean isCharFormat(long pointer);
    public native boolean isBlockFormat(long pointer);
    public native boolean isListFormat(long pointer);
    public native boolean isFrameFormat(long pointer);
    public native boolean isImageFormat(long pointer);
    public native boolean isTableFormat(long pointer);
    public native boolean isTableCellFormat(long pointer);

    public native long toBlockFormat(long pointer);
    public native long toCharFormat(long pointer);
    public native long toListFormat(long pointer);
    public native long toTableFormat(long pointer);
    public native long toFrameFormat(long pointer);
    public native long toImageFormat(long pointer);
    public native long toTableCellFormat(long pointer);

    public native void setLayoutDirection(long pointer,int direction);
    public native int layoutDirection(long pointer);

    public native void setBackground(long pointer,long brush);
    public native long background(long pointer);
    public native void clearBackground(long pointer);

    public native void setForeground(long pointer,long brush);
    public native long foreground(long pointer);
    public native void clearForeground(long pointer);

}
