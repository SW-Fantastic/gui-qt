package org.swdc.qt.internal.text;

public class STextCharFormat extends STextFormat {

    public native long create();
    public native void dispose(long pointer);

    public native boolean isValid(long pointer);

    public native void setFont(long pointer,long font,int behavior);
    public native void setFont(long pointer,long font); // ### Qt6: Merge with above
    public native long font(long pointer);

    public native void setFontFamily(long pointer,String family);
    public native String fontFamily(long pointer);

    public native void setFontFamilies(long pointer,String[] families);
    public native String[] fontFamilies(long pointer);

    public native void setFontStyleName(long pointer,String styleName);
    public native String fontStyleName(long pointer);

    public native void setFontPointSize(long pointer,double size);
    public native double fontPointSize(long pointer);

    public native void setFontWeight(long pointer,int weight);
    public native int fontWeight(long pointer);
    public native void setFontItalic(long pointer,boolean italic);
    public native boolean fontItalic(long pointer);
    public native void setFontCapitalization(long pointer,int capitalization);
    public native int fontCapitalization(long pointer);
    public native void setFontLetterSpacingType(long pointer,int letterSpacingType);
    public native int fontLetterSpacingType(long pointer);
    public native void setFontLetterSpacing(long pointer,double spacing);
    public native double fontLetterSpacing(long pointer);
    public native void setFontWordSpacing(long pointer,double spacing);
    public native double fontWordSpacing(long pointer);

    public native void setFontUnderline(long pointer,boolean underline);
    public native boolean fontUnderline(long pointer);

    public native void setFontOverline(long pointer,boolean overline);
    public native boolean fontOverline(long pointer);

    public native void setFontStrikeOut(long pointer,boolean strikeOut);
    public native boolean fontStrikeOut(long pointer);

    public native void setUnderlineColor(long pointer,long color);
    public native long underlineColor(long pointer);

    public native void setFontFixedPitch(long pointer,boolean fixedPitch);
    public native boolean fontFixedPitch(long pointer);

    public native void setFontStretch(long pointer,int factor);
    public native int fontStretch(long pointer);

    public native void setFontStyleHint(long pointer,int hint, long strategy);
    public native void setFontStyleStrategy(long pointer,int strategy);
    public native int fontStyleHint(long pointer);
    public native long fontStyleStrategy(long pointer);

    public native void setFontHintingPreference(long pointer,int hintingPreference);

    public native int fontHintingPreference(long pointer);

    public native void setFontKerning(long pointer,boolean enable);
    public native boolean fontKerning(long pointer);

    public native void setUnderlineStyle(long pointer,int style);
    public native int underlineStyle(long pointer);

    public native void setVerticalAlignment(long pointer,int alignment);
    public native int verticalAlignment(long pointer);

    public native void setTextOutline(long pointer,long pen);
    public native long textOutline(long pointer);

    public native void setToolTip(long pointer,String tip);
    public native String toolTip(long pointer);

    public native void setAnchor(long pointer,boolean anchor);
    public native boolean isAnchor(long pointer);

    public native void setAnchorHref(long pointer,String value);
    public native String anchorHref(long pointer);

}
