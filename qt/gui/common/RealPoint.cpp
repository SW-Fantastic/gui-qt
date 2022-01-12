#include "gui_global.h"
#include "java/common/org_swdc_qt_internal_common_SRealPoint.h"

/*
 * Class:     org_swdc_qt_internal_common_SRealPoint
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealPoint_create__
(JNIEnv *, jobject) {

    QPointF * pointF = new QPointF();
    return (jlong)(intptr_t)pointF;
}

/*
 * Class:     org_swdc_qt_internal_common_SRealPoint
 * Method:    create
 * Signature: (DD)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealPoint_create__DD
(JNIEnv * env, jobject self, jdouble x, jdouble y){

    QPointF * pointF = new QPointF(x,y);
    return (jlong)(intptr_t)pointF;

}

/*
 * Class:     org_swdc_qt_internal_common_SRealPoint
 * Method:    x
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_common_SRealPoint_x
(JNIEnv * env, jobject self, jlong pointer) {

    QPointF * pointF = (QPointF*)pointer;
    return pointF->x();
}

/*
 * Class:     org_swdc_qt_internal_common_SRealPoint
 * Method:    y
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_common_SRealPoint_y
(JNIEnv * env, jobject self, jlong pointer) {

    QPointF * pointF = (QPointF*)pointer;
    return pointF->y();
}

/*
 * Class:     org_swdc_qt_internal_common_SRealPoint
 * Method:    setX
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealPoint_setX
(JNIEnv * env, jobject self, jlong pointer, jdouble x) {

    QPointF * pointF = (QPointF*)pointer;
    pointF->setX(x);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealPoint
 * Method:    setY
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealPoint_setY
(JNIEnv * env, jobject self, jlong pointer, jdouble y) {

    QPointF * pointF = (QPointF*)pointer;
    pointF->setY(y);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealPoint
 * Method:    transposed
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealPoint_transposed
(JNIEnv * env, jobject self, jlong pointer) {

    QPointF * pointF = (QPointF*)pointer;
    QPointF * result = new QPointF(pointF->transposed());
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_common_SRealPoint
 * Method:    manhattanLength
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_common_SRealPoint_manhattanLength
(JNIEnv * env, jobject self, jlong pointer) {

    QPointF * pointF = (QPointF*)pointer;
    return pointF->manhattanLength();
}

/*
 * Class:     org_swdc_qt_internal_common_SRealPoint
 * Method:    toPoint
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealPoint_toPoint
(JNIEnv * env, jobject self, jlong pointer) {

    QPointF * pointF = (QPointF*)pointer;
    QPoint * point = new QPoint(pointF->toPoint());

    return (jlong)(intptr_t)point;
}

/*
 * Class:     org_swdc_qt_internal_common_SRealPoint
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealPoint_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QPointF * pointF = (QPointF*)pointer;
    delete pointF;
    cleanJavaPointer(env,self);
}
