package org.swdc.qt.internal.widgets;

import java.util.function.Consumer;

public class SMdiSubWindow extends SWidget {

    private Consumer<Long> afterDestroy = null;

    public native long sizeHint(long pointer);
    public native long minimumSizeHint(long pointer);

    public native void setWidget(long pointer,long widget);
    public native long widget(long pointer);

    public native boolean isShaded(long pointer);

    public native void setOption(long pointer,int option, boolean on);

    public native void setKeyboardSingleStep(long pointer,int step);
    public native int keyboardSingleStep(long pointer);

    public native void setKeyboardPageStep(long pointer,int step);
    public native int keyboardPageStep(long pointer);

    public native void wrap(long pointer);

    public void setAfterDestroy(Consumer<Long> afterDestroy) {
        this.afterDestroy = afterDestroy;
    }

    @Override
    public void cleanAddress() {
        if (this.afterDestroy != null) {
            afterDestroy.accept(this.address());
        }
        super.cleanAddress();
    }
}
