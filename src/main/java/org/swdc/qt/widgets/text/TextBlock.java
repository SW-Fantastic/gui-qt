package org.swdc.qt.widgets.text;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.beans.LayoutDirection;
import org.swdc.qt.internal.text.STextBlock;
import org.swdc.qt.internal.text.STextBlockIterator;

import java.util.Arrays;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.stream.Collectors;

public class TextBlock implements Iterable<TextBlock>, NativeAllocated {

    public static class TextBlockIterator implements Iterator<TextBlock> {

        private STextBlockIterator iterator;

        TextBlockIterator(STextBlockIterator block) {
            this.iterator = block;
        }

        @Override
        public boolean hasNext() {
            if (iterator == null) {
                return false;
            }
            return iterator.hasNext();
        }

        @Override
        public TextBlock next() {
            if (iterator == null) {
                return null;
            }
            return asTextBlock(iterator.next());
        }
    }

    private STextBlock block = new STextBlock();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = block.create();
        if (pointer <= 0) {
            throw new Exception("can not create a block");
        }
        block.address(pointer);
    }

    @Override
    public void dispose() {
        if (accessible()) {
            block.dispose(getPointer());
        }
    }

    public boolean isValid() {
        if (accessible() ) {
            return block.isValid(getPointer());
        }
        return false;
    }

    public int getPosition() {
        if (accessible()) {
            return block.position(getPointer());
        }
        return 0;
    }

    public int length() {
        if (accessible()) {
            return block.length(getPointer());
        }
        return 0;
    }

    public boolean contains(int position) {
        if (accessible()) {
            return block.contains(getPointer(),position);
        }
        return false;
    }

    public TextLayout getLayout() {
        if (accessible()) {
            long pointer = block.layout(getPointer());
            if (pointer > 0) {
                return TextLayout.asTextLayout(pointer);
            }
        }
        return null;
    }

    public void clearLayout(){
        if (accessible()) {
            block.clearLayout(getPointer());
        }
    }

    public TextBlockFormat getBlockFormat() {
        if (accessible()) {
            long pointer = block.blockFormat(getPointer());
            if (pointer > 0) {
                return TextBlockFormat.asTextBlockFormat(pointer);
            }
        }
        return null;
    }

    public int getBlockFormatIndex() {
        if (accessible() ) {
            return block.blockFormatIndex(getPointer());
        }
        return 0;
    }

    public TextCharFormat getCharFormat() {
        if (accessible()) {
            long pointer = block.charFormat(getPointer());
            if (pointer > 0 ){
                return TextCharFormat.asTextCharFormat(pointer);
            }
        }
        return null;
    }

    public int getCharFormatIndex() {
        if (accessible()) {
            return block.charFormatIndex(getPointer());
        }
        return 0;
    }

    public LayoutDirection getTextDirection() {
        if (accessible()) {
            int val = block.textDirection(getPointer());
            return LayoutDirection.valueOf(val);
        }
        return null;
    }

    public String getText() {
        if (accessible()) {
            return block.text(getPointer());
        }
        return null;
    }

    public List<TextLayoutFormatRange> getTextFormats() {
        if (accessible()) {
            long[] ranges = block.textFormats(getPointer());
            if (ranges != null && ranges.length > 0) {
                return Arrays.stream(ranges)
                        .filter(l -> l > 0)
                        .mapToObj(TextLayoutFormatRange::asTextLayoutFormatRange)
                        .collect(Collectors.toList());
            }
        }
        return Collections.emptyList();
    }

    public TextDocument getDocument() {
        if (accessible()) {
            long pointer = block.document(getPointer());
            return TextDocument.asTextDocument(pointer);
        }
        return null;
    }

    public TextList getTextList() {
        if (accessible()) {
            long pointer = block.textList(getPointer());
            if (pointer > 0) {
                return TextList.asTextList(pointer);
            }
        }
        return null;
    }

    public int getUserState() {
        if (accessible()) {
            return block.userState(getPointer());
        }
        return 0;
    }

    public void setUserState(int state) {
        if (accessible()) {
            block.setUserState(getPointer(),state);
        }
    }

    public int getRevision() {
        if (accessible()) {
            return block.revision(getPointer());
        }
        return 0;
    }

    public void setRevision(int rev) {
        if (accessible()) {
            block.setRevision(getPointer(),rev);
        }
    }

    public boolean isVisible(){
        if (accessible()) {
            return block.isVisible(getPointer());
        }
        return false;
    }

    public void setVisible(boolean visible) {
        if (accessible()) {
            block.setVisible(getPointer(),visible);
        }
    }

    public int getBlockNumber() {
        if (accessible()) {
            return block.blockNumber(getPointer());
        }
        return 0;
    }

    public int firstLineNumber() {
        if (accessible()) {
            return block.firstLineNumber(getPointer());
        }
        return 0;
    }

    public void setLineCount(int count) {
        if (accessible()) {
            block.setLineCount(getPointer(),count);
        }
    }

    public int getLineCount() {
        if (accessible()) {
            return block.lineCount(getPointer());
        }
        return 0;
    }

    public TextBlock next() {
        if (accessible()) {
            long pointer = block.next(getPointer());
            if (pointer > 0) {
                return asTextBlock(pointer);
            }
        }
        return null;
    }

    public TextBlock previous() {
        if (accessible()) {
            long pointer = block.previous(getPointer());
            if (pointer > 0) {
                return asTextBlock(pointer);
            }
        }
        return null;
    }

    @Override
    public Iterator<TextBlock> iterator() {
        if (accessible()) {
            STextBlockIterator iter = block.iterator();
            if (iter != null) {
                return new TextBlockIterator(iter);
            }
        }
        return new TextBlockIterator(null);
    }

    @Override
    public long getPointer() {
        return block.address();
    }

    public static TextBlock asTextBlock(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("can not wrap a text-block because pointer is invalid");
        }
        TextBlock block = new TextBlock();
        block.block.address(pointer);
        return block;
    }

}
