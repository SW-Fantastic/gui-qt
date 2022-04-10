package org.swdc.qt.widgets.text;

import org.apache.commons.lang3.tuple.ImmutablePair;
import org.swdc.qt.NativeAllocated;
import org.swdc.qt.beans.LayoutDirection;
import org.swdc.qt.internal.text.STextFormat;
import org.swdc.qt.widgets.Variant;
import org.swdc.qt.widgets.graphics.Brush;
import org.swdc.qt.widgets.graphics.Color;
import org.swdc.qt.widgets.graphics.Pen;

import java.util.*;
import java.util.stream.Collectors;

public class TextFormat implements NativeAllocated {

    private STextFormat format = new STextFormat();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = format.create();
        if (pointer <= 0) {
            throw new Exception("can not create a text-format because invalid pointer");
        }
        format.address(pointer);
    }

    public void allocate(TextFormatType type) throws Exception {
        if (accessible()) {
            return;
        }
        if (type == null) {
            throw new Exception("can not create a text-format because the type is null");
        }
        long pointer = format.create(type.getVal());
        if (pointer <= 0) {
            throw new Exception("can not create a text-format because invalid pointer");
        }
        format.address(pointer);
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


    public void merge(TextFormat other) {
        if (accessible(other)) {
            format.merge(getPointer(),other.getPointer());
        }
    }

    public boolean isValid() {
        if (accessible()) {
            return format.isValid(getPointer());
        }
        return false;
    }

    public boolean isEmpty() {
        if (accessible()) {
            return format.isEmpty(getPointer());
        }
        return false;
    }

    public TextFormatType type(){
        if (accessible()){
            int val = format.type(getPointer());
            return TextFormatType.valueOf(val);
        }
        return null;
    }

    public int objectIndex() {
        if (accessible()) {
            return format.objectIndex(getPointer());
        }
        return 0;
    }

    public void setObjectIndex(int index) {
        if (accessible()) {
            format.setObjectIndex(getPointer(),index);
        }
    }

    public Variant property(TextFormatProperty propertyId) {
        if (accessible()) {
            long pointer = format.property(getPointer(),propertyId.getVal());
            if (pointer > 0) {
                return Variant.asVariant(pointer);
            }
        }
        return null;
    }

    public void setProperty(TextFormatProperty propertyId,Variant value) {
        if (accessible(propertyId,value)) {
            format.setProperty(getPointer(),propertyId.getVal(),value.getPointer());
        }
    }

    public void clearProperty(TextFormatProperty propertyId) {
        if (accessible(propertyId)) {
            format.clearProperty(getPointer(),propertyId.getVal());
        }
    }

    public boolean hasProperty(TextFormatProperty propertyId) {
        if (accessible(propertyId)) {
            return format.hasProperty(getPointer(),propertyId.getVal());
        }
        return false;
    }

    public boolean boolProperty(TextFormatProperty propertyId) {
        if (accessible(propertyId)) {
            return format.boolProperty(getPointer(),propertyId.getVal());
        }
        return false;
    }

    public int intProperty(TextFormatProperty propertyId) {
        if (accessible(propertyId)) {
            return format.intProperty(getPointer(),propertyId.getVal());
        }
        return 0;
    }

    public double doubleProperty(TextFormatProperty propertyId) {
        if (accessible(propertyId)) {
            return format.doubleProperty(getPointer(),propertyId.getVal());
        }
        return 0;
    }

    public String stringProperty(TextFormatProperty propertyId) {
        if (accessible(propertyId)) {
            return format.stringProperty(getPointer(),propertyId.getVal());
        }
        return null;
    }

    public Color colorProperty(TextFormatProperty propertyId) {
        if (accessible(propertyId)) {
            long color = format.colorProperty(getPointer(),propertyId.getVal());
            if (color > 0) {
                Color val = new Color();
                val.allocate(color);
                return val;
            }
        }
        return null;
    }

    public Pen penProperty(TextFormatProperty propertyId) {
        if (accessible(propertyId)) {
            long pointer = format.penProperty(getPointer(),propertyId.getVal());
            if (pointer > 0) {
                return Pen.asPen(pointer);
            }
        }
        return null;
    }

    public Brush brushProperty(TextFormatProperty propertyId) {
        if (accessible(propertyId)) {
            long pointer = format.brushProperty(getPointer(),propertyId.getVal());
            if (pointer > 0) {
                return Brush.asBrush(pointer);
            }
        }
        return null;
    }

    public TextLength lengthProperty(TextFormatProperty propertyId) {
        if (accessible(propertyId)) {
            long pointer = format.lengthProperty(getPointer(),propertyId.getVal());
            if (pointer > 0) {
                return TextLength.asTextLength(pointer);
            }
        }
        return null;
    }

    public List<TextLength> lengthVectorProperty(TextFormatProperty propertyId) {
        if (accessible(propertyId)) {
            long[] lengths = format.lengthVectorProperty(getPointer(),propertyId.getVal());
            return Arrays.stream(lengths)
                    .filter(Objects::nonNull)
                    .filter(l -> l > 0)
                    .mapToObj(TextLength::asTextLength)
                    .collect(Collectors.toList());
        }
        return Collections.emptyList();
    }

    public void setProperty(TextFormatProperty propertyId, List<TextLength> textLengths) {
        if (accessible(propertyId,textLengths)) {
            long[] lengs = textLengths
                    .stream()
                    .filter(Objects::nonNull)
                    .mapToLong(TextLength::getPointer)
                    .filter(l -> l > 0)
                    .toArray();
            format.setProperty(getPointer(),propertyId.getVal(),lengs);
        }
    }

    public Map<TextFormatProperty,Variant> properties(){
        if (accessible()) {
            ImmutablePair<Integer,Long>[] pairs = format.properties(getPointer());
            return Arrays.stream(pairs).filter(Objects::nonNull)
                    .filter(p -> p.getRight() > 0 && p.getLeft() >= 0)
                    .collect(Collectors.toMap(
                                    p -> TextFormatProperty.valueOf(p.getLeft()),
                                    p -> Variant.asVariant(p.getRight())
                    ));
        }
        return Collections.emptyMap();
    }

    public int propertyCount() {
        if (accessible()) {
            return format.propertyCount(getPointer());
        }
        return 0;
    }

    public void setObjectType(TextFormatType type) {
        if (accessible(type)) {
            format.setObjectType(getPointer(),type.getVal());
        }
    }

    public TextFormatType objectType() {
        if (accessible()) {
            int val = format.objectType(getPointer());
            return TextFormatType.valueOf(val);
        }
        return null;
    }

    public boolean isCharFormat() {
        if (accessible()) {
            return format.isCharFormat(getPointer());
        }
        return false;
    }

    public boolean isBlockFormat() {
        if (accessible()) {
            return format.isBlockFormat(getPointer());
        }
        return false;
    }

    public boolean isListFormat() {
        if (accessible()) {
            return format.isListFormat(getPointer());
        }
        return false;
    }

    public boolean isFrameFormat() {
        if (accessible()) {
            return format.isFrameFormat(getPointer());
        }
        return false;
    }

    public boolean isImageFormat() {
        if (accessible()) {
            return format.isImageFormat(getPointer());
        }
        return false;
    }

    public boolean isTableFormat() {
        if (accessible()) {
            return format.isTableFormat(getPointer());
        }
        return false;
    }

    public boolean isTableCellFormat() {
        if (accessible()) {
            return format.isTableCellFormat(getPointer());
        }
        return false;
    }

    public TextBlockFormat toBlockFormat() {
        if (accessible()) {
            long pointer = format.toBlockFormat(getPointer());
            if (pointer > 0) {
                return TextBlockFormat.asTextBlockFormat(pointer);
            }
        }
        return null;
    }

    public TextCharFormat toCharFormat() {
        if (accessible()) {
            long pointer = format.toCharFormat(getPointer());
            if (pointer > 0) {
                return TextCharFormat.asTextCharFormat(pointer);
            }
        }
        return null;
    }

    public TextListFormat toListFormat() {
        if (accessible()) {
            long pointer = format.toListFormat(getPointer());
            if (pointer > 0) {
                return TextListFormat.asTextListFormat(pointer);
            }
        }
        return null;
    }

    public TextTableFormat toTableFormat(){
        if (accessible()) {
            long pointer = format.toTableFormat(getPointer());
            if (pointer > 0) {
                return TextTableFormat.asTextTableFormat(pointer);
            }
        }
        return null;
    }

    public TextFrameFormat toFrameFormat() {
        if (accessible()) {
            long pointer = format.toFrameFormat(getPointer());
            if (pointer > 0) {
                return TextFrameFormat.asTextFrameFormat(getPointer());
            }
        }
        return null;
    }

    public TextImageFormat toImageFormat() {
        if (accessible()) {
            long pointer = format.toImageFormat(getPointer());
            if (pointer > 0) {
                return TextImageFormat.asTextImageFormat(pointer);
            }
        }
        return null;
    }

    public TextTableCellFormat toTableCellFormat() {
        if (accessible()) {
            long pointer = format.toTableCellFormat(getPointer());
            if (pointer > 0) {
                return TextTableCellFormat.asTextTableCellFormat(pointer);
            }
        }
        return null;
    }

    public void setLayoutDirection(LayoutDirection direction){
        if (accessible(direction)) {
            format.setLayoutDirection(getPointer(),direction.getVal());
        }
    }

    public LayoutDirection getLayoutDirection() {
        if (accessible()) {
            int val = format.layoutDirection(getPointer());
            return LayoutDirection.valueOf(val);
        }
        return null;
    }

    public void setBackground(Brush brush) {
        if (accessible(brush)) {
            format.setBackground(getPointer(),brush.getPointer());
        }
    }

    public Brush getBackground(){
        if (accessible()) {
            long pointer = format.background(getPointer());
            if (pointer > 0) {
                return Brush.asBrush(pointer);
            }
        }
        return null;
    }

    public void clearBackground() {
        if (accessible()) {
            format.clearBackground(getPointer());
        }
    }

    public void setForeground(Brush brush) {
        if (accessible(brush)) {
            format.setForeground(getPointer(),brush.getPointer());
        }
    }
    public Brush getForeground() {
        if (accessible()) {
            long pointer = format.foreground(getPointer());
            if (pointer > 0) {
                return Brush.asBrush(pointer);
            }
        }
        return null;
    }

    public void clearForeground() {
        if (accessible()) {
            format.clearForeground(getPointer());
        }
    }

    public static TextFormat asTextFormat(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("can not create a text-format , invalid pointer");
        }
        TextFormat format = new TextFormat();
        format.format.address(pointer);
        return format;
    }

}
