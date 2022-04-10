package org.swdc.qt.widgets.text;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.internal.text.STextFrame;
import org.swdc.qt.internal.text.STextFrameIterItem;
import org.swdc.qt.internal.text.STextFrameIterator;

import java.util.*;
import java.util.stream.Collectors;

public class TextFrame implements Iterable<TextFrame.TextFrameIteratorItem>, NativeAllocated {

    public static class TextFrameIteratorItem {

        private STextFrameIterItem iterItem;

        TextFrameIteratorItem(STextFrameIterItem item) {
            this.iterItem = item;
        }

        public TextFrame getTextFrame() {
            return iterItem.getFramePointer() > 0 ? TextFrame.asTextFrame(iterItem.getFramePointer()) : null;
        }

        public TextBlock getTextBlock() {
            return iterItem.getBlockPointer() > 0 ? TextBlock.asTextBlock(iterItem.getBlockPointer()) : null;
        }

    }

    public static class TextFrameIterator implements Iterator<TextFrameIteratorItem> {

        private STextFrameIterator iterator;

        public TextFrameIterator(STextFrameIterator iterator) {
            this.iterator = iterator;
        }

        @Override
        public boolean hasNext() {
            if (iterator == null) {
                return false;
            }
            return iterator.hasNext();
        }

        @Override
        public TextFrameIteratorItem next() {
            if (iterator == null) {
                return null;
            }
            return new TextFrameIteratorItem(iterator.next());
        }
    }

    private STextFrame textFrame = new STextFrame();

    public void allocate(TextDocument document) throws Exception {
        if (accessible()) {
            return;
        }
        if (!accessible(document)) {
            throw new Exception("can not create a text frame because the document is null");
        }
        long pointer = textFrame.create(document.getPointer());
        if (pointer <= 0) {
            throw new Exception("can not create a textFrame because invalid pointer");
        }
        textFrame.address(pointer);
    }

    @Override
    public long getPointer() {
        return textFrame.address();
    }

    @Override
    public void dispose() {
        if (getPointer() > 0) {
            textFrame.dispose(getPointer());
            textFrame.cleanAddress();
        }
    }

    public void setFrameFormat(TextFrameFormat format) {
        if (getPointer() > 0 && format != null && format.getPointer() > 0) {
            textFrame.setFrameFormat(getPointer(),format.getPointer());
        }
    }

    public TextFrameFormat getFrameFormat() {
        if (getPointer() > 0 ) {
            long pointer = textFrame.frameFormat(getPointer());
            if (pointer > 0) {
                return TextFrameFormat.asTextFrameFormat(pointer);
            }
        }
        return null;
    }

    public TextCursor firstCursorPosition() {
        if (getPointer() > 0) {
            long pointer = textFrame.firstCursorPosition(getPointer());
            if (pointer >  0) {
                return TextCursor.asTextCursor(pointer);
            }
        }
        return null;
    }

    public TextCursor lastCursorPosition() {
        if (getPointer() > 0) {
            long pointer = textFrame.lastCursorPosition(getPointer());
            if (pointer > 0) {
                return TextCursor.asTextCursor(pointer);
            }
        }
        return null;
    }

    public int firstPosition() {
        if (getPointer() > 0) {
            return textFrame.firstPosition(getPointer());
        }
        return 0;
    }

    public int lastPosition() {
        if (getPointer() > 0) {
            return textFrame.lastPosition(getPointer());
        }
        return 0;
    }

    public List<TextFrame> getChildFrames() {
        if (getPointer() > 0) {
            long[] frames = textFrame.childFrames(getPointer());
            return Arrays.stream(frames)
                    .filter(Objects::nonNull)
                    .filter(f -> f > 0)
                    .mapToObj(TextFrame::asTextFrame)
                    .collect(Collectors.toList());
        }
        return Collections.emptyList();
    }

    public TextFrame getParentFrame() {
        if (getPointer() > 0 ) {
            long pointer = textFrame.parentFrame(getPointer());
            if (pointer > 0) {
                return TextFrame.asTextFrame(pointer);
            }
        }
        return null;
    }

    @Override
    public TextFrameIterator iterator() {
        if (getPointer() > 0) {
            STextFrameIterator iterator = textFrame.iterator();
            if (iterator != null) {
                return new TextFrameIterator(iterator);
            }
        }
        return new TextFrameIterator(null);
    }


    public static TextFrame asTextFrame(long pointer){
        if (pointer <= 0) {
            throw new RuntimeException("can not create a text-frame invalid pointer");
        }
        TextFrame frame = new TextFrame();
        frame.textFrame.address(pointer);
        return frame;
    }
}
