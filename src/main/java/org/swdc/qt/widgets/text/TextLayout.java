package org.swdc.qt.widgets.text;

import org.swdc.qt.internal.text.STextLayout;
import org.swdc.qt.widgets.RealPoint;
import org.swdc.qt.widgets.RealRect;
import org.swdc.qt.widgets.graphics.Font;
import org.swdc.qt.widgets.graphics.Painter;

import java.util.*;
import java.util.stream.Collectors;

public class TextLayout {

    private STextLayout layout = new STextLayout();

    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = layout.create();
        if (getPointer() <= 0) {
            throw new Exception("can not create a text-layout");
        }
        layout.address(pointer);
    }

    public void allocate(String text) throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = layout.create(text);
        if (getPointer() <= 0) {
            throw new Exception("can not create a text-layout");
        }
        layout.address(pointer);
    }

    public void dispose() {
        if (getPointer() > 0) {
            layout.dispose(getPointer());
            layout.cleanAddress();
        }
    }

    public long getPointer() {
        return layout.address();
    }

    public void setFont(Font font) {
        if (getPointer() > 0 && font == null && font.getPointer() > 0) {
            layout.setFont(getPointer(),font.getPointer());
        }
    }

    public Font getFont() {
        if (getPointer() > 0) {
            long pointer = layout.font(getPointer());
            if (pointer > 0) {
                return Font.asFont(pointer);
            }
        }
        return null;
    }

    public void setText(String string) {
        if (getPointer() > 0) {
            layout.setText(getPointer(),string);
        }
    }

    public String getText() {
        if (getPointer() > 0) {
            return layout.text(getPointer());
        }
        return null;
    }

    public void setTextOption(TextOption option) {
        if (getPointer() > 0 && option != null && option.getPointer() > 0) {
            layout.setTextOption(getPointer(),option.getPointer());
        }
    }

    public TextOption getTextOption() {
        if (getPointer() > 0) {
            long pointer = layout.textOption(getPointer());
            if (pointer > 0) {
                return TextOption.asTextOption(pointer);
            }
        }
        return null;
    }

    public void setPreEditArea(int position, String text) {
        if (getPointer() > 0) {
            layout.setPreeditArea(getPointer(),position,text);
        }
    }

    public int getPreEditAreaPosition() {
        if (getPointer() > 0) {
            return layout.preeditAreaPosition(getPointer());
        }
        return 0;
    }

    public String getPreEditAreaText() {
        if (getPointer() > 0) {
            return layout.preeditAreaText(getPointer());
        }
        return null;
    }

    public void setFormats(List<TextLayoutFormatRange> formatRanges) {
        if (getPointer() > 0 && formatRanges != null && formatRanges.size() > 0) {
            layout.setFormats(getPointer(),formatRanges
                    .stream()
                    .filter(Objects::nonNull)
                    .mapToLong(TextLayoutFormatRange::getPointer)
                    .filter(l->l > 0)
                    .toArray());
        }
    }

    public List<TextLayoutFormatRange> formats() {
        if (getPointer() <= 0) {
            return Collections.emptyList();
        }
        long[] arr = layout.formats(getPointer());
        return Arrays.stream(arr)
                .filter(l -> l > 0)
                .mapToObj(TextLayoutFormatRange::asTextLayoutFormatRange)
                .collect(Collectors.toList());
    }

    public void clearFormats() {
        if (getPointer() > 0) {
            layout.clearFormats(getPointer());
        }
    }

    public void setCacheEnabled(boolean enable) {
        if (getPointer() > 0) {
            layout.setCacheEnabled(getPointer(),enable);
        }
    }

    public boolean getCacheEnabled() {
        if (getPointer() > 0) {
            return layout.cacheEnabled(getPointer());
        }
        return false;
    }

    public void setCursorMoveStyle(TextCursorMoveStyle style) {
        if (getPointer() > 0) {
            layout.setCursorMoveStyle(getPointer(),style.getVal());
        }
    }

    public TextCursorMoveStyle getCursorMoveStyle() {
        if (getPointer() > 0) {
            int val = layout.cursorMoveStyle(getPointer());
            return TextCursorMoveStyle.valueOf(val);
        }
        return null;
    }

    public void beginLayout(){
        if (getPointer() > 0) {
            layout.beginLayout(getPointer());
        }
    }

    public void endLayout() {
        if (getPointer() > 0) {
            layout.endLayout(getPointer());
        }
    }

    public void clearLayout() {
        if (getPointer() > 0) {
            layout.clearLayout(getPointer());
        }
    }

    public TextLine createLine() {
        if (getPointer() > 0){
            long pointer = layout.createLine(getPointer());
            if (pointer > 0 ) {
                return TextLine.asTextLine(pointer);
            }
        }
        return null;
    }

    public int getLineCount() {
        if (getPointer() > 0) {
            return layout.lineCount(getPointer());
        }
        return 0;
    }

    public TextLine getLineAt(int i) {
        if (getPointer() > 0) {
            long pointer = layout.lineAt(getPointer(),i);
            if (pointer > 0) {
                return TextLine.asTextLine(pointer);
            }
        }
        return null;
    }

    public TextLine getLineForTextPosition(int pos) {
        if (getPointer() > 0) {
            long pointer = layout.lineForTextPosition(getPointer(),pos);
            if (pointer > 0) {
                return TextLine.asTextLine(pointer);
            }
        }
        return null;
    }

    public boolean isValidCursorPosition(int pos) {
        if (getPointer() > 0) {
            return layout.isValidCursorPosition(getPointer(),pos);
        }
        return false;
    }

    public int nextCursorPosition(int oldPos, TextLayoutCursorMode mode) {
        if (getPointer() > 0) {
            return layout.nextCursorPosition(getPointer(),oldPos,mode.getVal());
        }
        return 0;
    }

    public int previousCursorPosition(int oldPos,TextLayoutCursorMode mode) {
        if (getPointer() > 0) {
            return layout.previousCursorPosition(getPointer(),oldPos,mode.getVal());
        }
        return 0;
    }

    public int leftCursorPosition(int oldPos){
        if (getPointer() > 0) {
            return layout.leftCursorPosition(getPointer(),oldPos);
        }
        return 0;
    }

    public int rightCursorPosition(int oldPos) {
        if (getPointer() > 0) {
            return layout.rightCursorPosition(getPointer(),oldPos);
        }
        return 0;
    }

    public void draw(Painter painter, RealPoint pos, List<TextLayoutFormatRange> selections, RealRect clip) {
        if (getPointer() <= 0) {
            return;
        }
        if (pos == null || pos.getPointer() <= 0) {
            return;
        }
        if (painter == null || painter.getPointer() > 0) {
            return;
        }
        if (selections == null) {
            selections = new ArrayList<>();
        }
        if (clip == null || clip.getPointer() <= 0) {
            try {
                clip = new RealRect();
                clip.allocate();
            } catch (Exception e) {
                return;
            }
        }
        layout.draw(
                getPointer(),
                painter.getPointer(),
                pos.getPointer(),
                selections.stream()
                        .filter(Objects::nonNull)
                        .mapToLong(TextLayoutFormatRange::getPointer)
                        .filter(l -> l > 0)
                        .toArray(),
                clip.getPointer()
        );
    }

    public void drawCursor(Painter painter,RealPoint pos, int cursorPosition) {
        if (getPointer() <= 0) {
            return;
        }
        if (painter == null || painter.getPointer() <= 0) {
            return;
        }
        if (pos == null || pos.getPointer() <= 0) {
            return;
        }
        layout.drawCursor(
                getPointer(),
                painter.getPointer(),
                pos.getPointer(),
                cursorPosition
        );
    }

    public void drawCursor(Painter painter,RealPoint pos, int cursorPosition, int width) {
        if (getPointer() <= 0) {
            return;
        }
        if (painter == null || painter.getPointer() <= 0) {
            return;
        }
        if (pos == null || pos.getPointer() <= 0) {
            return;
        }
        layout.drawCursor(
                getPointer(),
                painter.getPointer(),
                pos.getPointer(),
                cursorPosition,
                width
        );
    }

    public RealPoint getPosition() {
        if (getPointer() > 0) {
            long pointer = layout.position(getPointer());
            if (pointer > 0) {
                return RealPoint.asRealPoint(pointer);
            }
        }
        return null;
    }

    public void setPosition(RealPoint position){
        if (getPointer() > 0 && position != null && position.getPointer() > 0) {
            layout.setPosition(getPointer(),position.getPointer());
        }
    }

    public RealRect getBoundingRect() {
        if (getPointer() > 0) {
            long pointer = layout.boundingRect(getPointer());
            if (pointer > 0) {
                return RealRect.asRealRect(pointer);
            }
        }
        return null;
    }

    public double getMinimumWidth(){
        if (getPointer() > 0) {
            return layout.minimumWidth(getPointer());
        }
        return 0;
    }

    public double getMaximumWidth() {
        if (getPointer() > 0) {
            return layout.maximumWidth(getPointer());
        }
        return 0;
    }

    public static TextLayout asTextLayout(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("can not wrap text-layout because the pointer is invalid");
        }
        TextLayout layout = new TextLayout();
        layout.layout.address(pointer);
        return layout;
    }

}
