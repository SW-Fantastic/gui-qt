#include "gui_global.h"
#include "java/graphics/org_swdc_qt_internal_graphics_SConicalGradient.h"
/*
 * Class:     org_swdc_qt_internal_graphics_SConicalGradient
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SConicalGradient_create__
(JNIEnv *, jobject) {

    QConicalGradient * gradient = new QConicalGradient();
    return (jlong)(intptr_t)gradient;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SConicalGradient
 * Method:    create
 * Signature: (DDD)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SConicalGradient_create__DDD
(JNIEnv *, jobject, jdouble cx, jdouble cy, jdouble startAngle) {

    QConicalGradient * gradient = new QConicalGradient(cx,cy,startAngle);
    return (jlong)(intptr_t)gradient;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SConicalGradient
 * Method:    center
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SConicalGradient_center
(JNIEnv * env, jobject self, jlong pointer) {

    QConicalGradient * gradient = (QConicalGradient*)pointer;
    QPointF * point = new QPointF(gradient->center());

    return (jlong)(intptr_t)point;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SConicalGradient
 * Method:    setCenter
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SConicalGradient_setCenter__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QConicalGradient * gradient = (QConicalGradient*)pointer;
    QPointF * point = (QPointF*)pointPointer;

    gradient->setCenter(*point);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SConicalGradient
 * Method:    setCenter
 * Signature: (JDD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SConicalGradient_setCenter__JDD
(JNIEnv * env, jobject self, jlong pointer, jdouble x, jdouble y) {

    QConicalGradient * gradient = (QConicalGradient*)pointer;
    gradient->setCenter(x,y);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SConicalGradient
 * Method:    angle
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_graphics_SConicalGradient_angle
(JNIEnv * env, jobject self, jlong pointer) {

    QConicalGradient * gradient = (QConicalGradient*)pointer;
    return gradient->angle();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SConicalGradient
 * Method:    setAngle
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SConicalGradient_setAngle
(JNIEnv * env, jobject self, jlong pointer, jdouble angle) {

    QConicalGradient * gradient = (QConicalGradient*)pointer;
    gradient->setAngle(angle);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SConicalGradient
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SConicalGradient_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QConicalGradient * gradient = (QConicalGradient*)pointer;
    delete gradient;
    cleanJavaPointer(env,self);

}
