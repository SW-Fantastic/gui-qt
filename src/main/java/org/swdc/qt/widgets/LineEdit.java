package org.swdc.qt.widgets;

import org.swdc.qt.beans.Alignment;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.widgets.SLineEdit;
import org.swdc.qt.listeners.PaintListener;
import org.swdc.qt.listeners.WindowListener;
import org.swdc.qt.widgets.pane.Widget;

public class LineEdit extends Widget {

    private SLineEdit lineEdit = new SLineEdit();

    @Override
    public WindowListener getWindowListener() {
        return lineEdit.getWindowListener();
    }

    @Override
    public void setWindowListener(WindowListener listener) {
        lineEdit.setWindowListener(listener);
    }

    @Override
    public PaintListener getPaintListener() {
        return lineEdit.getPaintListener();
    }

    @Override
    public void setPaintListener(PaintListener paintListener) {
        lineEdit.setPaintListener(paintListener);
    }

    @Override
    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = lineEdit.create(0L);
        if (pointer <= 0) {
            throw new Exception("failed to create line-edit");
        }
        lineEdit.address(pointer);
        MemoryHolder.allocated(this);
    }

    public <T extends Widget> void allocate(T parent) throws Exception {
        if (accessible()) {
            return;
        }
        if (parent.getPointer() <= 0) {
            throw new Exception("invalid parent widget");
        }
        long pointer = lineEdit.create(0L);
        if (pointer <= 0) {
            throw new Exception("failed to create line-edit");
        }
        lineEdit.address(pointer);
    }

    public String getText() {
        if (accessible()) {
            return lineEdit.text(getPointer());
        }
        return "";
    }

    public String getDisplayText(){
        if (accessible()) {
            return lineEdit.displayText(getPointer());
        }
        return "";
    }

    public String getPlaceholderText() {
        if (accessible()) {
            return lineEdit.placeholderText(getPointer());
        }
        return "";
    }

    public void setPlaceholderText(String text) {
        if (accessible(text)) {
            lineEdit.setPlaceholderText(getPointer(),text);
        }
    }

    public int getMaxLength() {
        if (accessible()) {
            return lineEdit.maxLength(getPointer());
        }
        return 0;
    }

    public void setMaxLength(int val) {
        if (accessible()){
            lineEdit.setMaxLength(getPointer(),val);
        }
    }

    public void setFrame(boolean val) {
        if (accessible()) {
            lineEdit.setFrame(getPointer(),val);
        }
    }

    public boolean hasFrame() {
        if (accessible()) {
            return lineEdit.hasFrame(getPointer());
        }
        return false;
    }

    public void setClearButtonEnabled(boolean enable) {
        if (accessible()) {
            lineEdit.setClearButtonEnabled(getPointer(),enable);
        }
    }

    public boolean isClearButtonEnabled() {
        if (accessible()) {
            return lineEdit.isClearButtonEnabled(getPointer());
        }
        return false;
    }

    public boolean isReadOnly() {
        if (accessible()) {
            return lineEdit.isReadOnly(getPointer());
        }
        return false;
    }

    public void setReadOnly(boolean val) {
        if (accessible()) {
            lineEdit.setReadOnly(getPointer(),val);
        }
    }

    public int getCursorPosition() {
        if (accessible()) {
            return lineEdit.cursorPosition(getPointer());
        }
        return 0;
    }

    public void setCursorPosition(int val) {
        if (accessible()) {
            lineEdit.setCursorPosition(getPointer(),val);
        }
    }

    public int cursorPositionAt(int x,int y) {
        if (accessible()) {
            return lineEdit.cursorPositionAt(getPointer(),x,y);
        }
        return 0;
    }

    public void setAlignment(Alignment alignment) {
        if (accessible(alignment)) {
            lineEdit.setAlignment(getPointer(),alignment.getFlagValue());
        }
    }

    public Alignment getAlignment() {
        if (accessible()) {
            long val = lineEdit.alignment(getPointer());
            return Alignment.valueOf(val);
        }
        return null;
    }

    public void cursorForward(boolean mark, int steps) {
        if (accessible()) {
            lineEdit.cursorForward(getPointer(),mark,steps);
        }
    }

    public void cursorBackward(boolean mark, int steps) {
        if (accessible()) {
            lineEdit.cursorBackward(getPointer(),mark,steps);
        }
    }

    public void cursorWordForward(boolean mark) {
        if (accessible()) {
            lineEdit.cursorWordForward(getPointer(),mark);
        }
    }

    public void cursorWordBackward(boolean mark) {
        if (accessible()) {
            lineEdit.cursorWordBackward(getPointer(),mark);
        }
    }

    public void backspace() {
        if (accessible()) {
            lineEdit.backspace(getPointer());
        }
    }

    public void del() {
        if (accessible()) {
            lineEdit.del(getPointer());
        }
    }

    public void home(boolean mark) {
        if (accessible()) {
            lineEdit.home(getPointer(),mark);
        }
    }

    public void end(boolean mark) {
        if (accessible()) {
            lineEdit.end(getPointer(),mark);
        }
    }

    public boolean isModified(){
        if (accessible()) {
            return lineEdit.isModified(getPointer());
        }
        return false;
    }

    public void setModified(boolean val) {
        if (accessible()) {
            lineEdit.setModified(getPointer(),val);
        }
    }

    public void setSelection(int x, int y) {
        if (accessible()) {
            lineEdit.setSelection(getPointer(),x,y);
        }
    }

    public boolean hasSelectedText() {
        if (accessible()) {
            return lineEdit.hasSelectedText(getPointer());
        }
        return false;
    }

    public String getSelectedText() {
        if (accessible()) {
            return lineEdit.selectedText(getPointer());
        }
        return "";
    }

    public int getSelectionStart() {
        if (accessible()) {
            return lineEdit.selectionStart(getPointer());
        }
        return 0;
    }

    public int getSelectionEnd() {
        if (accessible()) {
            return lineEdit.selectionEnd(getPointer());
        }
        return 0;
    }

    public int getSelectionLength() {
        if (accessible()) {
            return lineEdit.selectionLength(getPointer());
        }
        return 0;
    }

    public boolean isUndoAvailable() {
        if (accessible()) {
            return lineEdit.isUndoAvailable(getPointer());
        }
        return false;
    }

    public boolean isRedoAvailable() {
        if (accessible()) {
            return lineEdit.isRedoAvailable(getPointer());
        }
        return false;
    }

    public void setDragEnabled(boolean b) {
        if (accessible()) {
            lineEdit.setDragEnabled(getPointer(),b);
        }
    }

    public boolean isDragEnabled() {
        if (accessible()){
            return lineEdit.dragEnabled(getPointer());
        }
        return false;
    }

    public void setTextMargins(int left, int top, int right, int bottom) {
        if (accessible()) {
            lineEdit.setTextMargins(getPointer(),left,top,right,bottom);
        }
    }

    public Margins getTextMargins() {
        if (accessible()) {
            long pointer = lineEdit.textMargins(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Margins.asMargins(pointer);
        }
        return null;
    }

    public void setText(String text){
        if (accessible(text)) {
            lineEdit.setText(getPointer(),text);
        }
    }

    public void clear() {
        if (accessible()) {
            lineEdit.clear(getPointer());
        }
    }

    public void selectAll() {
        if (accessible()) {
            lineEdit.selectAll(getPointer());
        }
    }

    public void undo(){
        if (accessible()) {
            lineEdit.undo(getPointer());
        }
    }

    public void redo() {
        if (accessible()) {
            lineEdit.redo(getPointer());
        }
    }

    public void cut() {
        if (accessible()) {
            lineEdit.cut(getPointer());
        }
    }

    public void copy() {
        if (accessible()) {
            lineEdit.copy(getPointer());
        }
    }

    public void paste() {
        if (accessible()) {
            lineEdit.paste(getPointer());
        }
    }

    public void setEchoMode (EditEchoMode echoMode) {
        if (accessible()) {
            lineEdit.setEchoMode(getPointer(),echoMode.getVal());
        }
    }

    public EditEchoMode getEchoMode(){
        if (accessible()) {
            int mode = lineEdit.echoMode(getPointer());
            return EditEchoMode.valueOf(mode);
        }
        return null;
    }

    public static LineEdit asLineEdit(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        LineEdit edit = new LineEdit();
        edit.lineEdit.address(pointer);
        return edit;
    }

    @Override
    public long getPointer() {
        return lineEdit.address();
    }
}
