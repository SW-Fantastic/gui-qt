package org.swdc.qt.widgets.pane;

import org.swdc.qt.NativeAllocated;
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

public class Widget implements NativeAllocated {
    
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
        if (accessible()) {
            return;
        }
        long pointer = widget.create(0L);
        if (pointer <= 0) {
            throw new Exception("failed to create widget.");
        }
        widget.address(pointer);
    }

    public void setMinSize(int width, int height) {
        if (accessible()) {
            widget.doSetMinSize(getPointer(),width,height);
        }
    }
    
    public void setMaxSize(int width, int height) {
        if (accessible()) {
            widget.doSetMaxSize(getPointer(),width,height);
        }
    }
    
    public Size getMaxSize() {
        if (accessible()) {
            long pointer = widget.getMaxSize(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }
    
    public Size getMinSize() {
        if (accessible()) {
            long pointer = widget.getMinSize(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }
    
    public void resize(int width, int height) {
        if (accessible()) {
            widget.resize(getPointer(),width,height);
        }
    }
    
    public void setMaxWidth(int width) {
        if (accessible()) {
            widget.doSetMaxWidth(getPointer(),width);
        }
    }

    public void setFixedWidth( int width) {
        if (accessible()) {
            widget.doSetFixedWidth(getPointer(),width);
        }
    }

    public void setFixedHeight( int height) {
        if (accessible()) {
            widget.doSetFixedHeight(getPointer(),height);
        }
    }

    public void setFixSize( int width, int height) {
        if (accessible()) {
            widget.doSetFixSize(getPointer(),width,height);
        }
    }

    public void setMinWidth( int width) {
        if (accessible()) {
            widget.doSetMinWidth(getPointer(),width);
        }
    }

    public void setMaxHeight( int height) {
        if (accessible()) {
            widget.doSetMaxHeight(getPointer(),height);
        }
    }

    public void setSizeIncrement(int width, int height) {
        if (accessible()) {
            widget.doSetSizeIncrement(getPointer(),width,height);
        }
    }

    public void setMinHeight( int height) {
        if (accessible()) {
            widget.doSetMinHeight(getPointer(),height);
        }
    }

    public Size getSizeIncrement() {
        if (accessible()) {
            long pointer = widget.doGetSizeIncrement(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public boolean isAcceptDrops() {
        if (accessible()) {
            return widget.isAcceptDrops(getPointer());
        }
        return false;
    }

    public String getAccessibleDescription() {
        if (accessible()) {
            return widget.getAccessibleDescription(getPointer());
        }
        return "";
    }

    public String getAccessibleName() {
        if (accessible()) {
            return widget.getAccessibleName(getPointer());
        }
        return "";
    }

    public void activateWindow() {
        if (accessible()) {
            widget.doActivateWindow(getPointer());
        }
    }

    public void adjustSize() {
        if (accessible()) {
            widget.doAdjustSize(getPointer());
        }
    }

    public boolean isAutoFillBackground() {
        if (accessible()) {
            widget.isAutoFillBackground(getPointer());
        }
        return false;
    }

    public Size getBaseSize() {
        if (accessible()) {
            long pointer = widget.getBaseSize(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public void setBaseSize( int width, int height) {
        if (accessible()){
            widget.doSetBaseSize(getPointer(),width,height);
        }
    }

    public void setBaseSize(Size size) {
        if (accessible(size)){
            widget.doSetBaseSize(getPointer(),size.getPointer());
        }
    }

    public ContextMenuPolicy getContextMenuPolicy() {
        if (accessible()) {
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
        if (accessible()){
            widget.doSetContextMenuPolicy(getPointer(),policy.getVal());
        }
    }

    public Rect getFrameGeometry() {
        if (accessible()) {
            long pointer = widget.getFrameGeometry(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Rect.asRect(pointer);
        }
        return null;
    }

    public void clearFocus() {
        if (accessible()) {
            widget.doClearFocus(getPointer());
        }
    }

    public void clearMark() {
        if (accessible()) {
            widget.doClearMark(getPointer());
        }
    }

    public void setFocus() {
        if (accessible()) {
            widget.doSetFocus(getPointer());
        }
    }

    public void setMark(){
        if (accessible()) {
            widget.doSetMark(getPointer());
        }
    }

    public void show() {
        if (accessible()) {
            widget.show(getPointer());
        }
    }

    public void close() {
        if (accessible()){
            widget.close(getPointer());
        }
    }

    public void setTooltip(String text) {
        if (accessible()) {
            widget.doSetTooltip(getPointer(),text);
        }
    }

    public String getTooltip() {
        if (accessible()) {
            return widget.doGetTooltip(getPointer());
        }
        return "";
    }

    public void setStyleSheet(String styleSheet) {
        if (accessible()) {
            widget.doSetStyleSheet(getPointer(),styleSheet);
        }
    }

    public String getStyleSheet() {
        if (accessible()) {
            return widget.doGetStyleSheet(getPointer());
        }
        return "";
    }

    public void getObjectName(String name){
        if (accessible()) {
            widget.doSetObjectName(getPointer(),name);
        }
    }

    public void setProperty(String  name, String val) {
        if (accessible()) {
            widget.doSetProperty(getPointer(),name,val);
        }
    }

    public boolean isDisable() {
        if (accessible()) {
            return widget.isDisable(getPointer());
        }
        return false;
    }

    public void setDisable( boolean disable) {
        if (accessible()) {
            widget.doSetDisable(getPointer(),disable);
        }
    }

    public void setWindowTitle(String title) {
        if (accessible()) {
            widget.setWindowTitle(getPointer(),title);
        }
    }

    public String getWindowTitle() {
        if (accessible()) {
            return widget.doGetWindowTitle(getPointer());
        }
        return "";
    }

    public void showFullScreen() {
        if (accessible()) {
            widget.showFullScreen(getPointer());
        }
    }

    public void showMaxSized() {
        if (accessible()) {
            widget.showMaxSized(getPointer());
        }
    }

    public void showMinSized() {
        if (accessible()) {
            widget.showMinSized(getPointer());
        }
    }

    public void hide() {
        if (accessible()) {
            widget.hide(getPointer());
        }
    }

    public void setLayout(Layout layout) {
        if (accessible(layout)) {
            widget.setLayout(getPointer(),layout.getPointer());
        }
    }

    public void dispose() {
        if (accessible()) {
            widget.doDispose(getPointer());
            widget.cleanAddress();
        }
    }

    public void addAction(Action action) {
        if (accessible() && action.accessible()) {
            widget.addAction(getPointer(),action.getPointer());
        }
    }

    public void insertAction(Action beforeAction, Action target) {
        if (accessible() && beforeAction.accessible() && target.accessible()) {
            widget.insertAction(getPointer(),beforeAction.getPointer(),target.getPointer());
        }
    }

    public void removeAction(Action action) {
        if (accessible()) {
            widget.removeAction(getPointer(),action.getPointer());
        }
    }

    public void setContentMargins(int left, int top, int right, int bottom) {
        if (accessible()) {
            widget.setContentsMargins(getPointer(),left,top,right,bottom);
        }
    }

    public Margins getContentMargins() {
        if (accessible()) {
            long pointer = widget.contentsMargins(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Margins.asMargins(pointer);
        }
        return null;
    }

    public void setFont(Font font) {
        if (accessible() && font.accessible()) {
            this.widget.setFont(getPointer(),font.getPointer());
        }
    }

    public Font getFont() {
        if (accessible()) {
            long pointer = this.widget.font(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Font.asFont(pointer);
        }
        return null;
    }

    public Icon getWindowIcon() {
        if (accessible()) {
            long pointer = widget.windowIcon(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Icon.asIcon(pointer);
        }
        return null;
    }

    public void setWindowIcon(Icon icon) {
        if (accessible(icon)) {
            widget.setWindowIcon(getPointer(),icon.getPointer());
        }
    }

    public void update(int x, int y, int w, int h){
        if (accessible()) {
            widget.update(getPointer(),x,y,w,h);
        }
    }

    public void update(Rect rect) {
        if (accessible(rect)) {
            widget.update(getPointer(),rect.getPointer());
        }
    }

    public void update() {
        if (accessible()) {
           widget.update(getPointer());
        }
    }

    public boolean isTopLevel() {
        if (accessible()) {
            return widget.isTopLevel(getPointer());
        }
        return false;
    }

    public boolean isWindow() {
        if (accessible()) {
            return widget.isWindow(getPointer());
        }
        return false;
    }

    public boolean isModal() {
        if (accessible()) {
            return widget.isModal(getPointer());
        }
        return false;
    }

    public WindowModality windowModality() {
        if (accessible()) {
            int val = widget.windowModality(getPointer());
            return WindowModality.valueOf(val);
        }
        return null;
    }

    public void setWindowModality(WindowModality windowModality) {
        if (accessible()) {
            widget.setWindowModality(getPointer(),windowModality.getVal());
        }
    }

    public boolean isEnabled(){
        if (accessible()) {
            return widget.isEnabled(getPointer());
        }
        return false;
    }

    public Point mapToGlobal(Point point) {
        if (accessible(point)) {
            long pointer = widget.mapToGlobal(getPointer(),point.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Point.asPoint(pointer);
        }
        return null;
    }

    public Point mapFromGlobal(Point point) {
        if (accessible(point)) {
            long pointer = widget.mapFromGlobal(getPointer(),point.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Point.asPoint(pointer);
        }
        return null;
    }

    public Point mapToParent(Point point) {
        if (accessible(point)) {
            long pointer = widget.mapToParent(getPointer(),point.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Point.asPoint(pointer);
        }
        return null;
    }

    public Point mapFromParent(Point point) {
        if (accessible(point)) {
            long pointer = widget.mapFromParent(getPointer(),point.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Point.asPoint(pointer);
        }
        return null;
    }

    public <T extends Widget> Point mapTo(T widget, Point point) {
        if (accessible(point,widget)) {
            long pointer = this.widget.mapTo(getPointer(),widget.getPointer(),point.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Point.asPoint(pointer);
        }
        return null;
    }

    public <T extends Widget> Point mapFrom(T widget, Point point) {
        if (accessible(point)) {
            long pointer = this.widget.mapFrom(getPointer(),widget.getPointer(),point.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Point.asPoint(pointer);
        }
        return null;
    }

    public int getx() {
        if (accessible()) {
            return widget.x(getPointer());
        }
        return 0;
    }

    public int getY() {
        if (accessible()) {
            return widget.y(getPointer());
        }
        return 0;
    }

    public Point pos() {
        if (accessible()) {
            long pointer = widget.pos(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Point.asPoint(pointer);
        }
        return null;
    }

    public Size frameSize() {
        if (accessible()) {
            long frameSize = widget.frameSize(getPointer());
            if (frameSize <= 0) {
                return null;
            }
            return Size.asSize(frameSize);
        }
        return null;
    }

    public Size size() {
        if (accessible()) {
            long pointer = widget.size(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public int getWidth() {
        if (accessible()) {
            return widget.width(getPointer());
        }
        return 0;
    }

    public int getHeight() {
        if (accessible()) {
            return widget.height(getPointer());
        }
        return 0;
    }

    public Rect getRect() {
        if (accessible()) {
            long pointer = widget.rect(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Rect.asRect(pointer);
        }
        return null;
    }

    public boolean isActiveWindow() {
        if (accessible()) {
            return widget.isActiveWindow(getPointer());
        }
        return false;
    }

    public boolean hasFocus() {
        if (accessible()) {
            return widget.hasFocus(getPointer());
        }
        return false;
    }

    public void setGeometry(int x, int y, int w, int h) {
        if (accessible()) {
            widget.setGeometry(getPointer(),x,y,w,h);
        }
    }

    public void setGeometry(Rect rect){
        if (accessible(rect)) {
            widget.setGeometry(getPointer(),rect.getPointer());
        }
    }

    public Rect geometry() {
        if (accessible()) {
            long pointer = widget.geometry(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Rect.asRect(pointer);
        }
        return null;
    }

    public Rect normalGeometry() {
        if (accessible()) {
            long pointer = widget.normalGeometry(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Rect.asRect(pointer);
        }
        return null;
    }

    public boolean isMinimized() {
        if (accessible()) {
            return widget.isMinimized(getPointer());
        }
        return false;
    }

    public boolean isMaximized() {
        if (accessible()) {
            return widget.isMaximized(getPointer());
        }
        return false;
    }

    public boolean isFullScreen() {
        if (accessible()) {
            return widget.isFullScreen(getPointer());
        }
        return false;
    }

    public SizePolicy horizontalSizePolicy() {
        if (accessible()) {
            int val = widget.horizontalSizePolicy(getPointer());
            return SizePolicy.valueOf(val);
        }
        return null;
    }

    public SizePolicy verticalSizePolicy(){
        if (accessible()) {
            int val = widget.verticalSizePolicy(getPointer());
            return SizePolicy.valueOf(val);
        }
        return null;
    }

    public void setSizePolicy(SizePolicy horizontal, SizePolicy vertical) {
        if (accessible(horizontal,vertical)) {
            widget.setSizePolicy(getPointer(),horizontal.getFlagValue(),vertical.getFlagValue());
        }
    }


    public boolean isHidden() {
        if (accessible()) {
            return widget.isHidden(getPointer());
        }
        return false;
    }

    public static Widget asWidget(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("invalid pointer.");
        }
        Widget widget = new Widget();
        widget.widget.wrapAsWidget(pointer);
        widget.widget.address(pointer);
        return widget;
    }

    public long getPointer() {
        return widget.address();
    }
    
}
