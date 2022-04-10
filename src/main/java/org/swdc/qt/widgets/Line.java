package org.swdc.qt.widgets;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.internal.common.SLine;

public class Line implements NativeAllocated {

    private SLine line = new SLine();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = line.create();
        if (pointer <= 0) {
            throw new Exception("can not create a line");
        }
        line.address(pointer);
    }

    private void wrap(long pointer) {
        if (accessible()) {
            return;
        }
        if (pointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        line.address(pointer);
    }

    public Point p1() {
        if (accessible()) {
            long pointer = line.p1(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Point.asPoint(pointer);
        }
        return null;
    }


    public Point p2() {
        if (accessible()) {
            long pointer = line.p2(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Point.asPoint(pointer);
        }
        return null;
    }

    public int x1() {
        if (accessible()) {
            return line.x1(getPointer());
        }
        return 0;
    }

    public int y1() {
        if (accessible()) {
            return line.y1(getPointer());
        }
        return 0;
    }

    public int x2() {
        if (accessible()) {
            return line.x2(getPointer());
        }
        return 0;
    }

    public int y2() {
        if (accessible()) {
            return line.y2(getPointer());
        }
        return 0;
    }

    public int dx(){
        if (accessible()) {
            return line.dx(getPointer());
        }
        return 0;
    }

    public int dy() {
        if (accessible()) {
            return line.dy(getPointer());
        }
        return 0;
    }

    public void translate(Point point){
        if (accessible(point)) {
            line.translate(getPointer(),point.getPointer());
        }
    }

    public void translate(int dx, int dy){
        if (accessible()) {
            line.translate(getPointer(),dx,dy);
        }
    }

    public Line translated(Point point) {
        if (accessible(point)) {
            long pointer = line.translated(getPointer(),point.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Line.asLine(pointer);
        }
        return null;
    }

    public Line translated(int dx, int dy) {
        if (accessible() ) {
            long pointer = line.translated(getPointer(),dx,dy);
            if (pointer <= 0) {
                return null;
            }
            return Line.asLine(pointer);
        }
        return null;
    }

    public Point center(){
        if (accessible()) {
            long pointer = line.center(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Point.asPoint(pointer);
        }
        return null;
    }

    public void setP1(Point point) {
        if (accessible(point)) {
            line.setP1(getPointer(),point.getPointer());
        }
    }

    public void setP2(Point point) {
        if (accessible(point)) {
            line.setP2(getPointer(),point.getPointer());
        }
    }

    public void setPoints(Point point1, Point point2){
        if (accessible(point1,point2)) {
            line.setPoints(getPointer(),point1.getPointer(),point2.getPointer());
        }
    }

    public void setLine(int x1, int y1, int x2, int y2) {
        if (accessible()) {
            line.setLine(getPointer(),x1,y1,x2,y2);
        }
    }

    public void dispose() {
        if (accessible()) {
            line.dispose(getPointer());
            line.cleanAddress();
        }
    }

    public long getPointer() {
        return line.address();
    }

    public static Line asLine(long nativePointer) {
        if (nativePointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        Line line = new Line();
        line.wrap(nativePointer);
        return line;
    }

}
