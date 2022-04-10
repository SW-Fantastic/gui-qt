package org.swdc.qt.widgets.text;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.internal.text.STextDocumentLayoutSelection;

public class TextDocumentLayoutSelection implements NativeAllocated {

    private STextDocumentLayoutSelection textDocumentLayoutSelection = new STextDocumentLayoutSelection();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = textDocumentLayoutSelection.create();
        if (pointer <= 0) {
            throw new Exception("invalid pointer, can not create a text document layout selection.");
        }
        textDocumentLayoutSelection.address(pointer);
    }

    public void dispose() {
        if (accessible()) {
            textDocumentLayoutSelection.dispose(getPointer());
        }
    }

    public long getPointer() {
        return textDocumentLayoutSelection.address();
    }

    public TextCursor cursor() {
        if (accessible()) {
            long pointer = textDocumentLayoutSelection.cursor(getPointer());
            if (pointer > 0) {
                return TextCursor.asTextCursor(pointer);
            }
        }
        return null;
    }
    public void cursor(TextCursor cursor) {
        if (accessible(cursor)) {
            textDocumentLayoutSelection.cursor(cursor.getPointer());
        }
    }

    public TextCharFormat format() {
        if (accessible()) {
            long pointer = textDocumentLayoutSelection.format(getPointer());
            if (pointer > 0) {
                return TextCharFormat.asTextCharFormat(pointer);
            }
        }
        return null;
    }

    public void format(TextCharFormat format) {
        if (accessible(format)) {
            textDocumentLayoutSelection.format(getPointer(),format.getPointer());
        }
    }

    public static TextDocumentLayoutSelection asDocumentLayoutSelection(long pointer){
        if (pointer <= 0) {
            throw new RuntimeException("can not create a document layout selection, invalid pointer");
        }
        TextDocumentLayoutSelection selection = new TextDocumentLayoutSelection();
        selection.textDocumentLayoutSelection.address(pointer);
        return selection;
    }

}
