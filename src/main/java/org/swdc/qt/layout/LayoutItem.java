package org.swdc.qt.layout;

import org.swdc.qt.internal.layout.SLayoutItem;
import org.swdc.qt.widgets.Rect;
import org.swdc.qt.widgets.Size;

public abstract class LayoutItem<T extends SLayoutItem> {

    protected T layoutItem = createLayoutItem();

    protected abstract T createLayoutItem();

    public abstract void allocate() throws Exception;

    public Size getSizeHint() {
        if (layoutItem.isUsable()) {
            long pointer = layoutItem.getSizeHint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public Size getMinimumSize() {
        if (layoutItem.isUsable()) {
            long pointer = layoutItem.getMinimumSize(getPointer());
            if (pointer <= 0){
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public Size getMaximumSize() {
        if (layoutItem.isUsable()) {
            long pointer = layoutItem.getMaximumSize(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public void setGeometry(int x,int y,int width, int height,
                                    int top, int center, int bottom, int left, int right) {
        if (layoutItem.isUsable()) {
            layoutItem.setGeometry(getPointer(),x,y,width,height,top,center,bottom,left,right);
        }
    }
    public Rect getGeometry() {
        if (layoutItem.isUsable()) {
            long pointer = layoutItem.getGeometry(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Rect.asRect(pointer);
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
