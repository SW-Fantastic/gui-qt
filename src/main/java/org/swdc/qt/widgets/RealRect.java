package org.swdc.qt.widgets;

import org.swdc.qt.internal.common.SRealRect;

public class RealRect {

    private SRealRect rect = new SRealRect();

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

    public void allocate(double left,double top,double width, double height) throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = rect.create(left,top,width,height);
        if (pointer <= 0) {
            throw new Exception("fail to create rect");
        }
        rect.address(pointer);
    }

    private void wrap(long nativePointer) {
        if (getPointer() > 0) {
            return;
        }
        if (nativePointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        rect.address(nativePointer);
    }

    public RealSize getSize() {
        if (getPointer() > 0) {
            long pointer = rect.size(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return RealSize.asRealSize(pointer);
        }
        return null;
    }

    public void setSize(RealSize size) {
        if (getPointer() > 0 && size.getPointer() > 0) {
            rect.setSize(getPointer(),size.getPointer());
        }
    }

    public RealRect marginsAdded(RealMargins margins) {
        if (getPointer() > 0 && margins.getPointer() > 0) {
            long pointer = rect.marginsAdded(getPointer(),margins.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return RealRect.asRealRect(pointer);
        }
        return null;
    }

    public RealRect marginsRemoved(RealMargins margins) {
        if (getPointer() > 0 && margins.getPointer() > 0) {
            long pointer = rect.marginsRemoved(getPointer(),margins.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return RealRect.asRealRect(pointer);
        }
        return null;
    }


    public void setTopLeft(RealPoint point){
        if (getPointer() > 0 && point.getPointer() > 0) {
            rect.setTopLeft(getPointer(),point.getPointer());
        }
    }

    public void setBottomRight(RealPoint point) {
        if (getPointer() > 0 && point.getPointer() > 0) {
            rect.setBottomRight(getPointer(),point.getPointer());
        }
    }

    public void setTopRight(RealPoint point) {
        if (getPointer() > 0 && point.getPointer() > 0) {
            rect.setTopRight(getPointer(),point.getPointer());
        }
    }

    public void setBottomLeft(RealPoint point) {
        if (getPointer() > 0 && point.getPointer() > 0) {
            rect.setBottomLeft(getPointer(),point.getPointer());
        }
    }

    public RealPoint getTopLeft() {
        if (getPointer() > 0) {
            long pointer = rect.topLeft(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return RealPoint.asRealPoint(pointer);
        }
        return null;
    }

    public RealPoint getBottomRight() {
        if (getPointer() > 0) {
            long pointer = rect.bottomRight(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return RealPoint.asRealPoint(pointer);
        }
        return null;
    }

    public RealPoint getTopRight() {
        if (getPointer() > 0) {
            long pointer = rect.topRight(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return RealPoint.asRealPoint(pointer);
        }
        return null;
    }

    public RealPoint getBottomLeft() {
        if (getPointer() > 0) {
            long pointer = rect.bottomLeft(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return RealPoint.asRealPoint(pointer);
        }
        return null;
    }

    public RealPoint getCenter() {
        if (getPointer() > 0){
            long pointer = rect.center(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return RealPoint.asRealPoint(pointer);
        }
        return null;
    }


    public void moveTopLeft(RealPoint point) {
        if (getPointer() > 0 && point.getPointer() > 0) {
            rect.moveTopLeft(getPointer(),point.getPointer());
        }
    }

    public void moveBottomRight(RealPoint point) {
        if (getPointer() > 0 && point.getPointer() > 0) {
            rect.moveBottomRight(getPointer(),point.getPointer());
        }
    }

    public void moveTopRight(RealPoint point) {
        if (getPointer() > 0 && point.getPointer() > 0) {
            rect.moveTopRight(getPointer(),point.getPointer());
        }
    }

    public void moveBottomLeft(RealPoint point) {
        if (getPointer() > 0 && point.getPointer() > 0) {
            rect.moveBottomLeft(getPointer(),point.getPointer());
        }
    }

    public void moveCenter(RealPoint point) {
        if (getPointer() > 0 && point.getPointer() > 0) {
            rect.moveCenter(getPointer(),point.getPointer());
        }
    }

    public void moveTo(RealPoint point) {
        if (getPointer() > 0 && point.getPointer() > 0) {
            rect.moveTo(getPointer(),point.getPointer());
        }
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

    public double left() {
        if (getPointer() > 0) {
            return rect.left(getPointer());
        }
        return 0;
    }

    public double top() {
        if (getPointer() > 0) {
            return rect.top(getPointer());
        }
        return 0;
    }

    public double right(){
        if (getPointer() > 0) {
            return rect.right(getPointer());
        }
        return 0;
    }

    public double bottom() {
        if (getPointer() > 0) {
            return rect.bottom(getPointer());
        }
        return 0;
    }

    public RealRect normalized() {
        if (getPointer() > 0) {
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
        if (getPointer() > 0) {
            return rect.x(getPointer());
        }
        return 0;
    }

    public double y() {
        if (getPointer() > 0) {
            return rect.y(getPointer());
        }
        return 0;
    }

    public void setLeft(double pos) {
        if (getPointer() > 0) {
            rect.setLeft(getPointer(),pos);
        }
    }

    public void setTop(double pos) {
        if (getPointer() > 0) {
            rect.setTop(getPointer(),pos);
        }
    }

    public void setRight(double pos) {
        if (getPointer() > 0) {
            rect.setRight(getPointer(),pos);
        }
    }

    public void setBottom(double pos) {
        if (getPointer() > 0) {
            rect.setBottom(getPointer(),pos);
        }
    }

    public void setX(double x) {
        if (getPointer() > 0) {
            rect.setX(getPointer(),x);
        }
    }

    public void setY(double y) {
        if (getPointer() > 0) {
            rect.setY(getPointer(),y);
        }
    }

    public void moveLeft(double pos) {
        if (getPointer() > 0) {
            rect.moveLeft(getPointer(),pos);
        }
    }

    public void moveTop(double pos) {
        if (getPointer() > 0) {
            rect.moveTop(getPointer(),pos);
        }
    }

    public void moveRight(double pos){
        if (getPointer() > 0) {
            rect.moveRight(getPointer(),pos);
        }
    }

    public void moveBottom(double pos) {
        if (getPointer() > 0) {
            rect.moveBottom(getPointer(),pos);
        }
    }

    public void translate(double dx, double dy) {
        if (getPointer() > 0) {
            rect.translate(getPointer(),dx,dy);
        }
    }

    public RealRect transposed() {
        if (getPointer() > 0) {
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
        if (getPointer() > 0) {
            rect.moveTo(getPointer(),x,t);
        }
    }

    public void adjust(double x1, double y1, double x2, double y2) {
        if (getPointer() > 0) {
            rect.adjust(getPointer(),x1,y1,x2,y2);
        }
    }

    public double width() {
        if (getPointer() > 0) {
            return rect.width(getPointer());
        }
        return 0;
    }

    public double height() {
        if (getPointer() > 0) {
            return rect.height(getPointer());
        }
        return 0;
    }

    public void setWidth(double w) {
        if (getPointer() > 0) {
            rect.setWidth(getPointer(),w);
        }
    }

    public void setHeight(double h) {
        if (getPointer() > 0) {
            rect.setHeight(getPointer(),h);
        }
    }

    public boolean contains(RealRect anotherRect){
        if (getPointer() > 0) {
            return rect.contains(getPointer(),anotherRect.getPointer());
        }
        return false;
    }

    public boolean contains(double x, double y) {
        if (getPointer() > 0) {
            return rect.contains(getPointer(),x,y);
        }
        return false;
    }


    public boolean intersects(RealRect anotherRect) {
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
