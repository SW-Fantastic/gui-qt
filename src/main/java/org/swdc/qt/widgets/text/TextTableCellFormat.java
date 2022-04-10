package org.swdc.qt.widgets.text;

import org.swdc.qt.internal.text.STextTableCellFormat;
import org.swdc.qt.widgets.graphics.Brush;

public class TextTableCellFormat extends TextCharFormat {

    private STextTableCellFormat format = new STextTableCellFormat();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = format.create();
        if (pointer <= 0) {
            throw new Exception("can not create a text-table-cell-format, invalid pointer");
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
            format.cleanAddress();
        }
    }

    @Override
    public long getPointer() {
        return format.address();
    }

    public void setTopPadding(double padding) {
        if (accessible()) {
            format.setTopPadding(getPointer(),padding);
        }
    }

    public double getTopPadding() {
        if (accessible()) {
            return format.topPadding(getPointer());
        }
        return 0;
    }

    public void setBottomPadding(double padding) {
        if (accessible()) {
            format.setBottomPadding(getPointer(),padding);
        }
    }

    public double getBottomPadding() {
        if (accessible()) {
            return format.bottomPadding(getPointer());
        }
        return 0;
    }

    public void setLeftPadding(double padding) {
        if (getPointer() > 0) {
            format.setLeftPadding(getPointer(),padding);
        }
    }

    public double getLeftPadding() {
        if (accessible()) {
            return format.leftPadding(getPointer());
        }
        return 0;
    }

    public void setRightPadding(double padding) {
        if (accessible()) {
            format.setRightPadding(getPointer(),padding);
        }
    }

    public double getRightPadding() {
        if (accessible()) {
            return format.rightBorder(getPointer());
        }
        return 0;
    }

    public void setPadding(double padding) {
        if (accessible()) {
            format.setPadding(getPointer(),padding);
        }
    }

    public void setTopBorder(double width) {
        if (accessible()) {
            format.setTopBorder(getPointer(),width);
        }
    }

    public double getTopBorder(){
        if (accessible()) {
            return format.topBorder(getPointer());
        }
        return 0;
    }

    public void setBottomBorder(double width) {
        if (accessible()) {
            format.setBottomBorder(getPointer(),width);
        }
    }

    public double getBottomBorder() {
        if (accessible()) {
            return format.bottomBorder(getPointer());
        }
        return 0;
    }

    public void setLeftBorder(double width) {
        if (accessible()) {
            format.setLeftBorder(getPointer(),width);
        }
    }

    public double getLeftBorder() {
        if (accessible()) {
            return format.leftBorder(getPointer());
        }
        return 0;
    }

    public void setRightBorder(double width) {
        if (accessible()) {
            format.setRightBorder(getPointer(),width);
        }
    }

    public double getRightBorder() {
        if (accessible()) {
            return format.rightBorder(getPointer());
        }
        return 0;
    }

    public void setBorder(double width) {
        if (accessible()) {
            format.setBorder(getPointer(),width);
        }
    }

    public void setTopBorderStyle(TextFrameBorderStyle style) {
        if (accessible(style)) {
            format.setTopBorderStyle(getPointer(),style.getVal());
        }
    }

    public TextFrameBorderStyle getTopBorderStyle() {
        if (accessible()) {
            int val = format.topBorderStyle(getPointer());
            return TextFrameBorderStyle.valueOf(val);
        }
        return null;
    }

    public void setBottomBorderStyle(TextFrameBorderStyle style) {
        if (accessible()) {
            format.setBottomBorderStyle(getPointer(),style.getVal());
        }
    }

    public TextFrameBorderStyle getBottomBorderStyle() {
        if (accessible()) {
            int val = format.bottomBorderStyle(getPointer());
            return TextFrameBorderStyle.valueOf(val);
        }
        return null;
    }

    public void setLeftBorderStyle(TextFrameBorderStyle style) {
        if (accessible()) {
            format.setLeftBorderStyle(getPointer(),style.getVal());
        }
    }

    public TextFrameBorderStyle getLeftBorderStyle() {
        if (accessible()) {
            int val = format.leftBorderStyle(getPointer());
            return TextFrameBorderStyle.valueOf(val);
        }
        return null;
    }

    public void setRightBorderStyle(TextFrameBorderStyle style) {
        if (accessible()) {
            format.setRightBorderStyle(getPointer(),style.getVal());
        }
    }

    public TextFrameBorderStyle getRightBorderStyle() {
        if (accessible()) {
            int style = format.rightBorderStyle(getPointer());
            return TextFrameBorderStyle.valueOf(style);
        }
        return null;
    }

    public void setBorderStyle(TextFrameBorderStyle style) {
        if (accessible()) {
            format.setBorderStyle(getPointer(),style.getVal());
        }
    }

    public void setTopBorderBrush(Brush brush) {
        if (accessible(brush)) {
            format.setTopBorderBrush(getPointer(),brush.getPointer());
        }
    }

    public Brush getTopBorderBrush() {
        if (accessible()) {
            long pointer = format.topBorderBrush(getPointer());
            if (pointer > 0) {
                return Brush.asBrush(pointer);
            }
        }
        return null;
    }

    public void setBottomBorderBrush(Brush brush) {
        if (accessible(brush)) {
            format.setBottomBorderBrush(getPointer(),brush.getPointer());
        }
    }

    public Brush getBottomBorderBrush() {
        if (accessible()) {
            long pointer = format.bottomBorderBrush(getPointer());
            if (pointer > 0) {
                return Brush.asBrush(pointer);
            }
        }
        return null;
    }

    public void setLeftBorderBrush(Brush brush){
        if (accessible(brush)) {
            format.setLeftBorderBrush(getPointer(),brush.getPointer());
        }
    }

    public Brush getLeftBorderBrush() {
        if (accessible()) {
            long pointer = format.leftBorderBrush(getPointer());
            if (pointer > 0) {
                return Brush.asBrush(pointer);
            }
        }
        return null;
    }

    public void setRightBorderBrush(Brush brush) {
        if (accessible(brush)) {
            format.setRightBorderBrush(getPointer(),brush.getPointer());
        }
    }

    public Brush getRightBorderBrush() {
        if (accessible()) {
            long pointer = format.rightBorderBrush(getPointer());
            if (pointer > 0) {
                return Brush.asBrush(pointer);
            }
        }
        return null;
    }

    public void setBorderBrush(Brush brush) {
        if (accessible(brush)) {
            format.setBorderBrush(getPointer(),brush.getPointer());
        }
    }

    public static TextTableCellFormat asTextTableCellFormat(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("can not create a text-table-cell-format, invalid pointer");
        }
        TextTableCellFormat format = new TextTableCellFormat();
        format.format.address(pointer);
        return format;
    }

}
