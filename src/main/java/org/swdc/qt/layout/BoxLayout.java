package org.swdc.qt.layout;

import org.swdc.qt.beans.BoxDirections;
import org.swdc.qt.internal.layout.SBoxLayout;

public abstract class BoxLayout<T extends SBoxLayout> extends Layout<T> {

    public void setDirection(BoxDirections direction) {
        if (layoutItem.isUsable()) {
            layoutItem.doSetDirection(getPointer(),direction.getValue());
        }
    }

    public BoxDirections getDirection() {
        if (layoutItem.isUsable()) {
            int val = layoutItem.doGetDirection(getPointer());
            return BoxDirections.valueOf(val);
        }
        return null;
    }

    public void addSpacing(int spacing) {
        if (layoutItem.isUsable()) {
            layoutItem.addSpacing(getPointer(),spacing);
        }
    }

    public void addStretch( int stretch) {
        if (layoutItem.isUsable()) {
            layoutItem.addStretch(getPointer(),stretch);
        }
    }

    public void addSpacerItem(SpacerItem spacerItem) {
        if (layoutItem.isUsable() && spacerItem.getPointer() > 0) {
            layoutItem.addSpacerItem(getPointer(),spacerItem.getPointer());
        }
    }

    public void addLayout(Layout layout) {
        if (layoutItem.isUsable() && layout.getPointer() > 0) {
            layoutItem.addLayout(getPointer(), layout.getPointer());
        }
    }

    public void addStrut(int strut) {
        if (layoutItem.isUsable()) {
            layoutItem.addStrut(getPointer(),strut);
        }
    }

    public void insertSpacing( int index, int spac) {
        if (layoutItem.isUsable()) {
            layoutItem.insertSpacing(getPointer(),index,spac);
        }
    }

    public void insertStretch( int index, int stretch) {
        if (layoutItem.isUsable()) {
            layoutItem.insertStretch(getPointer(),index,stretch);
        }
    }

    public void insertSpacerItem( int index, SpacerItem spacerItem) {
        if (layoutItem.isUsable() && spacerItem.getPointer() > 0) {
            layoutItem.insertSpacerItem(getPointer(),index,spacerItem.getPointer());
        }
    }

    public void insertLayout(int index, Layout layout) {
        if (layoutItem.isUsable() && layout.getPointer() > 0) {
            layoutItem.insertLayout(getPointer(),index,layout.getPointer());
        }
    }

    public void insertItem(int index, LayoutItem item) {
        if (layoutItem.isUsable() && item.getPointer() > 0) {
            layoutItem.insertItem(getPointer(),index,item.getPointer());
        }
    }
   
    
}
