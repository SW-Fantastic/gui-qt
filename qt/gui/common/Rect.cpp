#include "gui_global.h"
#include "java/common/org_swdc_qt_internal_common_SRect.h"


/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    create
 * Signature: ()V
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRect_create__
(JNIEnv * env, jobject self) {

    QRect * rect = new QRect();
    return (jlong)(intptr_t)rect;

}


/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    create
 * Signature: (IIII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRect_create__IIII
(JNIEnv * env, jobject self, jint left, jint top, jint width, jint height) {

    QRect * rect = new QRect(top,left,width,height);
    return (jlong)(intptr_t)rect;

}


/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    isEmpty
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SRect_isEmpty
(JNIEnv * env, jobject self, jlong pointer) {

    QRect * rect = (QRect*)pointer;
    return rect->isEmpty() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    isValid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SRect_isValid
(JNIEnv * env, jobject self, jlong pointer) {

    QRect * rect = (QRect*)pointer;
    return rect->isValid() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    left
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SRect_left
(JNIEnv * env, jobject self, jlong pointer) {

    QRect * rect = (QRect*)pointer;
    return rect->left();
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    top
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SRect_top
(JNIEnv * env, jobject self, jlong pointer) {

    QRect * rect = (QRect*)pointer;
    return rect->top();
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    right
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SRect_right
(JNIEnv * env, jobject self, jlong pointer) {

    QRect * rect = (QRect*)pointer;
    return rect->right();
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    bottom
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SRect_bottom
(JNIEnv * env, jobject self, jlong pointer) {

    QRect * rect = (QRect*)pointer;
    return rect->bottom();
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    normalized
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRect_normalized
(JNIEnv * env, jobject self, jlong pointer) {

    QRect * rect = (QRect*)pointer;
    QRect target = rect->normalized();
    QRect * result = new QRect(target);

    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    x
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SRect_x
(JNIEnv * env, jobject self, jlong pointer) {

    QRect * rect = (QRect*)pointer;
    return rect->x();
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    y
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SRect_y
(JNIEnv * env, jobject self, jlong pointer) {

    QRect * rect = (QRect*)pointer;
    return rect->y();
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    setLeft
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRect_setLeft
(JNIEnv * env, jobject self, jlong pointer, jint left) {

    QRect * rect = (QRect*)pointer;
    rect->setLeft(left);
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    setTop
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRect_setTop
(JNIEnv * env, jobject self, jlong pointer, jint top) {

    QRect * rect = (QRect*)pointer;
    rect->setTop(top);
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    setRight
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRect_setRight
(JNIEnv * env, jobject self, jlong pointer, jint right) {

    QRect * rect = (QRect*)pointer;
    rect->setRight(right);
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    setBottom
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRect_setBottom
(JNIEnv * env, jobject self, jlong pointer, jint bottom) {

    QRect * rect = (QRect*)pointer;
    rect->setBottom(bottom);
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    setX
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRect_setX
(JNIEnv * env, jobject self, jlong pointer, jint x) {

    QRect * rect = (QRect*)pointer;
    rect->setX(x);
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    setY
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRect_setY
(JNIEnv * env, jobject self, jlong pointer, jint y) {

    QRect * rect = (QRect*)pointer;
    rect->setY(y);
}


/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    setTopLeft
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRect_setTopLeft
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QPoint * point = (QPoint*)pointPointer;
    QRect * rect = (QRect*)pointer;

    rect->setTopLeft(*point);
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    setBottomRight
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRect_setBottomRight
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QPoint * point = (QPoint*)pointPointer;
    QRect * rect = (QRect*)pointer;

    rect->setBottomRight(*point);
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    setTopRight
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRect_setTopRight
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QPoint * point = (QPoint*)pointPointer;
    QRect * rect = (QRect*)pointer;

    rect->setTopRight(*point);
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    setBottomLeft
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRect_setBottomLeft
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QPoint * point = (QPoint*)pointPointer;
    QRect * rect = (QRect*)pointer;

    rect->setBottomLeft(*point);

}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    topLeft
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRect_topLeft
(JNIEnv * env, jobject self, jlong pointer) {

    QRect * rect = (QRect*)pointer;
    QPoint* result = new QPoint(rect->topLeft());
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    bottomRight
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRect_bottomRight
(JNIEnv * env, jobject self, jlong pointer) {

    QRect * rect = (QRect*)pointer;
    QPoint* result = new QPoint(rect->bottomRight());
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    topRight
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRect_topRight
(JNIEnv * env, jobject self, jlong pointer) {

    QRect * rect = (QRect*)pointer;
    QPoint* result = new QPoint(rect->topRight());
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    bottomLeft
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRect_bottomLeft
(JNIEnv * env, jobject self, jlong pointer) {

    QRect * rect = (QRect*)pointer;
    QPoint* result = new QPoint(rect->bottomLeft());
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    center
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRect_center
(JNIEnv * env, jobject self, jlong pointer) {

    QRect * rect = (QRect*)pointer;
    QPoint* result = new QPoint(rect->center());
    return (jlong)(intptr_t)result;
}



/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    moveLeft
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRect_moveLeft
(JNIEnv * env, jobject self, jlong pointer, jint left) {

    QRect * rect = (QRect*)pointer;
    rect->moveLeft(left);
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    moveTop
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRect_moveTop
(JNIEnv * env, jobject self, jlong pointer, jint top) {

    QRect * rect = (QRect*)pointer;
    rect->moveTop(top);
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    moveRight
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRect_moveRight
(JNIEnv * env, jobject self, jlong pointer, jint right) {

    QRect * rect = (QRect*)pointer;
    rect->moveRight(right);
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    moveBottom
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRect_moveBottom
(JNIEnv * env, jobject self, jlong pointer, jint bottom) {

    QRect * rect = (QRect*)pointer;
    rect->moveBottom(bottom);
}



/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    moveTopLeft
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRect_moveTopLeft
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QPoint * point = (QPoint*)pointPointer;
    QRect * rect = (QRect*)pointer;

    rect->moveTopLeft(*point);
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    moveBottomRight
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRect_moveBottomRight
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QPoint * point = (QPoint*)pointPointer;
    QRect * rect = (QRect*)pointer;

    rect->moveBottomRight(*point);
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    moveTopRight
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRect_moveTopRight
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QPoint * point = (QPoint*)pointPointer;
    QRect * rect = (QRect*)pointer;

    rect->moveTopRight(*point);
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    moveBottomLeft
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRect_moveBottomLeft
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QPoint * point = (QPoint*)pointPointer;
    QRect * rect = (QRect*)pointer;

    rect->moveBottomLeft(*point);
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    moveCenter
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRect_moveCenter
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QPoint * point = (QPoint*)pointPointer;
    QRect * rect = (QRect*)pointer;

    rect->moveCenter(*point);
}


/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    translate
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRect_translate__JII
(JNIEnv * env, jobject self, jlong pointer, jint dx, jint dy) {

    QRect * rect = (QRect*)pointer;
    rect->translate(dx,dy);
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    translate
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRect_translate__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QRect * rect = (QRect*)pointer;
    QPoint * point = (QPoint*)pointPointer;

    rect->translate(*point);
}


/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    transposed
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRect_transposed
(JNIEnv * env, jobject self, jlong pointer) {

    QRect * rect = (QRect*)pointer;
    QRect target = rect->transposed();
    QRect * result = new QRect(target);

    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    moveTo
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRect_moveTo__JII
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y) {

    QRect * rect = (QRect*)pointer;
    rect->moveTo(x,y);
}


/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    moveTo
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRect_moveTo__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QRect * rect = (QRect*)pointer;
    QPoint * point = (QPoint*)pointPointer;

    rect->moveTo(*point);
}


/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    adjust
 * Signature: (JIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRect_adjust
(JNIEnv * env, jobject self, jlong pointer, jint x1, jint y1, jint x2, jint y2) {

    QRect * rect = (QRect*)pointer;
    rect->adjust(x1,y1,x2,y2);
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    width
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SRect_width
(JNIEnv * env, jobject self, jlong pointer) {

    QRect * rect = (QRect*)pointer;
    return rect->width();
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    height
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SRect_height
(JNIEnv * env, jobject self, jlong pointer) {

    QRect * rect = (QRect*)pointer;
    return rect->height();
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    setWidth
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRect_setWidth
(JNIEnv * env, jobject self, jlong pointer, jint width) {

    QRect * rect = (QRect*)pointer;
    rect->setWidth(width);
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    setHeight
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRect_setHeight
(JNIEnv * env, jobject self, jlong pointer, jint height) {

    QRect * rect = (QRect*)pointer;
    rect->setHeight(height);
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    contains
 * Signature: (JJZ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SRect_contains__JJZ
(JNIEnv * env, jobject self, jlong pointer, jlong another, jboolean proper) {

    QRect * rect = (QRect*)pointer;
    QRect * anotherRect = (QRect*)another;

    return rect->contains(*anotherRect,proper);

}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    contains
 * Signature: (JII)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SRect_contains__JII
(JNIEnv * env, jobject self, jlong pointer, jint ax, jint ay) {

    QRect * rect = (QRect*)pointer;
    return rect->contains(ax,ay);
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    contains
 * Signature: (JIIZ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SRect_contains__JIIZ
(JNIEnv * env, jobject self, jlong pointer, jint ax, jint ay, jboolean proper) {

    QRect * rect = (QRect*)pointer;
    return rect->contains(*rect,proper);
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    intersects
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SRect_intersects
(JNIEnv * env, jobject self, jlong pointer, jlong another) {

    QRect * rect = (QRect*)pointer;
    QRect * anotherRect = (QRect*)another;

    return rect->intersects(*anotherRect);
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    size
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRect_size
(JNIEnv * env, jobject self, jlong pointer) {

    QRect * rect = (QRect*)pointer;
    QSize * size = new QSize(rect->size());

    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    setSize
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRect_setSize
(JNIEnv * env, jobject self, jlong pointer, jlong sizePointer) {

    QRect * rect = (QRect*)pointer;
    QSize * size = (QSize*)sizePointer;

    rect->setSize(*size);
}


/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    marginsAdded
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRect_marginsAdded
(JNIEnv * env, jobject self, jlong pointer, jlong margins) {

    QMargins * qMargins = (QMargins*)margins;
    QRect * rect = (QRect*)pointer;

    QRect * target = new QRect(rect->marginsAdded(*qMargins));
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    marginsRemoved
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRect_marginsRemoved
(JNIEnv * env, jobject self, jlong pointer, jlong margins) {

    QMargins * qMargins = (QMargins*)margins;
    QRect * rect = (QRect*)pointer;

    QRect * target = new QRect(rect->marginsRemoved(*qMargins));
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_common_SRect
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRect_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QRect * rect = (QRect*)pointer;
    delete rect;
    cleanJavaPointer(env,self);
}
