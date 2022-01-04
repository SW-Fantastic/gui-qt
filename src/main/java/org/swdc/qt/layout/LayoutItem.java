package org.swdc.qt.layout;

import org.swdc.qt.beans.SRect;
import org.swdc.qt.beans.SSize;
import org.swdc.qt.internal.layout.SLayoutItem;

public abstract class LayoutItem<T extends SLayoutItem> {

    protected T layoutItem = createLayoutItem();

    protected abstract T createLayoutItem();

    public abstract void allocate() throws Exception;

    public SSize getSizeHint() {
        if (layoutItem.isUsable()) {
            layoutItem.getSizeHint(getPointer());
        }
        return null;
    }

    public SSize getMinimumSize() {
        if (layoutItem.isUsable()) {
            return layoutItem.getMinimumSize(getPointer());
        }
        return null;
    }

    public SSize getMaximumSize() {
        if (layoutItem.isUsable()) {
            return layoutItem.getMaximumSize(getPointer());
        }
        return null;
    }

    public void setGeometry(int x,int y,int width, int height,
                                    int top, int center, int bottom, int left, int right) {
        if (layoutItem.isUsable()) {
            layoutItem.setGeometry(getPointer(),x,y,width,height,top,center,bottom,left,right);
        }
    }
    public SRect getGeometry() {
        if (layoutItem.isUsable()) {
            return layoutItem.getGeometry(getPointer());
        }
        return null;
    }

    public boolean isEmpty() {
        if (layoutItem.isUsable()) {
            return layoutItem.isEmpty(getPointer());
        }
        return false;
    }

    public boolean hasHeightForWidth() {
        if (layoutItem.isUsable()) {
            return layoutItem.hasHeightForWidth(getPointer());
        }
        return false;
    }

    public int setHeightForWidth(int value) {
        if (layoutItem.isUsable()) {
            return layoutItem.setHeightForWidth(getPointer(),value);
        }
        return 0;
    }

    public int setMinimumHeightForWidth(int value) {
        if (layoutItem.isUsable()) {
            return layoutItem.setMinimumHeightForWidth(getPointer(),value);
        }
        return 0;
    }

    public void invalidate() {
        if (layoutItem.isUsable()) {
            layoutItem.doInvalidate(getPointer());
        }
    }

    public long getPointer() {
        return layoutItem.address();
    }

}
