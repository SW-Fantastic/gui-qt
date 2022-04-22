package org.swdc.qt.widgets;

import org.swdc.qt.internal.widgets.SDateEdit;

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
    }

    @Override
    public long getPointer() {
        return edit.address();
    }

    @Override
    public void dispose() {
        if (accessible()) {
            edit.dispose(getPointer());
            edit.cleanAddress();
        }
    }
}

