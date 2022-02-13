package org.swdc.qt.widgets;

import org.swdc.qt.internal.widgets.SFontComboBox;
import org.swdc.qt.widgets.graphics.Font;

public class FontCombBox extends ComboBox {

    private SFontComboBox comboBox = new SFontComboBox();

    @Override
    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = comboBox.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create a font-comboBox");
        }
        comboBox.address(pointer);
    }

    public void setFontFilters(FontComboFilter ...filter) {
        if (getPointer() > 0 && filter.length > 0) {
            int val = filter[0].getVal();
            for (int idx = 1; idx < filter.length; idx ++) {
                val = val | filter[idx].getVal();
            }
            comboBox.setFontFilters(getPointer(),val);
        }
    }

    public Font getCurrentFont() {
        if (getPointer() > 0) {
            long pointer = comboBox.currentFont(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Font.asFont(pointer);
        }
        return null;
    }

    public Size getSizeHint() {
        if (getPointer() > 0) {
            long pointer = comboBox.sizeHint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public void setCurrentFont(Font font) {
        if (getPointer() > 0 && font != null && font.getPointer() > 0) {
            comboBox.setCurrentFont(getPointer(),font.getPointer());
        }
    }

    @Override
    public void dispose() {
        if (getPointer() > 0) {
            comboBox.dispose(getPointer());
        }
    }

    @Override
    public long getPointer() {
        return comboBox.address();
    }
}
