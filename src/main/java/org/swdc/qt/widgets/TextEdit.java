package org.swdc.qt.widgets;

import org.swdc.qt.beans.*;
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
import java.util.stream.Collectors;

public class TextEdit extends AbstractScrollArea {

    private STextEdit textEdit = new STextEdit();

    @Override
    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = textEdit.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create a text-edit, invalid pointer");
        }
        textEdit.address(pointer);
    }

    @Override
    public void dispose() {
        if (getPointer() > 0) {
            textEdit.dispose(getPointer());
        }
    }

    public void setDocument(TextDocument document) {
        if (getPointer() > 0 && document.getPointer() > 0) {
            textEdit.setDocument(getPointer(),document.getPointer());
        }
    }

    public TextDocument getDocument() {
        if (getPointer() > 0) {
            long pointer = textEdit.document(getPointer());
            if (pointer > 0) {
                return TextDocument.asTextDocument(pointer);
            }
        }
        return null;
    }

    public void setPlaceholderText(String placeholderText) {
        if (getPointer() > 0) {
            textEdit.setPlaceholderText(getPointer(),placeholderText);
        }
    }

    public String getPlaceholderText() {
        if (getPointer() > 0) {
            return textEdit.placeholderText(getPointer());
        }
        return null;
    }

    public void setTextCursor(TextCursor cursor) {
        if (getPointer() > 0 && cursor.getPointer() > 0) {
            textEdit.setTextCursor(getPointer(),cursor.getPointer());
        }
    }

    public TextCursor textCursor() {
        if (getPointer() > 0) {
            long pointer = textEdit.textCursor(getPointer());
            if (pointer > 0) {
                return TextCursor.asTextCursor(pointer);
            }
        }
        return null;
    }

    public boolean isReadOnly() {
        if (getPointer() > 0) {
            return textEdit.isReadOnly(getPointer());
        }
        return false;
    }

    public void setReadOnly(boolean ro) {
        if (getPointer() > 0) {
            textEdit.setReadOnly(getPointer(),ro);
        }
    }

    public void setTextInteractionFlags(TextInteractionFlags ...flags) {
        if (getPointer() > 0 && flags != null && flags.length > 0) {
            int val = Arrays.stream(flags)
                    .filter(Objects::nonNull)
                    .mapToInt(TextInteractionFlags::getVal)
                    .reduce((a,b)->a|b)
                    .orElse(0);
            textEdit.setTextInteractionFlags(getPointer(),val);
        }
    }

    public double getFontPointSize() {
        if (getPointer() > 0) {
            return textEdit.fontPointSize(getPointer());
        }
        return 0;
    }

    public String getFontFamily() {
        if (getPointer() > 0) {
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
        if (getPointer() > 0) {
            return textEdit.fontUnderline(getPointer());
        }
        return false;
    }

    public boolean isFontItalic() {
        if (getPointer() > 0) {
            return textEdit.fontItalic(getPointer());
        }
        return false;
    }

    public Color getTextColor() {
        if (getPointer() > 0) {
            long color = textEdit.textColor(getPointer());
            Color result = new Color();
            result.allocate(color);
            return result;
        }
        return null;
    }

    public Color getTextBackgroundColor() {
        if (getPointer() > 0) {
            long color = textEdit.textBackgroundColor(getPointer());
            Color result = new Color();
            result.allocate(color);
            return result;
        }
        return null;
    }

    public Font currentFont() {
        if (getPointer() > 0) {
            long pointer = textEdit.currentFont(getPointer());
            if (pointer > 0) {
                return Font.asFont(pointer);
            }
        }
        return null;
    }

    public Alignment getAlignment() {
        if (getPointer() > 0) {
            long align = textEdit.alignment(getPointer());
            return Alignment.valueOf(align);
        }
        return null;
    }

    public void mergeCurrentCharFormat(TextCharFormat charFormat) {
        if (getPointer() > 0 && charFormat.getPointer() > 0) {
            textEdit.mergeCurrentCharFormat(getPointer(),charFormat.getPointer());
        }
    }

    public void setCurrentCharFormat(TextCharFormat format) {
        if (getPointer() > 0 && format.getPointer() > 0) {
           textEdit.setCurrentCharFormat(getPointer(),format.getPointer());
        }
    }

    public TextCharFormat currentCharFormat() {
        if (getPointer() > 0) {
            long pointer = textEdit.currentCharFormat(getPointer());
            if (pointer > 0) {
                return TextCharFormat.asTextCharFormat(pointer);
            }
        }
        return null;
    }

    public TextEditAutoFormatting getAutoFormatting() {
        if (getPointer() > 0) {
            int val = textEdit.autoFormatting(getPointer());
            return TextEditAutoFormatting.valueOf(val);
        }
        return null;
    }

    public void setAutoFormatting(TextEditAutoFormatting features) {
        if (getPointer() > 0) {
            textEdit.setAutoFormatting(getPointer(),features.getVal());
        }
    }

    public boolean isTabChangesFocus() {
        if (getPointer() > 0) {
            return textEdit.tabChangesFocus(getPointer());
        }
        return false;
    }

    public void setTabChangesFocus(boolean b) {
        if (getPointer() > 0) {
            textEdit.setTabChangesFocus(getPointer(),b);
        }
    }

    public void setDocumentTitle(String title) {
        if(getPointer() > 0) {
            textEdit.setDocumentTitle(getPointer(),title);
        }
    }

    public String getDocumentTitle() {
        if (getPointer() > 0) {
            return textEdit.documentTitle(getPointer());
        }
        return null;
    }

    public boolean isUndoRedoEnabled() {
        if (getPointer() > 0) {
            return textEdit.isUndoRedoEnabled(getPointer());
        }
        return false;
    }

    public void setUndoRedoEnabled(boolean enable) {
        if (getPointer() > 0) {
            textEdit.setUndoRedoEnabled(getPointer(),enable);
        }
    }

    public TextEditLineWrapMode getLineWrapMode() {
        if (getPointer() > 0) {
            int val = textEdit.lineWrapMode(getPointer());
            return TextEditLineWrapMode.valueOf(val);
        }
        return null;
    }

    public void setLineWrapMode(TextEditLineWrapMode mode) {
        if (getPointer() > 0) {
            textEdit.setLineWrapMode(getPointer(),mode.getVal());
        }
    }

    public int getLineWrapColumnOrWidth(){
        if (getPointer() > 0) {
            return textEdit.lineWrapColumnOrWidth(getPointer());
        }
        return 0;
    }

    public void setLineWrapColumnOrWidth(int w) {
        if (getPointer() > 0) {
            textEdit.setLineWrapColumnOrWidth(getPointer(),w);
        }
    }

    public TextOptionWrapMode getWordWrapMode() {
        if (getPointer() > 0) {
            int mode = textEdit.wordWrapMode(getPointer());
            return TextOptionWrapMode.valueOf(mode);
        }
        return null;
    }

    public void setWordWrapMode(TextOptionWrapMode mode) {
        if (getPointer() > 0) {
            textEdit.setWordWrapMode(getPointer(),mode.getVal());
        }
    }

    public boolean find(String exp,TextDocumentFindFlags ...findFlags) {
        if (getPointer() > 0 && findFlags != null && findFlags.length > 0) {
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
        if (getPointer() > 0 && regExp != null && regExp.getPointer() > 0
                && findFlags != null && findFlags.length > 0) {

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
        if (getPointer() > 0 && exp != null && exp.getPointer() > 0
                && findFlags != null && findFlags.length > 0) {
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
        if (getPointer() > 0) {
            return textEdit.toPlainText(getPointer());
        }
        return null;
    }

    public String toHtml() {
        if (getPointer() > 0) {
            return textEdit.toHtml(getPointer());
        }
        return null;
    }

    public String toMarkdown(TextDocumentMarkdownFuture markdownFeatures) {
        if (getPointer() > 0) {
            return textEdit.toMarkdown(getPointer(),markdownFeatures.getVal());
        }
        return null;
    }

    public void ensureCursorVisible() {
        if (getPointer() > 0) {
            textEdit.ensureCursorVisible(getPointer());
        }
    }

    public Variant loadResource(TextDocumentResource type,String name) {
        if (getPointer() > 0 && type != null && name != null) {
            long pointer = textEdit.loadResource(getPointer(),type.getVal(),name);
            if (pointer > 0) {
                return Variant.asVariant(pointer);
            }
        }
        return null;
    }

    public Menu createStandardContextMenu() {
        if (getPointer() > 0) {
            long pointer = textEdit.createStandardContextMenu(getPointer());
            if (pointer > 0) {
                return Menu.asMenu(pointer);
            }
        }
        return null;
    }

    public Menu createStandardContextMenu(Point position) {
        if (getPointer() > 0 && position != null && position.getPointer() > 0) {
            long pointer = textEdit.createStandardContextMenu(getPointer(),position.getPointer());
            if (pointer > 0) {
                return Menu.asMenu(pointer);
            }
        }
        return null;
    }

    public TextCursor cursorForPosition(Point pos) {
        if (getPointer() > 0 && pos == null && pos.getPointer() > 0) {
            long pointer = textEdit.cursorForPosition(getPointer(),pos.getPointer());
            if (pointer > 0) {
                return TextCursor.asTextCursor(pointer);
            }
        }
        return null;
    }

    public Rect cursorRect(TextCursor cursor) {
        if (getPointer() > 0 && cursor != null && cursor.getPointer() > 0) {
            long pointer = textEdit.cursorRect(getPointer(),cursor.getPointer());
            if (pointer > 0) {
                return Rect.asRect(pointer);
            }
        }
        return null;
    }

    public Rect cursorRect() {
        if (getPointer() > 0) {
            long pointer = textEdit.cursorRect(getPointer());
            if (pointer > 0) {
                return Rect.asRect(pointer);
            }
        }
        return null;
    }

    public String anchorAt(Point pos) {
        if (getPointer() > 0 && pos != null && pos.getPointer() > 0) {
            return textEdit.anchorAt(getPointer(),pos.getPointer());
        }
        return null;
    }

    public boolean isOverwriteMode() {
        if (getPointer() > 0) {
            return textEdit.overwriteMode(getPointer());
        }
        return false;
    }

    public void setOverwriteMode(boolean overwrite) {
        if (getPointer() > 0) {
            textEdit.setOverwriteMode(getPointer(),overwrite);
        }
    }

    public double getTabStopDistance() {
        if (getPointer() > 0) {
            return textEdit.tabStopDistance(getPointer());
        }
        return 0;
    }

    public void setTabStopDistance(double distance) {
        if (getPointer() > 0 ) {
            textEdit.setTabStopDistance(getPointer(),distance);
        }
    }

    public int getCursorWidth() {
        if (getPointer() > 0) {
            return textEdit.cursorWidth(getPointer());
        }
        return 0;
    }

    public void setCursorWidth(int width) {
        if (getPointer() > 0) {
            textEdit.setCursorWidth(getPointer(),width);
        }
    }

    public boolean isAcceptRichText() {
        if (getPointer() > 0) {
            return textEdit.acceptRichText(getPointer());
        }
        return false;
    }

    public void setAcceptRichText(boolean accept) {
        if (getPointer() > 0) {
            textEdit.setAcceptRichText(getPointer(),accept);
        }
    }

    public void setExtraSelections(List<TextEditExtraSelection> selections) {
        if (getPointer() > 0 && selections != null) {
            textEdit.setExtraSelections(getPointer(),selections.stream()
                    .filter(Objects::nonNull)
                    .mapToLong(TextEditExtraSelection::getPointer)
                    .filter(l->l > 0)
                    .toArray());
        }
    }

    public List<TextEditExtraSelection> getExtraSelections() {
        if (getPointer() > 0) {
            return Arrays.stream(textEdit.extraSelections(getPointer()))
                    .filter(p -> p > 0)
                    .mapToObj(TextEditExtraSelection::asTextEditExtraSelection)
                    .collect(Collectors.toList());
        }
        return Collections.emptyList();
    }

    public void moveCursor(TextCursorMoveOperation operation,TextCursorMoveMode mode) {
        if (getPointer() > 0) {
            textEdit.moveCursor(getPointer(),operation.getVal(),mode.getVal());
        }
    }

    public boolean canPaste(long pointer) {
        if (getPointer() > 0) {
            return textEdit.canPaste(getPointer());
        }
        return false;
    }

    public Variant inputMethodQuery(InputMethodQuery property) {
        if (getPointer() > 0) {
            long pointer = textEdit.inputMethodQuery(getPointer(),property.getVal());
            if (pointer > 0) {
                return Variant.asVariant(pointer);
            }
        }
        return null;
    }

    public Variant inputMethodQuery(InputMethodQuery query, Variant argumentVariant) {
        if (getPointer() > 0 && argumentVariant.getPointer() > 0) {
            long pointer = textEdit.inputMethodQuery(getPointer(),query.getVal(),argumentVariant.getPointer());
            if (pointer > 0) {
                return Variant.asVariant(pointer);
            }
        }
        return null;
    }

    public void setFontPointSize(double s) {
        if (getPointer() > 0) {
            textEdit.setFontPointSize(getPointer(),s);
        }
    }

    public void setFontFamily(String fontFamily) {
        if (getPointer() > 0) {
            textEdit.setFontFamily(getPointer(),fontFamily);
        }
    }

    public void setFontWeight(int w) {
        if (getPointer() > 0) {
            textEdit.setFontWeight(getPointer(),w);
        }
    }

    public void setFontUnderline(boolean b) {
        if (getPointer() > 0) {
            textEdit.setFontUnderline(getPointer(),b);
        }
    }

    public void setFontItalic(boolean b) {
        if (getPointer() > 0) {
            textEdit.setFontItalic(getPointer(),b);
        }
    }

    public void setTextColor(Color c) {
        if (getPointer() > 0) {
            textEdit.setTextColor(getPointer(),c.getVal());
        }
    }

    public void setTextBackgroundColor(Color c) {
        if (getPointer() > 0) {
            textEdit.setTextBackgroundColor(getPointer(),c.getVal());
        }
    }

    public void setCurrentFont(Font f) {
        if (getPointer() > 0 && f != null && f.getPointer() > 0) {
            textEdit.setCurrentFont(getPointer(),f.getPointer());
        }
    }

    public void setAlignment(Alignment a) {
        if (getPointer() > 0) {
            textEdit.setAlignment(getPointer(),a.getFlagValue());
        }
    }

    public void setPlainText(String text) {
        if (getPointer() > 0) {
            textEdit.setPlainText(getPointer(),text);
        }
    }

    public void setHtml(String text) {
        if (getPointer() > 0) {
            textEdit.setHtml(getPointer(),text);
        }
    }

    public void setMarkdown(String markdown) {
        if (getPointer() > 0) {
            textEdit.setMarkdown(getPointer(),markdown);
        }
    }

    public void setText(String text) {
        if (getPointer() > 0) {
            textEdit.setText(getPointer(),text);
        }
    }

    public void cut() {
        if (getPointer() > 0) {
            textEdit.cut(getPointer());
        }
    }

    public void copy() {
        if (getPointer() > 0) {
            textEdit.copy(getPointer());
        }
    }

    public void paste() {
        if (getPointer() > 0) {
            textEdit.paste(getPointer());
        }
    }

    public void undo() {
        if (getPointer() > 0) {
            textEdit.undo(getPointer());
        }
    }

    public void redo() {
        if (getPointer() > 0) {
            textEdit.redo(getPointer());
        }
    }

    public void clear() {
        if (getPointer() > 0) {
            textEdit.clear(getPointer());
        }
    }

    public void selectAll() {
        if (getPointer() > 0) {
            textEdit.selectAll(getPointer());
        }
    }

    public void insertPlainText(String text) {
        if (getPointer() > 0) {
            textEdit.insertPlainText(getPointer(),text);
        }
    }

    public void insertHtml(String text) {
        if (getPointer() > 0) {
            textEdit.insertHtml(getPointer(),text);
        }
    }

    public void append(String text) {
        if (getPointer() > 0) {
            textEdit.append(getPointer(),text);
        }
    }

    public void scrollToAnchor(String name) {
        if (getPointer() > 0) {
            textEdit.scrollToAnchor(getPointer(),name);
        }
    }

    public void zoomIn(int range) {
        if (getPointer() > 0) {
            textEdit.zoomIn(getPointer(),range);
        }
    }

    public void zoomOut(int range) {
        if (getPointer() > 0) {
            textEdit.zoomOut(getPointer(),range);
        }
    }

    @Override
    public long getPointer() {
        return textEdit.address();
    }
}
