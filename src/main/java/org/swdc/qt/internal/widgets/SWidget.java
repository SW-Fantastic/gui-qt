package org.swdc.qt.internal.widgets;

import org.swdc.qt.beans.Margins;
import org.swdc.qt.internal.SPointer;
import org.swdc.qt.beans.SRect;
import org.swdc.qt.beans.SSize;
import org.swdc.qt.internal.graphics.SPainter;
import org.swdc.qt.listeners.PaintListener;
import org.swdc.qt.listeners.WindowListener;
import org.swdc.qt.widgets.graphics.Painter;
import org.swdc.qt.widgets.pane.Widget;

public class SWidget extends SPointer  {

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
    public native SSize getMaxSize(long pointer);
    public native SSize getMinSize(long pointer);
    public native void resize(long pointer, int width, int height);
    public native void doSetMaxWidth(long pointer, int width);
    public native void doSetFixedWidth(long pointer, int width);
    public native void doSetFixedHeight(long pointer, int height);
    public native void doSetFixSize(long pointer, int width, int height);
    public native void doSetMinWidth(long pointer, int width);
    public native void doSetMaxHeight(long pointer, int height);
    public native void doSetSizeIncrement(long pointer,int width, int height);
    public native void doSetMinHeight(long pointer, int height);

    
    public native SSize doGetSizeIncrement(long pointer);
    public native boolean isAcceptDrops(long pointer);
    public native String getAccessibleDescription(long pointer);

    public native String getAccessibleName(long pointer);
    public native void doActivateWindow(long pointer);
    public native void doAdjustSize(long pointer);
    public native boolean isAutoFillBackground(long pointer);
    public native SSize getBaseSize(long pointer);
    public native void doSetBaseSize(long pointer, int width, int height);
    public native int doGetContextMenuPolicy(long pointer);
    public native void doSetContextMenuPolicy(long pointer, int val);
    public native SRect getFrameGeometry(long pointer);
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
    public native Margins contentsMargins(long pointer);



}
