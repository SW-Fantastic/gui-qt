package org.swdc.qt.widgets.text;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.internal.text.STextCursor;
import org.swdc.qt.widgets.graphics.Image;

public class TextCursor implements NativeAllocated {

    private STextCursor cursor = new STextCursor();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = cursor.create();
        if (pointer <= 0) {
            throw new Exception("can not create a text cursor");
        }
        cursor.address(pointer);
    }

    public void allocate(TextDocument document) throws Exception {
        if (accessible()) {
            return;
        }
        if (!accessible(document)) {
            throw new Exception("invalid document, can not create a text cursor.");
        }
        long pointer = cursor.create(document.getPointer());
        if (pointer <= 0) {
            throw new Exception("can not create a text cursor");
        }
        cursor.address(pointer);
    }

    @Override
    public void dispose() {
        if (accessible()) {
            cursor.dispose(getPointer());
        }
    }

    public void setPosition(int pos, TextCursorMoveMode mode) {
        if (accessible()) {
            cursor.setPosition(getPointer(),pos,mode.getVal());
        }
    }

    public int getPosition() {
        if (accessible()) {
            return cursor.position(getPointer());
        }
        return 0;
    }

    public int getPositionInBlock() {
        if (accessible()) {
            return cursor.positionInBlock(getPointer());
        }
        return 0;
    }

    public int anchor() {
        if(accessible()) {
            return cursor.anchor(getPointer());
        }
        return 0;
    }

    public void insertText(String text) {
        if (accessible()) {
            cursor.insertText(getPointer(),text);
        }
    }

    public void insertText(String text, TextCharFormat charFormat) {
        if (accessible(charFormat)) {
            cursor.insertText(getPointer(),text,charFormat.getPointer());
        }
    }

    public boolean movePosition(TextCursorMoveMode op, TextCursorMoveMode moveMode, int n) {
        if (accessible()) {
            return cursor.movePosition(getPosition(),op.getVal(),moveMode.getVal(),n);
        }
        return false;
    }

    public boolean getVisualNavigation() {
        if (accessible()) {
            return cursor.visualNavigation(getPointer());
        }
        return false;
    }

    public void setVisualNavigation(boolean b) {
        if (accessible()) {
            cursor.setVisualNavigation(getPointer(),b);
        }
    }

    public void setVerticalMovementX(int x) {
        if (accessible()) {
            cursor.setVerticalMovementX(getPointer(),x);
        }
    }

    public int getVerticalMovementX(){
        if (accessible()) {
            return cursor.verticalMovementX(getPointer());
        }
        return 0;
    }

    public void setKeepPositionOnInsert(boolean b) {
        if (accessible()) {
            cursor.setKeepPositionOnInsert(getPointer(),b);
        }
    }

    public boolean getKeepPositionOnInsert() {
        if (accessible()) {
            return cursor.keepPositionOnInsert(getPointer());
        }
        return false;
    }

    public void deleteChar() {
        if (accessible()) {
            cursor.deleteChar(getPointer());
        }
    }

    public void deletePreviousChar() {
        if (accessible()) {
            cursor.deletePreviousChar(getPointer());
        }
    }

    public void select(TextCursorSelectionType selection) {
        if (accessible()) {
            cursor.select(getPointer(),selection.getVal());
        }
    }

    public boolean hasSelection() {
        if (accessible()) {
            return cursor.hasSelection(getPointer());
        }
        return false;
    }

    public boolean hasComplexSelection() {
        if (accessible()) {
            return cursor.hasComplexSelection(getPointer());
        }
        return false;
    }

    public void removeSelectedText() {
        if (accessible()) {
            cursor.removeSelectedText(getPointer());
        }
    }

    public void clearSelection() {
        if (accessible()) {
            cursor.clearSelection(getPointer());
        }
    }

    public int selectionStart() {
        if (accessible()) {
            return cursor.selectionStart(getPointer());
        }
        return 0;
    }

    public int selectionEnd() {
        if (accessible()) {
            return cursor.selectionEnd(getPointer());
        }
        return 0;
    }

    public String getSelectedText() {
        if (accessible()) {
            return cursor.selectedText(getPointer());
        }
        return null;
    }

    public TextDocumentFragment selection() {
        if (accessible()) {
            long pointer = cursor.selection(getPointer());
            if (pointer > 0) {
                return TextDocumentFragment.asDocumentFragment(pointer);
            }
        }
        return null;
    }

    public TextBlock block() {
        if (accessible()) {
            long pointer = cursor.block(getPointer());
            if (pointer > 0) {
                return TextBlock.asTextBlock(pointer);
            }
        }
        return null;
    }

    public TextCharFormat charFormat() {
        if (accessible()) {
            long pointer = cursor.charFormat(getPointer());
            if (pointer > 0) {
                return TextCharFormat.asTextCharFormat(pointer);
            }
        }
        return null;
    }

    public void setCharFormat(TextCharFormat charFormat) {
        if (accessible() && charFormat != null && charFormat.accessible()) {
            cursor.setCharFormat(getPointer(),charFormat.getPointer());
        }
    }

    public void mergeCharFormat(TextCharFormat charFormat) {
        if (accessible() && charFormat != null && charFormat.accessible()) {
            cursor.mergeCharFormat(getPointer(),charFormat.getPointer());
        }
    }

    public TextBlockFormat blockFormat() {
        if (accessible()) {
            long pointer = cursor.blockFormat(getPointer());
            if (pointer > 0) {
                return TextBlockFormat.asTextBlockFormat(pointer);
            }
        }
        return null;
    }

    public void setBlockFormat(TextBlockFormat blockFormat) {
        if (accessible(blockFormat)) {
            cursor.setBlockFormat(getPointer(),blockFormat.getPointer());
        }
    }

    public void mergeBlockFormat(TextBlockFormat blockFormat){
        if (accessible(blockFormat)) {
            cursor.mergeBlockFormat(getPointer(),blockFormat.getPointer());
        }
    }

    public TextCharFormat blockCharFormat() {
        if (accessible()) {
            long pointer = cursor.blockCharFormat(getPointer());
            if (pointer > 0 ) {
                return TextCharFormat.asTextCharFormat(pointer);
            }
        }
        return null;
    }

    public void setBlockCharFormat(TextCharFormat blockCharFormat) {
        if (accessible(blockCharFormat)) {
            cursor.setBlockCharFormat(getPointer(),blockCharFormat.getPointer());
        }
    }

    public void mergeBlockCharFormat(TextCharFormat blockCharFormat) {
        if (accessible(blockCharFormat)) {
            cursor.mergeCharFormat(getPointer(),blockCharFormat.getPointer());
        }
    }

    public boolean atBlockStart() {
        if(accessible()) {
            return cursor.atBlockStart(getPointer());
        }
        return false;
    }

    public boolean atBlockEnd(){
        if (accessible()) {
            return cursor.atBlockEnd(getPointer());
        }
        return false;
    }

    public boolean atStart() {
        if (accessible()) {
            return cursor.atStart(getPointer());
        }
        return false;
    }

    public boolean atEnd() {
        if (accessible()) {
            return cursor.atEnd(getPointer());
        }
        return false;
    }

    public void insertBlock() {
        if (accessible()) {
            cursor.insertBlock(getPointer());
        }
    }

    public void insertBlock(TextBlockFormat blockFormat) {
        if (accessible(blockFormat)) {
            cursor.insertBlock(getPointer(),blockFormat.getPointer());
        }
    }

    public void insertBlock(TextBlockFormat blockformat,TextCharFormat charFormat){
        if (!accessible(blockformat,charFormat)) {
            return;
        }
        cursor.insertBlock(getPointer(),blockformat.getPointer(),charFormat.getPointer());
    }

    public TextList insertList(TextListFormat listFormat) {
        if (accessible(listFormat)) {
            long pointer = cursor.insertList(getPointer(),listFormat.getPointer());
            if (pointer > 0) {
                return TextList.asTextList(pointer);
            }
        }
        return null;
    }

    public TextList insertList(TextListFormatStyle style) {
        if (accessible()) {
            long pointer = cursor.insertList(getPointer(),style.getVal());
            if (pointer > 0) {
                return TextList.asTextList(pointer);
            }
        }
        return null;
    }

    public TextList createList(TextListFormat listFormat) {
        if (accessible(listFormat)) {
            long pointer = cursor.createList(getPointer(),listFormat.getPointer());
            if(pointer > 0) {
                return TextList.asTextList(pointer);
            }
        }
        return null;
    }

    public TextList createList(TextListFormatStyle listFormatStyle) {
        if (accessible()) {
            long pointer = cursor.createList(getPointer(),listFormatStyle.getVal());
            if (pointer > 0) {
                return TextList.asTextList(pointer);
            }
        }
        return null;
    }

    public TextList currentList(){
        if (accessible()) {
            long pointer = cursor.currentList(getPointer());
            if (pointer > 0) {
                return TextList.asTextList(getPointer());
            }
        }
        return null;
    }

    public TextTable insertTable(int rows, int cols, TextTableFormat tableFormat) {
        if (accessible(rows,cols,tableFormat)) {
            long pointer = cursor.insertTable(getPointer(),rows,cols,tableFormat.getPointer());
            if (pointer > 0) {
                return TextTable.asTextTable(pointer);
            }
        }
        return null;
    }

    public TextTable insertTable(int rows, int cols) {
        if (accessible()) {
            long pointer = cursor.insertTable(getPointer(),rows,cols);
            if (pointer > 0) {
                return TextTable.asTextTable(pointer);
            }
        }
        return null;
    }

    public TextTable currentTable() {
        if (accessible()) {
            long pointer = cursor.currentTable(getPointer());
            if (pointer > 0) {
                return TextTable.asTextTable(pointer);
            }
        }
        return null;
    }

    public TextFrame insertFrame(TextFrameFormat format) {
        if (accessible(format)) {
            long pointer = cursor.insertFrame(getPointer(),format.getPointer());
            if (pointer > 0) {
                return TextFrame.asTextFrame(pointer);
            }
        }
        return null;
    }

    public TextFrame currentFrame() {
        if (accessible()) {
            long pointer = cursor.currentFrame(getPointer());
            if (pointer > 0) {
                return TextFrame.asTextFrame(pointer);
            }
        }
        return null;
    }

    public void insertFragment(TextDocumentFragment docFragment) {
        if (accessible(docFragment)) {
            cursor.insertFragment(getPointer(),docFragment.getPointer());
        }
    }

    public void insertImage(TextImageFormat imageFormat, TextFramePosition alignment) {
        if (accessible(imageFormat,alignment)) {
            cursor.insertImage(getPointer(),imageFormat.getPointer(),alignment.getVal());
        }
    }

    public void insertImage(TextImageFormat imageFormat) {
        if (accessible(imageFormat)) {
            cursor.insertImage(getPointer(),imageFormat.getPointer());
        }
    }

    public void insertImage(String name) {
        if (accessible(name)) {
            cursor.insertImage(getPointer(),name);
        }
    }

    public void insertImage(Image image, String name) {
        if (accessible(image,name)) {
            cursor.insertImage(getPointer(),image.getPointer(),name);
        }
    }

    public void beginEditBlock() {
        if (accessible()) {
            cursor.beginEditBlock(getPointer());
        }
    }

    public void joinPreviousEditBlock() {
        if (accessible()) {
            cursor.joinPreviousEditBlock(getPointer());
        }
    }

    public void endEditBlock() {
        if (accessible()) {
            cursor.endEditBlock(getPointer());
        }
    }

    public boolean isCopyOf(TextCursor other){
        if (accessible(other)) {
            return cursor.isCopyOf(getPointer(),other.getPointer());
        }
        return false;
    }

    public int blockNumber() {
        if (accessible()) {
            return cursor.blockNumber(getPointer());
        }
        return 0;
    }

    public int columnNumber() {
        if (accessible()) {
            return cursor.columnNumber(getPointer());
        }
        return 0;
    }

    public TextDocument document() {
        if (accessible()) {
            long pointer = cursor.document(getPointer());
            if (pointer > 0) {
                return TextDocument.asTextDocument(pointer);
            }
        }
        return null;
    }

    @Override
    public long getPointer() {
        return cursor.address();
    }

    public static TextCursor asTextCursor(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("can not create a text cursor because the pointer is invalid ");
        }
        TextCursor cursor = new TextCursor();
        cursor.cursor.address(pointer);
        return cursor;
    }

}
