#include "gui_global.h"
#include "java/graphics/org_swdc_qt_internal_graphics_SPainterPath.h"

/*
 * Class:     org_swdc_qt_internal_graphics_SPainterPath
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPainterPath_create
(JNIEnv * env, jobject self) {

    QPainterPath * path = new QPainterPath();
    return (jlong)(intptr_t)path;

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainterPath
 * Method:    swap
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainterPath_swap
(JNIEnv * env, jobject self, jlong pointer, jlong another) {

    QPainterPath * path = (QPainterPath*)pointer;
    QPainterPath * anotherPath = (QPainterPath*)another;

    path->swap(*anotherPath);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainterPath
 * Method:    clear
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainterPath_clear
(JNIEnv * env, jobject self, jlong pointer) {

    QPainterPath * path = (QPainterPath*)pointer;
    path->clear();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainterPath
 * Method:    reserve
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainterPath_reserve
(JNIEnv * env, jobject self, jlong pointer, jint size) {

    QPainterPath * path = (QPainterPath*)pointer;
    path->reserve(size);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainterPath
 * Method:    capacity
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SPainterPath_capacity
(JNIEnv * env, jobject self, jlong pointer) {

    QPainterPath * path = (QPainterPath*)pointer;
    return path->capacity();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainterPath
 * Method:    closeSubpath
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainterPath_closeSubpath
(JNIEnv * env, jobject self, jlong pointer) {

    QPainterPath * path = (QPainterPath*)pointer;
    path->closeSubpath();

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainterPath
 * Method:    moveTo
 * Signature: (JDD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainterPath_moveTo
(JNIEnv * env, jobject self, jlong pointer, jdouble x, jdouble y) {

    QPainterPath * path = (QPainterPath*)pointer;
    path->moveTo(x,y);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainterPath
 * Method:    lineTo
 * Signature: (JDD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainterPath_lineTo
(JNIEnv * env, jobject self, jlong pointer, jdouble x, jdouble y) {

    QPainterPath * path = (QPainterPath*)pointer;
    path->lineTo(x,y);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainterPath
 * Method:    arcMoveTo
 * Signature: (JDDDDD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainterPath_arcMoveTo
(JNIEnv * env, jobject self, jlong pointer, jdouble x, jdouble y, jdouble w, jdouble h, jdouble angle) {

    QPainterPath * path = (QPainterPath*)pointer;
    path->arcMoveTo(x,y,w,h,angle);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainterPath
 * Method:    arcTo
 * Signature: (JDDDDDD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainterPath_arcTo
(JNIEnv * env, jobject self, jlong pointer, jdouble x, jdouble y, jdouble w, jdouble h, jdouble startAngle, jdouble arcLength) {

    QPainterPath * path = (QPainterPath*)pointer;
    path->arcTo(x,y,w,h,startAngle,arcLength);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainterPath
 * Method:    cubicTo
 * Signature: (JDDDDDD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainterPath_cubicTo
(JNIEnv * env, jobject self, jlong pointer, jdouble ctrlPt1x, jdouble ctrlPt1y, jdouble ctrlPt2x, jdouble ctrlPt2y, jdouble endPtx, jdouble endPty) {

    QPainterPath * path = (QPainterPath*)pointer;
    path->cubicTo(ctrlPt1x,ctrlPt1y,ctrlPt2x,ctrlPt2y,endPtx,endPty);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainterPath
 * Method:    quadTo
 * Signature: (JDDDD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainterPath_quadTo
(JNIEnv * env, jobject self, jlong pointer, jdouble ctrlPtx, jdouble ctrlPty, jdouble endPtx, jdouble endPty){

    QPainterPath * path = (QPainterPath*)pointer;
    path->quadTo(ctrlPtx,ctrlPty,endPtx,endPty);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainterPath
 * Method:    addRect
 * Signature: (JDDDD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainterPath_addRect
(JNIEnv * env, jobject self, jlong pointer, jdouble x, jdouble y, jdouble w, jdouble h) {

    QPainterPath * path = (QPainterPath*)pointer;
    path->addRect(x,y,w,h);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainterPath
 * Method:    addEllipse
 * Signature: (JDDDD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainterPath_addEllipse
(JNIEnv * env, jobject self, jlong pointer, jdouble x, jdouble y, jdouble w, jdouble h) {

    QPainterPath * path = (QPainterPath*)pointer;
    path->addEllipse(x,y,w,h);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainterPath
 * Method:    addPath
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainterPath_addPath
(JNIEnv * env, jobject self, jlong pointer, jlong anotherPointer) {

    QPainterPath * path = (QPainterPath*)pointer;
    QPainterPath * anotherPath = (QPainterPath*)anotherPointer;

    path->addPath(*anotherPath);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainterPath
 * Method:    addRoundedRect
 * Signature: (JDDDDDDI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainterPath_addRoundedRect
(JNIEnv * env, jobject self, jlong pointer, jdouble x, jdouble y, jdouble w, jdouble h, jdouble xRadius, jdouble yRadius, jint sizeMode) {

    QPainterPath * path = (QPainterPath*)pointer;
    path->addRoundedRect(x,y,w,h,xRadius,yRadius);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainterPath
 * Method:    connectPath
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainterPath_connectPath
(JNIEnv * env, jobject self, jlong pointer, jlong pathPointer) {

    QPainterPath * path = (QPainterPath*)pointer;
    QPainterPath * anotherPath = (QPainterPath*)pathPointer;

    path->connectPath(*anotherPath);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainterPath
 * Method:    translate
 * Signature: (JDD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainterPath_translate
(JNIEnv * env, jobject self, jlong pointer, jdouble dx, jdouble dy) {

    QPainterPath * path = (QPainterPath*)pointer;
    path->translate(dx,dy);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainterPath
 * Method:    isEmpty
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SPainterPath_isEmpty
(JNIEnv * env, jobject self, jlong pointer) {

    QPainterPath * path = (QPainterPath*)pointer;
    return path->isEmpty() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainterPath
 * Method:    fillRule
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_graphics_SPainterPath_fillRule
(JNIEnv * env, jobject self, jlong pointer) {

    QPainterPath * path = (QPainterPath*)pointer;
    return int(path->fillRule());
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainterPath
 * Method:    setFillRule
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainterPath_setFillRule
(JNIEnv * env, jobject self, jlong pointer, jint rule) {

    Qt::FillRule fillRule = Qt::FillRule(rule);
    QPainterPath * path = (QPainterPath*)pointer;
    path->setFillRule(fillRule);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainterPath
 * Method:    length
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_graphics_SPainterPath_length
(JNIEnv * env, jobject self, jlong pointer) {

    QPainterPath * path = (QPainterPath*)pointer;
    return path->length();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainterPath
 * Method:    percentAtLength
 * Signature: (JD)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_graphics_SPainterPath_percentAtLength
(JNIEnv * env, jobject self, jlong pointer, jdouble t) {

    QPainterPath * path = (QPainterPath*)pointer;
    return path->percentAtLength(t);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainterPath
 * Method:    angleAtPercent
 * Signature: (JD)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_graphics_SPainterPath_angleAtPercent
(JNIEnv * env, jobject self, jlong pointer, jdouble t) {

    QPainterPath * path = (QPainterPath*)pointer;
    return path->angleAtPercent(t);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainterPath
 * Method:    slopeAtPercent
 * Signature: (JD)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_graphics_SPainterPath_slopeAtPercent
(JNIEnv * env, jobject self, jlong pointer, jdouble t) {

    QPainterPath * path = (QPainterPath*)pointer;
    return path->slopeAtPercent(t);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainterPath
 * Method:    intersects
 * Signature: (JJ)Z
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SPainterPath_intersects
(JNIEnv * env, jobject self, jlong pointer, jlong pathPointer) {

    QPainterPath * path = (QPainterPath*)pointer;
    QPainterPath * anotherPath = (QPainterPath*)pathPointer;

    QPainterPath target = path->intersected(*anotherPath);
    QPainterPath * result = new QPainterPath(target);

    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainterPath
 * Method:    contains
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SPainterPath_contains
(JNIEnv * env, jobject self, jlong pointer, jlong pathPointer) {

    QPainterPath * path = (QPainterPath*)pointer;
    QPainterPath * anotherPath = (QPainterPath*)pathPointer;

    return path->contains(*anotherPath) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SPainterPath
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SPainterPath_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QPainterPath * path = (QPainterPath*)pointer;
    delete path;
    cleanJavaPointer(env,self);
}
