package org.swdc.qt.widgets;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.common.SRect;

import java.util.function.Consumer;

public class Rect implements NativeAllocated {

    private SRect rect = new SRect();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = rect.create();
        if (pointer <= 0) {
            throw new Exception("fail to create rect");
        }
        rect.address(pointer);
        MemoryHolder.allocated(this);
    }

    public void allocate(int left,int top,int width, int height) throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = rect.create(left,top,width,height);
        if (pointer <= 0) {
            throw new Exception("fail to create rect");
        }
        rect.address(pointer);
        MemoryHolder.allocated(this);
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

    public Size getSize() {
        if (accessible()) {
            long pointer = rect.size(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public void setSize(Size size) {
        if (accessible(size)) {
            rect.setSize(getPointer(),size.getPointer());
        }
    }

    public Rect marginsAdded(Margins margins) {
        if (accessible(margins)) {
            long pointer = rect.marginsAdded(getPointer(),margins.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Rect.asRect(pointer);
        }
        return null;
    }

    public Rect marginsRemoved(Margins margins) {
        if (accessible(margins)) {
            long pointer = rect.marginsRemoved(getPointer(),margins.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Rect.asRect(pointer);
        }
        return null;
    }


    public void setTopLeft(Point point){
        if (accessible(point)) {
            rect.setTopLeft(getPointer(),point.getPointer());
        }
    }

    public void setBottomRight(Point point) {
        if (accessible(point)) {
            rect.setBottomRight(getPointer(),point.getPointer());
        }
    }

    public void setTopRight(Point point) {
        if (accessible(point)) {
            rect.setTopRight(getPointer(),point.getPointer());
        }
    }

    public void setBottomLeft(Point point) {
        if (accessible(point)) {
            rect.setBottomLeft(getPointer(),point.getPointer());
        }
    }

    public Point getTopLeft() {
        if (accessible()) {
            long pointer = rect.topLeft(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Point.asPoint(pointer);
        }
        return null;
    }

    public Point getBottomRight() {
        if (accessible()) {
            long pointer = rect.bottomRight(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Point.asPoint(pointer);
        }
        return null;
    }

    public Point getTopRight() {
        if (accessible()) {
            long pointer = rect.topRight(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Point.asPoint(pointer);
        }
        return null;
    }

    public Point getBottomLeft() {
        if (accessible()) {
            long pointer = rect.bottomLeft(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Point.asPoint(pointer);
        }
        return null;
    }

    public Point getCenter() {
        if (accessible()){
            long pointer = rect.center(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Point.asPoint(pointer);
        }
        return null;
    }


    public void moveTopLeft(Point point) {
        if (accessible(point)) {
            rect.moveTopLeft(getPointer(),point.getPointer());
        }
    }

    public void moveBottomRight(Point point) {
        if (accessible(point)) {
            rect.moveBottomRight(getPointer(),point.getPointer());
        }
    }

    public void moveTopRight(Point point) {
        if (accessible(point)) {
            rect.moveTopRight(getPointer(),point.getPointer());
        }
    }

    public void moveBottomLeft(Point point) {
        if (accessible(point)) {
            rect.moveBottomLeft(getPointer(),point.getPointer());
        }
    }

    public void moveCenter(Point point) {
        if (accessible(point)) {
            rect.moveCenter(getPointer(),point.getPointer());
        }
    }

    public void moveTo(Point point) {
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

    public int left() {
        if (accessible()) {
            return rect.left(getPointer());
        }
        return 0;
    }

    public int top() {
        if (accessible()) {
            return rect.top(getPointer());
        }
        return 0;
    }

    public int right(){
        if (accessible()) {
            return rect.right(getPointer());
        }
        return 0;
    }

    public int bottom() {
        if (accessible()) {
            return rect.bottom(getPointer());
        }
        return 0;
    }

    public Rect normalized() {
        if (accessible()) {
            long pointer = rect.normalized(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Rect.asRect(pointer);
        } else {
            return null;
        }
    }

    public int x() {
        if (accessible()) {
            return rect.x(getPointer());
        }
        return 0;
    }

    public int y() {
        if (accessible()) {
            return rect.y(getPointer());
        }
        return 0;
    }

    public void setLeft(int pos) {
        if (accessible()) {
            rect.setLeft(getPointer(),pos);
        }
    }

    public void setTop(int pos) {
        if (accessible()) {
            rect.setTop(getPointer(),pos);
        }
    }

    public void setRight(int pos) {
        if (accessible()) {
            rect.setRight(getPointer(),pos);
        }
    }

    public void setBottom(int pos) {
        if (accessible()) {
            rect.setBottom(getPointer(),pos);
        }
    }

    public void setX(int x) {
        if (accessible()) {
            rect.setX(getPointer(),x);
        }
    }

    public void setY(int y) {
        if (accessible()) {
            rect.setY(getPointer(),y);
        }
    }

    public void moveLeft(int pos) {
        if (accessible()) {
            rect.moveLeft(getPointer(),pos);
        }
    }

    public void moveTop(int pos) {
        if (accessible()) {
            rect.moveTop(getPointer(),pos);
        }
    }

    public void moveRight(int pos){
        if (accessible()) {
            rect.moveRight(getPointer(),pos);
        }
    }

    public void moveBottom(int pos) {
        if (accessible()) {
            rect.moveBottom(getPointer(),pos);
        }
    }

    public void translate(int dx, int dy) {
        if (accessible()) {
            rect.translate(getPointer(),dx,dy);
        }
    }

    public Rect transposed() {
        if (accessible()) {
            long pointer = rect.transposed(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Rect.asRect(pointer);
        } else {
            return null;
        }
    }

    public void moveTo(int x, int t){
        if (accessible()) {
            rect.moveTo(getPointer(),x,t);
        }
    }

    public void adjust(int x1, int y1, int x2, int y2) {
        if (accessible()) {
            rect.adjust(getPointer(),x1,y1,x2,y2);
        }
    }

    public int width() {
        if (accessible()) {
            return rect.width(getPointer());
        }
        return 0;
    }

    public int height() {
        if (accessible()) {
            return rect.height(getPointer());
        }
        return 0;
    }

    public void setWidth(int w) {
        if (accessible()) {
            rect.setWidth(getPointer(),w);
        }
    }

    public void setHeight(int h) {
        if (accessible()) {
            rect.setHeight(getPointer(),h);
        }
    }

    public boolean contains(Rect anotherRect, boolean proper){
        if (accessible(anotherRect,proper)) {
            return rect.contains(getPointer(),anotherRect.getPointer(),proper);
        }
        return false;
    }

    public boolean contains(int x, int y) {
        if (accessible()) {
            return rect.contains(getPointer(),x,y);
        }
        return false;
    }

    public boolean contains(int x, int y, boolean proper) {
        if (accessible()) {
            return rect.contains(getPointer(),x,y,proper);
        }
        return false;
    }

    public boolean intersects(Rect anotherRect) {
        if (accessible(anotherRect)){
            return rect.intersects(getPointer(),anotherRect.getPointer());
        }
        return false;
    }

    public long getPointer() {
        return rect.address();
    }

    @Override
    public Consumer<Long> disposer() {
        return SRect.CLEANER;
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

    public static Rect asRect(long nativePointer) {
        if (nativePointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        Rect rect = new Rect();
        rect.wrap(nativePointer);
        MemoryHolder.allocated(rect);
        return rect;
    }

    @Override
    public String toString() {
        return "Rect{" +
                " x = " + x() +
                ", y = " + y() +
                ", width = " + width() +
                ", height = " + height() +
                '}';
    }
}
