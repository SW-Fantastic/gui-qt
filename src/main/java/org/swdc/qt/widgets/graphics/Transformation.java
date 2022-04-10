package org.swdc.qt.widgets.graphics;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.beans.Axis;
import org.swdc.qt.internal.graphics.STransformation;
import org.swdc.qt.layout.Layout;

public class Transformation implements NativeAllocated {

    private STransformation transformation = new STransformation();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = transformation.create();
        if (pointer <= 0) {
            throw new Exception("failed to create transformation");
        }
        transformation.address(pointer);
    }

    private void wrap(long pointer) {
        if (accessibleParam()) {
            return;
        }
        if (pointer <= 0){
            throw new RuntimeException("invalid pointer");
        }
        transformation.address(pointer);
    }

    public boolean isAffine() {
        if (accessible()) {
            return transformation.isAffine(getPointer());
        }
        return false;
    }

    public boolean isIdentity() {
        if (accessible()) {
            return transformation.isIdentity(getPointer());
        }
        return false;
    }

    public boolean isInvertible() {
        if (accessible()){
            return transformation.isInvertible(getPointer());
        }
        return false;
    }

    public boolean isScaling() {
        if (accessible()) {
            return transformation.isScaling(getPointer());
        }
        return false;
    }

    public boolean isRotating() {
        if (accessible()) {
            return transformation.isRotating(getPointer());
        }
        return false;
    }

    public boolean isTranslating() {
        if (accessible()) {
            return transformation.isTranslating(getPointer());
        }
        return false;
    }

    public TransformationType type() {
        if (accessible()) {
            int val = transformation.type(getPointer());
            return TransformationType.valueOf(val);
        }
        return null;
    }

    public double determinant(){
        if (accessible()) {
            return transformation.determinant(getPointer());
        }
        return 0;
    }

    public double m11() {
        if (accessible()) {
            return transformation.m11(getPointer());
        }
        return 0;
    }

    public double m12() {
        if (accessible()) {
            return transformation.m12(getPointer());
        }
        return 0;
    }

    public double m13() {
        if (accessible()) {
            return transformation.m13(getPointer());
        }
        return 0;
    }

    public double m21() {
        if (accessible()) {
            return transformation.m21(getPointer());
        }
        return 0;
    }

    public double m22() {
        if (accessible()) {
            return transformation.m22(getPointer());
        }
        return 0;
    }

    public double m23() {
        if (accessible()) {
            return transformation.m23(getPointer());
        }
        return 0;
    }

    public double m31() {
        if (accessible()) {
            return transformation.m31(getPointer());
        }
        return 0;
    }

    public double m32() {
        if (accessible()) {
            return transformation.m32(getPointer());
        }
        return 0;
    }

    public double m33() {
        if (accessible()) {
            return transformation.m33(getPointer());
        }
        return 0;
    }

    public double dx() {
        if (accessible()) {
            return transformation.dx(getPointer());
        }
        return 0;
    }

    public double dy() {
        if (accessible()) {
            return transformation.dy(getPointer());
        }
        return 0;
    }

    public void setMatrix(
            double m11, double m12, double m13,
            double m21, double m22, double m23,
            double m31, double m32, double m33
    ) {
        if (accessible()) {
            transformation.setMatrix(getPointer(),
                    m11,m12,m13,
                    m21,m22,m23,
                    m31,m32,m33);
        }

    }

    public void translate(double dx, double dy) {
        if (accessible()){
            transformation.translate(getPointer(),dx,dy);
        }
    }

    public void scale(double sx, double sy) {
        if (accessible()) {
            transformation.scale(getPointer(),sx,sy);
        }
    }

    public void shear(double sh, double sv) {
        if (accessible()) {
            transformation.shear(getPointer(),sh,sv);
        }
    }

    public void rotate(double a, Axis axis) {
        if (accessible()) {
            transformation.rotate(getPointer(),a,axis.getVal());
        }
    }

    public void rotateRadians(double a, Axis axis) {
        if (accessible()) {
            transformation.rotateRadians(getPointer(),a,axis.getVal());
        }
    }

    public void dispose() {
        if (accessible()) {
            transformation.dispose(getPointer());
            transformation.cleanAddress();
        }
    }

    public static Transformation fromTranslate(double dx, double dy) throws Exception {
        Transformation transformation = new Transformation();
        long pointer = STransformation.fromTranslate(dx,dy);
        transformation.wrap(pointer);
        return transformation;
    }
    public static Transformation fromScale(double dx,double dy) throws Exception {
        Transformation transformation = new Transformation();
        long pointer = STransformation.fromScale(dx,dy);
        transformation.wrap(pointer);
        return transformation;
    }

    public static Transformation asTransformation(long nativePointer) {
        if (nativePointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        Transformation transformation = new Transformation();
        transformation.wrap(nativePointer);
        return transformation;
    }

    public long getPointer() {
        return transformation.address();
    }

}
