package org.swdc.qt.widgets;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.internal.common.SRealRect;

public class RealRect implements NativeAllocated {

    private SRealRect rect = new SRealRect();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = rect.create();
        if (pointer <= 0) {
            throw new Exception("fail to create rect");
        }
        rect.address(pointer);
    }

    public void allocate(double left,double top,double width, double height) throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = rect.create(left,top,width,height);
        if (pointer <= 0) {
            throw new Exception("fail to create rect");
        }
        rect.address(pointer);
    }

    private void wrap(long nativePointer) {
        if (accessible()) {
            return;
        }
        if (nativePointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        rect.address(nativePointer);
    }

    public RealSize getSize() {
        if (accessible()) {
            long pointer = rect.size(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return RealSize.asRealSize(pointer);
        }
        return null;
    }

    public void setSize(RealSize size) {
        if (accessible(size)) {
            rect.setSize(getPointer(),size.getPointer());
        }
    }

    public RealRect marginsAdded(RealMargins margins) {
        if (accessible(margins)) {
            long pointer = rect.marginsAdded(getPointer(),margins.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return RealRect.asRealRect(pointer);
        }
        return null;
    }

    public RealRect marginsRemoved(RealMargins margins) {
        if (accessible(margins)) {
            long pointer = rect.marginsRemoved(getPointer(),margins.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return RealRect.asRealRect(pointer);
        }
        return null;
    }


    public void setTopLeft(RealPoint point){
        if (accessible(point)) {
            rect.setTopLeft(getPointer(),point.getPointer());
        }
    }

    public void setBottomRight(RealPoint point) {
        if (accessible(point)) {
            rect.setBottomRight(getPointer(),point.getPointer());
        }
    }

    public void setTopRight(RealPoint point) {
        if (accessible(point)) {
            rect.setTopRight(getPointer(),point.getPointer());
        }
    }

    public void setBottomLeft(RealPoint point) {
        if (accessible(point)) {
            rect.setBottomLeft(getPointer(),point.getPointer());
        }
    }

    public RealPoint getTopLeft() {
        if (accessible()) {
            long pointer = rect.topLeft(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return RealPoint.asRealPoint(pointer);
        }
        return null;
    }

    public RealPoint getBottomRight() {
        if (accessible()) {
            long pointer = rect.bottomRight(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return RealPoint.asRealPoint(pointer);
        }
        return null;
    }

    public RealPoint getTopRight() {
        if (accessible()) {
            long pointer = rect.topRight(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return RealPoint.asRealPoint(pointer);
        }
        return null;
    }

    public RealPoint getBottomLeft() {
        if (accessible()) {
            long pointer = rect.bottomLeft(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return RealPoint.asRealPoint(pointer);
        }
        return null;
    }

    public RealPoint getCenter() {
        if (accessible()){
            long pointer = rect.center(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return RealPoint.asRealPoint(pointer);
        }
        return null;
    }


    public void moveTopLeft(RealPoint point) {
        if (accessible(point)) {
            rect.moveTopLeft(getPointer(),point.getPointer());
        }
    }

    public void moveBottomRight(RealPoint point) {
        if (accessible(point)) {
            rect.moveBottomRight(getPointer(),point.getPointer());
        }
    }

    public void moveTopRight(RealPoint point) {
        if (accessible(point)) {
            rect.moveTopRight(getPointer(),point.getPointer());
        }
    }

    public void moveBottomLeft(RealPoint point) {
        if (accessible(point)) {
            rect.moveBottomLeft(getPointer(),point.getPointer());
        }
    }

    public void moveCenter(RealPoint point) {
        if (accessible(point)) {
            rect.moveCenter(getPointer(),point.getPointer());
        }
    }

    public void moveTo(RealPoint point) {
        if (accessible(point)) {
            rect.moveTo(getPointer(),point.getPointer());
        }
    }

    public boolean isEmpty() {
        if (accessible()) {
            return rect.isEmpty(getPointer());
        }
        return false;
    }

    public boolean isValid() {
        if (accessible()) {
            return rect.isValid(getPointer());
        }
        return false;
    }

    public double left() {
        if (accessible()) {
            return rect.left(getPointer());
        }
        return 0;
    }

    public double top() {
        if (accessible()) {
            return rect.top(getPointer());
        }
        return 0;
    }

    public double right(){
        if (accessible()) {
            return rect.right(getPointer());
        }
        return 0;
    }

    public double bottom() {
        if (accessible()) {
            return rect.bottom(getPointer());
        }
        return 0;
    }

    public RealRect normalized() {
        if (accessible()) {
            long pointer = rect.normalized(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return RealRect.asRealRect(pointer);
        } else {
            return null;
        }
    }

    public double x() {
        if (accessible()) {
            return rect.x(getPointer());
        }
        return 0;
    }

    public double y() {
        if (accessible()) {
            return rect.y(getPointer());
        }
        return 0;
    }

    public void setLeft(double pos) {
        if (accessible()) {
            rect.setLeft(getPointer(),pos);
        }
    }

    public void setTop(double pos) {
        if (accessible()) {
            rect.setTop(getPointer(),pos);
        }
    }

    public void setRight(double pos) {
        if (accessible()) {
            rect.setRight(getPointer(),pos);
        }
    }

    public void setBottom(double pos) {
        if (accessible()) {
            rect.setBottom(getPointer(),pos);
        }
    }

    public void setX(double x) {
        if (accessible()) {
            rect.setX(getPointer(),x);
        }
    }

    public void setY(double y) {
        if (accessible()) {
            rect.setY(getPointer(),y);
        }
    }

    public void moveLeft(double pos) {
        if (accessible()) {
            rect.moveLeft(getPointer(),pos);
        }
    }

    public void moveTop(double pos) {
        if (accessible()) {
            rect.moveTop(getPointer(),pos);
        }
    }

    public void moveRight(double pos){
        if (accessible()) {
            rect.moveRight(getPointer(),pos);
        }
    }

    public void moveBottom(double pos) {
        if (accessible()) {
            rect.moveBottom(getPointer(),pos);
        }
    }

    public void translate(double dx, double dy) {
        if (accessible()) {
            rect.translate(getPointer(),dx,dy);
        }
    }

    public RealRect transposed() {
        if (accessible()) {
            long pointer = rect.transposed(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return asRealRect(pointer);
        } else {
            return null;
        }
    }

    public void moveTo(int x, int t){
        if (accessible()) {
            rect.moveTo(getPointer(),x,t);
        }
    }

    public void adjust(double x1, double y1, double x2, double y2) {
        if (accessible()) {
            rect.adjust(getPointer(),x1,y1,x2,y2);
        }
    }

    public double width() {
        if (accessible()) {
            return rect.width(getPointer());
        }
        return 0;
    }

    public double height() {
        if (accessible()) {
            return rect.height(getPointer());
        }
        return 0;
    }

    public void setWidth(double w) {
        if (accessible()) {
            rect.setWidth(getPointer(),w);
        }
    }

    public void setHeight(double h) {
        if (accessible()) {
            rect.setHeight(getPointer(),h);
        }
    }

    public boolean contains(RealRect anotherRect){
        if (accessible(anotherRect)) {
            return rect.contains(getPointer(),anotherRect.getPointer());
        }
        return false;
    }

    public boolean contains(double x, double y) {
        if (accessible()) {
            return rect.contains(getPointer(),x,y);
        }
        return false;
    }


    public boolean intersects(RealRect anotherRect) {
        if (accessible(anotherRect)){
            return rect.intersects(getPointer(),anotherRect.getPointer());
        }
        return false;
    }

    public long getPointer() {
        return rect.address();
    }

    public void dispose() {
        if (accessible()) {
            rect.dispose(getPointer());
            rect.cleanAddress();
        }
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        Rect rect1 = (Rect) o;
        return rect1.getPointer() == this.getPointer();
    }

    @Override
    public int hashCode() {
        return Long.hashCode(rect.address());
    }

    public static RealRect asRealRect(long nativePointer) {
        if (nativePointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        RealRect rect = new RealRect();
        rect.wrap(nativePointer);
        return rect;
    }

    @Override
    public String toString() {
        return "RealRect{" +
                " x = " + x() +
                ", y = " + y() +
                ", width = " + width() +
                ", height = " + height() +
                '}';
    }

}
