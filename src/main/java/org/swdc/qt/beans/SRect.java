package org.swdc.qt.beans;

public class SRect {

    private int x;
    private int y;

    private int width;
    private int height;

    private int bottom;
    private int top;
    private int center;
    private int left;
    private int right;

    private int topLeft;
    private int topRight;
    private int bottomLeft;
    private int bottomRight;

    public SRect(int x,int y,int width, int height,
                 int top, int center, int bottom, int left, int right) {
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;

        this.top = top;
        this.bottom = bottom;
        this.center = center;
        this.left = left;
        this.right = right;

        this.topLeft = topLeft;
        this.topRight = topRight;
        this.bottomLeft = bottomLeft;
        this.bottomRight = bottomRight;

    }

    public int getX() {
        return x;
    }

    public int getY() {
        return y;
    }

    public int getWidth() {
        return width;
    }

    public int getHeight() {
        return height;
    }

    public int getBottom() {
        return bottom;
    }

    public int getTop() {
        return top;
    }

    public int getCenter() {
        return center;
    }

    public int getLeft() {
        return left;
    }

    public int getRight() {
        return right;
    }

    public int getTopLeft() {
        return topLeft;
    }

    public int getTopRight() {
        return topRight;
    }

    public int getBottomLeft() {
        return bottomLeft;
    }

    public int getBottomRight() {
        return bottomRight;
    }

    @Override
    public String toString() {
        return "SRect{" +
                "x=" + x +
                ", y=" + y +
                ", width=" + width +
                ", height=" + height +
                ", bottom=" + bottom +
                ", top=" + top +
                ", center=" + center +
                ", left=" + left +
                ", right=" + right +
                ", topLeft=" + topLeft +
                ", topRight=" + topRight +
                ", bottomLeft=" + bottomLeft +
                ", bottomRight=" + bottomRight +
                '}';
    }
}
