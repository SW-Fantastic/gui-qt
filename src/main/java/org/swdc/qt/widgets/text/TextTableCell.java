package org.swdc.qt.widgets.text;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.text.STextFrameIterator;
import org.swdc.qt.internal.text.STextTableCell;

import java.util.function.Consumer;

public class TextTableCell implements NativeAllocated {

    private STextTableCell cell = new STextTableCell();

    public static TextTableCell asTextTableCell(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("can not create a text-table-cell, because of the invalid pointer");
        }
        TextTableCell cell = new TextTableCell();
        cell.cell.address(pointer);
        MemoryHolder.allocated(cell);
        return cell;
    }

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = cell.create();
        if (pointer <= 0) {
            throw new Exception("can not create a text-cell, invalid pointer");
        }
        cell.address(pointer);
        MemoryHolder.allocated(this);
    }

    public void allocate(TextTableCell cell) throws Exception {
        if (accessible()) {
            return;
        }
        if (cell == null || cell.getPointer() <= 0) {
            throw new Exception("can not create a text-cell because the param cell is invalid.");
        }
        long pointer = this.cell.create(cell.getPointer());
        if (pointer <= 0) {
            throw new Exception("can not create a text-cell, invalid pointer");
        }
        this.cell.address(pointer);
        MemoryHolder.allocated(this);
    }

    @Override
    public void dispose() {
        if (accessible()) {
            cell.dispose(getPointer());
            cell.cleanAddress();
        }
    }

    public void setFormat(TextCharFormat formatPointer) {
        if (accessible(formatPointer)) {
            cell.setFormat(getPointer(),formatPointer.getPointer());
        }
    }

    public TextCharFormat format() {
        if (accessible()) {
            long pointer = cell.format(getPointer());
            if (pointer > 0) {
                return TextCharFormat.asTextCharFormat(pointer);
            }
        }
        return null;
    }

    public int row() {
        if (accessible()) {
            return cell.row(getPointer());
        }
        return 0;
    }

    public int column(){
        if (accessible()) {
            return cell.column(getPointer());
        }
        return 0;
    }

    public int rowSpan() {
        if (accessible()) {
            return cell.rowSpan(getPointer());
        }
        return 0;
    }

    public int columnSpan() {
        if (accessible()) {
            return cell.columnSpan(getPointer());
        }
        return 0;
    }

    public boolean isValid() {
        if (accessible()) {
            return cell.isValid(getPointer());
        }
        return false;
    }

    public TextCursor firstCursorPosition() {
        if (accessible()) {
            long pointer = cell.firstCursorPosition(getPointer());
            if (pointer > 0) {
                return TextCursor.asTextCursor(pointer);
            }
        }
        return null;
    }

    public TextCursor lastCursorPosition() {
        if (accessible()) {
            long pointer = cell.lastCursorPosition(getPointer());
            if (pointer > 0) {
                return TextCursor.asTextCursor(pointer);
            }
        }
        return null;
    }

    public int firstPosition() {
        if (accessible()) {
            return cell.firstPosition(getPointer());
        }
        return 0;
    }

    public int lastPosition() {
        if (accessible()) {
            return cell.lastPosition(getPointer());
        }
        return 0;
    }

    public TextFrame.TextFrameIterator iterator() {
        if (accessible()) {
            STextFrameIterator iterator = cell.iterator();
            if (iterator != null) {
                return new TextFrame.TextFrameIterator(iterator);
            }
        }
        return new TextFrame.TextFrameIterator(null);
    }

    public int tableCellFormatIndex() {
        if(accessible()) {
            return cell.tableCellFormatIndex(getPointer());
        }
        return 0;
    }

    @Override
    public long getPointer() {
        return cell.address();
    }

    @Override
    public Consumer<Long> disposer() {
        return STextTableCell.CLEANER;
    }

}
