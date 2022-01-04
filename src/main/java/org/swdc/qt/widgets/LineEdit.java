package org.swdc.qt.widgets;

import org.swdc.qt.beans.Alignment;
import org.swdc.qt.beans.Margins;
import org.swdc.qt.internal.widgets.SLineEdit;
import org.swdc.qt.widgets.pane.Widget;

public class LineEdit extends Widget {

    private SLineEdit lineEdit = new SLineEdit();

    @Override
    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = lineEdit.create(0L);
        if (pointer <= 0) {
            throw new Exception("failed to create line-edit");
        }
        lineEdit.address(pointer);
    }

    public String getText() {
        if (getPointer() > 0) {
            return lineEdit.text(getPointer());
        }
        return "";
    }

    public String getDisplayText(){
        if (getPointer() > 0) {
            return lineEdit.displayText(getPointer());
        }
        return "";
    }

    public String getPlaceholderText() {
        if (getPointer() > 0) {
            return lineEdit.placeholderText(getPointer());
        }
        return "";
    }

    public void setPlaceholderText(String text) {
        if (getPointer() > 0) {
            lineEdit.setPlaceholderText(getPointer(),text);
        }
    }

    public int getMaxLength() {
        if (getPointer() > 0) {
            return lineEdit.maxLength(getPointer());
        }
        return 0;
    }

    public void setMaxLength(int val) {
        if (getPointer() > 0){
            lineEdit.setMaxLength(getPointer(),val);
        }
    }

    public void setFrame(boolean val) {
        if (getPointer() > 0) {
            lineEdit.setFrame(getPointer(),val);
        }
    }

    public boolean hasFrame() {
        if (getPointer() > 0) {
            return lineEdit.hasFrame(getPointer());
        }
        return false;
    }

    public void setClearButtonEnabled(boolean enable) {
        if (getPointer() > 0) {
            lineEdit.setClearButtonEnabled(getPointer(),enable);
        }
    }

    public boolean isClearButtonEnabled() {
        if (getPointer() > 0) {
            return lineEdit.isClearButtonEnabled(getPointer());
        }
        return false;
    }

    public boolean isReadOnly() {
        if (getPointer() > 0) {
            return lineEdit.isReadOnly(getPointer());
        }
        return false;
    }

    public void setReadOnly(boolean val) {
        if (getPointer() > 0) {
            lineEdit.setReadOnly(getPointer(),val);
        }
    }

    public int getCursorPosition() {
        if (getPointer() > 0) {
            return lineEdit.cursorPosition(getPointer());
        }
        return 0;
    }

    public void setCursorPosition(int val) {
        if (getPointer() > 0) {
            lineEdit.setCursorPosition(getPointer(),val);
        }
    }

    public int cursorPositionAt(int x,int y) {
        if (getPointer() > 0) {
            return lineEdit.cursorPositionAt(getPointer(),x,y);
        }
        return 0;
    }

    public void setAlignment(Alignment alignment) {
        if (getPointer() > 0) {
            lineEdit.setAlignment(getPointer(),alignment.getFlagValue());
        }
    }

    public Alignment getAlignment() {
        if (getPointer() > 0) {
            long val = lineEdit.alignment(getPointer());
            return Alignment.valueOf(val);
        }
        return null;
    }

    public void cursorForward(boolean mark, int steps) {
        if (getPointer() > 0) {
            lineEdit.cursorForward(getPointer(),mark,steps);
        }
    }

    public void cursorBackward(boolean mark, int steps) {
        if (getPointer() > 0) {
            lineEdit.cursorBackward(getPointer(),mark,steps);
        }
    }

    public void cursorWordForward(boolean mark) {
        if (getPointer() > 0) {
            lineEdit.cursorWordForward(getPointer(),mark);
        }
    }

    public void cursorWordBackward(boolean mark) {
        if (getPointer() > 0) {
            lineEdit.cursorWordBackward(getPointer(),mark);
        }
    }

    public void backspace() {
        if (getPointer() > 0) {
            lineEdit.backspace(getPointer());
        }
    }

    public void del() {
        if (getPointer() > 0) {
            lineEdit.del(getPointer());
        }
    }

    public void home(boolean mark) {
        if (getPointer() > 0) {
            lineEdit.home(getPointer(),mark);
        }
    }

    public void end(boolean mark) {
        if (getPointer() > 0) {
            lineEdit.end(getPointer(),mark);
        }
    }

    public boolean isModified(){
        if (getPointer() > 0) {
            return lineEdit.isModified(getPointer());
        }
        return false;
    }

    public void setModified(boolean val) {
        if (getPointer() > 0) {
            lineEdit.setModified(getPointer(),val);
        }
    }

    public void setSelection(int x, int y) {
        if (getPointer() > 0) {
            lineEdit.setSelection(getPointer(),x,y);
        }
    }

    public boolean hasSelectedText() {
        if (getPointer() > 0) {
            return lineEdit.hasSelectedText(getPointer());
        }
        return false;
    }

    public String getSelectedText() {
        if (getPointer() > 0) {
            return lineEdit.selectedText(getPointer());
        }
        return "";
    }

    public int getSelectionStart() {
        if (getPointer() > 0) {
            return lineEdit.selectionStart(getPointer());
        }
        return 0;
    }

    public int getSelectionEnd() {
        if (getPointer() > 0) {
            return lineEdit.selectionEnd(getPointer());
        }
        return 0;
    }

    public int getSelectionLength() {
        if (getPointer() > 0) {
            return lineEdit.selectionLength(getPointer());
        }
        return 0;
    }

    public boolean isUndoAvailable() {
        if (getPointer() > 0) {
            return lineEdit.isUndoAvailable(getPointer());
        }
        return false;
    }

    public boolean isRedoAvailable() {
        if (getPointer() > 0) {
            return lineEdit.isRedoAvailable(getPointer());
        }
        return false;
    }

    public void setDragEnabled(boolean b) {
        if (getPointer() > 0) {
            lineEdit.setDragEnabled(getPointer(),b);
        }
    }

    public boolean isDragEnabled() {
        if (getPointer() > 0){
            return lineEdit.dragEnabled(getPointer());
        }
        return false;
    }

    public void setTextMargins(int left, int top, int right, int bottom) {
        if (getPointer() > 0) {
            lineEdit.setTextMargins(getPointer(),left,top,right,bottom);
        }
    }

    public Margins getTextMargins() {
        if (getPointer() > 0) {
            return lineEdit.textMargins(getPointer());
        }
        return null;
    }

    public void setText(String text){
        if (getPointer() > 0) {
            lineEdit.setText(getPointer(),text);
        }
    }

    public void clear() {
        if (getPointer() > 0) {
            lineEdit.clear(getPointer());
        }
    }

    public void selectAll() {
        if (getPointer() > 0) {
            lineEdit.selectAll(getPointer());
        }
    }

    public void undo(){
        if (getPointer() > 0) {
            lineEdit.undo(getPointer());
        }
    }

    public void redo() {
        if (getPointer() > 0) {
            lineEdit.redo(getPointer());
        }
    }

    public void cut() {
        if (getPointer() > 0) {
            lineEdit.cut(getPointer());
        }
    }

    public void copy() {
        if (getPointer() > 0) {
            lineEdit.copy(getPointer());
        }
    }

    public void paste() {
        if (getPointer() > 0) {
            lineEdit.paste(getPointer());
        }
    }


    @Override
    public long getPointer() {
        return lineEdit.address();
    }
}
