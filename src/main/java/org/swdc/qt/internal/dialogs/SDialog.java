package org.swdc.qt.internal.dialogs;

import org.swdc.qt.internal.widgets.SWidget;

public class SDialog extends SWidget {

    public native long create(long parent);

    public native int result(long pointer);
    public native void setVisible(long pointer,boolean visible);

    public native long sizeHint(long pointer);
    public native long minimumSizeHint(long pointer);

    public native void setSizeGripEnabled(long pointer,boolean val);
    public native boolean isSizeGripEnabled(long pointer);

    public native void setModal(long pointer,boolean modal);
    public native void setResult(long pointer,int r);

    public native void open(long pointer);
    public native void exec(long pointer);
    public native void done(long pointer, int val);
    public native void accept(long pointer);
    public native void reject(long pointer);

    public native void dispose(long pointer);
}
