package org.swdc.qt.internal.text;

import org.swdc.qt.internal.SPointer;

import java.util.function.Consumer;

public class STextDocument extends SPointer {

    private static final STextDocument instance = new STextDocument();
    public static final Consumer<Long> CLEANER = instance::dispose;

    public native long create();
    public native void dispose(long pointer);

    public native boolean isEmpty(long pointer);
    public native void clear(long pointer);

    public native void setUndoRedoEnabled(long pointer,boolean enable);
    public native boolean isUndoRedoEnabled(long pointer);

    public native boolean isUndoAvailable(long pointer);
    public native boolean isRedoAvailable(long pointer);

    public native int availableUndoSteps(long pointer);
    public native int availableRedoSteps(long pointer);

    public native int revision(long pointer);

    public native void setDocumentLayout(long pointer,long layout);
    public native long documentLayout(long pointer);

    public native void setMetaInformation(long pointer,int info, String str);
    public native String metaInformation(long pointer,int info);

    public native String toHtml(long pointer,String encoding);
    public native void setHtml(long pointer,String html);

    public native String toMarkdown(long pointer,int futures);
    public native void setMarkdown(long pointer,String markdown, int futures);

    public native String toRawText(long pointer);
    public native String toPlainText(long pointer);
    public native void setPlainText(long pointer,String text);

    public native char characterAt(long pointer,int pos);

    public native long find(long pointer,String subString, int from, int flags);
    public native long find(long pointer,String subString, long cursorPointer, int flags);

    public native long findRegExp(long pointer,long regexp, int from, int flags);
    public native long findRegExp(long pointer,long regexp, long cursorPointer, int flags);

    public native long findRegularExpression(long pointer,long expr, int from,int flags);
    public native long findRegularExpression(long pointer,long expr, long cursor,int flags);

    public native long frameAt(long pointer,int pos);
    public native long rootFrame(long pointer);

    // public native long object(long pointer,int objectIndex);
    // public native long objectForFormat(long pointer,long textFormat);

    public native long findBlock(long pointer,int pos);
    public native long findBlockByNumber(long pointer,int blockNumber);
    public native long findBlockByLineNumber(long pointer,int blockNumber);
    public native long begin(long pointer);
    public native long end(long pointer);

    public native long firstBlock(long pointer);
    public native long lastBlock(long pointer);

    public native void setPageSize(long pointer,long size);
    public native long pageSize(long pointer);

    public native void setDefaultFont(long pointer,long font);
    public native long defaultFont(long pointer);

    public native int pageCount(long pointer);

    public native boolean isModified(long pointer);

    public native long resource(long pointer,int type,String name);
    public native void addResource(long pointer,int type,String name,long variantResource);

    public native long[] allFormats(long pointer);

    public native void markContentsDirty(long pointer,int from, int length);

    public native void setUseDesignMetrics(long pointer,boolean b);
    public native boolean useDesignMetrics(long pointer);

    public native void drawContents(long pointer,long painter,long rect);

    public native void setTextWidth(long pointer,double width);
    public native double textWidth(long pointer);

    public native double idealWidth(long pointer);

    public native double indentWidth(long pointer);
    public native void setIndentWidth(long pointer,double width);

    public native double documentMargin(long pointer);
    public native void setDocumentMargin(long pointer,double margin);

    public native void adjustSize(long pointer);
    public native long size(long pointer);

    public native int blockCount(long pointer);
    public native int lineCount(long pointer);
    public native int characterCount(long pointer);


}
