package org.swdc.qt.widgets;

import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.widgets.STimeEdit;

import java.util.function.Consumer;

public class TimeEdit extends DateTimeEdit {

    private STimeEdit edit = new STimeEdit();

    @Override
    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = edit.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create date-time-edit.");
        }
        edit.address(pointer);
        MemoryHolder.allocated(this);
    }

    @Override
    public Consumer<Long> disposer() {
        return STimeEdit.CLEANER;
    }

    @Override
    public void dispose() {
        if (accessible()) {
            edit.dispose(getPointer());
            edit.cleanAddress();
        }
    }

    @Override
    public long getPointer() {
        return edit.address();
    }

}
