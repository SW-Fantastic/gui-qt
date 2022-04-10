package org.swdc.qt.widgets.text;

import org.swdc.qt.internal.text.STextFrameFormat;
import org.swdc.qt.widgets.graphics.Brush;

public class TextFrameFormat extends TextFormat {

    private STextFrameFormat format = new STextFrameFormat();

    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = format.create();
        if (pointer <= 0) {
            throw new Exception("can not create a text-frame, invalid pointer");
        }
        format.address(pointer);
    }

    @Override
    public void allocate(TextFormatType type) throws Exception {
        throw new Exception("please call the allocator without parameter");
    }

    public void dispose() {
        if (getPointer() > 0) {
            format.dispose(getPointer());
        }
    }

    public long getPointer() {
        return format.address();
    }

    public void setPosition(int f) {
        if (getPointer() > 0) {
            format.setPosition(getPointer(),f);
        }
    }

    public int position() {
        if (getPointer() > 0) {
            return format.position(getPointer());
        }
        return 0;
    }

    public void setBorder(double border) {
        if (getPointer() > 0) {
            format.setBorder(getPointer(),border);
        }
    }

    public double getBorder() {
        if (getPointer() > 0) {
            return format.border(getPointer());
        }
        return 0;
    }

    public void setBorderBrush(Brush brush) {
        if (getPointer() > 0 && brush != null && brush.getPointer() > 0) {
            format.setBorderBrush(getPointer(),brush.getPointer());
        }
    }

    public Brush getBorderBrush() {
        if (getPointer() > 0) {
            long pointer = format.borderBrush(getPointer());
            if (pointer > 0) {
                return Brush.asBrush(pointer);
            }
        }
        return null;
    }

    public void setBorderStyle(TextFrameBorderStyle style) {
        if (getPointer() > 0 && style != null) {
            format.setBorderStyle(getPointer(),style.getVal());
        }
    }

    public TextFrameBorderStyle getBorderStyle() {
        if (getPointer() > 0) {
            int val = format.borderStyle(getPointer());
            return TextFrameBorderStyle.valueOf(val);
        }
        return null;
    }

    public void setMargin(double margin) {
        if (getPointer() > 0) {
            format.setMargin(getPointer(),margin);
        }
    }

    public double getMargin() {
        if (getPointer() > 0) {
            return format.margin(getPointer());
        }
        return 0;
    }

    public void setTopMargin(double margin) {
        if (getPointer() > 0) {
            format.setTopMargin(getPointer(),margin);
        }
    }

    public double getTopMargin() {
        if (getPointer() > 0) {
            return format.topMargin(getPointer());
        }
        return 0;
    }

    public void setBottomMargin(double margin) {
        if (getPointer() > 0) {
            format.setBottomMargin(getPointer(),margin);
        }
    }

    public double getBottomMargin() {
        if (getPointer() > 0) {
            return format.bottomMargin(getPointer());
        }
        return 0;
    }

    public void setLeftMargin(double margin) {
        if (getPointer() > 0) {
            format.setLeftMargin(getPointer(),margin);
        }
    }

    public double getLeftMargin() {
        if (getPointer() > 0) {
            return format.leftMargin(getPointer());
        }
        return 0;
    }

    public void setRightMargin(double margin) {
        if (getPointer() > 0) {
            format.setRightMargin(getPointer(),margin);
        }
    }

    public double getRightMargin() {
        if (getPointer() > 0) {
            return format.rightMargin(getPointer());
        }
        return 0;
    }

    public void setPadding(double padding){
        if (getPointer() > 0) {
            format.setPadding(getPointer(),padding);
        }
    }

    public double getPadding() {
        if (getPointer() > 0 ) {
            return format.padding(getPointer());
        }
        return 0;
    }

    public void setWidth(double width) {
        if (getPointer() > 0) {
            format.setWidth(getPointer(),width);
        }
    }

    public void setWidth(TextLength length) {
        if (getPointer() > 0 && length != null && length.getPointer() > 0) {
            format.setWidth(getPointer(),length.getPointer());
        }
    }

    public TextLength width() {
        if (getPointer() > 0) {
            long pointer = format.width(getPointer());
            if (pointer > 0) {
                return TextLength.asTextLength(pointer);
            }
        }
        return null;
    }

    public void setHeight(double height) {
        if (getPointer() > 0) {
            format.setHeight(getPointer(),height);
        }
    }

    public void setHeight(TextLength height) {
        if (getPointer() > 0 && height != null && height.getPointer() > 0) {
            format.setHeight(getPointer(),height.getPointer());
        }
    }

    public TextLength getHeight() {
        if (getPointer() > 0) {
            long pointer = format.height(getPointer());
            if (pointer > 0) {
                return TextLength.asTextLength(pointer);
            }
        }
        return null;
    }

    public void setPageBreakPolicy(TextFormatPageBreakFlag ...flags){
        if (getPointer() > 0 && flags.length > 0) {
            int val = flags[0].getVal();
            if (flags.length > 1 ) {
                for (int idx = 1; idx < flags.length; idx ++) {
                    val = val | flags[idx].getVal();
                }
            }
            format.setPageBreakPolicy(getPointer(),val);
        }
    }

    public static TextFrameFormat asTextFrameFormat(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("can not create a text-frame-format, invalid pointer");
        }
        TextFrameFormat frameFormat = new TextFrameFormat();
        frameFormat.format.address(pointer);
        return frameFormat;
    }
}
