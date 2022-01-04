package org.swdc.qt.widgets.pane;

import org.swdc.qt.beans.ContextMenuPolicy;
import org.swdc.qt.beans.Margins;
import org.swdc.qt.beans.SRect;
import org.swdc.qt.beans.SSize;
import org.swdc.qt.internal.widgets.SWidget;
import org.swdc.qt.listeners.PaintListener;
import org.swdc.qt.listeners.WindowListener;
import org.swdc.qt.layout.Layout;
import org.swdc.qt.widgets.action.Action;

public class Widget {
    
    private SWidget widget = new SWidget();

    public void setWindowListener(WindowListener listener) {
        widget.setWindowListener(listener);
    }

    public WindowListener getWindowListener() {
        return widget.getWindowListener();
    }

    public void setPaintListener(PaintListener paintListener) {
        widget.setPaintListener(paintListener);
    }

    public PaintListener getPaintListener() {
        return widget.getPaintListener();
    }

    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = widget.create(0L);
        if (pointer <= 0) {
            throw new Exception("failed to create widget.");
        }
        widget.address(pointer);
    }

    public void setMinSize(int width, int height) {
        if (getPointer() > 0) {
            widget.doSetMinSize(getPointer(),width,height);
        }
    }
    
    public void setMaxSize(int width, int height) {
        if (getPointer() > 0) {
            widget.doSetMaxSize(getPointer(),width,height);
        }
    }
    
    public SSize getMaxSize() {
        if (getPointer() > 0) {
            return widget.getMaxSize(getPointer());
        }
        return null;
    }
    
    public SSize getMinSize() {
        if (getPointer() > 0) {
            return widget.getMinSize(getPointer());
        }
        return null;
    }
    
    public void resize(int width, int height) {
        if (getPointer() > 0) {
            widget.resize(getPointer(),width,height);
        }
    }
    
    public void setMaxWidth(int width) {
        if (getPointer() > 0) {
            widget.doSetMaxWidth(getPointer(),width);
        }
    }

    public void setFixedWidth( int width) {
        if (getPointer() > 0) {
            widget.doSetFixedWidth(getPointer(),width);
        }
    }

    public void setFixedHeight( int height) {
        if (getPointer() > 0) {
            widget.doSetFixedHeight(getPointer(),height);
        }
    }

    public void setFixSize( int width, int height) {
        if (getPointer() > 0) {
            widget.doSetFixSize(getPointer(),width,height);
        }
    }

    public void setMinWidth( int width) {
        if (getPointer() > 0) {
            widget.doSetMinWidth(getPointer(),width);
        }
    }

    public void setMaxHeight( int height) {
        if (getPointer() > 0) {
            widget.doSetMaxHeight(getPointer(),height);
        }
    }

    public void setSizeIncrement(int width, int height) {
        if (getPointer() > 0) {
            widget.doSetSizeIncrement(getPointer(),width,height);
        }
    }

    public void setMinHeight( int height) {
        if (getPointer() > 0) {
            widget.doSetMinHeight(getPointer(),height);
        }
    }

    public SSize getSizeIncrement() {
        if (getPointer() > 0) {
            return widget.doGetSizeIncrement(getPointer());
        }
        return null;
    }

    public boolean isAcceptDrops() {
        if (getPointer() > 0) {
            return widget.isAcceptDrops(getPointer());
        }
        return false;
    }

    public String getAccessibleDescription() {
        if (getPointer() > 0) {
            return widget.getAccessibleDescription(getPointer());
        }
        return "";
    }

    public String getAccessibleName() {
        if (getPointer() > 0) {
            return widget.getAccessibleName(getPointer());
        }
        return "";
    }

    public void activateWindow() {
        if (getPointer() > 0) {
            widget.doActivateWindow(getPointer());
        }
    }

    public void adjustSize() {
        if (getPointer() > 0) {
            widget.doAdjustSize(getPointer());
        }
    }

    public boolean isAutoFillBackground() {
        if (getPointer() > 0) {
            widget.isAutoFillBackground(getPointer());
        }
        return false;
    }

    public SSize getBaseSize() {
        if (getPointer() > 0) {
            return widget.getBaseSize(getPointer());
        }
        return null;
    }

    public void setBaseSize( int width, int height) {
        if (getPointer() > 0){
            widget.doSetBaseSize(getPointer(),width,height);
        }
    }

    public ContextMenuPolicy getContextMenuPolicy() {
        if (getPointer() > 0) {
            int val = widget.doGetContextMenuPolicy(getPointer());
            switch (val){
                case 0:
                    return ContextMenuPolicy.NoContextMenu;
                case 1:
                    return ContextMenuPolicy.DefaultContextMenu;
                case 2:
                    return ContextMenuPolicy.ActionsContextMenu;
                case 3:
                    return ContextMenuPolicy.CustomContextMenu;
                case 4:
                    return ContextMenuPolicy.PreventContextMenu;
                default:
                    return null;
            }
        }
        return null;
    }

    public void setContextMenuPolicy(ContextMenuPolicy policy) {
        if (getPointer() > 0){
            widget.doSetContextMenuPolicy(getPointer(),policy.getVal());
        }
    }

    public SRect getFrameGeometry() {
        if (getPointer() > 0) {
            return widget.getFrameGeometry(getPointer());
        }
        return null;
    }

    public void clearFocus() {
        if (getPointer() > 0) {
            widget.doClearFocus(getPointer());
        }
    }

    public void clearMark() {
        if (getPointer() > 0) {
            widget.doClearMark(getPointer());
        }
    }

    public void setFocus() {
        if (getPointer() > 0) {
            widget.doSetFocus(getPointer());
        }
    }

    public void setMark(){
        if (getPointer() > 0) {
            widget.doSetMark(getPointer());
        }
    }

    public void show() {
        if (getPointer() > 0) {
            widget.show(getPointer());
        }
    }

    public void close() {
        if (getPointer() > 0){
            widget.close(getPointer());
        }
    }

    public void setTooltip(String text) {
        if (getPointer() > 0) {
            widget.doSetTooltip(getPointer(),text);
        }
    }

    public String getTooltip() {
        if (getPointer() > 0) {
            return widget.doGetTooltip(getPointer());
        }
        return "";
    }

    public void setStyleSheet(String styleSheet) {
        if (getPointer() > 0) {
            widget.doSetStyleSheet(getPointer(),styleSheet);
        }
    }

    public String getStyleSheet() {
        if (getPointer() > 0) {
            return widget.doGetStyleSheet(getPointer());
        }
        return "";
    }

    public void getObjectName(String name){
        if (getPointer() > 0) {
            widget.doSetObjectName(getPointer(),name);
        }
    }

    public void setProperty(String  name, String val) {
        if (getPointer() > 0) {
            widget.doSetProperty(getPointer(),name,val);
        }
    }

    public boolean isDisable() {
        if (getPointer() > 0) {
            return widget.isDisable(getPointer());
        }
        return false;
    }

    public void setDisable( boolean disable) {
        if (getPointer() > 0) {
            widget.doSetDisable(getPointer(),disable);
        }
    }

    public void setWindowTitle(String title) {
        if (getPointer() > 0) {
            widget.setWindowTitle(getPointer(),title);
        }
    }

    public String getWindowTitle() {
        if (getPointer() > 0) {
            return widget.doGetWindowTitle(getPointer());
        }
        return "";
    }

    public void showFullScreen() {
        if (getPointer() > 0) {
            widget.showFullScreen(getPointer());
        }
    }

    public void showMaxSized() {
        if (getPointer() > 0) {
            widget.showMaxSized(getPointer());
        }
    }

    public void showMinSized() {
        if (getPointer() > 0) {
            widget.showMinSized(getPointer());
        }
    }

    public void hide() {
        if (getPointer() > 0) {
            widget.hide(getPointer());
        }
    }

    public void setLayout(Layout layout) {
        if (getPointer() > 0 && layout.getPointer() > 0) {
            widget.setLayout(getPointer(),layout.getPointer());
        }
    }

    public boolean dispose() {
        if (getPointer() > 0) {
            widget.doDispose(getPointer());
            widget.cleanAddress();
            return true;
        } else {
            return false;
        }
    }

    public void addAction(Action action) {
        if (getPointer() > 0 && action.getPointer() > 0) {
            widget.addAction(getPointer(),action.getPointer());
        }
    }

    public void insertAction(Action beforeAction, Action target) {
        if (getPointer() > 0 && beforeAction.getPointer() > 0 && target.getPointer() > 0) {
            widget.insertAction(getPointer(),beforeAction.getPointer(),target.getPointer());
        }
    }

    public void removeAction(Action action) {
        if (getPointer() > 0) {
            widget.removeAction(getPointer(),action.getPointer());
        }
    }

    public void setContentMargins(int left, int top, int right, int bottom) {
        if (getPointer() > 0) {
            widget.setContentsMargins(getPointer(),left,top,right,bottom);
        }
    }

    public Margins getContentMargins() {
        if (getPointer() > 0) {
            return widget.contentsMargins(getPointer());
        }
        return null;
    }

    public long getPointer() {
        return widget.address();
    }
    
}
