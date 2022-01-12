#include "gui_global.h"
#include "java/graphics/org_swdc_qt_internal_graphics_SRadialGradient.h"

/*
 * Class:     org_swdc_qt_internal_graphics_SRadialGradient
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SRadialGradient_create__
(JNIEnv *, jobject) {

    QRadialGradient * gradient = new QRadialGradient();
    return (jlong)(intptr_t)gradient;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SRadialGradient
 * Method:    create
 * Signature: (DDDDD)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SRadialGradient_create__DDDDD
(JNIEnv *, jobject, jdouble cx, jdouble cy, jdouble radius, jdouble fx, jdouble fy) {

    QRadialGradient * gradient = new QRadialGradient(cx,cy,radius,fx,fy);
    return (jlong)(intptr_t)gradient;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SRadialGradient
 * Method:    center
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SRadialGradient_center
(JNIEnv * env, jobject self, jlong pointer) {

    QRadialGradient * gradient = (QRadialGradient*)pointer;
    QPointF * center = new QPointF(gradient->center());

    return (jlong)(intptr_t)center;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SRadialGradient
 * Method:    setCenter
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SRadialGradient_setCenter__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QPointF * point = (QPointF*)pointPointer;
    QRadialGradient * gradient = (QRadialGradient*)pointer;

    gradient->setCenter(*point);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SRadialGradient
 * Method:    setCenter
 * Signature: (JDD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SRadialGradient_setCenter__JDD
(JNIEnv * env, jobject self, jlong pointer, jdouble x, jdouble y) {

    QRadialGradient * gradient = (QRadialGradient*)pointer;
    gradient->setCenter(x,y);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SRadialGradient
 * Method:    focalPoint
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SRadialGradient_focalPoint
(JNIEnv * env, jobject self, jlong pointer) {

    QRadialGradient * gradient = (QRadialGradient*)pointer;
    QPointF * point = new QPointF(gradient->focalPoint());

    return (jlong)(intptr_t)point;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SRadialGradient
 * Method:    setFocalPoint
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SRadialGradient_setFocalPoint__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QRadialGradient * gradient = (QRadialGradient*)pointer;
    QPointF * point = (QPointF*)pointPointer;
    gradient->setFocalPoint(*point);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SRadialGradient
 * Method:    setFocalPoint
 * Signature: (JDD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SRadialGradient_setFocalPoint__JDD
(JNIEnv * env, jobject self, jlong pointer, jdouble x, jdouble y) {

    QRadialGradient * gradient = (QRadialGradient*)pointer;
    gradient->setFocalPoint(x,y);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SRadialGradient
 * Method:    radius
 * Signature: (J)V
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_graphics_SRadialGradient_radius
(JNIEnv * env, jobject self, jlong pointer) {

    QRadialGradient * gradient = (QRadialGradient*)pointer;
    return gradient->radius();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SRadialGradient
 * Method:    setRadius
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SRadialGradient_setRadius
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QRadialGradient * gradient = (QRadialGradient*)pointer;
    gradient->setRadius(val);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SRadialGradient
 * Method:    centerRadius
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_graphics_SRadialGradient_centerRadius
(JNIEnv * env, jobject self, jlong pointer) {

    QRadialGradient * gradient = (QRadialGradient*)pointer;
    return gradient->centerRadius();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SRadialGradient
 * Method:    setCenterRadius
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SRadialGradient_setCenterRadius
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QRadialGradient * gradient = (QRadialGradient*)pointer;
    gradient->setCenterRadius(val);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SRadialGradient
 * Method:    focalRadius
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SRadialGradient_focalRadius
(JNIEnv * env, jobject self, jlong pointer) {

    QRadialGradient * gradient = (QRadialGradient*)pointer;
    return gradient->focalRadius();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SRadialGradient
 * Method:    setFocalRadius
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SRadialGradient_setFocalRadius
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QRadialGradient * gradient = (QRadialGradient*)pointer;
    gradient->setFocalRadius(val);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SRadialGradient
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SRadialGradient_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QRadialGradient * gradient = (QRadialGradient*)pointer;
    delete gradient;
    cleanJavaPointer(env,self);

}
