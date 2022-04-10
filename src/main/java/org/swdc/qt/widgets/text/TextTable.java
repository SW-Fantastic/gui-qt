package org.swdc.qt.widgets.text;

import org.swdc.qt.internal.text.STextTable;

public class TextTable extends TextFrame {

    private STextTable textTable = new STextTable();

    public static TextTable asTextTable(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("can not create a text-table, invalid pointer");
        }
        TextTable textTable = new TextTable();
        textTable.textTable.address(pointer);
        return textTable;
    }

    @Override
    public void allocate(TextDocument document) throws Exception {
        if (accessible()) {
            return;
        }
        if (!accessible(document)) {
            throw new Exception("can not create a text-table because invalid document.");
        }
        long pointer = textTable.create(document.getPointer());
        if (pointer <= 0) {
            throw new Exception("can not create text-table because of the invalid pointer.");
        }
        textTable.address(pointer);
    }

    @Override
    public void dispose() {
        if (accessible()) {
            textTable.dispose(getPointer());
            textTable.cleanAddress();
        }
    }

    @Override
    public long getPointer() {
        return textTable.address();
    }

    public void resize(int rows, int cols) {
        if (accessible()) {
            textTable.resize(getPointer(),rows,cols);
        }
    }

    public void insertRows(int pos, int num) {
        if (accessible()) {
            textTable.insertRows(getPointer(),pos,num);
        }
    }

    public void insertColumns(int pos, int num) {
        if (accessible()) {
            textTable.insertColumns(getPointer(),pos,num);
        }
    }

    public void appendRows(int count) {
        if (accessible()) {
            textTable.appendRows(getPointer(),count);
        }
    }

    public void appendColumns(int count) {
        if (accessible()) {
            textTable.appendColumns(getPointer(),count);
        }
    }

    public void removeRows(int pos, int num) {
        if (accessible()) {
            textTable.removeRows(getPointer(),pos,num);
        }
    }

    public void removeColumns(int pos, int num) {
        if (accessible()) {
            textTable.removeColumns(getPointer(),pos,num);
        }
    }

    public void mergeCells(int row, int col, int numRows, int numCols) {
        if (accessible()) {
            textTable.mergeCells(getPointer(),row,col,numRows,numCols);
        }
    }

    public void mergeCells(TextCursor textCursor) {
        if (accessible(textCursor)) {
            textTable.mergeCells(getPointer(),textCursor.getPointer());
        }
    }

    public void splitCell(int row, int col, int numRows, int numCols) {
        if (accessible()) {
            textTable.splitCell(getPointer(),row,col,numRows,numCols);
        }
    }

    public int rows() {
        if (accessible()) {
            return textTable.rows(getPointer());
        }
        return 0;
    }

    public int columns() {
        if (accessible()) {
            return textTable.columns(getPointer());
        }
        return 0;
    }

    public TextTableCell cellAt(int row, int col) {
        if (accessible()) {
            long pointer = textTable.cellAt(getPointer(),row,col);
            if (pointer > 0) {
                return TextTableCell.asTextTableCell(pointer);
            }
        }
        return null;
    }

    public TextTableCell cellAt(int position) {
        if (accessible()) {
            long pointer = textTable.cellAt(getPointer(),position);
            if (pointer > 0) {
                return TextTableCell.asTextTableCell(pointer);
            }
        }
        return null;
    }

    public TextTableCell cellAt(TextCursor textCursor) {
        if (accessible(textCursor)) {
            long pointer = textTable.cellAt(getPointer(),textCursor.getPointer());
            if (pointer > 0) {
                return TextTableCell.asTextTableCell(pointer);
            }
        }
        return null;
    }

    public TextCursor rowStart(TextCursor textCursor) {
        if (accessible(textCursor)) {
            long pointer = textTable.rowStart(getPointer(),textCursor.getPointer());
            if (pointer > 0) {
                return TextCursor.asTextCursor(pointer);
            }
        }
        return null;
    }

    public TextCursor rowEnd(TextCursor textCursor) {
        if (accessible(textCursor)) {
            long pointer = textTable.rowEnd(getPointer(),textCursor.getPointer());
            if (pointer > 0) {
                return TextCursor.asTextCursor(pointer);
            }
        }
        return null;
    }

    public void setFormat(TextTableFormat tableFormat) {
        if (accessible(tableFormat)) {
            textTable.setFormat(getPointer(),tableFormat.getPointer());
        }
    }

    public TextTableFormat format() {
        if (accessible()) {
            long pointer = textTable.format(getPointer());
            if (pointer > 0) {
                return TextTableFormat.asTextTableFormat(pointer);
            }
        }
        return null;
    }

}
