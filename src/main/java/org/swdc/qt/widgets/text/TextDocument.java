package org.swdc.qt.widgets.text;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.text.STextDocument;
import org.swdc.qt.widgets.RealRect;
import org.swdc.qt.widgets.RealSize;
import org.swdc.qt.widgets.Variant;
import org.swdc.qt.widgets.graphics.Font;
import org.swdc.qt.widgets.graphics.Painter;

import java.nio.charset.Charset;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Objects;
import java.util.function.Consumer;
import java.util.stream.Collectors;

public class TextDocument implements NativeAllocated {

    private STextDocument document = new STextDocument();

    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = document.create();
        if (pointer <= 0) {
            throw new Exception("can not create a document, invalid pointer");
        }
        document.address(pointer);
        MemoryHolder.allocated(this);
    }

    public boolean isEmpty() {
        if (getPointer() > 0) {
            return document.isEmpty(getPointer());
        }
        return true;
    }

    public void clear() {
        if (getPointer() > 0) {
            document.clear(getPointer());
        }
    }

    public void setUndoRedoEnabled(boolean enable) {
        if (getPointer() > 0) {
            document.setUndoRedoEnabled(getPointer(),enable);
        }
    }

    public boolean isUndoRedoEnabled() {
        if (getPointer() > 0) {
            return document.isUndoRedoEnabled(getPointer());
        }
        return false;
    }

    public boolean isUndoAvailable() {
        if (getPointer() > 0) {
            return document.isUndoAvailable(getPointer());
        }
        return false;
    }

    public boolean isRedoAvailable() {
        if (getPointer() > 0) {
            return document.isRedoAvailable(getPointer());
        }
        return false;
    }

    public int availableUndoSteps() {
        if (getPointer() > 0) {
            return document.availableUndoSteps(getPointer());
        }
        return 0;
    }

    public int availableRedoSteps() {
        if (getPointer() > 0) {
            return document.availableRedoSteps(getPointer());
        }
        return 0;
    }

    public int revision() {
        if (getPointer() > 0) {
            return document.revision(getPointer());
        }
        return 0;
    }

    public void setDocumentLayout(AbstractTextDocumentLayout layout) {
        if (accessible(layout)) {
            document.setDocumentLayout(getPointer(),layout.getPointer());
        }
    }

    public AbstractTextDocumentLayout getDocumentLayout() {
        if (accessible()) {
            long pointer = document.documentLayout(getPointer());
            if (pointer > 0) {
                return new AbstractTextDocumentLayout() {
                    @Override
                    public long getPointer() {
                        return pointer;
                    }
                };
            }
        }
        return null;
    }

    public void setMetaInformation(TextDocumentMetaInformation info, String str) {
        if (accessible(info,str)) {
            document.setMetaInformation(getPointer(),info.getVal(),str);
        }
    }

    public String getMetaInformation(TextDocumentMetaInformation info) {
        if (accessible(info)) {
            return document.metaInformation(getPointer(),info.getVal());
        }
        return null;
    }

    public String toHtml(Charset encoding) {
        if (accessible(encoding)) {
            return document.toHtml(getPointer(),encoding.name());
        }
        return null;
    }

    public void setHtml(String html) {
        if (accessible(html)) {
            document.setHtml(getPointer(),html);
        }
    }

    public String toMarkdown(TextDocumentMarkdownFuture futures) {
        if (accessible(futures)) {
            return document.toMarkdown(getPointer(),futures.getVal());
        }
        return null;
    }

    public void setMarkdown(String markdown,TextDocumentMarkdownFuture futures) {
        if (accessible(markdown,futures)) {
            document.setMarkdown(getPointer(),markdown,futures.getVal());
        }
    }

    public String toRawText() {
        if (accessible()) {
            return document.toRawText(getPointer());
        }
        return null;
    }

    public String toPlainText() {
        if (accessible()) {
            return document.toPlainText(getPointer());
        }
        return null;
    }

    public void setPlainText(String text) {
        if (accessible(text)) {
            document.setPlainText(getPointer(),text);
        }
    }

    public char characterAt(int pos) {
        if (accessible(pos)) {
            return document.characterAt(getPointer(),pos);
        }
        return ' ';
    }

    public TextCursor find(String subString, int from, TextDocumentFindFlags ...flags) {
        if (accessible(subString,from,flags)) {

            int val = Arrays.stream(flags)
                    .filter(Objects::nonNull)
                    .mapToInt(TextDocumentFindFlags::getVal)
                    .reduce((a,b)->a|b)
                    .orElse(0);

            long pointer = document.find(getPointer(),subString,from,val);
            if (pointer > 0) {
                return TextCursor.asTextCursor(pointer);
            }
        }
        return null;
    }
    public TextCursor find(String subString, TextCursor cursor,TextDocumentFindFlags ...flags) {
        if (accessible(subString,cursor,flags)) {

            int val = Arrays.stream(flags)
                    .filter(Objects::nonNull)
                    .mapToInt(TextDocumentFindFlags::getVal)
                    .reduce((a,b)->a|b)
                    .orElse(0);

            long pointer = document.find(getPointer(),subString,cursor.getPointer(),val);
            if (pointer > 0) {
                return TextCursor.asTextCursor(pointer);
            }
        }
        return null;
    }

    public TextCursor findRegExp(RegExp regexp, int from, TextDocumentFindFlags ...flags) {
        if (accessible(regexp,from,flags)) {

            int val = Arrays.stream(flags)
                    .filter(Objects::nonNull)
                    .mapToInt(TextDocumentFindFlags::getVal)
                    .reduce((a,b)->a|b)
                    .orElse(0);

            long pointer = document.findRegExp(getPointer(),regexp.getPointer(),from,val);
            if (pointer > 0) {
                return TextCursor.asTextCursor(pointer);
            }
        }
        return null;
    }

    public TextCursor findRegExp(RegExp regexp, TextCursor cursor,TextDocumentFindFlags ...flags) {

        if (accessible(regexp,cursor,flags)) {
            int val = Arrays.stream(flags)
                    .filter(Objects::nonNull)
                    .mapToInt(TextDocumentFindFlags::getVal)
                    .reduce((a,b)->a|b)
                    .orElse(0);

            long pointer = document.findRegExp(getPointer(),regexp.getPointer(),cursor.getPointer(),val);

            if (pointer > 0) {
                return TextCursor.asTextCursor(pointer);
            }
        }

        return null;
    }

    public TextCursor findRegularExpression(RegularExpression expr, int from,TextDocumentFindFlags ...flags) {
        if (accessible(expr,from,flags)) {
            int val = Arrays.stream(flags)
                    .filter(Objects::nonNull)
                    .mapToInt(TextDocumentFindFlags::getVal)
                    .reduce((a,b)->a|b)
                    .orElse(0);
            long pointer = document.findRegularExpression(getPointer(),expr.getPointer(),from,val);
            if (pointer > 0) {
                return TextCursor.asTextCursor(pointer);
            }
        }
        return null;
    }

    public TextCursor findRegularExpression(RegularExpression expr, TextCursor cursor,TextDocumentFindFlags ...flags) {
        if (accessible(expr,cursor,flags)) {

            int val = Arrays.stream(flags)
                    .filter(Objects::nonNull)
                    .mapToInt(TextDocumentFindFlags::getVal)
                    .reduce((a,b)->a|b)
                    .orElse(0);

            long pointer = document.findRegularExpression(getPointer(),expr.getPointer(),cursor.getPointer(),val);
            if (pointer > 0) {
                return TextCursor.asTextCursor(pointer);
            }
        }
        return null;
    }

    public TextFrame frameAt(int pos) {
        if (accessible()) {
            long pointer = document.frameAt(getPointer(),pos);
            if (pointer > 0) {
                return TextFrame.asTextFrame(pointer);
            }
        }
        return null;
    }

    public TextFrame rootFrame() {
        if (accessible()) {
            long pointer = document.rootFrame(getPointer());
            if (pointer > 0) {
                return TextFrame.asTextFrame(pointer);
            }
        }
        return null;
    }

    public TextBlock findBlock(int pos) {
        if (accessible()) {
            long pointer = document.findBlock(getPointer(),pos);
            if (pointer > 0) {
                return TextBlock.asTextBlock(pointer);
            }
        }
        return null;
    }

    public TextBlock findBlockByNumber(int blockNumber) {
        if (accessible()) {
            long pointer = document.findBlockByNumber(getPointer(),blockNumber);
            if (pointer > 0) {
                return TextBlock.asTextBlock(pointer);
            }
        }
        return null;
    }

    public TextBlock findBlockByLineNumber(int blockNumber) {
        if (accessible()) {
            long pointer = document.findBlockByLineNumber(getPointer(),blockNumber);
            if (pointer > 0) {
                return TextBlock.asTextBlock(pointer);
            }
        }
        return null;
    }

    public TextBlock begin() {
        if (accessible()) {
            long pointer = document.begin(getPointer());
            if (pointer > 0) {
                return TextBlock.asTextBlock(pointer);
            }
        }
        return null;
    }

    public TextBlock end() {
        if (accessible()) {
            long pointer = document.end(getPointer());
            if (pointer > 0) {
                return TextBlock.asTextBlock(pointer);
            }
        }
        return null;
    }

    public TextBlock getFirstBlock() {
        if (accessible()) {
            long pointer = document.firstBlock(getPointer());
            if (pointer > 0) {
                return TextBlock.asTextBlock(pointer);
            }
        }
        return null;
    }

    public TextBlock getLastBlock() {
        if (accessible()) {
            long pointer = document.lastBlock(getPointer());
            if (pointer > 0) {
                return TextBlock.asTextBlock(pointer);
            }
        }
        return null;
    }

    public void setPageSize(RealSize size) {
        if (accessible(size)) {
            document.setPageSize(getPointer(),size.getPointer());
        }
    }

    public RealSize getPageSize() {
        if (accessible()) {
            long pointer = document.pageSize(getPointer());
            if (pointer > 0) {
                return RealSize.asRealSize(pointer);
            }
        }
        return null;
    }

    public void setDefaultFont(Font font) {
        if (accessible(font)) {
            document.setDefaultFont(getPointer(),font.getPointer());
        }
    }

    public Font getDefaultFont() {
        if (accessible()) {
            long pointer = document.defaultFont(getPointer());
            if (pointer > 0) {
                return Font.asFont(pointer);
            }
        }
        return null;
    }

    public int pageCount() {
        if (accessible()) {
            return document.pageCount(getPointer());
        }
        return 0;
    }

    public boolean isModified() {
        if (accessible()) {
            return document.isModified(getPointer());
        }
        return false;
    }

    public Variant getResource(TextDocumentResource type, String name) {
        if (accessible(type,name)) {
            long pointer = document.resource(getPointer(),type.getVal(),name);
            if (pointer > 0) {
                return Variant.asVariant(pointer);
            }
        }
        return null;
    }

    public void addResource(TextDocumentResource type,String name,Variant variantResource) {
        if (accessible(type,name,variantResource)) {
            document.addResource(getPointer(),type.getVal(),name,variantResource.getPointer());
        }
    }

    public List<TextFormat> allFormats() {
        if (accessible()) {
            return Arrays
                    .stream(document.allFormats(getPointer()))
                    .filter(Objects::nonNull)
                    .filter(p -> p > 0)
                    .mapToObj(TextFormat::asTextFormat)
                    .collect(Collectors.toList());
        }
        return Collections.emptyList();
    }

    public void markContentsDirty(int from, int length) {
        if (accessible()) {
            document.markContentsDirty(getPointer(),from,length);
        }
    }

    public void setUseDesignMetrics(boolean b) {
        if (accessible()) {
            document.setUseDesignMetrics(getPointer(),b);
        }
    }

    public boolean isUseDesignMetrics() {
        if (accessible()) {
            return document.useDesignMetrics(getPointer());
        }
        return false;
    }

    public void drawContents(Painter painter, RealRect rect) {
        if (accessible(painter,rect)) {
            document.drawContents(getPointer(),painter.getPointer(),rect.getPointer());
        }
    }

    public void setTextWidth(double width) {
        if (accessible()) {
            document.setTextWidth(getPointer(),width);
        }
    }

    public double getTextWidth() {
        if (accessible()) {
            return document.textWidth(getPointer());
        }
        return 0;
    }

    public double getIdealWidth() {
        if (accessible()) {
            return document.idealWidth(getPointer());
        }
        return 0;
    }

    public double getIndentWidth() {
        if (accessible()) {
            return document.indentWidth(getPointer());
        }
        return 0;
    }

    public void setIndentWidth(double width) {
        if (accessible()) {
            document.setIndentWidth(getPointer(),width);
        }
    }

    public double getDocumentMargin() {
        if (accessible()) {
            return document.documentMargin(getPointer());
        }
        return 0;
    }

    public void setDocumentMargin(double margin) {
        if (accessible()) {
            document.setDocumentMargin(getPointer(),margin);
        }
    }

    public void adjustSize() {
        if (accessible()) {
            document.adjustSize(getPointer());
        }
    }

    public RealSize size() {
        if (accessible()) {
            long pointer = document.size(getPointer());
            if (pointer > 0) {
                return RealSize.asRealSize(pointer);
            }
        }
        return null;
    }

    public int getBlockCount() {
        if (accessible()) {
            return document.blockCount(getPointer());
        }
        return 0;
    }

    public int getLineCount() {
        if (accessible()) {
            return document.lineCount(getPointer());
        }
        return 0;
    }

    public int getCharacterCount() {
        if (accessible()) {
            return document.characterCount(getPointer());
        }
        return 0;
    }

    @Override
    public void dispose() {
        if (accessible()) {
            document.dispose(getPointer());
        }
    }

    @Override
    public long getPointer() {
        return document.address();
    }

    public static TextDocument asTextDocument(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("can not wrap a document, invalid pointer");
        }
        TextDocument document = new TextDocument();
        document.document.address(pointer);
        MemoryHolder.allocated(document);
        return document;
    }

    @Override
    public Consumer<Long> disposer() {
        return STextDocument.CLEANER;
    }
}
