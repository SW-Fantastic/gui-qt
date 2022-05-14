package org.swdc.qt.widgets;

import org.swdc.qt.internal.widgets.SFontComboBox;
import org.swdc.qt.widgets.graphics.Font;

import java.util.function.Consumer;

public class FontCombBox extends ComboBox {

    private SFontComboBox comboBox = new SFontComboBox();

    @Override
    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = comboBox.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create a font-comboBox");
        }
        comboBox.address(pointer);
    }

    public void setFontFilters(FontComboFilter ...filter) {
        if (accessible(filter)) {
            int val = filter[0].getVal();
            for (int idx = 1; idx < filter.length; idx ++) {
                val = val | filter[idx].getVal();
            }
            comboBox.setFontFilters(getPointer(),val);
        }
    }

    public Font getCurrentFont() {
        if (accessible()) {
            long pointer = comboBox.currentFont(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Font.asFont(pointer);
        }
        return null;
    }

    public Size getSizeHint() {
        if (accessible()) {
            long pointer = comboBox.sizeHint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    @Override
    public Consumer<Long> disposer() {
        return SFontComboBox.CLEANER;
    }

    public void setCurrentFont(Font font) {
        if (accessible(font)) {
            comboBox.setCurrentFont(getPointer(),font.getPointer());
        }
    }

    @Override
    public void dispose() {
        if (accessible()) {
            comboBox.dispose(getPointer());
        }
    }

    @Override
    public long getPointer() {
        return comboBox.address();
    }
}
