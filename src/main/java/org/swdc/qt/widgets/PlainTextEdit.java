package org.swdc.qt.widgets;

import org.swdc.qt.beans.InputMethodQuery;
import org.swdc.qt.internal.widgets.SPlainTextEdit;
import org.swdc.qt.widgets.action.Menu;
import org.swdc.qt.widgets.pane.AbstractScrollArea;
import org.swdc.qt.widgets.pane.Widget;
import org.swdc.qt.widgets.text.*;

import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Objects;
import java.util.stream.Collectors;

public class PlainTextEdit extends AbstractScrollArea {

    private SPlainTextEdit plainTextEdit = new SPlainTextEdit();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = plainTextEdit.create();
        if (pointer <= 0) {
            throw new Exception("can not allocate a plain-text-edit, invalid pointer");
        }
        plainTextEdit.address(pointer);
    }

    public <T extends Widget> void allocate(T parent, String text) throws Exception {
        if (accessible()) {
            return;
        }
        if (!accessibleParam(parent,text)) {
            throw new Exception("can not allocate a plain-text-edit, invalid parameter");
        }
        long pointer = plainTextEdit.create(parent.getPointer(),text);
        if (pointer <= 0) {
            throw new Exception("can not allocate a plain-text-edit, invalid pointer");
        }
        plainTextEdit.address(pointer);
    }

    @Override
    public void dispose() {
        if (accessible()) {
            plainTextEdit.dispose(getPointer());
            plainTextEdit.cleanAddress();
        }
    }

    @Override
    public long getPointer() {
        return plainTextEdit.address();
    }

    public void setDocument(TextDocument document) {
        if (accessible(document)) {
            plainTextEdit.setDocument(getPointer(),document.getPointer());
        }
    }

    public TextDocument getDocument() {
        if (accessible()) {
            long pointer = plainTextEdit.document(getPointer());
            if (pointer > 0) {
                return TextDocument.asTextDocument(pointer);
            }
        }
        return null;
    }

    public int getBlockCount(){
        if (accessible()) {
            return plainTextEdit.blockCount(getPointer());
        }
        return 0;
    }

    public void ensureCursorVisible() {
        if (accessible()) {
            plainTextEdit.ensureCursorVisible(getPointer());
        }
    }

    public void setBackgroundVisible(boolean visible){
        if (accessible()) {
            plainTextEdit.setBackgroundVisible(getPointer(),visible);
        }
    }
    
    public boolean isBackgroundVisible() {
        if (accessible()) {
            return plainTextEdit.backgroundVisible(getPointer());
        }
        return false;
    }

    public void setCenterOnScroll(boolean enabled) {
        if (accessible()) {
            plainTextEdit.setCenterOnScroll(getPointer(),enabled);
        }
    }
    
    public boolean isCenterOnScroll() {
        if (accessible()) {
            return plainTextEdit.centerOnScroll(getPointer());
        }
        return false;
    }

    public TextEditLineWrapMode getLineWrapMode() {
        if (accessible()) {
            int val = plainTextEdit.lineWrapMode(getPointer());
            return TextEditLineWrapMode.valueOf(val);
        }
        return null;
    }

    public void setLineWrapMode(TextEditLineWrapMode mode) {
        if (accessible(mode)) {
            plainTextEdit.setLineWrapMode(getPointer(),mode.getVal());
        }
    }

    public void setMaximumBlockCount(int maximum) {
        if (accessible()) {
            plainTextEdit.setMaximumBlockCount(getPointer(),maximum);
        }
    }
    
    public int  getMaximumBlockCount() {
        if (accessible()) {
            return plainTextEdit.maximumBlockCount(getPointer());
        }
        return 0;
    }

    public int getCursorWidth() {
        if (accessible()) {
            return plainTextEdit.cursorWidth(getPointer());
        }
        return 0;
    }

    public void setCursorWidth(int width) {
        if (accessible()) {
            plainTextEdit.setCursorWidth(getPointer(),width);
        }
    }
    
    public void setPlaceholderText(String placeholderText) {
        if (accessible(placeholderText)) {
            plainTextEdit.setPlaceholderText(getPointer(),placeholderText);
        }
    }

    public String getPlaceholderText() {
        if (accessible()) {
            return plainTextEdit.placeholderText(getPointer());
        }
        return null;
    }

    public void setTextCursor(TextCursor cursor) {
        if (accessible(cursor)) {
            plainTextEdit.setTextCursor(getPointer(),cursor.getPointer());
        }
    }

    public TextCursor getTextCursor() {
        if (accessible()) {
            long pointer = plainTextEdit.textCursor(getPointer());
            if (pointer > 0) {
                return TextCursor.asTextCursor(pointer);
            }
        }
        return null;
    }

    public boolean isReadOnly() {
        if (accessible()) {
            return plainTextEdit.isReadOnly(getPointer());
        }
        return false;
    }

    public void setReadOnly(boolean ro) {
        if (accessible()) {
            plainTextEdit.setReadOnly(getPointer(),ro);
        }
    }


    public void setTextInteractionFlags(TextInteractionFlags...flags) {
        if (accessible((Object)flags)) {
            int val = Arrays.stream(flags)
                    .filter(Objects::nonNull)
                    .mapToInt(TextInteractionFlags::getVal)
                    .reduce((a,b)->a|b)
                    .orElse(0);
            plainTextEdit.setTextInteractionFlags(getPointer(),val);
        }
    }

    public void mergeCurrentCharFormat(TextCharFormat charFormat) {
        if (accessible(charFormat)) {
            plainTextEdit.mergeCurrentCharFormat(getPointer(),charFormat.getPointer());
        }
    }

    public void setCurrentCharFormat(TextCharFormat format) {
        if (accessible(format)) {
            plainTextEdit.setCurrentCharFormat(getPointer(),format.getPointer());
        }
    }

    public TextCharFormat currentCharFormat() {
        if (accessible()) {
            long pointer = plainTextEdit.currentCharFormat(getPointer());
            if (pointer > 0) {
                return TextCharFormat.asTextCharFormat(pointer);
            }
        }
        return null;
    }

    public boolean isTabChangesFocus() {
        if (accessible()) {
            return plainTextEdit.tabChangesFocus(getPointer());
        }
        return false;
    }

    public void setTabChangesFocus(boolean b) {
        if (accessible()) {
            plainTextEdit.setTabChangesFocus(getPointer(),b);
        }
    }

    public void setDocumentTitle(String title) {
        if(accessible(title)) {
            plainTextEdit.setDocumentTitle(getPointer(),title);
        }
    }

    public String getDocumentTitle() {
        if (accessible()) {
            return plainTextEdit.documentTitle(getPointer());
        }
        return null;
    }


    public boolean isUndoRedoEnabled() {
        if (accessible()) {
            return plainTextEdit.isUndoRedoEnabled(getPointer());
        }
        return false;
    }

    public void setUndoRedoEnabled(boolean enable) {
        if (accessible()) {
            plainTextEdit.setUndoRedoEnabled(getPointer(),enable);
        }
    }

    public boolean find(String exp, TextDocumentFindFlags...findFlags) {
        if (accessible(exp,findFlags)) {
            int val = Arrays.stream(findFlags)
                    .filter(Objects::nonNull)
                    .mapToInt(TextDocumentFindFlags::getVal)
                    .reduce((a, b) -> a|b)
                    .orElse(0);

            return plainTextEdit.find(getPointer(),exp,val);
        }
        return false;
    }

    public boolean findRegexp(RegExp regExp , TextDocumentFindFlags ...findFlags) {
        if (accessible(regExp,findFlags)) {

            int val = Arrays.stream(findFlags)
                    .filter(Objects::nonNull)
                    .mapToInt(TextDocumentFindFlags::getVal)
                    .reduce((a, b) -> a|b)
                    .orElse(0);

            return plainTextEdit.findRegExp(getPointer(),regExp.getPointer(),val);
        }
        return false;
    }

    public boolean findRegularExpression(RegularExpression exp,TextDocumentFindFlags ...findFlags) {
        if (accessible(exp,findFlags)) {
            int val = Arrays.stream(findFlags)
                    .filter(Objects::nonNull)
                    .mapToInt(TextDocumentFindFlags::getVal)
                    .reduce((a, b) -> a|b)
                    .orElse(0);

            return plainTextEdit.findRegularExpression(getPointer(),exp.getPointer(),val);
        }
        return false;
    }

    public Menu createStandardContextMenu() {
        if (accessible()) {
            long pointer = plainTextEdit.createStandardContextMenu(getPointer());
            if (pointer > 0) {
                return Menu.asMenu(pointer);
            }
        }
        return null;
    }

    public Menu createStandardContextMenu(Point position) {
        if (accessible(position)) {
            long pointer = plainTextEdit.createStandardContextMenu(getPointer(),position.getPointer());
            if (pointer > 0) {
                return Menu.asMenu(pointer);
            }
        }
        return null;
    }

    public TextOptionWrapMode getWordWrapMode() {
        if (accessible()) {
            int mode = plainTextEdit.wordWrapMode(getPointer());
            return TextOptionWrapMode.valueOf(mode);
        }
        return null;
    }

    public void setWordWrapMode(TextOptionWrapMode mode) {
        if (accessible(mode)) {
            plainTextEdit.setWordWrapMode(getPointer(),mode.getVal());
        }
    }

    public Variant loadResource(TextDocumentResource type,String name) {
        if (accessible(type,name)) {
            long pointer = plainTextEdit.loadResource(getPointer(),type.getVal(),name);
            if (pointer > 0) {
                return Variant.asVariant(pointer);
            }
        }
        return null;
    }

    public TextCursor cursorForPosition(Point pos) {
        if (accessible(pos)) {
            long pointer = plainTextEdit.cursorForPosition(getPointer(),pos.getPointer());
            if (pointer > 0) {
                return TextCursor.asTextCursor(pointer);
            }
        }
        return null;
    }

    public Rect cursorRect(TextCursor cursor) {
        if (accessible(cursor)) {
            long pointer = plainTextEdit.cursorRect(getPointer(),cursor.getPointer());
            if (pointer > 0) {
                return Rect.asRect(pointer);
            }
        }
        return null;
    }

    public Rect cursorRect() {
        if (accessible()) {
            long pointer = plainTextEdit.cursorRect(getPointer());
            if (pointer > 0) {
                return Rect.asRect(pointer);
            }
        }
        return null;
    }

    public boolean isOverwriteMode() {
        if (accessible()) {
            return plainTextEdit.overwriteMode(getPointer());
        }
        return false;
    }

    public void setOverwriteMode(boolean overwrite) {
        if (accessible()) {
            plainTextEdit.setOverwriteMode(getPointer(),overwrite);
        }
    }

    public double getTabStopDistance() {
        if (accessible()) {
            return plainTextEdit.tabStopDistance(getPointer());
        }
        return 0;
    }

    public void setTabStopDistance(double distance) {
        if (accessible() ) {
            plainTextEdit.setTabStopDistance(getPointer(),distance);
        }
    }

    public void setExtraSelections(List<TextEditExtraSelection> selections) {
        if (accessible(selections)) {
            plainTextEdit.setExtraSelections(getPointer(),selections.stream()
                    .filter(Objects::nonNull)
                    .mapToLong(TextEditExtraSelection::getPointer)
                    .filter(l->l > 0)
                    .toArray());
        }
    }

    public List<TextEditExtraSelection> getExtraSelections() {
        if (accessible()) {
            return Arrays.stream(plainTextEdit.extraSelections(getPointer()))
                    .filter(p -> p > 0)
                    .mapToObj(TextEditExtraSelection::asTextEditExtraSelection)
                    .collect(Collectors.toList());
        }
        return Collections.emptyList();
    }

    public void moveCursor(TextCursorMoveOperation operation,TextCursorMoveMode mode) {
        if (accessible(operation,mode)) {
            plainTextEdit.moveCursor(getPointer(),operation.getVal(),mode.getVal());
        }
    }

    public boolean canPaste() {
        if (accessible()) {
            return plainTextEdit.canPaste(getPointer());
        }
        return false;
    }

    public Variant inputMethodQuery(InputMethodQuery property) {
        if (accessible(property)) {
            long pointer = plainTextEdit.inputMethodQuery(getPointer(),property.getVal());
            if (pointer > 0) {
                return Variant.asVariant(pointer);
            }
        }
        return null;
    }

    public Variant inputMethodQuery(InputMethodQuery query, Variant argumentVariant) {
        if (accessible(argumentVariant,query)) {
            long pointer = plainTextEdit.inputMethodQuery(getPointer(),query.getVal(),argumentVariant.getPointer());
            if (pointer > 0) {
                return Variant.asVariant(pointer);
            }
        }
        return null;
    }

    public void cut() {
        if (accessible()) {
            plainTextEdit.cut(getPointer());
        }
    }

    public void copy() {
        if (accessible()) {
            plainTextEdit.copy(getPointer());
        }
    }

    public void paste() {
        if (accessible()) {
            plainTextEdit.paste(getPointer());
        }
    }

    public void undo() {
        if (accessible()) {
            plainTextEdit.undo(getPointer());
        }
    }

    public void redo() {
        if (accessible()) {
            plainTextEdit.redo(getPointer());
        }
    }

    public void clear() {
        if (accessible()) {
            plainTextEdit.clear(getPointer());
        }
    }

    public void selectAll() {
        if (accessible()) {
            plainTextEdit.selectAll(getPointer());
        }
    }

    public void insertPlainText(String text) {
        if (accessible(text)) {
            plainTextEdit.insertPlainText(getPointer(),text);
        }
    }

    public void appendPlainText(String text) {
        if (accessible(text)) {
            plainTextEdit.appendPlainText(getPointer(),text);
        }
    }

    public void appendHtml(String text) {
        if (accessible(text)) {
            plainTextEdit.appendHtml(getPointer(),text);
        }
    }

    public void zoomIn(int range) {
        if (accessible()) {
            plainTextEdit.zoomIn(getPointer(),range);
        }
    }

    public void centerCursor() {
        if (accessible()) {
            plainTextEdit.centerCursor(getPointer());
        }
    }

    public void zoomOut(int range) {
        if (accessible()) {
            plainTextEdit.zoomOut(getPointer(),range);
        }
    }

}
