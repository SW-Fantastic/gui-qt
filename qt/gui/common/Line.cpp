#include "gui_global.h"
#include "java/common/org_swdc_qt_internal_common_SLine.h"

/*
 * Class:     org_swdc_qt_internal_common_SLine
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SLine_create
(JNIEnv * env, jobject self) {

    QLine * line = new QLine();
    return (jlong)(intptr_t)line;

}

/*
 * Class:     org_swdc_qt_internal_common_SLine
 * Method:    p1
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SLine_p1
(JNIEnv * env, jobject self, jlong pointer) {

    QLine * line = (QLine*)pointer;
    QPoint * result = new QPoint(line->p1());

    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_common_SLine
 * Method:    p2
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SLine_p2
(JNIEnv * env, jobject self, jlong pointer) {

    QLine * line = (QLine*)pointer;
    QPoint * result = new QPoint(line->p2());

    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_common_SLine
 * Method:    x1
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SLine_x1
(JNIEnv * env, jobject self, jlong pointer) {

    QLine * line = (QLine*)pointer;
    return line->x1();
}

/*
 * Class:     org_swdc_qt_internal_common_SLine
 * Method:    y1
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SLine_y1
(JNIEnv * env, jobject self, jlong pointer) {

    QLine * line = (QLine*)pointer;
    return line->y1();
}

/*
 * Class:     org_swdc_qt_internal_common_SLine
 * Method:    x2
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SLine_x2
(JNIEnv * env, jobject self, jlong pointer) {

    QLine * line = (QLine*)pointer;
    return line->x2();
}

/*
 * Class:     org_swdc_qt_internal_common_SLine
 * Method:    y2
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SLine_y2
(JNIEnv * env, jobject self, jlong pointer) {

    QLine * line = (QLine*)pointer;
    return line->y2();
}

/*
 * Class:     org_swdc_qt_internal_common_SLine
 * Method:    dx
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SLine_dx
(JNIEnv * env, jobject self, jlong pointer) {

    QLine * line = (QLine*)pointer;
    return line->dx();
}

/*
 * Class:     org_swdc_qt_internal_common_SLine
 * Method:    dy
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SLine_dy
(JNIEnv * env, jobject self, jlong pointer) {

    QLine * line = (QLine*)pointer;
    return line->dy();
}

/*
 * Class:     org_swdc_qt_internal_common_SLine
 * Method:    translate
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SLine_translate__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QPoint * point = (QPoint*)pointPointer;
    QLine * line = (QLine*)pointer;
    line->translate(*point);

}

/*
 * Class:     org_swdc_qt_internal_common_SLine
 * Method:    translate
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SLine_translate__JII
(JNIEnv * env, jobject self, jlong pointer, jint dx, jint dy) {

    QLine * line = (QLine*)pointer;
    line->translate(dx,dy);
}

/*
 * Class:     org_swdc_qt_internal_common_SLine
 * Method:    translated
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SLine_translated__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QPoint * point = (QPoint*)pointPointer;
    QLine * line = (QLine*)pointer;
    QLine * result = new QLine(line->translated(*point));

    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_common_SLine
 * Method:    translated
 * Signature: (JII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SLine_translated__JII
(JNIEnv * env, jobject self, jlong pointer, jint dx, jint dy) {

    QLine * line = (QLine*)pointer;
    QLine * result = new QLine(line->translated(dx,dy));

    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_common_SLine
 * Method:    center
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SLine_center
(JNIEnv * env, jobject self, jlong pointer) {

    QLine * line = (QLine*)pointer;
    QPoint * center = new QPoint(line->center());

    return (jlong)(intptr_t)center;
}

/*
 * Class:     org_swdc_qt_internal_common_SLine
 * Method:    setP1
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SLine_setP1
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QPoint * point = (QPoint*)pointPointer;
    QLine * line = (QLine*)pointer;
    line->setP1(*point);

}

/*
 * Class:     org_swdc_qt_internal_common_SLine
 * Method:    setP2
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SLine_setP2
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QPoint * point = (QPoint*)pointPointer;
    QLine * line = (QLine*)pointer;
    line->setP2(*point);
}

/*
 * Class:     org_swdc_qt_internal_common_SLine
 * Method:    setPoints
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SLine_setPoints
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointerA, jlong pointPointerB) {

    QPoint * pointA = (QPoint*)pointPointerA;
    QPoint * pointB = (QPoint*)pointPointerB;

    QLine * line = (QLine*)pointer;
    line->setPoints(*pointA,*pointB);
}

/*
 * Class:     org_swdc_qt_internal_common_SLine
 * Method:    setLine
 * Signature: (JIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SLine_setLine
(JNIEnv * env, jobject self, jlong pointer, jint x1, jint y1, jint x2, jint y2) {

    QLine * line = (QLine*)pointer;
    line->setLine(x1,y1,x2,y2);

}

/*
 * Class:     org_swdc_qt_internal_common_SLine
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SLine_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QLine * line = (QLine*)pointer;
    delete line;
    cleanJavaPointer(env,self);
}
