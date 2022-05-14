package org.swdc.qt.internal.widgets;

import java.util.function.Consumer;

public class STimeEdit extends SDateTimeEdit {

    private static final STimeEdit instance = new STimeEdit();
    public static final Consumer<Long> CLEANER = instance::dispose;

    public native long create(long parent);
    public native void dispose(long pointer);

}
