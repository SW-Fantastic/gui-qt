package org.swdc.qt.widgets.text;

import org.swdc.qt.internal.text.STextLayoutFormatRange;

public class TextLayoutFormatRange {

    private STextLayoutFormatRange range = new STextLayoutFormatRange();



    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = range.create();
        if (pointer <= 0) {
            throw new Exception("can not create a text-layout format-range");
        }
        range.address(pointer);
    }

    public void dispose() {
        if (getPointer() > 0) {
            range.dispose(getPointer());
            range.cleanAddress();
        }
    }

    public long getPointer() {
        return range.address();
    }

    public int getStart() {
        if (getPointer() > 0) {
            return range.start(getPointer());
        }
        return 0;
    }

    public void setStart(int val) {
        if (getPointer() > 0) {
            range.start(getPointer(),val);
        }
    }

    public int getLength() {
        if (getPointer() > 0) {
            return range.length(getPointer());
        }
        return 0;
    }

    public void setLength(int length) {
        if (getPointer() > 0) {
            range.length(getPointer(),length);
        }
    }

    public TextCharFormat getFormat() {
        if (getPointer() > 0) {
            long pointer = range.format(getPointer());
            if (pointer > 0) {
                return TextCharFormat.asTextCharFormat(pointer);
            }
        }
        return null;
    }
    public void setFormat(TextCharFormat format) {
        if (getPointer() > 0 && format != null && format.getPointer() > 0) {
            range.format(getPointer(),format.getPointer());
        }
    }

    public static TextLayoutFormatRange asTextLayoutFormatRange(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("can not wrap text-layout-format-range , invalid pointer");
        }
        TextLayoutFormatRange range = new TextLayoutFormatRange();
        range.range.address(pointer);
        return range;
    }

}
