package org.swdc.qt.widgets.pane;

import org.swdc.qt.internal.widgets.STabWidget;
import org.swdc.qt.listeners.PaintListener;
import org.swdc.qt.listeners.WindowListener;
import org.swdc.qt.widgets.Size;

public class TabWidget extends Widget {

    private STabWidget tabWidget = new STabWidget();

    @Override
    public void setWindowListener(WindowListener listener) {
        tabWidget.setWindowListener(listener);
    }

    @Override
    public WindowListener getWindowListener() {
        return tabWidget.getWindowListener();
    }

    @Override
    public PaintListener getPaintListener() {
        return tabWidget.getPaintListener();
    }

    @Override
    public void setPaintListener(PaintListener paintListener) {
        tabWidget.setPaintListener(paintListener);
    }

    @Override
    public void allocate() throws Exception {
        if (accessible()){
            return;
        }
        long pointer = tabWidget.create();
        if (pointer <= 0) {
            throw new Exception("failed to create tab-widget");
        }
        tabWidget.address(pointer);
    }

    public <T extends Widget> int addTab(T widget, String text) {
        if (accessible(widget,text)) {
            return tabWidget.addTab(getPointer(),widget.getPointer(),text);
        }
        return 0;
    }

    public <T extends Widget> int insertTab(int index,T  widget, String text) {
        if (accessible(widget,text)) {
            return tabWidget.insertTab(getPointer(),index,widget.getPointer(),text);
        }
        return 0;
    }

    public void removeTab(int index) {
        if (accessible()) {
            tabWidget.removeTab(getPointer(),index);
        }
    }

    public boolean isTabEnabled(int index) {
        if (accessible()) {
            tabWidget.isTabEnabled(getPointer(),index);
        }
        return false;
    }

    public void setTabEnabled(int index, boolean enabled) {
        if (accessible()) {
            tabWidget.setTabEnabled(getPointer(),index,enabled);
        }
    }

    public boolean isTabVisible(int index) {
        if (accessible()) {
            return tabWidget.isTabVisible(getPointer(),index);
        }
        return false;
    }

    public void setTabVisible(int index, boolean visible) {
        if (accessible()) {
            tabWidget.setTabVisible(getPointer(),index,visible);
        }
    }

    public String getTabText(int index) {
        if (accessible()) {
            tabWidget.tabText(getPointer(),index);
        }
        return "";
    }

    public void setTabText(int index, String text) {
        if (accessible(text)){
            tabWidget.setTabText(getPointer(),index,text);
        }
    }

    public void setTabToolTip(int index, String tip) {
        if (accessible(tip)) {
            tabWidget.setTabToolTip(getPointer(),index,tip);
        }
    }

    public String tabToolTip(int index) {
        if (accessible()) {
            return tabWidget.tabToolTip(getPointer(),index);
        }
        return "";
    }

    public void setTabWhatsThis(int index, String text) {
        if (accessible(text)) {
            tabWidget.setTabWhatsThis(getPointer(),index,text);
        }
    }

    public String tabWhatsThis(int index) {
        if (accessible()) {
            return tabWidget.tabWhatsThis(getPointer(),index);
        }
        return "";
    }

    public int currentIndex() {
        if (accessible()) {
            return tabWidget.currentIndex(getPointer());
        }
        return 0;
    }

    public int count() {
        if (accessible()) {
            return tabWidget.count(getPointer());
        }
        return 0;
    }

    public TabWidgetPositions tabPosition() {
        if (accessible()){
            int val = tabWidget.tabPosition(getPointer());
            return TabWidgetPositions.valueOf(val);
        }
        return null;
    }

    public void setTabPosition(TabWidgetPositions position) {
        if (accessible(position)) {
            tabWidget.setTabPosition(getPointer(),position.getVal());
        }
    }

    public boolean tabsClosable() {
        if (accessible()) {
            return tabWidget.tabsClosable(getPointer());
        }
        return false;
    }

    public void setTabsClosable(boolean closeable) {
        if (accessible()) {
            tabWidget.setTabsClosable(getPointer(),closeable);
        }
    }

    public boolean isMovable() {
        if (accessible()) {
            return tabWidget.isMovable(getPointer());
        }
        return false;
    }

    public void setMovable(boolean movable){
        if (accessible()) {
            tabWidget.setMovable(getPointer(),movable);
        }
    }

    public TabWidgetShape tabShape() {
        if (accessible()) {
            int tabShape = tabWidget.tabShape(getPointer());
            return TabWidgetShape.valueOf(tabShape);
        }
        return null;
    }

    public void setTabShape(TabWidgetShape s) {
        if (accessible(s)) {
            tabWidget.setTabShape(getPointer(),s.getVal());
        }
    }

    public boolean usesScrollButtons() {
        if (accessible()) {
            return tabWidget.usesScrollButtons(getPointer());
        }
        return false;
    }

    public void setUsesScrollButtons(boolean useButtons) {
        if (accessible()) {
            tabWidget.setUsesScrollButtons(getPointer(),useButtons);
        }
    }

    public boolean documentMode() {
        if (accessible()) {
            return tabWidget.documentMode(getPointer());
        }
        return false;
    }

    public void setDocumentMode(boolean set) {
        if (accessible()) {
            tabWidget.setDocumentMode(getPointer(),set);
        }
    }

    public boolean tabBarAutoHide() {
        if (accessible()){
            return tabWidget.tabBarAutoHide(getPointer());
        }
        return false;
    }

    public void setTabBarAutoHide(boolean enabled) {
        if (accessible()) {
            tabWidget.setTabBarAutoHide(getPointer(),enabled);
        }
    }

    public void clear() {
        if (accessible()) {
            tabWidget.clear(getPointer());
        }
    }

    public Size sizeHint() {
        if (accessible()){
            long pointer = tabWidget.sizeHint(getPointer());
            if (pointer <= 0 ) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public Size minimumSizeHint() {
        if (accessible()) {
            long pointer = tabWidget.minimumSizeHint(getPointer());
            if (pointer <= 0 ){
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public int heightForWidth(int width) {
        if (accessible()) {
            return tabWidget.heightForWidth(getPointer(),width);
        }
        return 0;
    }

    public boolean hasHeightForWidth() {
        if (accessible()) {
            return tabWidget.hasHeightForWidth(getPointer());
        }
        return false;
    }

    @Override
    public long getPointer() {
        return tabWidget.address();
    }
}
