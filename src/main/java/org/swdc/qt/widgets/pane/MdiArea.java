package org.swdc.qt.widgets.pane;

import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.widgets.SMdiArea;
import org.swdc.qt.widgets.Size;
import org.swdc.qt.widgets.graphics.Brush;

import java.util.*;
import java.util.function.Consumer;

public class MdiArea extends AbstractScrollArea {

    private SMdiArea area = new SMdiArea();
    private Map<Long,MdiSubWindow> subWindowMap = new HashMap<>();
    private Map<Long,Long> widgetSubWindowMap = new HashMap<>();

    private Consumer<Long> removeWindow = p -> {

        subWindowMap.remove(p);

        Long key = null;
        for (Map.Entry<Long,Long> ent: widgetSubWindowMap.entrySet()) {
            if (ent.getValue().equals(p)) {
                key = ent.getKey();
            }
        }
        widgetSubWindowMap.remove(key);

    };

    @Override
    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = area.create(0L);
        if(pointer <= 0) {
            throw new Exception("can not create a mdi-area");
        }
        area.address(pointer);
        MemoryHolder.allocated(this);
    }

    public Size getSizeHint() {
        if (accessible()) {
            long pointer = area.sizeHint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public Size getMinimumSizeHint() {
        if (accessible()) {
            long pointer = area.minimumSizeHint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public MdiSubWindow currentSubWindow() {
        if (accessible()) {
            long pointer = area.currentSubWindow(getPointer());
            if (pointer <= 0) {
                return null;
            }
            if (subWindowMap.containsKey(pointer)) {
                return subWindowMap.get(pointer);
            }
            MdiSubWindow mdiSubWindow = MdiSubWindow.asMdiSubWindow(pointer,removeWindow);
            subWindowMap.put(pointer,mdiSubWindow);
            return mdiSubWindow;
        }
        return null;
    }

    public MdiSubWindow activeSubWindow() {
        if (accessible()) {
            long pointer = area.activeSubWindow(getPointer());
            if (pointer <= 0) {
                return null;
            }
            if (subWindowMap.containsKey(pointer)) {
                return subWindowMap.get(pointer);
            }
            MdiSubWindow window = MdiSubWindow.asMdiSubWindow(pointer,removeWindow);
            subWindowMap.put(pointer,window);
            return window;
        }
        return null;
    }

    public List<MdiSubWindow> subWindowList(MdiWindowOrder order) {
        if (accessible(order)) {
            long[] windows = area.subWindowList(getPointer(),order.getVal());
            List<MdiSubWindow> windowList = new ArrayList<>();
            for (long pointer : windows) {
                if (subWindowMap.containsKey(pointer)) {
                    windowList.add(subWindowMap.get(pointer));
                } else {
                    MdiSubWindow window = MdiSubWindow.asMdiSubWindow(pointer,removeWindow);
                    subWindowMap.put(pointer,window);
                    windowList.add(window);
                }
            }
            return windowList;
        }
        return null;
    }

    public <T extends Widget> MdiSubWindow addSubWindow(T widget) {
        if (accessible(widget)) {

            if (widgetSubWindowMap.containsKey(widget.getPointer())) {
                long windowPointer = widgetSubWindowMap.get(widget.getPointer());
                return subWindowMap.get(windowPointer);
            }

            long pointer = area.addSubWindow(getPointer(),widget.getPointer());
            if (pointer <= 0) {
                return null;
            }

            MdiSubWindow window = MdiSubWindow.asMdiSubWindow(pointer,removeWindow);
            subWindowMap.put(pointer,window);
            widgetSubWindowMap.put(widget.getPointer(),pointer);
            return window;
        }
        return null;
    }

    public <T extends Widget> void removeSubWindow(T widget) {
        if (accessible(widget)) {

            if (widgetSubWindowMap.containsKey(widget.getPointer())) {
                long subWindow = widgetSubWindowMap.get(widget.getPointer());
                subWindowMap.remove(subWindow);
                widgetSubWindowMap.remove(widget.getPointer());
            }

            subWindowMap.remove(widget.getPointer());
        }
    }

    public Brush getBackground() {
        if (accessible()) {
            long pointer = area.background(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Brush.asBrush(pointer);
        }
        return null;
    }

    public void setBackground(Brush background) {
        if (accessible(background)) {
            area.setBackground(getPointer(),background.getPointer());
        }
    }

    public MdiWindowOrder getActivationOrder() {
        if (accessible()) {
            int order = area.activationOrder(getPointer());
            return MdiWindowOrder.valueOf(order);
        }
        return null;
    }

    public void setActivationOrder(MdiWindowOrder order) {
        if (accessible(order)) {
            area.setActivationOrder(getPointer(),order.getVal());
        }
    }

    public void setOption(MdiSubWindowOption option, boolean on) {
        if (accessible(option)) {
            area.setOption(getPointer(),option.getVal(),on);
        }
    }

    public void setViewMode(MdiWindowViewMode mode) {
        if (accessible(mode)) {
            area.setViewMode(getPointer(),mode.getVal());
        }
    }

    public MdiWindowViewMode getViewMode() {
        if (accessible()) {
            int viewMode = area.viewMode(getPointer());
            return MdiWindowViewMode.valueOf(viewMode);
        }
        return null;
    }

    public boolean isDocumentMode() {
        if (accessible()) {
            return area.documentMode(getPointer());
        }
        return false;
    }

    public void setDocumentMode(boolean enabled) {
        if (accessible()) {
            area.setDocumentMode(getPointer(),enabled);
        }
    }

    public void setTabsClosable(boolean closable) {
        if (accessible()) {
            area.setTabsClosable(getPointer(),closable);
        }
    }

    public boolean isTabsClosable() {
        if (accessible()) {
            return area.tabsClosable(getPointer());
        }
        return false;
    }

    public void setTabsMovable(boolean movable){
        if (accessible()) {
            area.setTabsMovable(getPointer(),movable);
        }
    }

    public boolean isTabsMovable() {
        if (accessible()) {
            return area.tabsMovable(getPointer());
        }
        return false;
    }

    public void setTabShape(TabWidgetShape shape) {
        if (accessible(shape)) {
            area.setTabShape(getPointer(),shape.getVal());
        }
    }

    public TabWidgetShape getTabShape() {
        if (accessible()) {
            int val = area.tabShape(getPointer());
            return TabWidgetShape.valueOf(val);
        }
        return null;
    }

    public void setTabPosition(TabWidgetPositions position) {
        if (accessible(position)) {
            area.setTabPosition(getPointer(),position.getVal());
        }
    }

    public TabWidgetPositions tabPosition() {
        if (accessible()) {
            int pos = area.tabPosition(getPointer());
            return TabWidgetPositions.valueOf(pos);
        }
        return null;
    }

    public void setActiveSubWindow(MdiSubWindow window) {
        if (accessible(window)) {
            area.setActiveSubWindow(getPointer(),window.getPointer());
        }
    }

    public void tileSubWindows() {
        if (accessible()) {
            area.tileSubWindows(getPointer());
        }
    }

    public void cascadeSubWindows() {
        if (accessible()) {
            area.cascadeSubWindows(getPointer());
        }
    }

    public void closeActiveSubWindow() {
        if (accessible()) {
            area.closeActiveSubWindow(getPointer());
        }
    }

    public void closeAllSubWindows() {
        if (accessible()) {
            area.closeAllSubWindows(getPointer());
        }
    }

    public void activateNextSubWindow() {
        if (accessible()) {
            area.activateNextSubWindow(getPointer());
        }
    }

    public void activatePreviousSubWindow() {
        if (accessible()) {
            area.activatePreviousSubWindow(getPointer());
        }
    }

    @Override
    public long getPointer() {
        return area.address();
    }
}
