package org.swdc.qt.widgets.text;

import org.swdc.qt.beans.Alignment;
import org.swdc.qt.internal.text.STextTableFormat;

import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Objects;
import java.util.stream.Collectors;

public class TextTableFormat extends TextFrameFormat {

    private STextTableFormat tableFormat = new STextTableFormat();

    public static TextTableFormat asTextTableFormat(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("can not create table format, invalid pointer");
        }
        TextTableFormat format = new TextTableFormat();
        format.tableFormat.address(pointer);
        return format;
    }

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = tableFormat.create();
        if (pointer <= 0) {
            throw new Exception("can not create a table format");
        }
        tableFormat.address(pointer);
    }

    @Override
    public void allocate(TextFormatType type) throws Exception {
        throw new Exception("please call the allocator without parameter");
    }

    @Override
    public void dispose() {
        if (accessible()) {
            tableFormat.dispose(getPointer());
            tableFormat.cleanAddress();
        }
    }

    @Override
    public long getPointer() {
        return tableFormat.address();
    }

    public int columns() {
        if (accessible()) {
            return tableFormat.columns(getPointer());
        }
        return 0;
    }

    public void setColumnWidthConstraints(List<TextLength> constraints){
        if (accessible()){
            tableFormat.setColumnWidthConstraints(getPointer(), constraints
                    .stream()
                    .filter(Objects::nonNull)
                    .mapToLong(TextLength::getPointer)
                    .toArray()
            );
        }
    }

    public List<TextLength> columnWidthConstraints() {
        if (accessible()) {
            long [] vals = tableFormat.columnWidthConstraints(getPointer());
            if (vals == null || vals.length == 0) {
                return Collections.emptyList();
            }
            return Arrays.stream(vals)
                    .filter(l -> l > 0)
                    .mapToObj(TextLength::asTextLength)
                    .collect(Collectors.toList());
        }
        return Collections.emptyList();
    }

    public void clearColumnWidthConstraints() {
        if (accessible()) {
            tableFormat.clearColumnWidthConstraints(getPointer());
        }
    }

    public double cellSpacing() {
        if (accessible()) {
            return tableFormat.cellSpacing(getPointer());
        }
        return 0;
    }

    public void setCellSpacing(double spacing) {
        if (accessible()) {
            tableFormat.setCellSpacing(getPointer(),spacing);
        }
    }

    public double cellPadding() {
        if (accessible()) {
            return tableFormat.cellPadding(getPointer());
        }
        return 0;
    }

    public void setCellPadding(double padding) {
        if (accessible()) {
            tableFormat.setCellPadding(getPointer(),padding);
        }
    }

    public void setAlignment(Alignment alignment){
        if (accessible()) {
            tableFormat.setAlignment(getPointer(),alignment.getFlagValue());
        }
    }

    public Alignment getAlignment() {
        if (accessible()) {
            long align = tableFormat.alignment(getPointer());
            return Alignment.valueOf(align);
        }
        return null;
    }

    public void setHeaderRowCount(int count) {
        if (accessible()) {
            tableFormat.setHeaderRowCount(getPointer(),count);
        }
    }

    public int headerRowCount() {
        if (accessible()) {
            return tableFormat.headerRowCount(getPointer());
        }
        return 0;
    }

    public void setBorderCollapse(boolean borderCollapse) {
        if (accessible()) {
            tableFormat.setBorderCollapse(getPointer(),borderCollapse);
        }
    }

    public boolean getBorderCollapse() {
        if (accessible()) {
            return tableFormat.borderCollapse(getPointer());
        }
        return false;
    }


}
