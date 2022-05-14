package org.swdc.qt.widgets.pane;

import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.widgets.SDockWidget;

public class DockWidget extends Widget {

    private SDockWidget dockWidget = new SDockWidget();
    private Widget titleWidget;

    @Override
    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = dockWidget.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create dock-widget");
        }
        dockWidget.address(pointer);
        MemoryHolder.allocated(this);
    }

    public void setFeatures(DockWidgetFuture ...features) {
        if (accessible() && features.length > 0) {
            int val = features[0].getVal();
            for (int idx = 1; idx < features.length; idx ++) {
                val = val | features[idx].getVal();
            }
            dockWidget.setFeatures(getPointer(),val);
        }
    }

    public void setFloating(boolean floating) {
        if (accessible()) {
            dockWidget.setFloating(getPointer(),floating);
        }
    }

    public boolean isFloating() {
        if (accessible()) {
            return dockWidget.isFloating(getPointer());
        }
        return false;
    }

    public void setAllowedAreas(DockWidgetArea ...areas) {
        if (accessible(areas) && areas.length > 0) {
            int val = areas[0].getVal();
            for (int idx = 1; idx < areas.length;idx++) {
                val = val | areas[idx].getVal();
            }
            dockWidget.setAllowedAreas(getPointer(),val);
        }
    }

    public <T extends Widget> void setTitleBarWidget(T widget) {
        if (accessible(widget)) {
            dockWidget.setTitleBarWidget(getPointer(),widget.getPointer());
            this.titleWidget = widget;
        }
    }

    public <T extends Widget> T getTitleBarWidget() {
        if (accessible()) {
            if (titleWidget == null) {
                return null;
            }
            long pointer = dockWidget.titleBarWidget(getPointer());
            if (pointer == titleWidget.getPointer()) {
                return (T) titleWidget;
            }
            return null;
        }
        return null;
    }

    public boolean isAreaAllowed(DockWidgetArea area) {
        if (accessible(area)) {
            return dockWidget.isAreaAllowed(getPointer(),area.getVal());
        }
        return false;
    }

    @Override
    public long getPointer() {
        return dockWidget.address();
    }


}
