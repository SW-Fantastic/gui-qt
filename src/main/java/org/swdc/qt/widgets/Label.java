package org.swdc.qt.widgets;

import org.swdc.qt.beans.Alignment;
import org.swdc.qt.beans.DefaultTextFormat;
import org.swdc.qt.internal.widgets.SLabel;
import org.swdc.qt.widgets.graphics.Pixmap;
import org.swdc.qt.widgets.pane.Frame;

public class Label extends Frame {

    private SLabel label = new SLabel();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = label.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create a label, allocation failed");
        }
        label.address(pointer);
    }

    public void dispose() {
        if (accessible()) {
            label.dispose(getPointer());
            label.cleanAddress();
        }
    }

    @Override
    public long getPointer() {
        return label.address();
    }

    public String getText() {
        return accessible() ? label.text(getPointer()) : null;
    }

    public DefaultTextFormat getTextFormat() {
        return accessible() ? DefaultTextFormat.valueOf(label.textFormat(getPointer())) : null;
    }

    public void setTextFormat(DefaultTextFormat format) {
        if (accessible(format)) {
            label.setTextFormat(getPointer(),format.getVal());
        }
    }

    public Alignment getAlignment() {
        return accessible() ? Alignment.valueOf(label.alignment(getPointer())) : null;
    }

    public void setAlignment(Alignment alignment) {
        if (accessible(alignment)) {
            label.setAlignment(getPointer(),alignment.getFlagValue());
        }
    }

    public void setWordWrap(boolean on) {
        if (accessible()) {
            label.setWordWrap(getPointer(),on);
        }
    }

    public boolean getWordWrap() {
        return accessible() && label.wordWrap(getPointer());
    }

    public int getIndent() {
        return accessible() ? label.indent(getPointer()) : 0;
    }

    public void setIndent(int val) {
        if (accessible()) {
            label.setIndent(getPointer(),val);
        }
    }

    public int getMargin() {
        return accessible() ? label.margin(getPointer()) : 0;
    }

    public void setMargin(int val) {
        if (accessible()) {
            label.setMargin(getPointer(),val);
        }
    }

    public boolean hasScaledContents() {
        return accessible() && label.hasScaledContents(getPointer());
    }

    public void setScaledContents(boolean val) {
        if (accessible()) {
            label.setScaledContents(getPointer(),val);
        }
    }

    public Size getSizeHint() {
        if (accessible()) {
            long pointer = label.sizeHint(getPointer());
            if (pointer > 0) {
                return Size.asSize(pointer);
            }
        }
        return null;
    }

    public Size getMinimumSizeHint() {
        if (accessible()) {
            long pointer = label.minimumSizeHint(getPointer());
            if (pointer > 0) {
                return Size.asSize(pointer);
            }
        }
        return null;
    }

    public int heightForWidth(int val) {
        return accessible() ? label.heightForWidth(getPointer(),val) : 0;
    }

    public boolean isOpenExternalLinks() {
        return accessible() && label.openExternalLinks(getPointer());
    }

    public void setOpenExternalLinks(boolean open) {
        if (accessible()) {
            label.setOpenExternalLinks(getPointer(),open);
        }
    }

    public void setSelection(int st, int ed) {
        if (accessible()) {
            label.setSelection(getPointer(),st,ed);
        }
    }

    public boolean hasSelectedText() {
        return accessible() && label.hasSelectedText(getPointer());
    }

    public String getSelectedText() {
        if (accessible()) {
            return label.selectedText(getPointer());
        }
        return null;
    }

    public int getSelectionStart() {
        return accessible() ? label.selectionStart(getPointer()) : 0;
    }

    public void setText(String text) {
        if (accessible(text)) {
            label.setText(getPointer(),text);
        }
    }

    public void setPixmap(Pixmap pixmap) {
        if (accessible(pixmap)) {
            label.setPixmap(getPointer(),pixmap.getPointer());
        }
    }

    public void setNum(double val){
        if (accessible()) {
            label.setNum(getPointer(),val);
        }
    }

    public void clear() {
        if (accessible()) {
            label.clear(getPointer());
        }
    }


}
