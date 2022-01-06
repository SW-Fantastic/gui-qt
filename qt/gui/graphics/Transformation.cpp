#include"gui_global.h"
#include"java/graphics/org_swdc_qt_internal_graphics_STransformation.h"

/*
 * Class:     org_swdc_qt_internal_graphics_STransformation
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_STransformation_create
(JNIEnv * env, jobject self) {

    QTransform * transform = new QTransform();
    return (jlong)(intptr_t)transform;
}

/*
 * Class:     org_swdc_qt_internal_graphics_STransformation
 * Method:    isAffine
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_STransformation_isAffine
(JNIEnv * env, jobject self, jlong pointer) {

    QTransform* transform = (QTransform*)pointer;
    return transform->isAffine() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_STransformation
 * Method:    isIdentity
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_STransformation_isIdentity
(JNIEnv * env, jobject self, jlong pointer) {

    QTransform* transform = (QTransform*)pointer;
    return transform->isIdentity() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_STransformation
 * Method:    isInvertible
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_STransformation_isInvertible
(JNIEnv * env, jobject self, jlong pointer) {

    QTransform* transform = (QTransform*)pointer;
    return transform->isInvertible() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_STransformation
 * Method:    isScaling
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_STransformation_isScaling
(JNIEnv * env, jobject self, jlong pointer) {

    QTransform* transform = (QTransform*)pointer;
    return transform->isScaling() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_STransformation
 * Method:    isRotating
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_STransformation_isRotating
(JNIEnv * env, jobject self, jlong pointer) {

    QTransform* transform = (QTransform*)pointer;
    return transform->isRotating() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_STransformation
 * Method:    isTranslating
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_STransformation_isTranslating
(JNIEnv * env, jobject self, jlong pointer) {

    QTransform* transform = (QTransform*)pointer;
    return transform->isTranslating() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_STransformation
 * Method:    type
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_STransformation_type
(JNIEnv * env, jobject self, jlong pointer) {

    QTransform* transform = (QTransform*)pointer;
    QTransform::TransformationType type = transform->type();
    return int(type);
}

/*
 * Class:     org_swdc_qt_internal_graphics_STransformation
 * Method:    determinant
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_graphics_STransformation_determinant
(JNIEnv * env, jobject self, jlong pointer) {

    QTransform* transform = (QTransform*)pointer;
    return transform->determinant();
}

/*
 * Class:     org_swdc_qt_internal_graphics_STransformation
 * Method:    m11
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_graphics_STransformation_m11
(JNIEnv * env, jobject self, jlong pointer) {

    QTransform* transform = (QTransform*)pointer;
    return transform->m11();
}

/*
 * Class:     org_swdc_qt_internal_graphics_STransformation
 * Method:    m12
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_graphics_STransformation_m12
(JNIEnv * env, jobject self, jlong pointer) {

    QTransform* transform = (QTransform*)pointer;
    return transform->m12();
}

/*
 * Class:     org_swdc_qt_internal_graphics_STransformation
 * Method:    m13
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_graphics_STransformation_m13
(JNIEnv * env, jobject self, jlong pointer) {

    QTransform* transform = (QTransform*)pointer;
    return transform->m13();
}

/*
 * Class:     org_swdc_qt_internal_graphics_STransformation
 * Method:    m21
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_graphics_STransformation_m21
(JNIEnv * env, jobject self, jlong pointer) {

    QTransform* transform = (QTransform*)pointer;
    return transform->m21();
}

/*
 * Class:     org_swdc_qt_internal_graphics_STransformation
 * Method:    m22
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_graphics_STransformation_m22
(JNIEnv * env, jobject self, jlong pointer) {

    QTransform* transform = (QTransform*)pointer;
    return transform->m22();
}

/*
 * Class:     org_swdc_qt_internal_graphics_STransformation
 * Method:    m23
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_graphics_STransformation_m23
(JNIEnv * env, jobject self, jlong pointer) {

    QTransform* transform = (QTransform*)pointer;
    return transform->m23();
}

/*
 * Class:     org_swdc_qt_internal_graphics_STransformation
 * Method:    m31
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_graphics_STransformation_m31
(JNIEnv * env, jobject self, jlong pointer) {

    QTransform* transform = (QTransform*)pointer;
    return transform->m31();
}

/*
 * Class:     org_swdc_qt_internal_graphics_STransformation
 * Method:    m32
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_graphics_STransformation_m32
(JNIEnv * env, jobject self, jlong pointer) {

    QTransform* transform = (QTransform*)pointer;
    return transform->m32();
}

/*
 * Class:     org_swdc_qt_internal_graphics_STransformation
 * Method:    m33
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_graphics_STransformation_m33
(JNIEnv * env, jobject self, jlong pointer) {

    QTransform* transform = (QTransform*)pointer;
    return transform->m33();
}

/*
 * Class:     org_swdc_qt_internal_graphics_STransformation
 * Method:    dx
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_graphics_STransformation_dx
(JNIEnv * env, jobject self, jlong pointer) {

    QTransform* transform = (QTransform*)pointer;
    return transform->dx();
}

/*
 * Class:     org_swdc_qt_internal_graphics_STransformation
 * Method:    dy
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_graphics_STransformation_dy
(JNIEnv * env, jobject self, jlong pointer) {

    QTransform* transform = (QTransform*)pointer;
    return transform->dy();
}

/*
 * Class:     org_swdc_qt_internal_graphics_STransformation
 * Method:    setMatrix
 * Signature: (JDDDDDDDDD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_STransformation_setMatrix
  (JNIEnv * env, jobject self, jlong pointer,
   jdouble m11, jdouble m12, jdouble m13,
   jdouble m21, jdouble m22, jdouble m23,
   jdouble m31, jdouble m32, jdouble m33) {

    QTransform* transform = (QTransform*)pointer;
    transform->setMatrix(m11,m12,m13,m21,m22,m23,m31,m32,m33);
}

/*
 * Class:     org_swdc_qt_internal_graphics_STransformation
 * Method:    translate
 * Signature: (JDD)J
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_STransformation_translate
(JNIEnv * env, jobject self, jlong pointer, jdouble dx, jdouble dy) {

    QTransform* transform = (QTransform*)pointer;
    transform->translate(dx,dy);
}

/*
 * Class:     org_swdc_qt_internal_graphics_STransformation
 * Method:    scale
 * Signature: (JDD)J
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_STransformation_scale
(JNIEnv * env, jobject self, jlong pointer, jdouble dx, jdouble dy) {

    QTransform* transform = (QTransform*)pointer;
    transform->scale(dx,dy);
}

/*
 * Class:     org_swdc_qt_internal_graphics_STransformation
 * Method:    shear
 * Signature: (JDD)J
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_STransformation_shear
(JNIEnv * env, jobject self, jlong pointer, jdouble sh, jdouble sv) {

    QTransform* transform = (QTransform*)pointer;
    transform->shear(sh,sv);
}

/*
 * Class:     org_swdc_qt_internal_graphics_STransformation
 * Method:    rotate
 * Signature: (JDI)J
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_STransformation_rotate
(JNIEnv * env, jobject self, jlong pointer, jdouble a, jint axis) {

    Qt::Axis axisVal = Qt::Axis(axis);
    QTransform* transform = (QTransform*)pointer;
    transform->rotate(a,axisVal);

}

/*
 * Class:     org_swdc_qt_internal_graphics_STransformation
 * Method:    rotateRadians
 * Signature: (JDI)J
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_STransformation_rotateRadians
(JNIEnv * env, jobject self, jlong pointer, jdouble a, jint axis) {

    Qt::Axis axisVal = Qt::Axis(axis);
    QTransform* transform = (QTransform*)pointer;
    transform->rotateRadians(a,axisVal);

}

/*
 * Class:     org_swdc_qt_internal_graphics_STransformation
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_STransformation_dispose
(JNIEnv * env, jobject self, jlong pointer) {

     QTransform* transform = (QTransform*)pointer;
     delete transform;
     cleanJavaPointer(env,self);

}

/*
 * Class:     org_swdc_qt_internal_graphics_STransformation
 * Method:    fromTranslate
 * Signature: (DD)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_STransformation_fromTranslate
(JNIEnv * env, jclass type, jdouble dx, jdouble dy) {

    QTransform transform = QTransform::fromTranslate(dx,dy);
    QTransform * result = new QTransform(transform);
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_graphics_STransformation
 * Method:    fromScale
 * Signature: (DD)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_STransformation_fromScale
(JNIEnv * env, jclass type, jdouble dx, jdouble dy) {

    QTransform transform = QTransform::fromScale(dx,dy);
    QTransform * result = new QTransform(transform);
    return (jlong)(intptr_t)result;
}
