package org.swdc.qt.internal.widgets;

import org.swdc.qt.internal.SPointer;
import org.swdc.qt.listeners.PaintListener;
import org.swdc.qt.listeners.WindowListener;
import org.swdc.qt.widgets.graphics.Painter;

import java.util.function.Consumer;

public class SWidget extends SPointer  {

    public static final Consumer<Long> CLEANER = (p) -> new SWidget().doDispose(p);

    private WindowListener windowListener;

    private PaintListener paintListener;

    public void setWindowListener(WindowListener listener) {
        this.windowListener = listener;
    }

    public WindowListener getWindowListener() {
        return windowListener;
    }

    public PaintListener getPaintListener() {
        return paintListener;
    }

    public void setPaintListener(PaintListener paintListener) {
        this.paintListener = paintListener;
    }

    // -------------------------------事件处理----------------------------

    private void onWindowTitleChange(String newTitle) {
        if (windowListener == null) {
            return;
        }
        windowListener.onWindowTitleChanged(newTitle);
    }

    private void onWindowContextMenuRequest(int x, int y) {
        if (windowListener == null) {
            return;
        }
        windowListener.onContextMenuRequest(x,y);
    }

    private void onPaint(Painter painter) {
        if (paintListener == null) {
            return;
        }
        paintListener.onPaint(painter);
    }


    private Painter createPainter(long pointer) throws Exception {
        Painter painter = new Painter();
        painter.allocateNativeWidget(pointer);
        return painter;
    }

    private void removePainter(Painter painter) {
        painter.dispose();
    }



    //-----------------------事件处理结束--------------------------------------


    public native void doSetMinSize(long pointer,int width, int height);
    public native long create(long parentPointer);
    public native void doSetMaxSize(long pointer, int width, int height);
    public native long getMaxSize(long pointer);
    public native long getMinSize(long pointer);
    public native void resize(long pointer, int width, int height);
    public native void doSetMaxWidth(long pointer, int width);
    public native void doSetFixedWidth(long pointer, int width);
    public native void doSetFixedHeight(long pointer, int height);
    public native void doSetFixSize(long pointer, int width, int height);
    public native void doSetMinWidth(long pointer, int width);
    public native void doSetMaxHeight(long pointer, int height);
    public native void doSetSizeIncrement(long pointer,int width, int height);
    public native void doSetMinHeight(long pointer, int height);

    
    public native long doGetSizeIncrement(long pointer);
    public native boolean isAcceptDrops(long pointer);
    public native String getAccessibleDescription(long pointer);

    public native String getAccessibleName(long pointer);
    public native void doActivateWindow(long pointer);
    public native void doAdjustSize(long pointer);
    public native boolean isAutoFillBackground(long pointer);
    public native long getBaseSize(long pointer);
    public native void doSetBaseSize(long pointer, int width, int height);
    public native void doSetBaseSize(long pointer, long rect);
    public native int doGetContextMenuPolicy(long pointer);
    public native void doSetContextMenuPolicy(long pointer, int val);
    public native long getFrameGeometry(long pointer);
    public native void doClearFocus(long pointer);
    public native void doClearMark(long pointer);
    public native void doSetFocus(long pointer);
    public native void doSetMark(long pointer);
    public native void show(long pointer);
    public native void close(long pointer);
    public native void doSetTooltip(long  pointer, String text);
    public native String doGetTooltip(long pointer);
    public native void doSetStyleSheet(long pointer,String styleSheet);
    public native String doGetStyleSheet(long pointer);
    public native void doSetObjectName(long pointer,String name);
    public native void doSetProperty(long pointer,String  name, String val);
    public native boolean isDisable(long pointer);
    public native void doSetDisable(long pointer, boolean disable);
    public native void setWindowTitle(long pointer,String title);
    public native String doGetWindowTitle(long pointer);
    public native void showFullScreen(long pointer);
    public native void showMaxSized(long pointer);
    public native void showMinSized(long pointer);
    public native void hide(long pointer);
    public native void setLayout(long pointer, long layoutPointer);
    public native long getLayout(long pointer);
    public native boolean doDispose(long pointer);

    public native void addAction(long pointer,long actionPointer);
    public native void insertAction(long pointer,long actionBefore, long actionPointer);
    public native void removeAction(long pointer,long actionPointer);

    public native void setContentsMargins(long pointer,int left, int top, int right, int bottom);
    public native long contentsMargins(long pointer);

    public native long font(long pointer);
    public native void setFont(long pointer, long font);

    public native void setWindowIcon(long pointer,long icon);
    public native long windowIcon(long pointer);


    public native void update(long pointer,int x, int y, int w, int h);
    public native void update(long pointer,long rect);
    public native void update(long pointer);

    public native boolean isTopLevel(long pointer);
    public native boolean isWindow(long pointer);

    public native boolean isModal(long pointer);
    public native int windowModality(long pointer);
    public native void setWindowModality(long pointer,int windowModality);

    public native boolean isEnabled(long pointer);

    public native long mapToGlobal(long pointer,long point);
    public native long mapFromGlobal(long pointer,long point);
    public native long mapToParent(long pointer, long point);
    public native long mapFromParent(long pointer, long point);
    public native long mapTo(long pointer,long widget, long point);
    public native long mapFrom(long pointer,long widget, long point);


    public native int x(long pointer);
    public native int y(long pointer);
    public native long pos(long pointer);
    public native long frameSize(long pointer);
    public native long size(long pointer);
    public native int width(long pointer);
    public native int height(long pointer);
    public native long rect(long pointer);

    public native boolean isActiveWindow(long pointer);
    public native boolean hasFocus(long pointer);
    public native void setGeometry(long pointer,int x, int y, int w, int h);
    public native void setGeometry(long pointer,long rect);
    public native long geometry(long pointer);
    public native long normalGeometry(long pointer);

    public native boolean isMinimized(long pointer);
    public native boolean isMaximized(long pointer);
    public native boolean isFullScreen(long pointer);
    public native boolean isHidden(long pointer);

    public native int horizontalSizePolicy(long pointer);
    public native int verticalSizePolicy(long pointer);
    public native void setSizePolicy(long pointer,int horizontal, int vertical);

    public native static void setTabOrder(long widget, long nextWidget);

    public native void wrapAsWidget(long pointer);

}
