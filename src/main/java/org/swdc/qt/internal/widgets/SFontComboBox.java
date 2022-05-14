package org.swdc.qt.internal.widgets;

import java.util.function.Consumer;

public class SFontComboBox extends SComboBox {

    private static final SFontComboBox instance = new SFontComboBox();
    public static final Consumer<Long> CLEANER = instance::dispose;

    public native long create(long parentPointer);
    public native void dispose(long pointer);

    public native void setFontFilters(long pointer,int filters);
    public native long currentFont(long pointer);
    public native long sizeHint(long pointer);
    public native void setCurrentFont(long pointer,long font);

}
