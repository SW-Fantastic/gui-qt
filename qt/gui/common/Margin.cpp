#include "gui_global.h"
#include "java/common/org_swdc_qt_internal_common_SMargins.h"

/*
 * Class:     org_swdc_qt_internal_common_SMargins
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SMargins_create__
  (JNIEnv * env, jobject self) {

    QMargins * margins = new QMargins();
    return (jlong)(intptr_t)margins;

}


/*
 * Class:     org_swdc_qt_internal_common_SMargins
 * Method:    create
 * Signature: (IIII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SMargins_create__IIII
(JNIEnv * env, jobject self, jint left, jint top, jint right, jint bottom) {

    QMargins * margins = new QMargins(left,top,right,bottom);
    return(jlong)(intptr_t)margins;
}

/*
 * Class:     org_swdc_qt_internal_common_SMargins
 * Method:    left
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SMargins_left
(JNIEnv * env, jobject self, jlong pointer) {

    QMargins * margins = (QMargins*)pointer;
    return margins->left();
}

/*
 * Class:     org_swdc_qt_internal_common_SMargins
 * Method:    top
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SMargins_top
(JNIEnv * env, jobject self, jlong pointer) {

    QMargins * margins = (QMargins*)pointer;
    return margins->top();
}

/*
 * Class:     org_swdc_qt_internal_common_SMargins
 * Method:    right
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SMargins_right
(JNIEnv * env, jobject self, jlong pointer) {

    QMargins * margins = (QMargins*)pointer;
    return margins->right();
}

/*
 * Class:     org_swdc_qt_internal_common_SMargins
 * Method:    bottom
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SMargins_bottom
(JNIEnv * env, jobject self, jlong pointer) {

    QMargins * margins = (QMargins*)pointer;
    return margins->bottom();
}

/*
 * Class:     org_swdc_qt_internal_common_SMargins
 * Method:    setLeft
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SMargins_setLeft
(JNIEnv * env, jobject self, jlong pointer, jint left) {

    QMargins * margins = (QMargins*)pointer;
    margins->setLeft(left);
}

/*
 * Class:     org_swdc_qt_internal_common_SMargins
 * Method:    setTop
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SMargins_setTop
(JNIEnv * env, jobject self, jlong pointer, jint top) {

    QMargins * margins = (QMargins*)pointer;
    margins->setTop(top);
}

/*
 * Class:     org_swdc_qt_internal_common_SMargins
 * Method:    setRight
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SMargins_setRight
(JNIEnv * env, jobject self, jlong pointer, jint right) {

    QMargins * margins = (QMargins*)pointer;
    margins->setRight(right);
}

/*
 * Class:     org_swdc_qt_internal_common_SMargins
 * Method:    setBottom
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SMargins_setBottom
(JNIEnv * env, jobject self, jlong pointer, jint bottom) {

    QMargins * margins = (QMargins*)pointer;
    margins->setBottom(bottom);
}


/*
 * Class:     org_swdc_qt_internal_common_SMargins
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SMargins_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QMargins * margins = (QMargins*)pointer;
    delete margins;
    cleanJavaPointer(env,self);
}

