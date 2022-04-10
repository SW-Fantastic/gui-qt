package org.swdc.qt.widgets.pane;

import org.swdc.qt.beans.Alignment;
import org.swdc.qt.internal.widgets.SGroupBox;
import org.swdc.qt.widgets.Size;

public class GroupBox extends Widget {

    private SGroupBox groupBox = new SGroupBox();

    @Override
    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = groupBox.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create a groupbox");
        }
        groupBox.address(pointer);
    }

    public String getTitle() {
        if (accessible()) {
            return groupBox.title(getPointer());
        }
        return null;
    }

    public void setTitle(String title) {
        if (accessible(title)) {
            groupBox.setTitle(getPointer(),title);
        }
    }

    public Alignment getAlignment() {
        if (accessible()) {
            long val = groupBox.alignment(getPointer());
            return Alignment.valueOf(val);
        }
        return null;
    }

    public void setAlignment(Alignment alignment){
        if (accessible(alignment)) {
            groupBox.setAlignment(getPointer(),alignment.getFlagValue());
        }
    }

    public Size getMinimumSizeHint() {
        if (accessible()) {
            long pointer = groupBox.minimumSizeHint(getPointer());
            return Size.asSize(pointer);
        }
        return null;
    }

    public boolean isFlat() {
        if (accessible()) {
            return groupBox.isFlat(getPointer());
        }
        return false;
    }

    public void setFlat(boolean flat) {
        if (accessible()) {
            groupBox.setFlat(getPointer(),flat);
        }
    }

    public boolean isCheckable() {
        if (accessible()) {
            return groupBox.isCheckable(getPointer());
        }
        return false;
    }

    public void setCheckable(boolean checkable) {
        if (accessible()) {
            groupBox.setCheckable(getPointer(),checkable);
        }
    }

    public boolean isChecked() {
        if (accessible()) {
            return groupBox.isChecked(getPointer());
        }
        return false;
    }

    public void setChecked(boolean checked) {
        if (accessible()) {
            groupBox.setChecked(getPointer(),checked);
        }
    }

    @Override
    public long getPointer() {
        return groupBox.address();
    }
}
