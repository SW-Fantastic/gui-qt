package org.swdc.qt.internal.graphics;

import org.swdc.qt.internal.SPointer;

public class STransformation extends SPointer {

    public native long create();

    public native boolean isAffine(long pointer);
    public native boolean isIdentity(long pointer);
    public native boolean isInvertible(long pointer);
    public native boolean isScaling(long pointer);
    public native boolean isRotating(long pointer);
    public native boolean isTranslating(long pointer);

    public native int type(long pointer);
    public native double determinant(long pointer);

    public native double m11(long pointer);
    public native double m12(long pointer);
    public native double m13(long pointer);
    public native double m21(long pointer);
    public native double m22(long pointer);
    public native double m23(long pointer);
    public native double m31(long pointer);
    public native double m32(long pointer);
    public native double m33(long pointer);
    public native double dx(long pointer);
    public native double dy(long pointer);

    public native void setMatrix(
            long pointer,
            double m11, double m12, double m13,
            double m21, double m22, double m23,
            double m31, double m32, double m33
    );

    public native void translate(long pointer,double dx, double dy);
    public native void scale(long pointer,double sx, double sy);
    public native void shear(long pointer,double sh, double sv);
    public native void rotate(long pointer,double a, int axis);
    public native void rotateRadians(long pointer,double a, int axis);

    public native void dispose(long pointer);

    public static native long fromTranslate(double dx, double dy);
    public static native long fromScale(double dx,double dy);

}
