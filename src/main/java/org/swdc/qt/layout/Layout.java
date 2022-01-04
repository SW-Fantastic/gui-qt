package org.swdc.qt.layout;

import org.swdc.qt.beans.Margins;
import org.swdc.qt.internal.layout.SLayout;
import org.swdc.qt.widgets.pane.Widget;

public abstract class Layout<T extends SLayout> extends LayoutItem<T> {

    public boolean active() {
        if (getPointer() > 0) {
            return layoutItem.doActive(getPointer());
        }
        return false;
    }

    public void addWidget(Widget widget) {
        if (getPointer() > 0) {
            try {
                long pointer = widget.getPointer();
                if (pointer > 0) {
                    layoutItem.addWidget(getPointer(), pointer);
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    public int count() {
        if (getPointer() > 0) {
            return layoutItem.count(getPointer());
        }
        return 0;
    }

    public void setSpacing( int spac){
        if (getPointer() > 0) {
            layoutItem.setSpacing(getPointer(), spac);
        }
    }

    public int getSpacing() {
        if (getPointer() > 0) {
            return layoutItem.getSpacing(getPointer());
        }
        return 0;
    }

    public void removeWidget(Widget widget) {
        if (getPointer() > 0) {
            long pointer = widget.getPointer();
            if (pointer > 0) {
                layoutItem.removeWidget(getPointer(), pointer);
            }
        }
    }

    public void addItem(LayoutItem item) {
        if (getPointer() > 0) {
            layoutItem.addItem(getPointer(), item.getPointer());
        }
    }

    public void removeItem(LayoutItem item) {
        if (getPointer() > 0) {
            layoutItem.removeItem(getPointer(), item.getPointer());
        }
    }

    public Margins getContentsMargins() {
        if (getPointer() > 0) {
            return layoutItem.getContentsMargins(getPointer());
        }
        return null;
    }

    public void setContentsMargins(int top, int bottom, int left,int right) {
        if (getPointer() > 0) {
            layoutItem.setContentsMargins(getPointer(),top,bottom,left,right);
        }
    }

    public boolean dispose() {
        if (getPointer() > 0) {
            layoutItem.doDispose(getPointer());
            layoutItem.cleanAddress();
            return true;
        } else {
            return false;
        }
    }


}
