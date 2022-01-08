package org.swdc.qt.widgets;

import org.swdc.qt.internal.common.SRect;

import java.util.Objects;

public class Rect {

    private SRect rect = new SRect();

    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = rect.create();
        if (pointer <= 0) {
            throw new Exception("fail to create rect");
        }
        rect.address(pointer);
    }

    public void allocate(int left,int top,int width, int height) throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = rect.create(left,top,width,height);
        if (pointer <= 0) {
            throw new Exception("fail to create rect");
        }
        rect.address(pointer);
    }

    public void wrap(long nativePointer) throws Exception {
        if (getPointer() > 0) {
            return;
        }
        if (nativePointer <= 0) {
            throw new Exception("invalid pointer");
        }
        rect.address(nativePointer);
    }

    public boolean isEmpty() {
        if (getPointer() > 0) {
            return rect.isEmpty(getPointer());
        }
        return false;
    }

    public boolean isValid() {
        if (getPointer() > 0) {
            return rect.isValid(getPointer());
        }
        return false;
    }

    public int left() {
        if (getPointer() > 0) {
            return rect.left(getPointer());
        }
        return 0;
    }

    public int top() {
        if (getPointer() > 0) {
            return rect.top(getPointer());
        }
        return 0;
    }

    public int right(){
        if (getPointer() > 0) {
            return rect.right(getPointer());
        }
        return 0;
    }

    public int bottom() {
        if (getPointer() > 0) {
            return rect.bottom(getPointer());
        }
        return 0;
    }

    public Rect normalized() {
        if (getPointer() > 0) {
            long pointer = rect.normalized(getPointer());
            try {
                Rect rect = new Rect();
                rect.wrap(pointer);
                return rect;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        } else {
            return null;
        }
    }

    public int x() {
        if (getPointer() > 0) {
            return rect.x(getPointer());
        }
        return 0;
    }

    public int y() {
        if (getPointer() > 0) {
            return rect.y(getPointer());
        }
        return 0;
    }

    public void setLeft(int pos) {
        if (getPointer() > 0) {
            rect.setLeft(getPointer(),pos);
        }
    }

    public void setTop(int pos) {
        if (getPointer() > 0) {
            rect.setTop(getPointer(),pos);
        }
    }

    public void setRight(int pos) {
        if (getPointer() > 0) {
            rect.setRight(getPointer(),pos);
        }
    }

    public void setBottom(int pos) {
        if (getPointer() > 0) {
            rect.setBottom(getPointer(),pos);
        }
    }

    public void setX(int x) {
        if (getPointer() > 0) {
            rect.setX(getPointer(),x);
        }
    }

    public void setY(int y) {
        if (getPointer() > 0) {
            rect.setY(getPointer(),y);
        }
    }

    public void moveLeft(int pos) {
        if (getPointer() > 0) {
            rect.moveLeft(getPointer(),pos);
        }
    }

    public void moveTop(int pos) {
        if (getPointer() > 0) {
            rect.moveTop(getPointer(),pos);
        }
    }

    public void moveRight(int pos){
        if (getPointer() > 0) {
            rect.moveRight(getPointer(),pos);
        }
    }

    public void moveBottom(int pos) {
        if (getPointer() > 0) {
            rect.moveBottom(getPointer(),pos);
        }
    }

    public void translate(int dx, int dy) {
        if (getPointer() > 0) {
            rect.translate(getPointer(),dx,dy);
        }
    }

    public Rect transposed() {
        if (getPointer() > 0) {
            long pointer = rect.transposed(getPointer());
            if (pointer <= 0) {
                return null;
            }
            try {
                Rect rect = new Rect();
                rect.wrap(pointer);
                return rect;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        } else {
            return null;
        }
    }

    public void moveTo(int x, int t){
        if (getPointer() > 0) {
            rect.moveTo(getPointer(),x,t);
        }
    }

    public void adjust(int x1, int y1, int x2, int y2) {
        if (getPointer() > 0) {
            rect.adjust(getPointer(),x1,y1,x2,y2);
        }
    }

    public int width() {
        if (getPointer() > 0) {
            return rect.width(getPointer());
        }
        return 0;
    }

    public int height() {
        if (getPointer() > 0) {
            return rect.height(getPointer());
        }
        return 0;
    }

    public void setWidth(int w) {
        if (getPointer() > 0) {
            rect.setWidth(getPointer(),w);
        }
    }

    public void setHeight(int h) {
        if (getPointer() > 0) {
            rect.setHeight(getPointer(),h);
        }
    }

    public boolean contains(Rect anotherRect, boolean proper){
        if (getPointer() > 0) {
            return rect.contains(getPointer(),anotherRect.getPointer(),proper);
        }
        return false;
    }

    public boolean contains(int x, int y) {
        if (getPointer() > 0) {
            return rect.contains(getPointer(),x,y);
        }
        return false;
    }

    public boolean contains(int x, int y, boolean proper) {
        if (getPointer() > 0) {
            return rect.contains(x,y,proper);
        }
        return false;
    }

    public boolean intersects(Rect anotherRect) {
        if (getPointer() > 0){
            return rect.intersects(getPointer(),anotherRect.getPointer());
        }
        return false;
    }

    public long getPointer() {
        return rect.address();
    }

    public void dispose() {
        if (getPointer() > 0) {
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
