package org.swdc.qt.widgets.pane;

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
        if (getPointer() > 0) {
            return;
        }
        long pointer = area.create(0L);
        if(pointer <= 0) {
            throw new Exception("can not create a mdi-area");
        }
        area.address(pointer);
    }

    public Size getSizeHint() {
        if (getPointer() > 0) {
            long pointer = area.sizeHint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public Size getMinimumSizeHint() {
        if (getPointer() > 0) {
            long pointer = area.minimumSizeHint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public MdiSubWindow currentSubWindow() {
        if (getPointer() > 0) {
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
        if (getPointer() > 0) {
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
        if (getPointer() > 0) {
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
        if (getPointer() > 0 && widget.getPointer() > 0) {

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
        if (getPointer() > 0 && widget.getPointer() > 0) {

            if (widgetSubWindowMap.containsKey(widget.getPointer())) {
                long subWindow = widgetSubWindowMap.get(widget.getPointer());
                subWindowMap.remove(subWindow);
                widgetSubWindowMap.remove(widget.getPointer());
            }

            subWindowMap.remove(widget.getPointer());
        }
    }

    public Brush getBackground() {
        if (getPointer() > 0) {
            long pointer = area.background(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Brush.asBrush(pointer);
        }
        return null;
    }

    public void setBackground(Brush background) {
        if (getPointer() > 0 && background.getPointer() > 0) {
            area.setBackground(getPointer(),background.getPointer());
        }
    }

    public MdiWindowOrder getActivationOrder() {
        if (getPointer() > 0) {
            int order = area.activationOrder(getPointer());
            return MdiWindowOrder.valueOf(order);
        }
        return null;
    }

    public void setActivationOrder(MdiWindowOrder order) {
        if (getPointer() > 0) {
            area.setActivationOrder(getPointer(),order.getVal());
        }
    }

    public void setOption(MdiSubWindowOption option, boolean on) {
        if (getPointer() > 0) {
            area.setOption(getPointer(),option.getVal(),on);
        }
    }

    public void setViewMode(MdiWindowViewMode mode) {
        if (getPointer() > 0) {
            area.setViewMode(getPointer(),mode.getVal());
        }
    }

    public MdiWindowViewMode getViewMode() {
        if (getPointer() > 0) {
            int viewMode = area.viewMode(getPointer());
            return MdiWindowViewMode.valueOf(viewMode);
        }
        return null;
    }

    public boolean isDocumentMode() {
        if (getPointer() > 0) {
            return area.documentMode(getPointer());
        }
        return false;
    }

    public void setDocumentMode(boolean enabled) {
        if (getPointer() > 0) {
            area.setDocumentMode(getPointer(),enabled);
        }
    }

    public void setTabsClosable(boolean closable) {
        if (getPointer() > 0) {
            area.setTabsClosable(getPointer(),closable);
        }
    }

    public boolean isTabsClosable() {
        if (getPointer() > 0) {
            return area.tabsClosable(getPointer());
        }
        return false;
    }

    public void setTabsMovable(boolean movable){
        if (getPointer() > 0) {
            area.setTabsMovable(getPointer(),movable);
        }
    }

    public boolean isTabsMovable() {
        if (getPointer() > 0) {
            return area.tabsMovable(getPointer());
        }
        return false;
    }

    public void setTabShape(TabWidgetShape shape) {
        if (getPointer() > 0) {
            area.setTabShape(getPointer(),shape.getVal());
        }
    }

    public TabWidgetShape getTabShape() {
        if (getPointer() > 0) {
            int val = area.tabShape(getPointer());
            return TabWidgetShape.valueOf(val);
        }
        return null;
    }

    public void setTabPosition(TabWidgetPositions position) {
        if (getPointer() > 0) {
            area.setTabPosition(getPointer(),position.getVal());
        }
    }

    public TabWidgetPositions tabPosition() {
        if (getPointer() > 0) {
            int pos = area.tabPosition(getPointer());
            return TabWidgetPositions.valueOf(pos);
        }
        return null;
    }

    public void setActiveSubWindow(MdiSubWindow window) {
        if (getPointer() > 0) {
            area.setActiveSubWindow(getPointer(),window.getPointer());
        }
    }

    public void tileSubWindows() {
        if (getPointer() > 0) {
            area.tileSubWindows(getPointer());
        }
    }

    public void cascadeSubWindows() {
        if (getPointer() > 0) {
            area.cascadeSubWindows(getPointer());
        }
    }

    public void closeActiveSubWindow() {
        if (getPointer() > 0) {
            area.closeActiveSubWindow(getPointer());
        }
    }

    public void closeAllSubWindows() {
        if (getPointer() > 0) {
            area.closeAllSubWindows(getPointer());
        }
    }

    public void activateNextSubWindow() {
        if (getPointer() > 0) {
            area.activateNextSubWindow(getPointer());
        }
    }

    public void activatePreviousSubWindow() {
        if (getPointer() > 0) {
            area.activatePreviousSubWindow(getPointer());
        }
    }

    @Override
    public long getPointer() {
        return area.address();
    }
}
