package org.swdc.qt.widgets.dialogs;

import org.swdc.qt.internal.dialogs.SDialog;
import org.swdc.qt.widgets.Size;
import org.swdc.qt.widgets.pane.Widget;

public abstract class AbstractDialog extends Widget {

    private SDialog dialog = new SDialog();

    public abstract <T extends Widget> void allocate(T widget) throws Exception;

    public int result() {
        if (getPointer() > 0) {
            return dialog.result(getPointer());
        }
        return 0;
    }

    public void setVisible(boolean visible) {
        if (getPointer() > 0) {
            dialog.setVisible(getPointer(),visible);
        }
    }

    public Size sizeHint() {
        if (getPointer() > 0){
            long size = dialog.sizeHint(getPointer());
            if (size <= 0){
                return null;
            }
            return Size.asSize(size);
        }
        return null;
    }

    public Size minimumSizeHint() {
        if (getPointer() > 0) {
            long size = dialog.minimumSizeHint(getPointer());
            if (size <= 0) {
                return null;
            }
            return Size.asSize(size);
        }
        return null;
    }

    public void setSizeGripEnabled(boolean val) {
        if (getPointer() > 0) {
            dialog.setSizeGripEnabled(getPointer(),val);
        }
    }

    public boolean isSizeGripEnabled() {
        if (getPointer() > 0) {
            return dialog.isSizeGripEnabled(getPointer());
        }
        return false;
    }

    public void setModal(boolean modal) {
        if (getPointer() > 0) {
            dialog.setModal(getPointer(),modal);
        }
    }

    public void setResult(int r) {
        if (getPointer() > 0) {
            dialog.setResult(getPointer(),r);
        }
    }

    public void open() {
        if (getPointer() > 0) {
            dialog.open(getPointer());
        }
    }

    public void exec() {
        if (getPointer() > 0) {
            dialog.exec(getPointer());
        }
    }

    public void done(int val) {
        if (getPointer() > 0) {
            dialog.done(getPointer(),val);
        }
    }

    public void accept() {
        if (getPointer() > 0) {
            dialog.accept(getPointer());
        }
    }

    public void reject() {
        if (getPointer() > 0) {
            dialog.reject(getPointer());
        }
    }

    public abstract void dispose();

}
