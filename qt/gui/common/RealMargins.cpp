#include "gui_global.h"
#include "java/common/org_swdc_qt_internal_common_SRealMargins.h"

/*
 * Class:     org_swdc_qt_internal_common_SRealMargins
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealMargins_create__
(JNIEnv *, jobject) {

    QMarginsF * margins = new QMarginsF();
    return (jlong)(intptr_t)margins;

}

/*
 * Class:     org_swdc_qt_internal_common_SRealMargins
 * Method:    create
 * Signature: (DDDD)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealMargins_create__DDDD
(JNIEnv *, jobject, jdouble left, jdouble top, jdouble right, jdouble bottom) {

    QMarginsF * margins = new QMarginsF(left,top,right,bottom);
    return (jlong)(intptr_t)margins;
}

/*
 * Class:     org_swdc_qt_internal_common_SRealMargins
 * Method:    left
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_common_SRealMargins_left
(JNIEnv * env, jobject self, jlong pointer) {

    QMarginsF * margins = (QMarginsF*)pointer;
    return margins->left();
}

/*
 * Class:     org_swdc_qt_internal_common_SRealMargins
 * Method:    top
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_common_SRealMargins_top
(JNIEnv * env, jobject self, jlong pointer) {

    QMarginsF * margins = (QMarginsF*)pointer;
    return margins->top();
}

/*
 * Class:     org_swdc_qt_internal_common_SRealMargins
 * Method:    right
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_common_SRealMargins_right
(JNIEnv * env, jobject self, jlong pointer) {

    QMarginsF * margins = (QMarginsF*)pointer;
    return margins->right();
}

/*
 * Class:     org_swdc_qt_internal_common_SRealMargins
 * Method:    bottom
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_common_SRealMargins_bottom
(JNIEnv * env, jobject self, jlong pointer) {

    QMarginsF * margins = (QMarginsF*)pointer;
    return margins->bottom();
}

/*
 * Class:     org_swdc_qt_internal_common_SRealMargins
 * Method:    setLeft
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealMargins_setLeft
(JNIEnv * env, jobject self, jlong pointer, jdouble left) {

    QMarginsF * margins = (QMarginsF*)pointer;
    return margins->setLeft(left);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealMargins
 * Method:    setTop
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealMargins_setTop
(JNIEnv * env, jobject self, jlong pointer, jdouble top) {

    QMarginsF * margins = (QMarginsF*)pointer;
    return margins->setTop(top);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealMargins
 * Method:    setRight
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealMargins_setRight
(JNIEnv * env, jobject self, jlong pointer, jdouble right) {

    QMarginsF * margins = (QMarginsF*)pointer;
    return margins->setRight(right);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealMargins
 * Method:    setBottom
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealMargins_setBottom
(JNIEnv * env, jobject self, jlong pointer, jdouble bottom) {

    QMarginsF * margins = (QMarginsF*)pointer;
    return margins->setBottom(bottom);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealMargins
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealMargins_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QMarginsF * margins = (QMarginsF*)pointer;
    delete margins;
    cleanJavaPointer(env,self);
}
