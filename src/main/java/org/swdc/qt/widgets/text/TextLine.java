package org.swdc.qt.widgets.text;

import org.swdc.qt.internal.text.STextLine;
import org.swdc.qt.widgets.RealPoint;
import org.swdc.qt.widgets.RealRect;
import org.swdc.qt.widgets.graphics.Painter;

public class TextLine {

    private STextLine line = new STextLine();

    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = line.create();
        if (pointer <= 0) {
            throw new Exception("can not create a text-line");
        }
        line.address(pointer);
    }

    public long getPointer() {
        return line.address();
    }

    public void dispose() {
        if (getPointer() > 0) {
            line.dispose(getPointer());
            line.cleanAddress();
        }
    }

    public boolean isValid() {
        if (getPointer() > 0) {
            return line.isValid(getPointer());
        }
        return false;
    }

    public RealRect getRect() {
        if (getPointer() > 0) {
            long pointer = line.rect(getPointer());
            if (pointer > 0) {
                return RealRect.asRealRect(pointer);
            }
        }
        return null;
    }

    public double getX() {
        if (getPointer() > 0) {
            return line.x(getPointer());
        }
        return 0;
    }

    public double getY() {
        if (getPointer() > 0) {
            return line.y(getPointer());
        }
        return 0;
    }

    public double getWidth() {
        if (getPointer() > 0) {
            return line.width(getPointer());
        }
        return 0;
    }

    public double getAscent() {
        if (getPointer() > 0) {
            return line.ascent(getPointer());
        }
        return 0;
    }

    public double getDescent(){
        if (getPointer() >0) {
            return line.descent(getPointer());
        }
        return 0;
    }

    public double getHeight() {
        if (getPointer() > 0) {
            return line.height(getPointer());
        }
        return 0;
    }

    public double getLeading() {
        if (getPointer() > 0) {
            return line.leading(getPointer());
        }
        return 0;
    }

    public void setLeadingIncluded(boolean included) {
        if (getPointer() > 0) {
            line.setLeadingIncluded(getPointer(),included);
        }
    }

    public boolean getLeadingIncluded() {
        if (getPointer() > 0) {
            return line.leadingIncluded(getPointer());
        }
        return false;
    }

    public double getNaturalTextWidth(){
        if (getPointer() > 0) {
            return line.naturalTextWidth(getPointer());
        }
        return 0;
    }

    public double getHorizontalAdvance() {
        if (getPointer() > 0) {
            return line.horizontalAdvance(getPointer());
        }
        return 0;
    }

    public RealRect getNaturalTextRect() {
        if (getPointer() >0) {
            long pointer = line.naturalTextRect(getPointer());
            if (pointer > 0) {
                return RealRect.asRealRect(pointer);
            }
        }
        return null;
    }

    public double cursorToX(int cursorPos, TextLineEdge edge) {
        if (getPointer() > 0) {
            return line.cursorToX(getPointer(),cursorPos,edge.getVal());
        }
        return 0;
    }

    public int xToCursor(double x, int cursorPos) {
        if (getPointer() > 0) {
            return line.xToCursor(getPointer(),x,cursorPos);
        }
        return 0;
    }

    public void setLineWidth(double width) {
        if (getPointer() > 0) {
            line.setLineWidth(getPointer(),width);
        }
    }

    public void setNumColumns(int columns) {
        if (getPointer() > 0) {
            line.setNumColumns(getPointer(),columns);
        }
    }

    public void setNumColumns(int columns, double alignmentWidth) {
        if (getPointer() >0) {
            line.setNumColumns(getPointer(),columns,alignmentWidth);
        }
    }

    public void setPosition(RealPoint pos) {
        if (getPointer() > 0 && pos != null && pos.getPointer() > 0) {
            line.setPosition(getPointer(),pos.getPointer());
        }
    }

    public RealPoint getPosition() {
        if (getPointer() > 0) {
            long pointer = line.position(getPointer());
            if (pointer > 0) {
                return RealPoint.asRealPoint(pointer);
            }
        }
        return null;
    }

    public int getTextStart() {
        if (getPointer() > 0) {
            return line.textStart(getPointer());
        }
        return 0;
    }

    public int getTextLength() {
        if (getPointer() > 0) {
            return line.textLength(getTextLength());
        }
        return 0;
    }

    public int getLineNumber() {
        if (getPointer() > 0 ) {
            return line.lineNumber(getPointer());
        }
        return 0;
    }

    public void draw(Painter painter, RealPoint point, TextLayoutFormatRange formatRange) {
        if (getPointer() <= 0) {
            return;
        }
        if (painter == null || painter.getPointer() <= 0) {
            return;
        }
        if (point == null && point.getPointer() <= 0) {
            return;
        }
        if (formatRange == null || formatRange.getPointer() <= 0) {
            return;
        }
        line.draw(
                getPointer(),
                painter.getPointer(),
                point.getPointer(),
                formatRange.getPointer()
        );
    }

    public static TextLine asTextLine(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("can not create a textline");
        }
        TextLine line = new TextLine();
        line.line.address(pointer);
        return line;
    }

}
