package org.swdc.qt.widgets;

import org.swdc.qt.internal.widgets.SKeySequenceEdit;
import org.swdc.qt.widgets.pane.Widget;

public class KeySequenceEdit extends Widget {

    private SKeySequenceEdit sequenceEdit = new SKeySequenceEdit();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = sequenceEdit.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create a key-sequence-edit, allocate failed");
        }
        sequenceEdit.address(pointer);
    }

    @Override
    public void dispose() {
        if (accessible()) {
            sequenceEdit.dispose(getPointer());
            sequenceEdit.cleanAddress();
        }
    }

    @Override
    public long getPointer() {
        return sequenceEdit.address();
    }

    public void setKeySequence(KeySequence keySequence) {
        if (accessible(keySequence)) {
            sequenceEdit.setKeySequence(getPointer(),keySequence.getPointer());
        }
    }

    public void clear() {
        if (accessible()) {
            sequenceEdit.clear(getPointer());
        }
    }

    public KeySequence getKeySequence() {
        if (accessible()) {
            long pointer = sequenceEdit.keySequence(getPointer());
            if (pointer > 0) {
                return KeySequence.asKeySequence(pointer);
            }
        }
        return null;
    }
}
