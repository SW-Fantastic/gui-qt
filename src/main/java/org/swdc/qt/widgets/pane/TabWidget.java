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
        if (getPointer() > 0){
            return;
        }
        long pointer = tabWidget.create();
        if (pointer <= 0) {
            throw new Exception("failed to create tab-widget");
        }
        tabWidget.address(pointer);
    }

    public <T extends Widget> int addTab(T widget, String text) {
        if (getPointer() > 0 && widget.getPointer() > 0) {
            return tabWidget.addTab(getPointer(),widget.getPointer(),text);
        }
        return 0;
    }

    public <T extends Widget> int insertTab(int index,T  widget, String text) {
        if (getPointer() > 0 && widget.getPointer() > 0) {
            return tabWidget.insertTab(getPointer(),index,widget.getPointer(),text);
        }
        return 0;
    }

    public void removeTab(int index) {
        if (getPointer() > 0) {
            tabWidget.removeTab(getPointer(),index);
        }
    }

    public boolean isTabEnabled(int index) {
        if (getPointer() > 0) {
            tabWidget.isTabEnabled(getPointer(),index);
        }
        return false;
    }

    public void setTabEnabled(int index, boolean enabled) {
        if (getPointer() > 0) {
            tabWidget.setTabEnabled(getPointer(),index,enabled);
        }
    }

    public boolean isTabVisible(int index) {
        if (getPointer() > 0) {
            return tabWidget.isTabVisible(getPointer(),index);
        }
        return false;
    }

    public void setTabVisible(int index, boolean visible) {
        if (getPointer() > 0) {
            tabWidget.setTabVisible(getPointer(),index,visible);
        }
    }

    public String getTabText(int index) {
        if (getPointer() > 0) {
            tabWidget.tabText(getPointer(),index);
        }
        return "";
    }

    public void setTabText(int index, String text) {
        if (getPointer() > 0){
            tabWidget.setTabText(getPointer(),index,text);
        }
    }

    public void setTabToolTip(int index, String tip) {
        if (getPointer() > 0) {
            tabWidget.setTabToolTip(getPointer(),index,tip);
        }
    }

    public String tabToolTip(int index) {
        if (getPointer() > 0) {
            return tabWidget.tabToolTip(getPointer(),index);
        }
        return "";
    }

    public void setTabWhatsThis(int index, String text) {
        if (getPointer() > 0) {
            tabWidget.setTabWhatsThis(getPointer(),index,text);
        }
    }

    public String tabWhatsThis(int index) {
        if (getPointer() > 0) {
            return tabWidget.tabWhatsThis(getPointer(),index);
        }
        return "";
    }

    public int currentIndex() {
        if (getPointer() > 0) {
            return tabWidget.currentIndex(getPointer());
        }
        return 0;
    }

    public int count() {
        if (getPointer() > 0) {
            return tabWidget.count(getPointer());
        }
        return 0;
    }

    public TabWidgetPositions tabPosition() {
        if (getPointer() > 0){
            int val = tabWidget.tabPosition(getPointer());
            return TabWidgetPositions.valueOf(val);
        }
        return null;
    }

    public void setTabPosition(TabWidgetPositions position) {
        if (getPointer() > 0) {
            tabWidget.setTabPosition(getPointer(),position.getVal());
        }
    }

    public boolean tabsClosable() {
        if (getPointer() > 0) {
            return tabWidget.tabsClosable(getPointer());
        }
        return false;
    }

    public void setTabsClosable(boolean closeable) {
        if (getPointer() > 0) {
            tabWidget.setTabsClosable(getPointer(),closeable);
        }
    }

    public boolean isMovable() {
        if (getPointer() > 0) {
            return tabWidget.isMovable(getPointer());
        }
        return false;
    }

    public void setMovable(boolean movable){
        if (getPointer() > 0) {
            tabWidget.setMovable(getPointer(),movable);
        }
    }

    public TabWidgetShape tabShape(long pointer) {
        if (getPointer() > 0) {
            int tabShape = tabWidget.tabShape(getPointer());
            return TabWidgetShape.valueOf(tabShape);
        }
        return null;
    }

    public void setTabShape(TabWidgetShape s) {
        if (getPointer() > 0) {
            tabWidget.setTabShape(getPointer(),s.getVal());
        }
    }

    public boolean usesScrollButtons() {
        if (getPointer() > 0) {
            return tabWidget.usesScrollButtons(getPointer());
        }
        return false;
    }

    public void setUsesScrollButtons(boolean useButtons) {
        if (getPointer() > 0) {
            tabWidget.setUsesScrollButtons(getPointer(),useButtons);
        }
    }

    public boolean documentMode() {
        if (getPointer() > 0) {
            return tabWidget.documentMode(getPointer());
        }
        return false;
    }

    public void setDocumentMode(boolean set) {
        if (getPointer() > 0) {
            tabWidget.setDocumentMode(getPointer(),set);
        }
    }

    public boolean tabBarAutoHide() {
        if (getPointer() > 0){
            return tabWidget.tabBarAutoHide(getPointer());
        }
        return false;
    }

    public void setTabBarAutoHide(boolean enabled) {
        if (getPointer() > 0) {
            tabWidget.setTabBarAutoHide(getPointer(),enabled);
        }
    }

    public void clear() {
        if (getPointer() > 0) {
            tabWidget.clear(getPointer());
        }
    }

    public Size sizeHint() {
        if (getPointer() > 0){
            long pointer = tabWidget.sizeHint(getPointer());
            if (pointer <= 0 ) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public Size minimumSizeHint() {
        if (getPointer() > 0) {
            long pointer = tabWidget.minimumSizeHint(getPointer());
            if (pointer <= 0 ){
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public int heightForWidth(int width) {
        if (getPointer() > 0) {
            return tabWidget.heightForWidth(getPointer(),width);
        }
        return 0;
    }

    public boolean hasHeightForWidth() {
        if (getPointer() > 0) {
            return tabWidget.hasHeightForWidth(getPointer());
        }
        return false;
    }

    @Override
    public long getPointer() {
        return tabWidget.address();
    }
}
