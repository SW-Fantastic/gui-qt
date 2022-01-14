package org.swdc.qt.internal.graphics;

import org.swdc.qt.internal.SPointer;

public class SFont extends SPointer {

    public native long create();
    public native long create(String family, int pointSize, int weight, boolean italic);

    public native String family(long pointer);
    public native void setFamily(long pointer,String family);
    public native String styleName(long pointer);
    public native void setStyleName(long pointer,String name);

    public native int pointSize(long pointer);
    public native void setPointSize(long pointer,int size);
    public native double pointSizeF(long pointer);
    public native void setPointSizeF(long pointer,double size);

    public native int pixelSize(long pointer);
    public native void setPixelSize(long pointer,int size);

    public native int weight(long pointer);
    public native void setWeight(long pointer,int weight);

    public native boolean bold(long pointer);
    public native void setBold(long pointer,boolean bold);

    public native void setStyle(long pointer,int fontStyle);
    public native int style(long pointer);

    public native boolean italic(long pointer);
    public native void setItalic(long pointer,boolean b);

    public native boolean underline(long pointer);
    public native void setUnderline(long pointer,boolean val);

    public native boolean overline(long pointer);
    public native void setOverline(long pointer,boolean val);

    public native boolean strikeOut(long pointer);
    public native void setStrikeOut(long pointer,boolean val);

    public native boolean fixedPitch(long pointer);
    public native void setFixedPitch(long pointer,boolean val);

    public native boolean kerning(long pointer);
    public native void setKerning(long pointer,boolean val);

    public native int styleHint(long pointer);
    public native long styleStrategy(long pointer);
    public native void setStyleHint(long pointer,int styleHint, long fontStyleStrategy);
    public native void setStyleStrategy(long pointer,long fontStyleStrategy);

    public native int stretch(long pointer);
    public native void setStretch(long pointer,int val);

    public native double letterSpacing(long pointer);
    public native int letterSpacingType(long pointer);
    public native void setLetterSpacing(long pointer,int spacingType, double spacing);

    public native double wordSpacing(long pointer);
    public native void setWordSpacing(long pointer,double spacing);

    public native void setCapitalization(long pointer,int capitalization);
    public native int capitalization(long pointer);

    public native void setHintingPreference(long pointer,int hintingPreference);
    public native int hintingPreference(long pointer);

    public native boolean isCopyOf(long pointer,long anotherFont);
    public native String key(long pointer);

    public native void dispose(long pointer);


    public static native long loadFont(String absPath);
}
