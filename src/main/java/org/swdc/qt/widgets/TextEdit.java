package org.swdc.qt.widgets;

import org.swdc.qt.beans.*;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.widgets.STextEdit;
import org.swdc.qt.widgets.action.Menu;
import org.swdc.qt.widgets.graphics.Color;
import org.swdc.qt.widgets.graphics.Font;
import org.swdc.qt.widgets.pane.AbstractScrollArea;
import org.swdc.qt.widgets.text.*;

import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Objects;
import java.util.function.Consumer;
import java.util.stream.Collectors;

public class TextEdit extends AbstractScrollArea {

    private STextEdit textEdit = new STextEdit();

    @Override
    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = textEdit.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create a text-edit, invalid pointer");
        }
        textEdit.address(pointer);
        MemoryHolder.allocated(this);
    }

    @Override
    public Consumer<Long> disposer() {
        return STextEdit.CLEANER;
    }

    @Override
    public void dispose() {
        if (accessible()) {
            textEdit.dispose(getPointer());
            textEdit.cleanAddress();
        }
    }

    public void setDocument(TextDocument document) {
        if (accessible(document)) {
            textEdit.setDocument(getPointer(),document.getPointer());
        }
    }

    public TextDocument getDocument() {
        if (accessible()) {
            long pointer = textEdit.document(getPointer());
            if (pointer > 0) {
                return TextDocument.asTextDocument(pointer);
            }
        }
        return null;
    }

    public void setPlaceholderText(String placeholderText) {
        if (accessible(placeholderText)) {
            textEdit.setPlaceholderText(getPointer(),placeholderText);
        }
    }

    public String getPlaceholderText() {
        if (accessible()) {
            return textEdit.placeholderText(getPointer());
        }
        return null;
    }

    public void setTextCursor(TextCursor cursor) {
        if (accessible(cursor)) {
            textEdit.setTextCursor(getPointer(),cursor.getPointer());
        }
    }

    public TextCursor getTextCursor() {
        if (accessible()) {
            long pointer = textEdit.textCursor(getPointer());
            if (pointer > 0) {
                return TextCursor.asTextCursor(pointer);
            }
        }
        return null;
    }

    public boolean isReadOnly() {
        if (accessible()) {
            return textEdit.isReadOnly(getPointer());
        }
        return false;
    }

    public void setReadOnly(boolean ro) {
        if (accessible()) {
            textEdit.setReadOnly(getPointer(),ro);
        }
    }

    public void setTextInteractionFlags(TextInteractionFlags ...flags) {
        if (accessible((Object) flags)) {
            int val = Arrays.stream(flags)
                    .filter(Objects::nonNull)
                    .mapToInt(TextInteractionFlags::getVal)
                    .reduce((a,b)->a|b)
                    .orElse(0);
            textEdit.setTextInteractionFlags(getPointer(),val);
        }
    }

    public double getFontPointSize() {
        if (accessible()) {
            return textEdit.fontPointSize(getPointer());
        }
        return 0;
    }

    public String getFontFamily() {
        if (accessible()) {
            return textEdit.fontFamily(getPointer());
        }
        return null;
    }

    public int getFontWeight() {
        if (getPointer() >0) {
            return textEdit.fontWeight(getPointer());
        }
        return 0;
    }

    public boolean isFontUnderline() {
        if (accessible()) {
            return textEdit.fontUnderline(getPointer());
        }
        return false;
    }

    public boolean isFontItalic() {
        if (accessible()) {
            return textEdit.fontItalic(getPointer());
        }
        return false;
    }

    public Color getTextColor() {
        if (accessible()) {
            long color = textEdit.textColor(getPointer());
            Color result = new Color();
            result.allocate(color);
            return result;
        }
        return null;
    }

    public Color getTextBackgroundColor() {
        if (accessible()) {
            long color = textEdit.textBackgroundColor(getPointer());
            Color result = new Color();
            result.allocate(color);
            return result;
        }
        return null;
    }

    public Font currentFont() {
        if (accessible()) {
            long pointer = textEdit.currentFont(getPointer());
            if (pointer > 0) {
                return Font.asFont(pointer);
            }
        }
        return null;
    }

    public Alignment getAlignment() {
        if (accessible()) {
            long align = textEdit.alignment(getPointer());
            return Alignment.valueOf(align);
        }
        return null;
    }

    public void mergeCurrentCharFormat(TextCharFormat charFormat) {
        if (accessible(charFormat)) {
            textEdit.mergeCurrentCharFormat(getPointer(),charFormat.getPointer());
        }
    }

    public void setCurrentCharFormat(TextCharFormat format) {
        if (accessible(format)) {
           textEdit.setCurrentCharFormat(getPointer(),format.getPointer());
        }
    }

    public TextCharFormat currentCharFormat() {
        if (accessible()) {
            long pointer = textEdit.currentCharFormat(getPointer());
            if (pointer > 0) {
                return TextCharFormat.asTextCharFormat(pointer);
            }
        }
        return null;
    }

    public TextEditAutoFormatting getAutoFormatting() {
        if (accessible()) {
            int val = textEdit.autoFormatting(getPointer());
            return TextEditAutoFormatting.valueOf(val);
        }
        return null;
    }

    public void setAutoFormatting(TextEditAutoFormatting features) {
        if (accessible(features)) {
            textEdit.setAutoFormatting(getPointer(),features.getVal());
        }
    }

    public boolean isTabChangesFocus() {
        if (accessible()) {
            return textEdit.tabChangesFocus(getPointer());
        }
        return false;
    }

    public void setTabChangesFocus(boolean b) {
        if (accessible()) {
            textEdit.setTabChangesFocus(getPointer(),b);
        }
    }

    public void setDocumentTitle(String title) {
        if(accessible(title)) {
            textEdit.setDocumentTitle(getPointer(),title);
        }
    }

    public String getDocumentTitle() {
        if (accessible()) {
            return textEdit.documentTitle(getPointer());
        }
        return null;
    }

    public boolean isUndoRedoEnabled() {
        if (accessible()) {
            return textEdit.isUndoRedoEnabled(getPointer());
        }
        return false;
    }

    public void setUndoRedoEnabled(boolean enable) {
        if (accessible()) {
            textEdit.setUndoRedoEnabled(getPointer(),enable);
        }
    }

    public TextEditLineWrapMode getLineWrapMode() {
        if (accessible()) {
            int val = textEdit.lineWrapMode(getPointer());
            return TextEditLineWrapMode.valueOf(val);
        }
        return null;
    }

    public void setLineWrapMode(TextEditLineWrapMode mode) {
        if (accessible(mode)) {
            textEdit.setLineWrapMode(getPointer(),mode.getVal());
        }
    }

    public int getLineWrapColumnOrWidth(){
        if (accessible()) {
            return textEdit.lineWrapColumnOrWidth(getPointer());
        }
        return 0;
    }

    public void setLineWrapColumnOrWidth(int w) {
        if (accessible()) {
            textEdit.setLineWrapColumnOrWidth(getPointer(),w);
        }
    }

    public TextOptionWrapMode getWordWrapMode() {
        if (accessible()) {
            int mode = textEdit.wordWrapMode(getPointer());
            return TextOptionWrapMode.valueOf(mode);
        }
        return null;
    }

    public void setWordWrapMode(TextOptionWrapMode mode) {
        if (accessible(mode)) {
            textEdit.setWordWrapMode(getPointer(),mode.getVal());
        }
    }

    public boolean find(String exp,TextDocumentFindFlags ...findFlags) {
        if (accessible(findFlags)) {
            int val = Arrays.stream(findFlags)
                    .filter(Objects::nonNull)
                    .mapToInt(TextDocumentFindFlags::getVal)
                    .reduce((a, b) -> a|b)
                    .orElse(0);

            return textEdit.find(getPointer(),exp,val);
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

            return textEdit.findRegexp(getPointer(),regExp.getPointer(),val);
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

            return textEdit.findRegularExpression(getPointer(),exp.getPointer(),val);
        }
        return false;
    }

    public String toPlainText() {
        if (accessible()) {
            return textEdit.toPlainText(getPointer());
        }
        return null;
    }

    public String toHtml() {
        if (accessible()) {
            return textEdit.toHtml(getPointer());
        }
        return null;
    }

    public String toMarkdown(TextDocumentMarkdownFuture markdownFeatures) {
        if (accessible(markdownFeatures)) {
            return textEdit.toMarkdown(getPointer(),markdownFeatures.getVal());
        }
        return null;
    }

    public void ensureCursorVisible() {
        if (accessible()) {
            textEdit.ensureCursorVisible(getPointer());
        }
    }

    public Variant loadResource(TextDocumentResource type,String name) {
        if (accessible(type,name)) {
            long pointer = textEdit.loadResource(getPointer(),type.getVal(),name);
            if (pointer > 0) {
                return Variant.asVariant(pointer);
            }
        }
        return null;
    }

    public Menu createStandardContextMenu() {
        if (accessible()) {
            long pointer = textEdit.createStandardContextMenu(getPointer());
            if (pointer > 0) {
                return Menu.asMenu(pointer);
            }
        }
        return null;
    }

    public Menu createStandardContextMenu(Point position) {
        if (accessible(position)) {
            long pointer = textEdit.createStandardContextMenu(getPointer(),position.getPointer());
            if (pointer > 0) {
                return Menu.asMenu(pointer);
            }
        }
        return null;
    }

    public TextCursor cursorForPosition(Point pos) {
        if (accessible(pos)) {
            long pointer = textEdit.cursorForPosition(getPointer(),pos.getPointer());
            if (pointer > 0) {
                return TextCursor.asTextCursor(pointer);
            }
        }
        return null;
    }

    public Rect cursorRect(TextCursor cursor) {
        if (accessible(cursor)) {
            long pointer = textEdit.cursorRect(getPointer(),cursor.getPointer());
            if (pointer > 0) {
                return Rect.asRect(pointer);
            }
        }
        return null;
    }

    public Rect cursorRect() {
        if (accessible()) {
            long pointer = textEdit.cursorRect(getPointer());
            if (pointer > 0) {
                return Rect.asRect(pointer);
            }
        }
        return null;
    }

    public String anchorAt(Point pos) {
        if (accessible(pos)) {
            return textEdit.anchorAt(getPointer(),pos.getPointer());
        }
        return null;
    }

    public boolean isOverwriteMode() {
        if (accessible()) {
            return textEdit.overwriteMode(getPointer());
        }
        return false;
    }

    public void setOverwriteMode(boolean overwrite) {
        if (accessible()) {
            textEdit.setOverwriteMode(getPointer(),overwrite);
        }
    }

    public double getTabStopDistance() {
        if (accessible()) {
            return textEdit.tabStopDistance(getPointer());
        }
        return 0;
    }

    public void setTabStopDistance(double distance) {
        if (accessible() ) {
            textEdit.setTabStopDistance(getPointer(),distance);
        }
    }

    public int getCursorWidth() {
        if (accessible()) {
            return textEdit.cursorWidth(getPointer());
        }
        return 0;
    }

    public void setCursorWidth(int width) {
        if (accessible()) {
            textEdit.setCursorWidth(getPointer(),width);
        }
    }

    public boolean isAcceptRichText() {
        if (accessible()) {
            return textEdit.acceptRichText(getPointer());
        }
        return false;
    }

    public void setAcceptRichText(boolean accept) {
        if (accessible()) {
            textEdit.setAcceptRichText(getPointer(),accept);
        }
    }

    public void setExtraSelections(List<TextEditExtraSelection> selections) {
        if (accessible(selections)) {
            textEdit.setExtraSelections(getPointer(),selections.stream()
                    .filter(Objects::nonNull)
                    .mapToLong(TextEditExtraSelection::getPointer)
                    .filter(l->l > 0)
                    .toArray());
        }
    }

    public List<TextEditExtraSelection> getExtraSelections() {
        if (accessible()) {
            return Arrays.stream(textEdit.extraSelections(getPointer()))
                    .filter(p -> p > 0)
                    .mapToObj(TextEditExtraSelection::asTextEditExtraSelection)
                    .collect(Collectors.toList());
        }
        return Collections.emptyList();
    }

    public void moveCursor(TextCursorMoveOperation operation,TextCursorMoveMode mode) {
        if (accessible(operation,mode)) {
            textEdit.moveCursor(getPointer(),operation.getVal(),mode.getVal());
        }
    }

    public boolean canPaste() {
        if (accessible()) {
            return textEdit.canPaste(getPointer());
        }
        return false;
    }

    public Variant inputMethodQuery(InputMethodQuery property) {
        if (accessible(property)) {
            long pointer = textEdit.inputMethodQuery(getPointer(),property.getVal());
            if (pointer > 0) {
                return Variant.asVariant(pointer);
            }
        }
        return null;
    }

    public Variant inputMethodQuery(InputMethodQuery query, Variant argumentVariant) {
        if (accessible(query,argumentVariant)) {
            long pointer = textEdit.inputMethodQuery(getPointer(),query.getVal(),argumentVariant.getPointer());
            if (pointer > 0) {
                return Variant.asVariant(pointer);
            }
        }
        return null;
    }

    public void setFontPointSize(double s) {
        if (accessible()) {
            textEdit.setFontPointSize(getPointer(),s);
        }
    }

    public void setFontFamily(String fontFamily) {
        if (accessible(fontFamily)) {
            textEdit.setFontFamily(getPointer(),fontFamily);
        }
    }

    public void setFontWeight(int w) {
        if (accessible()) {
            textEdit.setFontWeight(getPointer(),w);
        }
    }

    public void setFontUnderline(boolean b) {
        if (accessible()) {
            textEdit.setFontUnderline(getPointer(),b);
        }
    }

    public void setFontItalic(boolean b) {
        if (accessible()) {
            textEdit.setFontItalic(getPointer(),b);
        }
    }

    public void setTextColor(Color c) {
        if (accessible(c)) {
            textEdit.setTextColor(getPointer(),c.getVal());
        }
    }

    public void setTextBackgroundColor(Color c) {
        if (accessible(c)) {
            textEdit.setTextBackgroundColor(getPointer(),c.getVal());
        }
    }

    public void setCurrentFont(Font f) {
        if (accessible(f)) {
            textEdit.setCurrentFont(getPointer(),f.getPointer());
        }
    }

    public void setAlignment(Alignment a) {
        if (accessible(a)) {
            textEdit.setAlignment(getPointer(),a.getFlagValue());
        }
    }

    public void setPlainText(String text) {
        if (accessible(text)) {
            textEdit.setPlainText(getPointer(),text);
        }
    }

    public void setHtml(String text) {
        if (accessible(text)) {
            textEdit.setHtml(getPointer(),text);
        }
    }

    public void setMarkdown(String markdown) {
        if (accessible(markdown)) {
            textEdit.setMarkdown(getPointer(),markdown);
        }
    }

    public void setText(String text) {
        if (accessible(text)) {
            textEdit.setText(getPointer(),text);
        }
    }

    public void cut() {
        if (accessible()) {
            textEdit.cut(getPointer());
        }
    }

    public void copy() {
        if (accessible()) {
            textEdit.copy(getPointer());
        }
    }

    public void paste() {
        if (accessible()) {
            textEdit.paste(getPointer());
        }
    }

    public void undo() {
        if (accessible()) {
            textEdit.undo(getPointer());
        }
    }

    public void redo() {
        if (accessible()) {
            textEdit.redo(getPointer());
        }
    }

    public void clear() {
        if (accessible()) {
            textEdit.clear(getPointer());
        }
    }

    public void selectAll() {
        if (accessible()) {
            textEdit.selectAll(getPointer());
        }
    }

    public void insertPlainText(String text) {
        if (accessible(text)) {
            textEdit.insertPlainText(getPointer(),text);
        }
    }

    public void insertHtml(String text) {
        if (accessible(text)) {
            textEdit.insertHtml(getPointer(),text);
        }
    }

    public void append(String text) {
        if (accessible(text)) {
            textEdit.append(getPointer(),text);
        }
    }

    public void scrollToAnchor(String name) {
        if (accessible(name)) {
            textEdit.scrollToAnchor(getPointer(),name);
        }
    }

    public void zoomIn(int range) {
        if (accessible()) {
            textEdit.zoomIn(getPointer(),range);
        }
    }

    public void zoomOut(int range) {
        if (accessible()) {
            textEdit.zoomOut(getPointer(),range);
        }
    }

    @Override
    public long getPointer() {
        return textEdit.address();
    }
}
