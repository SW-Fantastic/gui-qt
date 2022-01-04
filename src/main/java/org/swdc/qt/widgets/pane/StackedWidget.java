package org.swdc.qt.widgets.pane;

import org.swdc.qt.internal.widgets.SStackWidget;

public class StackedWidget extends Widget {

    private SStackWidget sStackWidget = new SStackWidget();

    @Override
    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = sStackWidget.create();
        if (pointer <= 0) {
            throw new Exception("failed to create stacked-widget");
        }
        sStackWidget.address(pointer);
    }

    public <T extends Widget> int addWidget(T widget) {
        if (getPointer() > 0 && widget.getPointer() > 0) {
            return sStackWidget.addWidget(getPointer(),widget.getPointer());
        }
        return 0;
    }

    public <T extends Widget> int insertWidget(int index, T widget) {
        if (getPointer() > 0 && widget.getPointer() > 0) {
            return sStackWidget.insertWidget(getPointer(),index,widget.getPointer());
        }
        return 0;
    }

    public <T extends Widget> void removeWidget(T widget) {
        if (getPointer() > 0 && widget.getPointer() > 0) {
            sStackWidget.removeWidget(getPointer(),widget.getPointer());
        }
    }

    public int currentIndex() {
        if (getPointer() > 0) {
            return sStackWidget.currentIndex(getPointer());
        }
        return 0;
    }

    public <T extends Widget> int indexOf(T widget) {
        if (getPointer() > 0 && widget.getPointer() > 0) {
            return sStackWidget.indexOf(getPointer(),widget.getPointer());
        }
        return 0;
    }

    public int count() {
        if (getPointer() > 0) {
            return sStackWidget.count(getPointer());
        }
        return 0;
    }

    public void setCurrentIndex(int index) {
        if (getPointer() > 0) {
            sStackWidget.setCurrentIndex(getPointer(),index);
        }
    }

    public <T extends Widget> void setCurrentWidget(T widget) {
        if (getPointer() > 0 && widget.getPointer() > 0) {
            sStackWidget.setCurrentWidget(getPointer(),widget.getPointer());
        }
    }

    @Override
    public long getPointer() {
        return sStackWidget.address();
    }
}
