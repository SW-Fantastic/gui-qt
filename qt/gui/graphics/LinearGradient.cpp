#include "gui_global.h"
#include "java/graphics/org_swdc_qt_internal_graphics_SLinearGradient.h"

/*
 * Class:     org_swdc_qt_internal_graphics_SLinearGradient
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SLinearGradient_create__
(JNIEnv * env, jobject self) {

    QLinearGradient * linearGradient = new QLinearGradient();
    return (jlong)(intptr_t)linearGradient;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SLinearGradient
 * Method:    create
 * Signature: (DDDD)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SLinearGradient_create__DDDD
(JNIEnv *, jobject, jdouble startX, jdouble startY, jdouble endX, jdouble endY) {

    QLinearGradient * linearGradient = new QLinearGradient(startX,startY,endX,endY);
    return (jlong)(intptr_t)linearGradient;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SLinearGradient
 * Method:    start
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SLinearGradient_start
(JNIEnv * env, jobject self, jlong pointer) {

    QLinearGradient * gradient = (QLinearGradient*)pointer;
    QPointF * start = new QPointF(gradient->start());
    return (jlong)(intptr_t)start;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SLinearGradient
 * Method:    setStart
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SLinearGradient_setStart__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong realPointPointer) {

    QLinearGradient * gradient = (QLinearGradient*)pointer;
    QPointF * point = (QPointF*)realPointPointer;

    gradient->setStart(*point);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SLinearGradient
 * Method:    setStart
 * Signature: (JDD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SLinearGradient_setStart__JDD
(JNIEnv * env, jobject self, jlong pointer, jdouble x, jdouble y) {

    QLinearGradient * gradient = (QLinearGradient*)pointer;
    gradient->setStart(x,y);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SLinearGradient
 * Method:    finalStop
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SLinearGradient_finalStop
(JNIEnv * env, jobject self, jlong pointer) {

    QLinearGradient * gradient = (QLinearGradient*)pointer;
    QPointF * point = new QPointF(gradient->finalStop());
    return (jlong)(intptr_t)point;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SLinearGradient
 * Method:    setFinalStop
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SLinearGradient_setFinalStop__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong realPointPointer) {

    QLinearGradient * gradient = (QLinearGradient*)pointer;
    QPointF * point = (QPointF*)realPointPointer;

    gradient->setFinalStop(*point);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SLinearGradient
 * Method:    setFinalStop
 * Signature: (JDD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SLinearGradient_setFinalStop__JDD
(JNIEnv * env, jobject self, jlong pointer, jdouble x, jdouble y) {

    QLinearGradient * gradient = (QLinearGradient*)pointer;
    gradient->setFinalStop(x,y);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SLinearGradient
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SLinearGradient_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QLinearGradient * gradient = (QLinearGradient*)pointer;
    delete gradient;
    cleanJavaPointer(env,self);
}
