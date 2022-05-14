package org.swdc.qt.widgets;

import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.widgets.SDateEdit;

import java.util.function.Consumer;

public class DateEdit extends DateTimeEdit {

    private SDateEdit edit = new SDateEdit();

    @Override
    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = edit.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create a date-edit, allocation failed");
        }
        edit.address(pointer);
        MemoryHolder.allocated(this);
    }

    @Override
    public long getPointer() {
        return edit.address();
    }

    @Override
    public Consumer<Long> disposer() {
        return SDateEdit.CLEANER;
    }

    @Override
    public void dispose() {
        if (accessible()) {
            edit.dispose(getPointer());
            edit.cleanAddress();
        }
    }
}

