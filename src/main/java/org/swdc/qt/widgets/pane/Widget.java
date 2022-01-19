package org.swdc.qt.widgets.pane;

import org.swdc.qt.beans.ContextMenuPolicy;
import org.swdc.qt.beans.SizePolicy;
import org.swdc.qt.beans.WindowModality;
import org.swdc.qt.internal.widgets.SWidget;
import org.swdc.qt.listeners.PaintListener;
import org.swdc.qt.listeners.WindowListener;
import org.swdc.qt.layout.Layout;
import org.swdc.qt.widgets.Margins;
import org.swdc.qt.widgets.Point;
import org.swdc.qt.widgets.Rect;
import org.swdc.qt.widgets.Size;
import org.swdc.qt.widgets.action.Action;
import org.swdc.qt.widgets.graphics.Font;
import org.swdc.qt.widgets.graphics.Icon;

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
    
    public Size getMaxSize() {
        if (getPointer() > 0) {
            long pointer = widget.getMaxSize(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }
    
    public Size getMinSize() {
        if (getPointer() > 0) {
            long pointer = widget.getMinSize(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
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

    public Size getSizeIncrement() {
        if (getPointer() > 0) {
            long pointer = widget.doGetSizeIncrement(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
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

    public Size getBaseSize() {
        if (getPointer() > 0) {
            long pointer = widget.getBaseSize(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public void setBaseSize( int width, int height) {
        if (getPointer() > 0){
            widget.doSetBaseSize(getPointer(),width,height);
        }
    }

    public void setBaseSize(Size size) {
        if (getPointer() > 0 && size.getPointer() > 0){
            widget.doSetBaseSize(getPointer(),size.getPointer());
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

    public Rect getFrameGeometry() {
        if (getPointer() > 0) {
            long pointer = widget.getFrameGeometry(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Rect.asRect(pointer);
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

    public void dispose() {
        if (getPointer() > 0) {
            widget.doDispose(getPointer());
            widget.cleanAddress();
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
            long pointer = widget.contentsMargins(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Margins.asMargins(pointer);
        }
        return null;
    }

    public void setFont(Font font) {
        if (getPointer() > 0 && font.getPointer() > 0) {
            this.widget.setFont(getPointer(),font.getPointer());
        }
    }

    public Font getFont() {
        if (getPointer() > 0) {
            long pointer = this.widget.font(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Font.asFont(pointer);
        }
        return null;
    }

    public Icon getWindowIcon() {
        if (getPointer() > 0) {
            long pointer = widget.windowIcon(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Icon.asIcon(pointer);
        }
        return null;
    }

    public void setWindowIcon(Icon icon) {
        if (getPointer() > 0 && icon.getPointer() > 0) {
            widget.setWindowIcon(getPointer(),icon.getPointer());
        }
    }

    public void update(int x, int y, int w, int h){
        if (getPointer() > 0) {
            widget.update(getPointer(),x,y,w,h);
        }
    }

    public void update(Rect rect) {
        if (getPointer() > 0 && rect.getPointer() > 0) {
            widget.update(getPointer(),rect.getPointer());
        }
    }

    public void update() {
        if (getPointer() > 0) {
           widget.update(getPointer());
        }
    }

    public boolean isTopLevel() {
        if (getPointer() > 0) {
            return widget.isTopLevel(getPointer());
        }
        return false;
    }

    public boolean isWindow() {
        if (getPointer() > 0) {
            return widget.isWindow(getPointer());
        }
        return false;
    }

    public boolean isModal() {
        if (getPointer() > 0) {
            return widget.isModal(getPointer());
        }
        return false;
    }

    public WindowModality windowModality() {
        if (getPointer() > 0) {
            int val = widget.windowModality(getPointer());
            return WindowModality.valueOf(val);
        }
        return null;
    }

    public void setWindowModality(WindowModality windowModality) {
        if (getPointer() > 0) {
            widget.setWindowModality(getPointer(),windowModality.getVal());
        }
    }

    public boolean isEnabled(){
        if (getPointer() > 0) {
            return widget.isEnabled(getPointer());
        }
        return false;
    }

    public Point mapToGlobal(Point point) {
        if (getPointer() > 0 && point.getPointer() > 0) {
            long pointer = widget.mapToGlobal(getPointer(),point.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Point.asPoint(pointer);
        }
        return null;
    }

    public Point mapFromGlobal(Point point) {
        if (getPointer() > 0 && point.getPointer() > 0) {
            long pointer = widget.mapFromGlobal(getPointer(),point.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Point.asPoint(pointer);
        }
        return null;
    }

    public Point mapToParent(Point point) {
        if (getPointer() > 0 && point.getPointer() > 0) {
            long pointer = widget.mapToParent(getPointer(),point.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Point.asPoint(pointer);
        }
        return null;
    }

    public Point mapFromParent(Point point) {
        if (getPointer() > 0 && point.getPointer() > 0) {
            long pointer = widget.mapFromParent(getPointer(),point.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Point.asPoint(pointer);
        }
        return null;
    }

    public <T extends Widget> Point mapTo(T widget, Point point) {
        if (getPointer() > 0 && point.getPointer() > 0 && widget.getPointer() > 0) {
            long pointer = this.widget.mapTo(getPointer(),widget.getPointer(),point.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Point.asPoint(pointer);
        }
        return null;
    }

    public <T extends Widget> Point mapFrom(T widget, Point point) {
        if (getPointer() > 0 && widget.getPointer() > 0 && point.getPointer() > 0) {
            long pointer = this.widget.mapFrom(getPointer(),widget.getPointer(),point.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Point.asPoint(pointer);
        }
        return null;
    }

    public int getx() {
        if (getPointer() > 0) {
            return widget.x(getPointer());
        }
        return 0;
    }

    public int getY() {
        if (getPointer() > 0) {
            return widget.y(getPointer());
        }
        return 0;
    }

    public Point pos() {
        if (getPointer() > 0) {
            long pointer = widget.pos(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Point.asPoint(pointer);
        }
        return null;
    }

    public Size frameSize() {
        if (getPointer() > 0) {
            long frameSize = widget.frameSize(getPointer());
            if (frameSize <= 0) {
                return null;
            }
            return Size.asSize(frameSize);
        }
        return null;
    }

    public Size size() {
        if (getPointer() > 0) {
            long pointer = widget.size(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public int getWidth() {
        if (getPointer() > 0) {
            return widget.width(getPointer());
        }
        return 0;
    }

    public int getHeight() {
        if (getPointer() > 0) {
            return widget.height(getPointer());
        }
        return 0;
    }

    public Rect getRect() {
        if (getPointer() > 0) {
            long pointer = widget.rect(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Rect.asRect(pointer);
        }
        return null;
    }

    public boolean isActiveWindow() {
        if (getPointer() > 0) {
            return widget.isActiveWindow(getPointer());
        }
        return false;
    }

    public boolean hasFocus() {
        if (getPointer() > 0) {
            return widget.hasFocus(getPointer());
        }
        return false;
    }

    public void setGeometry(int x, int y, int w, int h) {
        if (getPointer() > 0) {
            widget.setGeometry(getPointer(),x,y,w,h);
        }
    }

    public void setGeometry(Rect rect){
        if (getPointer() > 0 && rect.getPointer() > 0) {
            widget.setGeometry(getPointer(),rect.getPointer());
        }
    }

    public Rect geometry() {
        if (getPointer() > 0) {
            long pointer = widget.geometry(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Rect.asRect(pointer);
        }
        return null;
    }

    public Rect normalGeometry() {
        if (getPointer() > 0) {
            long pointer = widget.normalGeometry(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Rect.asRect(pointer);
        }
        return null;
    }

    public boolean isMinimized() {
        if (getPointer() > 0) {
            return widget.isMinimized(getPointer());
        }
        return false;
    }

    public boolean isMaximized() {
        if (getPointer() > 0) {
            return widget.isMaximized(getPointer());
        }
        return false;
    }

    public boolean isFullScreen() {
        if (getPointer() > 0) {
            return widget.isFullScreen(getPointer());
        }
        return false;
    }

    public SizePolicy horizontalSizePolicy() {
        if (getPointer() > 0) {
            int val = widget.horizontalSizePolicy(getPointer());
            return SizePolicy.valueOf(val);
        }
        return null;
    }

    public SizePolicy verticalSizePolicy(){
        if (getPointer() > 0) {
            int val = widget.verticalSizePolicy(getPointer());
            return SizePolicy.valueOf(val);
        }
        return null;
    }

    public void setSizePolicy(SizePolicy horizontal, SizePolicy vertical) {
        if (getPointer() > 0) {
            widget.setSizePolicy(getPointer(),horizontal.getFlagValue(),vertical.getFlagValue());
        }
    }


    public boolean isHidden() {
        if (getPointer() > 0) {
            return widget.isHidden(getPointer());
        }
        return false;
    }


    public long getPointer() {
        return widget.address();
    }
    
}
