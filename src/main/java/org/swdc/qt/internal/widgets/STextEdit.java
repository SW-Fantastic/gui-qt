package org.swdc.qt.internal.widgets;

import java.util.function.Consumer;

public class STextEdit extends SAbstractScrollArea {

    private static final STextEdit instance = new STextEdit();
    public static final Consumer<Long> CLEANER = instance::dispose;

    public native long create(long parent);
    public native void dispose(long pointer);

    public native void setDocument(long pointer,long document);
    public native long document(long pointer);

    public native void setPlaceholderText(long pointer,String placeholderText);
    public native String placeholderText(long pointer);

    public native void setTextCursor(long pointer,long cursor);
    public native long textCursor(long pointer);

    public native boolean isReadOnly(long pointer);
    public native void setReadOnly(long pointer,boolean ro);

    public native void setTextInteractionFlags(long pointer,int flags);

    public native double fontPointSize(long pointer);
    public native String fontFamily(long pointer);
    public native int fontWeight(long pointer);
    public native boolean fontUnderline(long pointer);
    public native boolean fontItalic(long pointer);
    public native long textColor(long pointer);
    public native long textBackgroundColor(long pointer);
    public native long currentFont(long pointer);
    public native long alignment(long pointer);

    public native void mergeCurrentCharFormat(long pointer,long charFormat);

    public native void setCurrentCharFormat(long pointer,long format);
    public native long currentCharFormat(long pointer);

    public native int autoFormatting(long pointer);
    public native void setAutoFormatting(long pointer,int features);

    public native boolean tabChangesFocus(long pointer);
    public native void setTabChangesFocus(long pointer,boolean b);

    public native void setDocumentTitle(long pointer,String title);
    public native String documentTitle(long pointer);

    public native boolean isUndoRedoEnabled(long pointer);
    public native void setUndoRedoEnabled(long pointer,boolean enable);

    public native int lineWrapMode(long pointer);
    public native void setLineWrapMode(long pointer,int mode);

    public native int lineWrapColumnOrWidth(long pointer);
    public native void setLineWrapColumnOrWidth(long pointer,int w);

    public native int wordWrapMode(long pointer);
    public native void setWordWrapMode(long pointer,int policy);

    public native boolean find(long pointer,String exp,int findFlags);
    public native boolean findRegexp(long pointer,long regExp ,int findFlags);
    public native boolean findRegularExpression(long pointer,long exp,int findFlags);
    public native String toPlainText(long pointer);

    public native String toHtml(long pointer);
    public native String toMarkdown(long pointer,int markdownFeatures);
    public native void ensureCursorVisible(long pointer);

    public native long loadResource(long pointer,int type,String name);
    public native long createStandardContextMenu(long pointer);
    public native long createStandardContextMenu(long pointer,long position);

    public native long cursorForPosition(long pointer,long pos);
    public native long cursorRect(long pointer,long cursor);
    public native long cursorRect(long pointer);

    public native String anchorAt(long pointer,long pos);

    public native boolean overwriteMode(long pointer);
    public native void setOverwriteMode(long pointer,boolean overwrite);

    public native double tabStopDistance(long pointer);
    public native void setTabStopDistance(long pointer,double distance);

    public native int cursorWidth(long pointer);
    public native void setCursorWidth(long pointer,int width);

    public native boolean acceptRichText(long pointer);
    public native void setAcceptRichText(long pointer,boolean accept);

    public native void setExtraSelections(long pointer,long[] selections);
    public native long[] extraSelections(long pointer);

    public native void moveCursor(long pointer,int operation,int mode);

    public native boolean canPaste(long pointer);

    public native long inputMethodQuery(long pointer,int property);
    public native long inputMethodQuery(long pointer,int query, long argumentVariant);

    public native void setFontPointSize(long pointer,double s);
    public native void setFontFamily(long pointer,String fontFamily);
    public native void setFontWeight(long pointer,int w);
    public native void setFontUnderline(long pointer,boolean b);
    public native void setFontItalic(long pointer,boolean b);
    public native void setTextColor(long pointer,long c);
    public native void setTextBackgroundColor(long pointer,long c);
    public native void setCurrentFont(long pointer,long f);
    public native void setAlignment(long pointer,long a);

    public native void setPlainText(long pointer,String text);
    public native void setHtml(long pointer,String text);
    public native void setMarkdown(long pointer,String markdown);
    public native void setText(long pointer,String text);

    public native void cut(long pointer);
    public native void copy(long pointer);
    public native void paste(long pointer);

    public native void undo(long pointer);
    public native void redo(long pointer);

    public native void clear(long pointer);
    public native void selectAll(long pointer);

    public native void insertPlainText(long pointer,String text);
    public native void insertHtml(long pointer,String text);

    public native void append(long pointer,String text);

    public native void scrollToAnchor(long pointer,String name);

    public native void zoomIn(long pointer,int range);
    public native void zoomOut(long pointer,int range);

}
