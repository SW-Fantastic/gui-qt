package org.swdc.qt.widgets.pane;

import org.swdc.qt.internal.widgets.SMdiSubWindow;
import org.swdc.qt.widgets.Size;

import java.util.function.Consumer;

public class MdiSubWindow extends Widget {

    private SMdiSubWindow sMdiSubWindow = new SMdiSubWindow();

    private Widget widget;

    @Override
    public void allocate() throws Exception {
        throw new Exception("you can not allocate a mdi-window.");
    }

    @Override
    public long getPointer() {
        return sMdiSubWindow.address();
    }

    public Size getSizeHint() {
        if (getPointer() > 0) {
            long pointer = sMdiSubWindow.sizeHint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public Size getMinimumSizeHint() {
        if (getPointer() > 0) {
            long pointer = sMdiSubWindow.minimumSizeHint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public <T extends Widget> void setWidget(T widget) {
        if (getPointer() > 0 && widget.getPointer() > 0) {
            sMdiSubWindow.setWidget(getPointer(),widget.getPointer());
            this.widget = widget;
        }
    }

    public <T extends Widget> T widget() {
        if (getPointer() > 0) {
            return (T)widget;
        }
        return null;
    }

    public boolean isShaded(){
        if (getPointer() > 0) {
            return sMdiSubWindow.isShaded(getPointer());
        }
        return false;
    }

    public void setOption(MdiSubWindowOption option, boolean on) {
        if (getPointer() > 0) {
            sMdiSubWindow.setOption(getPointer(),option.getVal(),on);
        }
    }

    public void setKeyboardSingleStep(int step){
        if (getPointer() > 0) {
            sMdiSubWindow.setKeyboardSingleStep(getPointer(),step);
        }
    }

    public int getKeyboardSingleStep(){
        if (getPointer() > 0) {
            return sMdiSubWindow.keyboardSingleStep(getPointer());
        }
        return 0;
    }

    public void setKeyboardPageStep(int step) {
        if (getPointer() > 0) {
            sMdiSubWindow.setKeyboardPageStep(getPointer(),step);
        }
    }

    public int getKeyboardPageStep() {
        if (getPointer() > 0) {
            return sMdiSubWindow.keyboardPageStep(getPointer());
        }
        return 0;
    }

    public static MdiSubWindow asMdiSubWindow(long pointer, Consumer<Long> onClosed) {
        if (pointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        MdiSubWindow window = new MdiSubWindow();
        window.sMdiSubWindow.address(pointer);
        window.sMdiSubWindow.wrap(pointer);
        window.sMdiSubWindow.setAfterDestroy(onClosed);
        return window;
    }

}
