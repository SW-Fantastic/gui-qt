package org.swdc.qt.internal.widgets;

public class SPlainTextEdit extends SAbstractScrollArea {

    public native long create();
    public native long create(long parent,String text);

    public native void dispose(long pointer);

    public native void setDocument(long pointer,long document);
    public native long document(long pointer);

    public native void setPlaceholderText(long pointer,String placeholderText);
    public native String placeholderText(long pointer);

    public native void setTextCursor(long pointer,long textCursor);
    public native long textCursor(long pointer);

    public native boolean isReadOnly(long pointer);
    public native void setReadOnly(long pointer,boolean ro);

    public native void setTextInteractionFlags(long pointer,int flags);

    public native void mergeCurrentCharFormat(long pointer,long format);
    public native void setCurrentCharFormat(long pointer,long format);
    public native long currentCharFormat(long pointer);

    public native boolean tabChangesFocus(long pointer);
    public native void setTabChangesFocus(long pointer,boolean b);

    public native void setDocumentTitle(long pointer,String title);
    public native String documentTitle(long pointer);

    public native boolean isUndoRedoEnabled(long pointer);
    public native void setUndoRedoEnabled(long pointer,boolean enable);

    public native void setMaximumBlockCount(long pointer,int maximum);
    public native int maximumBlockCount(long pointer);

    public native int lineWrapMode(long pointer);
    public native void setLineWrapMode(long pointer,int mode);

    public native int wordWrapMode(long pointer);
    public native void setWordWrapMode(long pointer,int policy);

    public native void setBackgroundVisible(long pointer,boolean visible);
    public native boolean backgroundVisible(long pointer);

    public native void setCenterOnScroll(long pointer,boolean enabled);
    public native boolean centerOnScroll(long pointer);

    public native boolean find(long pointer,String exp,int findFlags);
    public native boolean findRegExp(long pointer,long exp,int findFlags);
    public native boolean findRegularExpression(long pointer,long exp,int findFlags);

    public native String toPlainText(long pointer);

    public native void ensureCursorVisible(long pointer);

    public native long loadResource(long pointer,int type, String name);
    public native long createStandardContextMenu(long pointer);
    public native long createStandardContextMenu(long pointer,long position);

    public native long cursorForPosition(long pointer,long pos);
    public native long cursorRect(long pointer,long cursor);
    public native long cursorRect(long pointer);

    public native String anchorAt(long pointer,long pos) ;

    public native boolean overwriteMode(long pointer);
    public native void setOverwriteMode(long pointer,boolean overwrite);

    public native double tabStopDistance(long pointer);
    public native void setTabStopDistance(long pointer,double distance);

    public native int cursorWidth(long pointer);
    public native void setCursorWidth(long pointer,int width);

    public native void setExtraSelections(long pointer,long[] selections);
    public native long[] extraSelections(long pointer);

    public native void moveCursor(long pointer,int operation,int mode);

    public native boolean canPaste(long pointer);

    public native int blockCount(long pointer) ;
    public native long inputMethodQuery(long pointer,int property);
    public native long inputMethodQuery(long pointer,int query,long argument) ;

    public native void setPlainText(long pointer,String text);
    public native void cut(long pointer);
    public native void copy(long pointer);
    public native void paste(long pointer);

    public native void undo(long pointer);
    public native void redo(long pointer);

    public native void clear(long pointer);
    public native void selectAll(long pointer);

    public native void insertPlainText(long pointer,String text);

    public native void appendPlainText(long pointer,String text);
    public native void appendHtml(long pointer,String html);

    public native void centerCursor(long pointer);

    public native void zoomIn(long pointer,int range);
    public native void zoomOut(long pointer,int range);

}
