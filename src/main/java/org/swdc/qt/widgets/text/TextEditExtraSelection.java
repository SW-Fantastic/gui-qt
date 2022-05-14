package org.swdc.qt.widgets.text;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.text.STextEditExtraSelection;

import java.util.function.Consumer;

public class TextEditExtraSelection implements NativeAllocated {

    private STextEditExtraSelection selection = new STextEditExtraSelection();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = selection.create();
        if (pointer <= 0) {
            throw new Exception("can not create a text-edit-extra-selection, invalid pointer");
        }
        selection.address(pointer);
        MemoryHolder.allocated(this);
    }

    @Override
    public void dispose() {
        if (accessible()) {
            selection.dispose(getPointer());
        }
    }

    @Override
    public long getPointer() {
        return selection.address();
    }

    public TextCursor getCursor() {
        if (accessible()) {
            long pointer = selection.cursor(getPointer());
            if (pointer > 0) {
                return TextCursor.asTextCursor(pointer);
            }
        }
        return null;
    }
    public void setCursor(TextCursor cursor) {
        if (accessible(cursor)) {
            selection.cursor(getPointer(),cursor.getPointer());
        }
    }

    public TextFormat getFormat() {
        if (accessible()) {
            long pointer = selection.format(getPointer());
            if (pointer > 0) {
                return TextFormat.asTextFormat(pointer);
            }
        }
        return null;
    }

    public void setFormat(TextFormat format) {
        if (accessible(format)) {
            selection.format(getPointer(),format.getPointer());
        }
    }

    public static TextEditExtraSelection asTextEditExtraSelection(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("can not create text-edit-extra-selection, invalid pointer");
        }
        TextEditExtraSelection selection = new TextEditExtraSelection();
        selection.selection.address(pointer);
        MemoryHolder.allocated(selection);
        return selection;
    }

    @Override
    public Consumer<Long> disposer() {
        return STextEditExtraSelection.CLEANER;
    }
}
