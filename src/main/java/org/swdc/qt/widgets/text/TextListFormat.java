package org.swdc.qt.widgets.text;

import org.swdc.qt.internal.text.STextListFormat;

public class TextListFormat extends TextFormat {

    private STextListFormat format = new STextListFormat();

    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = format.create();
        if (pointer <= 0) {
            throw new Exception("can not create a textlist-format");
        }
        format.address(pointer);
    }

    @Override
    public void allocate(TextFormatType type) throws Exception {
        throw new Exception("please call the allocator without parameter");
    }


    @Override
    public void dispose() {
        if (accessible()) {
            format.dispose(getPointer());
        }
    }

    @Override
    public long getPointer() {
        return format.address();
    }

    public void setStyle(TextListFormatStyle style) {
        if (accessible()) {
            format.setStyle(getPointer(),style.getVal());
        }
    }

    public TextListFormatStyle getStyle() {
        if (accessible()) {
            int style = format.style(getPointer());
            return TextListFormatStyle.valueOf(style);
        }
        return null;
    }

    public void setIndent(int indent) {
        if (accessible()) {
            format.setIndent(getPointer(),indent);
        }
    }

    public int getIndent() {
        if (accessible()) {
            return format.indent(getPointer());
        }
        return 0;
    }

    public void setNumberPrefix(String numberPrefix) {
        if (accessible()) {
            format.setNumberPrefix(getPointer(),numberPrefix);
        }
    }

    public String getNumberPrefix() {
        if (accessible()) {
            return format.numberPrefix(getPointer());
        }
        return null;
    }

    public void setNumberSuffix(String numberSuffix) {
        if (accessible()) {
            format.setNumberSuffix(getPointer(),numberSuffix);
        }
    }

    public String getNumberSuffix() {
        if (accessible()) {
            return format.numberSuffix(getPointer());
        }
        return null;
    }

    public static TextListFormat asTextListFormat(long pointer ){
        if (pointer <= 0) {
            throw new RuntimeException("can not wrap text-list, because the pointer invalid");
        }
        TextListFormat format = new TextListFormat();
        format.format.address(pointer);
        return format;
    }

}
