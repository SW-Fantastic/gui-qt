package org.swdc.qt.widgets.pane;

import org.swdc.qt.beans.Alignment;
import org.swdc.qt.internal.widgets.SScrollArea;
import org.swdc.qt.widgets.Size;

public class ScrollArea extends AbstractScrollArea {

    private SScrollArea area = new SScrollArea();

    private Widget widget = null;

    @Override
    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = area.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create scroll-area");
        }
        area.address(pointer);
    }

    public <T extends Widget> T getWidget() {
        if (getPointer() > 0) {
            return (T)widget;
        }
        return null;
    }

    public <T extends Widget> void setWidget(T widget) {
        if (getPointer() > 0 && widget.getPointer() > 0) {
            area.setWidget(getPointer(),widget.getPointer());
            this.widget = widget;
        }
    }

    public <T extends Widget> T takeWidget() {
        if (getPointer() > 0) {
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
        if (getPointer() > 0) {
            return area.widgetResizable(getPointer());
        }
        return false;
    }

    public void setWidgetResizable(boolean resizable) {
        if (getPointer() > 0) {
            area.setWidgetResizable(getPointer(),resizable);
        }
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

    public boolean focusNextPrevChild(boolean next) {
        if (getPointer() > 0) {
            return area.focusNextPrevChild(getPointer(),next);
        }
        return false;
    }

    public Alignment getAlignment() {
        if (getPointer() > 0) {
            long val = area.alignment(getPointer());
            return Alignment.valueOf(val);
        }
        return null;
    }

    public void setAlignment(Alignment alignment) {
        if (getPointer() > 0) {
            area.setAlignment(getPointer(),alignment.getFlagValue());
        }
    }

    public void ensureVisible(int x, int y, int xmargin, int ymargin) {
        if (getPointer() > 0) {
            area.ensureVisible(getPointer(),x,y,xmargin,ymargin);
        }
    }

    public void ensureWidgetVisible(Widget childWidget, int xmargin, int ymargin) {
        if (getPointer() > 0 && childWidget.getPointer() >0) {
            area.ensureWidgetVisible(getPointer(),childWidget.getPointer(),xmargin,ymargin);
        }
    }

    @Override
    public long getPointer() {
        return area.address();
    }
}
