#include "gui_global.h"
#include "java/common/org_swdc_qt_internal_common_SRealRect.h"

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealRect_create__
(JNIEnv *, jobject) {

    QRectF * rect = new QRectF();
    return (jlong)(intptr_t)rect;
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    create
 * Signature: (DDDD)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealRect_create__DDDD
(JNIEnv *, jobject, jdouble left, jdouble top, jdouble width, jdouble height) {

    QRectF * rect = new QRectF(left,top,width,height);
    return (jlong)(intptr_t)rect;
}


/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    isEmpty
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SRealRect_isEmpty
(JNIEnv * env, jobject self, jlong pointer) {

    QRectF * rect = (QRectF*)pointer;
    return rect->isEmpty() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    isValid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SRealRect_isValid
(JNIEnv * env, jobject self, jlong pointer) {

    QRectF * rect = (QRectF*)pointer;
    return rect->isValid() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    left
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_common_SRealRect_left
(JNIEnv * env, jobject self, jlong pointer) {

    QRectF * rect = (QRectF*)pointer;
    return rect->left();
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    top
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_common_SRealRect_top
(JNIEnv * env, jobject self, jlong pointer) {

    QRectF * rect = (QRectF*)pointer;
    return rect->top();
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    right
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_common_SRealRect_right
(JNIEnv * env, jobject self, jlong pointer) {

    QRectF * rect = (QRectF*)pointer;
    return rect->right();
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    bottom
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_common_SRealRect_bottom
(JNIEnv * env, jobject self, jlong pointer) {

    QRectF * rect = (QRectF*)pointer;
    return rect->bottom();
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    normalized
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealRect_normalized
(JNIEnv * env, jobject self, jlong pointer) {


    QRectF * rect = (QRectF*)pointer;
    QRectF target = rect->normalized();
    QRectF * result = new QRectF(target);

    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    x
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_common_SRealRect_x
(JNIEnv * env, jobject self, jlong pointer) {

    QRectF * rect = (QRectF*)pointer;
    return rect->x();
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    y
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_common_SRealRect_y
(JNIEnv * env, jobject self, jlong pointer) {

    QRectF * rect = (QRectF*)pointer;
    return rect->y();
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    setLeft
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealRect_setLeft
(JNIEnv * env, jobject self, jlong pointer, jdouble left) {

    QRectF * rect = (QRectF*)pointer;
    rect->setLeft(left);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    setTop
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealRect_setTop
(JNIEnv * env, jobject self, jlong pointer, jdouble top) {


    QRectF * rect = (QRectF*)pointer;
    rect->setTop(top);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    setRight
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealRect_setRight
(JNIEnv * env, jobject self, jlong pointer, jdouble right) {


    QRectF * rect = (QRectF*)pointer;
    rect->setRight(right);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    setBottom
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealRect_setBottom
(JNIEnv * env, jobject self, jlong pointer, jdouble bottom) {


    QRectF * rect = (QRectF*)pointer;
    rect->setBottom(bottom);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    setX
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealRect_setX
(JNIEnv * env, jobject self, jlong pointer, jdouble x) {


    QRectF * rect = (QRectF*)pointer;
    rect->setX(x);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    setY
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealRect_setY
(JNIEnv * env, jobject self, jlong pointer, jdouble y) {


    QRectF * rect = (QRectF*)pointer;
    rect->setY(y);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    setTopLeft
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealRect_setTopLeft
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QPointF * point = (QPointF*)pointPointer;
    QRectF * rect = (QRectF*)pointer;

    rect->setTopLeft(*point);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    setBottomRight
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealRect_setBottomRight
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {


    QPointF * point = (QPointF*)pointPointer;
    QRectF * rect = (QRectF*)pointer;

    rect->setBottomRight(*point);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    setTopRight
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealRect_setTopRight
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {


    QPointF * point = (QPointF*)pointPointer;
    QRectF * rect = (QRectF*)pointer;

    rect->setTopRight(*point);

}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    setBottomLeft
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealRect_setBottomLeft
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {


    QPointF * point = (QPointF*)pointPointer;
    QRectF * rect = (QRectF*)pointer;

    rect->setBottomLeft(*point);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    topLeft
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealRect_topLeft
(JNIEnv * env, jobject self, jlong pointer) {

    QRectF * rect = (QRectF*)pointer;
    QPointF* result = new QPointF(rect->topLeft());
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    bottomRight
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealRect_bottomRight
(JNIEnv * env, jobject self, jlong pointer) {

    QRectF * rect = (QRectF*)pointer;
    QPointF* result = new QPointF(rect->bottomRight());
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    topRight
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealRect_topRight
(JNIEnv * env, jobject self, jlong pointer) {

    QRectF * rect = (QRectF*)pointer;
    QPointF* result = new QPointF(rect->topRight());
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    bottomLeft
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealRect_bottomLeft
(JNIEnv * env, jobject self, jlong pointer) {

    QRectF * rect = (QRectF*)pointer;
    QPointF* result = new QPointF(rect->bottomLeft());
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    center
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealRect_center
(JNIEnv * env, jobject self, jlong pointer) {

    QRectF * rect = (QRectF*)pointer;
    QPointF* result = new QPointF(rect->center());
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    moveLeft
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealRect_moveLeft
(JNIEnv * env, jobject self, jlong pointer, jdouble left) {

    QRectF * rect = (QRectF*)pointer;
    rect->moveLeft(left);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    moveTop
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealRect_moveTop
(JNIEnv * env, jobject self, jlong pointer, jdouble top) {

    QRectF * rect = (QRectF*)pointer;
    rect->moveTop(top);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    moveRight
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealRect_moveRight
(JNIEnv * env, jobject self, jlong pointer, jdouble right){

    QRectF * rect = (QRectF*)pointer;
    rect->moveRight(right);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    moveBottom
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealRect_moveBottom
(JNIEnv * env, jobject self, jlong pointer, jdouble bottom) {

    QRectF * rect = (QRectF*)pointer;
    rect->moveBottom(bottom);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    moveTopLeft
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealRect_moveTopLeft
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QPointF * point = (QPointF*)pointPointer;
    QRectF * rect = (QRectF*)pointer;

    rect->moveTopLeft(*point);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    moveBottomRight
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealRect_moveBottomRight
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QPointF * point = (QPointF*)pointPointer;
    QRectF * rect = (QRectF*)pointer;

    rect->moveBottomRight(*point);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    moveTopRight
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealRect_moveTopRight
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QPointF * point = (QPointF*)pointPointer;
    QRectF * rect = (QRectF*)pointer;

    rect->moveTopRight(*point);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    moveBottomLeft
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealRect_moveBottomLeft
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QPointF * point = (QPointF*)pointPointer;
    QRectF * rect = (QRectF*)pointer;

    rect->moveBottomLeft(*point);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    moveCenter
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealRect_moveCenter
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QPointF * point = (QPointF*)pointPointer;
    QRectF * rect = (QRectF*)pointer;

    rect->moveCenter(*point);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    translate
 * Signature: (JDD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealRect_translate__JDD
(JNIEnv * env, jobject self, jlong pointer, jdouble dx, jdouble dy) {

    QRectF * rect = (QRectF*)pointer;
    rect->translate(dx,dy);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    translate
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealRect_translate__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QPointF * point = (QPointF*)pointPointer;
    QRectF * rect = (QRectF*)pointer;

    rect->translate(*point);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    transposed
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealRect_transposed
(JNIEnv * env, jobject self, jlong pointer) {

    QRectF * rect = (QRectF*)pointer;
    QRectF target = rect->transposed();
    QRectF * result = new QRectF(target);

    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    moveTo
 * Signature: (JDD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealRect_moveTo__JDD
(JNIEnv * env, jobject self, jlong pointer, jdouble x, jdouble y) {

    QRectF * rect = (QRectF*)pointer;
    rect->moveTo(x,y);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    moveTo
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealRect_moveTo__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QRectF * rect = (QRectF*)pointer;
    QPointF * point = (QPointF*)pointPointer;

    rect->moveTo(*point);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    adjust
 * Signature: (JDDDD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealRect_adjust
(JNIEnv * env, jobject self, jlong pointer, jdouble x1, jdouble y1, jdouble x2, jdouble y2) {

     QRectF * rect = (QRectF*)pointer;
     rect->adjust(x1,y1,x2,y2);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    width
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_common_SRealRect_width
(JNIEnv * env, jobject self, jlong pointer) {

     QRectF * rect = (QRectF*)pointer;
     return rect->width();
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    height
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_common_SRealRect_height
(JNIEnv * env, jobject self, jlong pointer) {

     QRectF * rect = (QRectF*)pointer;
     return rect->height();
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    setWidth
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealRect_setWidth
(JNIEnv * env, jobject self, jlong pointer, jdouble width) {

     QRectF * rect = (QRectF*)pointer;
     rect->setWidth(width);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    setHeight
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealRect_setHeight
(JNIEnv * env, jobject self, jlong pointer, jdouble height) {

     QRectF * rect = (QRectF*)pointer;
     rect->setHeight(height);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    size
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealRect_size
(JNIEnv * env, jobject self, jlong pointer) {

    QRectF * rect = (QRectF*)pointer;
    QSizeF * size = new QSizeF(rect->size());

    return (jlong)(intptr_t)size;
}
/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    setSize
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealRect_setSize
(JNIEnv * env, jobject self, jlong pointer, jlong sizePointer) {

    QRectF * rect = (QRectF*)pointer;
    QSizeF * size = (QSizeF*)sizePointer;

    rect->setSize(*size);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    contains
 * Signature: (JJZ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SRealRect_contains__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong another) {

     QRectF * rect = (QRectF*)pointer;
     QRectF * anotherRect = (QRectF*)another;
     return rect->contains(*anotherRect) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    contains
 * Signature: (JDD)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SRealRect_contains__JDD
(JNIEnv * env, jobject self, jlong pointer, jdouble ax, jdouble ay) {

     QRectF * rect = (QRectF*)pointer;
     return rect->contains(ax,ay) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    intersects
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SRealRect_intersects
(JNIEnv * env, jobject self, jlong pointer, jlong another) {

    QRectF * rect = (QRectF*)pointer;
    QRectF * anotherRect = (QRectF*)another;

    return rect->intersects(*anotherRect);
}


/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    marginsAdded
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealRect_marginsAdded
(JNIEnv * env, jobject self, jlong pointer, jlong marginsPointer) {

    QMarginsF * margins = (QMarginsF*)marginsPointer;
    QRectF * rect = (QRectF*)pointer;

    QRectF * result = new QRectF(rect->marginsAdded(*margins));
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    marginsRemoved
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealRect_marginsRemoved
(JNIEnv * env, jobject self, jlong pointer, jlong marginsPointer) {

    QMarginsF * margins = (QMarginsF*)marginsPointer;
    QRectF * rect = (QRectF*)pointer;

    QRectF * result = new QRectF(rect->marginsRemoved(*margins));
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_common_SRealRect
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealRect_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QRectF * rect = (QRectF*)pointer;
    delete rect;
    cleanJavaPointer(env,self);

}
