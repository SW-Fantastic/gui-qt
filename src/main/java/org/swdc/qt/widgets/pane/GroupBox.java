package org.swdc.qt.widgets.pane;

import org.swdc.qt.beans.Alignment;
import org.swdc.qt.internal.widgets.SGroupBox;
import org.swdc.qt.widgets.Size;

public class GroupBox extends Widget {

    private SGroupBox groupBox = new SGroupBox();

    @Override
    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = groupBox.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create a groupbox");
        }
        groupBox.address(pointer);
    }

    public String getTitle() {
        if (getPointer() > 0) {
            return groupBox.title(getPointer());
        }
        return null;
    }

    public void setTitle(String title) {
        if (getPointer() > 0) {
            groupBox.setTitle(getPointer(),title);
        }
    }

    public Alignment getAlignment() {
        if (getPointer() > 0) {
            long val = groupBox.alignment(getPointer());
            return Alignment.valueOf(val);
        }
        return null;
    }

    public void setAlignment(Alignment alignment){
        if (getPointer() > 0) {
            groupBox.setAlignment(getPointer(),alignment.getFlagValue());
        }
    }

    public Size getMinimumSizeHint() {
        if (getPointer() > 0) {
            long pointer = groupBox.minimumSizeHint(getPointer());
            return Size.asSize(pointer);
        }
        return null;
    }

    public boolean isFlat() {
        if (getPointer() > 0) {
            return groupBox.isFlat(getPointer());
        }
        return false;
    }

    public void setFlat(boolean flat) {
        if (getPointer() > 0) {
            groupBox.setFlat(getPointer(),flat);
        }
    }

    public boolean isCheckable() {
        if (getPointer() > 0) {
            return groupBox.isCheckable(getPointer());
        }
        return false;
    }

    public void setCheckable(boolean checkable) {
        if (getPointer() > 0) {
            groupBox.setCheckable(getPointer(),checkable);
        }
    }

    public boolean isChecked() {
        if (getPointer() > 0) {
            return groupBox.isChecked(getPointer());
        }
        return false;
    }

    public void setChecked(boolean checked) {
        if (getPointer() > 0) {
            groupBox.setChecked(getPointer(),checked);
        }
    }

    @Override
    public long getPointer() {
        return groupBox.address();
    }
}
