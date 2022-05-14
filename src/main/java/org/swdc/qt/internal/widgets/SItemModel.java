package org.swdc.qt.internal.widgets;

import org.swdc.qt.internal.SPointer;
import org.swdc.qt.widgets.ItemModel;

import java.util.function.Consumer;

public class SItemModel extends SPointer {

    private static final SItemModel instance = new SItemModel();
    public static final Consumer<Long> CLEANER = instance::dispose;

    /**
     * @param self the item model instance.
     * @return the native pointer
     */
    public native long create(ItemModel self);

    /**
     * destroy this C++ object.
     * @param pointer native pointer
     */
    public native void dispose(long pointer);

    public native void resetReferences(long pointer);

}
