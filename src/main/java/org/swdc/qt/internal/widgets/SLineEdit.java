package org.swdc.qt.internal.widgets;

public class SLineEdit extends SWidget{


    public native long create(long parentPointer);

    public native String text(long pointer);

    public native String displayText(long pointer);

    public native String placeholderText(long pointer);
    public native void setPlaceholderText(long pointer,String text);

    public native int maxLength(long pointer);
    public native void setMaxLength(long pointer,int val);

    public native void setFrame(long pointer,boolean val);
    public native boolean hasFrame(long pointer);

    public native void setClearButtonEnabled(long pointer,boolean enable);
    public native boolean isClearButtonEnabled(long pointer);

    public native boolean isReadOnly(long pointer);
    public native void setReadOnly(long pointer,boolean val);

    public native int cursorPosition(long pointer);
    public native void setCursorPosition(long pointer,int val);
    public native int cursorPositionAt(long pointer,int x,int y);

    public native void setAlignment(long pointer,long alignmentEnumVal);
    public native long alignment(long pointer);

    public native void cursorForward(long pointer,boolean mark, int steps);
    public native void cursorBackward(long pointer,boolean mark, int steps);
    public native void cursorWordForward(long pointer,boolean mark);
    public native void cursorWordBackward(long pointer,boolean mark);
    public native void backspace(long pointer);
    public native void del(long pointer);
    public native void home(long pointer,boolean mark);
    public native void end(long pointer,boolean mark);

    public native boolean isModified(long pointer);
    public native void setModified(long pointer,boolean val);

    public native void setSelection(long pointer,int x, int y);
    public native boolean hasSelectedText(long pointer);
    public native String selectedText(long pointer);
    public native int selectionStart(long pointer);
    public native int selectionEnd(long pointer);
    public native int selectionLength(long pointer);

    public native boolean isUndoAvailable(long pointer);
    public native boolean isRedoAvailable(long pointer);

    public native void setDragEnabled(long pointer,boolean b);
    public native boolean dragEnabled(long pointer);

    public native void setTextMargins(long pointer,int left, int top, int right, int bottom);
    public native long textMargins(long pointer);

    public native void setText(long pointer,String text);
    public native void clear(long pointer);
    public native void selectAll(long pointer);
    public native void undo(long pointer);
    public native void redo(long pointer);

    public native void cut(long pointer);
    public native void copy(long pointer);
    public native void paste(long pointer);

    public native int echoMode(long pointer);
    public native void setEchoMode(long pointer,int mode);

}
