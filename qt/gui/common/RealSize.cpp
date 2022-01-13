#include "gui_global.h"
#include "java/common/org_swdc_qt_internal_common_SRealSize.h"

/*
 * Class:     org_swdc_qt_internal_common_SRealSize
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealSize_create__
(JNIEnv *, jobject) {

    QSizeF * size = new QSizeF();
    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_common_SRealSize
 * Method:    create
 * Signature: (DD)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealSize_create__DD
(JNIEnv *, jobject, jdouble width, jdouble height) {

    QSizeF * size = new QSizeF(width,height);
    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_common_SRealSize
 * Method:    isEmpty
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SRealSize_isEmpty
(JNIEnv * env, jobject self, jlong pointer) {

    QSizeF * size = (QSizeF*)pointer;
    return size->isEmpty() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_common_SRealSize
 * Method:    isValid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SRealSize_isValid
(JNIEnv * env, jobject self, jlong pointer) {

    QSizeF * size = (QSizeF*)pointer;
    return size->isValid() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_common_SRealSize
 * Method:    width
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_common_SRealSize_width
(JNIEnv * env, jobject self, jlong pointer) {

    QSizeF * size = (QSizeF*)pointer;
    return size->width();
}

/*
 * Class:     org_swdc_qt_internal_common_SRealSize
 * Method:    height
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_common_SRealSize_height
(JNIEnv * env, jobject self, jlong pointer) {

    QSizeF * size = (QSizeF*)pointer;
    return size->height();
}

/*
 * Class:     org_swdc_qt_internal_common_SRealSize
 * Method:    setWidth
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealSize_setWidth
(JNIEnv * env, jobject self, jlong pointer, jdouble width) {

    QSizeF * size = (QSizeF*)pointer;
    size->setWidth(width);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealSize
 * Method:    setHeight
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealSize_setHeight
(JNIEnv * env, jobject self, jlong pointer, jdouble height) {

    QSizeF * size = (QSizeF*)pointer;
    size->setHeight(height);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealSize
 * Method:    transpose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealSize_transpose
(JNIEnv * env, jobject self, jlong pointer) {

    QSizeF * size = (QSizeF*)pointer;
    size->transpose();
}

/*
 * Class:     org_swdc_qt_internal_common_SRealSize
 * Method:    transposed
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealSize_transposed
(JNIEnv * env, jobject self, jlong pointer) {


    QSizeF * size = (QSizeF*)pointer;
    QSizeF result = size->transposed();
    QSizeF * target = new QSizeF(result);

    return (jlong)(intptr_t)target;

}

/*
 * Class:     org_swdc_qt_internal_common_SRealSize
 * Method:    scale
 * Signature: (JDDI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealSize_scale
(JNIEnv * env, jobject self, jlong pointer, jdouble width, jdouble height, jint mode) {

    Qt::AspectRatioMode asMode = Qt::AspectRatioMode(mode);
    QSizeF * size = (QSizeF*)pointer;
    size->scale(width,height,asMode);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealSize
 * Method:    scaled
 * Signature: (JDDI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealSize_scaled
(JNIEnv * env, jobject self, jlong pointer, jdouble width, jdouble height, jint mode) {

    Qt::AspectRatioMode asMode = Qt::AspectRatioMode(mode);
    QSizeF * size = (QSizeF*)pointer;

    QSizeF target = size->scaled(width,height,asMode);
    QSizeF * result = new QSizeF(target);

    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_common_SRealSize
 * Method:    expandedTo
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealSize_expandedTo
(JNIEnv * env, jobject self, jlong pointer, jlong another) {

    QSizeF * size = (QSizeF*)pointer;
    QSizeF * anotherSize = (QSizeF*)another;

    QSizeF target = size->expandedTo(*anotherSize);
    QSizeF * result = new QSizeF(target);

    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_common_SRealSize
 * Method:    boundedTo
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealSize_boundedTo
(JNIEnv * env, jobject self, jlong pointer, jlong another) {

    QSizeF * size = (QSizeF*)pointer;
    QSizeF * anotherSize = (QSizeF*)another;

    QSizeF target = size->boundedTo(*anotherSize);
    QSizeF * result = new QSizeF(target);

    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_common_SRealSize
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealSize_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QSizeF * size = (QSizeF*)pointer;
    delete size;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_common_SRealSize
 * Method:    grownBy
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealSize_grownBy
(JNIEnv * env, jobject self, jlong pointer, jlong marginPointer) {

    QMarginsF * margins = (QMarginsF*)marginPointer;
    QSizeF * size = (QSizeF*)pointer;

    QSizeF target = size->grownBy(*margins);
    QSizeF * result = new QSizeF(target);

    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_common_SRealSize
 * Method:    shrunkBy
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealSize_shrunkBy
(JNIEnv * env, jobject self, jlong pointer, jlong marginPointer) {

    QMarginsF * margins = (QMarginsF*)marginPointer;
    QSizeF * size = (QSizeF*)pointer;

    QSizeF target = size->shrunkBy(*margins);
    QSizeF * result = new QSizeF(target);

    return (jlong)(intptr_t)result;
}
