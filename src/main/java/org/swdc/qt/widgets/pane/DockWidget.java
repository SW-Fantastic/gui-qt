package org.swdc.qt.widgets.pane;

import org.swdc.qt.internal.widgets.SDockWidget;

public class DockWidget extends Widget {

    private SDockWidget dockWidget = new SDockWidget();
    private Widget titleWidget;

    @Override
    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = dockWidget.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create dock-widget");
        }
        dockWidget.address(pointer);
    }

    public void setFeatures(DockWidgetFuture ...features) {
        if (getPointer() > 0 && features.length > 0) {
            int val = features[0].getVal();
            for (int idx = 1; idx < features.length; idx ++) {
                val = val | features[idx].getVal();
            }
            dockWidget.setFeatures(getPointer(),val);
        }
    }

    public void setFloating(boolean floating) {
        if (getPointer() > 0) {
            dockWidget.setFloating(getPointer(),floating);
        }
    }

    public boolean isFloating() {
        if (getPointer() > 0) {
            return dockWidget.isFloating(getPointer());
        }
        return false;
    }

    public void setAllowedAreas(DockWidgetArea ...areas) {
        if (getPointer() > 0 && areas.length > 0) {
            int val = areas[0].getVal();
            for (int idx = 1; idx < areas.length;idx++) {
                val = val | areas[idx].getVal();
            }
            dockWidget.setAllowedAreas(getPointer(),val);
        }
    }

    public <T extends Widget> void setTitleBarWidget(T widget) {
        if (getPointer() > 0 && widget.getPointer() > 0) {
            dockWidget.setTitleBarWidget(getPointer(),widget.getPointer());
            this.titleWidget = widget;
        }
    }

    public <T extends Widget> T getTitleBarWidget() {
        if (getPointer() > 0) {
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
        if (getPointer() > 0) {
            return dockWidget.isAreaAllowed(getPointer(),area.getVal());
        }
        return false;
    }

    @Override
    public long getPointer() {
        return dockWidget.address();
    }


}
