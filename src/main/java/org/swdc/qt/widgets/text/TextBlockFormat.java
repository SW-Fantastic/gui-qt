package org.swdc.qt.widgets.text;

import org.swdc.qt.beans.*;
import org.swdc.qt.internal.text.STextBlockFormat;

import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Objects;
import java.util.stream.Collectors;

public class TextBlockFormat extends TextFormat {

    private STextBlockFormat format = new STextBlockFormat();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = format.create();
        if (pointer <= 0) {
            throw new Exception("can not create a block-format");
        }
        format.address(pointer);
    }

    @Override
    public void allocate(TextFormatType type) throws Exception {
        throw new Exception("please call the allocator without parameter");
    }

    public void dispose() {
        if (accessible()) {
            format.dispose(getPointer());
        }
    }

    public long getPointer() {
        return format.address();
    }

    public boolean isValid(){
        if (accessible()) {
            return format.isValid(getPointer());
        }
        return false;
    }

    public void setAlignment(Alignment alignment) {
        if (accessible()) {
            format.setAlignment(getPointer(),alignment.getFlagValue());
        }
    }

    public Alignment getAlignment() {
        if (accessible()) {
            long align = format.alignment(getPointer());
            return Alignment.valueOf(align);
        }
        return null;
    }

    public void setTopMargin(double margin) {
        if (accessible()) {
            format.setTopMargin(getPointer(),margin);
        }
    }

    public double getTopMargin() {
        if (accessible()) {
            return format.topMargin(getPointer());
        }
        return 0;
    }

    public void setBottomMargin(double margin) {
        if (accessible()) {
            format.setBottomMargin(getPointer(),margin);
        }
    }

    public double getBottomMargin() {
        if (accessible()) {
            return format.bottomMargin(getPointer());
        }
        return 0;
    }

    public void setLeftMargin(double margin) {
        if (accessible()) {
            format.setLeftMargin(getPointer(),margin);
        }
    }

    public double getLeftMargin() {
        if (accessible()) {
            return format.leftMargin(getPointer());
        }
        return 0;
    }

    public void setRightMargin(double margin) {
        if (accessible()) {
            format.setRightMargin(getPointer(),margin);
        }
    }

    public double getRightMargin() {
        if(accessible()) {
            return format.rightMargin(getPointer());
        }
        return 0;
    }

    public void setTextIndent(double aindent) {
        if (accessible()) {
            format.setTextIndent(getPointer(),aindent);
        }
    }

    public double getTextIndent() {
        if (accessible()) {
            return format.textIndent(getPointer());
        }
        return 0;
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

    public void setHeadingLevel(int alevel) {
        if (accessible()) {
            format.setHeadingLevel(getPointer(),alevel);
        }
    }

    public int headingLevel() {
        if (accessible()) {
            return format.headingLevel(getPointer());
        }
        return 0;
    }

    public void setLineHeight(double height, TextBlockLineHeightTypes heightType) {
        if (accessible()) {
            format.setLineHeight(getPointer(),height,heightType.getVal());
        }
    }

    public double getLineHeight(double scriptLineHeight, double scaling) {
        if (accessible()) {
            return format.lineHeight(getPointer(),scriptLineHeight,scaling);
        }
        return 0;
    }

    public double getLineHeight() {
        if (accessible()) {
            return format.lineHeight(getPointer());
        }
        return 0;
    }

    public TextBlockLineHeightTypes getLineHeightType() {
        if (accessible()) {
            int val = format.lineHeightType(getPointer());
            return TextBlockLineHeightTypes.valueOf(val);
        }
        return null;
    }

    public void setNonBreakableLines(boolean b) {
        if (accessible())  {
            format.setNonBreakableLines(getPointer(),b);
        }
    }

    public boolean getNonBreakableLines() {
        if (accessible()) {
            return format.nonBreakableLines(getPointer());
        }
        return false;
    }

    public void setPageBreakPolicy(TextFormatPageBreakFlag ...flags) {
        if (accessible() && flags != null && flags.length > 0) {
            int flag = flags[0].getVal();
            for (int idx = 1; idx < flags.length; idx ++) {
                flag = flag | flags[idx].getVal();
            }
            format.setPageBreakPolicy(getPointer(),flag);
        }
    }

    public void setTabPositions(List<TextOptionTab> tabs) {
        if (accessible(tabs)) {
            format.setTabPositions(getPointer(),tabs
                    .stream()
                    .filter(Objects::nonNull)
                    .mapToLong(TextOptionTab::getPointer)
                    .filter(l -> l > 0)
                    .toArray()
            );
        }
    }

    public List<TextOptionTab> getTabPositions(){
        if (accessible()) {
            long[] arr = format.tabPositions(getPointer());
            if (arr != null && arr.length > 0) {
                return Arrays.stream(arr).filter(l -> l > 0)
                        .mapToObj(TextOptionTab::asTextOptionTab)
                        .collect(Collectors.toList());
            }
        }
        return Collections.emptyList();
    }

    public void setMarker(TextBlockMarkerType marker) {
        if (accessible(marker)) {
            format.setMarker(getPointer(),marker.getVal());
        }
    }

    public TextBlockMarkerType getMarker() {
        if (accessible()) {
            int val = format.marker(getPointer());
            return TextBlockMarkerType.valueOf(val);
        }
        return null;
    }

    public static TextBlockFormat asTextBlockFormat(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("can not wrap text-block-format invalid pointer!");
        }
        TextBlockFormat blockFormat = new TextBlockFormat();
        blockFormat.format.address(pointer);
        return blockFormat;
    }

}
