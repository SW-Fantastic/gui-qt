package org.swdc.qt.widgets.pane;

import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.widgets.SStackWidget;
import org.swdc.qt.listeners.PaintListener;
import org.swdc.qt.listeners.WindowListener;

public class StackedWidget extends Widget {

    private SStackWidget sStackWidget = new SStackWidget();

    @Override
    public WindowListener getWindowListener() {
        return sStackWidget.getWindowListener();
    }

    @Override
    public void setWindowListener(WindowListener listener) {
        sStackWidget.setWindowListener(listener);
    }

    @Override
    public void setPaintListener(PaintListener paintListener) {
        sStackWidget.setPaintListener(paintListener);
    }

    @Override
    public PaintListener getPaintListener() {
        return sStackWidget.getPaintListener();
    }

    @Override
    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = sStackWidget.create();
        if (pointer <= 0) {
            throw new Exception("failed to create stacked-widget");
        }
        sStackWidget.address(pointer);
        MemoryHolder.allocated(this);
    }

    public <T extends Widget> int addWidget(T widget) {
        if (accessible(widget)) {
            return sStackWidget.addWidget(getPointer(),widget.getPointer());
        }
        return 0;
    }

    public <T extends Widget> int insertWidget(int index, T widget) {
        if (accessible(widget)) {
            return sStackWidget.insertWidget(getPointer(),index,widget.getPointer());
        }
        return 0;
    }

    public <T extends Widget> void removeWidget(T widget) {
        if (accessible(widget)) {
            sStackWidget.removeWidget(getPointer(),widget.getPointer());
        }
    }

    public int currentIndex() {
        if (accessible()) {
            return sStackWidget.currentIndex(getPointer());
        }
        return 0;
    }

    public <T extends Widget> int indexOf(T widget) {
        if (accessible(widget)) {
            return sStackWidget.indexOf(getPointer(),widget.getPointer());
        }
        return 0;
    }

    public int count() {
        if (accessible()) {
            return sStackWidget.count(getPointer());
        }
        return 0;
    }

    public void setCurrentIndex(int index) {
        if (accessible()) {
            sStackWidget.setCurrentIndex(getPointer(),index);
        }
    }

    public <T extends Widget> void setCurrentWidget(T widget) {
        if (accessible(widget)) {
            sStackWidget.setCurrentWidget(getPointer(),widget.getPointer());
        }
    }

    @Override
    public long getPointer() {
        return sStackWidget.address();
    }
}
