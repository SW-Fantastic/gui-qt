#include "gui_global.h"

#include "java/common/org_swdc_qt_internal_common_SPoint.h"

/*
 * Class:     org_swdc_qt_internal_common_SPoint
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SPoint_create__
(JNIEnv * env, jobject self) {

    QPoint * point = new QPoint();
    return (jlong)(intptr_t)point;

}

/*
 * Class:     org_swdc_qt_internal_common_SPoint
 * Method:    create
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SPoint_create__II
(JNIEnv * env, jobject self, jint x, jint y) {

    QPoint * point = new QPoint(x,y);
    return (jlong)(intptr_t)point;
}

/*
 * Class:     org_swdc_qt_internal_common_SPoint
 * Method:    x
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SPoint_x
(JNIEnv * env, jobject self, jlong pointer) {

    QPoint * point = (QPoint*)pointer;
    return point->x();
}

/*
 * Class:     org_swdc_qt_internal_common_SPoint
 * Method:    y
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SPoint_y
(JNIEnv * env, jobject self, jlong pointer) {

    QPoint * point = (QPoint*)pointer;
    return point->y();
}

/*
 * Class:     org_swdc_qt_internal_common_SPoint
 * Method:    setX
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SPoint_setX
(JNIEnv * env, jobject self, jlong pointer, jint x) {

    QPoint * point = (QPoint*)pointer;
    return point->setX(x);
}

/*
 * Class:     org_swdc_qt_internal_common_SPoint
 * Method:    setY
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SPoint_setY
(JNIEnv * env, jobject self, jlong pointer, jint y) {

    QPoint * point = (QPoint*)pointer;
    return point->setY(y);
}

/*
 * Class:     org_swdc_qt_internal_common_SPoint
 * Method:    manhattanLength
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SPoint_manhattanLength
(JNIEnv * env, jobject self, jlong pointer) {

    QPoint * point = (QPoint*)pointer;
    return point->manhattanLength();
}

/*
 * Class:     org_swdc_qt_internal_common_SPoint
 * Method:    transposed
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SPoint_transposed
(JNIEnv * env, jobject self, jlong pointer) {

    QPoint * point = (QPoint*)pointer;
    QPoint target = point->transposed();
    QPoint * result = new QPoint(target);

    return (jlong)(intptr_t)result;
}


/*
 * Class:     org_swdc_qt_internal_common_SPoint
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SPoint_dispose
(JNIEnv * env, jobject self, jlong pointer) {

     QPoint * point = (QPoint*)pointer;
     delete point;
     cleanJavaPointer(env,self);
}
