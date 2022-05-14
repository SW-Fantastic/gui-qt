package org.swdc.qt.internal.widgets;

import java.util.function.Consumer;

public class SDateEdit extends SDateTimeEdit {

    private static final SDateEdit instance = new SDateEdit();
    public static final Consumer<Long> CLEANER = instance::dispose;

    public native long create(long parent);
    public native void dispose(long pointer);

}
