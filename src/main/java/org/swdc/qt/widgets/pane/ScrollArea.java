package org.swdc.qt.widgets.pane;

import org.swdc.qt.beans.Alignment;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.widgets.SScrollArea;
import org.swdc.qt.widgets.Size;

public class ScrollArea extends AbstractScrollArea {

    private SScrollArea area = new SScrollArea();

    private Widget widget = null;

    @Override
    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = area.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create scroll-area");
        }
        area.address(pointer);
        MemoryHolder.allocated(this);
    }

    public <T extends Widget> T getWidget() {
        if (accessible()) {
            return (T)widget;
        }
        return null;
    }

    public <T extends Widget> void setWidget(T widget) {
        if (accessible(widget)) {
            area.setWidget(getPointer(),widget.getPointer());
            this.widget = widget;
        }
    }

    public <T extends Widget> T takeWidget() {
        if (accessible()) {
            long pointer = area.takeWidget(getPointer());
            Widget widget = this.widget;
            if (widget != null && widget.getPointer() == pointer) {
                this.widget = null;
                return (T)widget;
            } else {
                this.widget = null;
            }
        }
        return null;
    }

    public boolean isWidgetResizable() {
        if (accessible()) {
            return area.widgetResizable(getPointer());
        }
        return false;
    }

    public void setWidgetResizable(boolean resizable) {
        if (accessible()) {
            area.setWidgetResizable(getPointer(),resizable);
        }
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

    public boolean focusNextPrevChild(boolean next) {
        if (accessible()) {
            return area.focusNextPrevChild(getPointer(),next);
        }
        return false;
    }

    public Alignment getAlignment() {
        if (accessible()) {
            long val = area.alignment(getPointer());
            return Alignment.valueOf(val);
        }
        return null;
    }

    public void setAlignment(Alignment alignment) {
        if (accessible(alignment)) {
            area.setAlignment(getPointer(),alignment.getFlagValue());
        }
    }

    public void ensureVisible(int x, int y, int xmargin, int ymargin) {
        if (accessible()) {
            area.ensureVisible(getPointer(),x,y,xmargin,ymargin);
        }
    }

    public void ensureWidgetVisible(Widget childWidget, int xmargin, int ymargin) {
        if (accessible(childWidget)) {
            area.ensureWidgetVisible(getPointer(),childWidget.getPointer(),xmargin,ymargin);
        }
    }

    @Override
    public long getPointer() {
        return area.address();
    }
}
