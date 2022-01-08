#include "gui_global.h"
#include "java/common/org_swdc_qt_internal_common_SSize.h"


/*
 * Class:     org_swdc_qt_internal_common_SSize
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SSize_create
(JNIEnv * env, jobject self) {

    QSize * size = new QSize();
    return (jlong)(intptr_t)size;

}


/*
 * Class:     org_swdc_qt_internal_common_SSize
 * Method:    isEmpty
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SSize_isEmpty
(JNIEnv * env, jobject self, jlong pointer) {

    QSize * size = (QSize*)pointer;
    return size->isEmpty() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_common_SSize
 * Method:    isValid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_common_SSize_isValid
(JNIEnv * env, jobject self, jlong pointer) {

    QSize * size = (QSize*)pointer;
    return size->isValid() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_common_SSize
 * Method:    width
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SSize_width
(JNIEnv * env, jobject self, jlong pointer) {

    QSize * size = (QSize*)pointer;
    return size->width();
}

/*
 * Class:     org_swdc_qt_internal_common_SSize
 * Method:    height
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SSize_height
(JNIEnv * env, jobject self, jlong pointer) {

    QSize * size = (QSize*)pointer;
    return size->height();
}

/*
 * Class:     org_swdc_qt_internal_common_SSize
 * Method:    setWidth
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SSize_setWidth
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QSize * size = (QSize*)pointer;
    size->setWidth(val);
}

/*
 * Class:     org_swdc_qt_internal_common_SSize
 * Method:    setHeight
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SSize_setHeight
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QSize * size = (QSize*)pointer;
    size->setHeight(val);
}

/*
 * Class:     org_swdc_qt_internal_common_SSize
 * Method:    transpose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SSize_transpose
(JNIEnv * env, jobject self, jlong pointer) {

    QSize * size = (QSize*)pointer;
    size->transpose();
}

/*
 * Class:     org_swdc_qt_internal_common_SSize
 * Method:    transposed
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SSize_transposed
(JNIEnv * env, jobject self, jlong pointer) {

    QSize * size = (QSize*)pointer;
    QSize result = size->transposed();
    QSize * target = new QSize(result);

    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_common_SSize
 * Method:    scale
 * Signature: (JIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SSize_scale
(JNIEnv * env, jobject self, jlong pointer, jint width, jint height, jint mode) {

    Qt::AspectRatioMode qAspMode = Qt::AspectRatioMode(mode);
    QSize * size = (QSize*)pointer;
    size->scale(width,height,qAspMode);

}

/*
 * Class:     org_swdc_qt_internal_common_SSize
 * Method:    scaled
 * Signature: (JIII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SSize_scaled
(JNIEnv * env, jobject self, jlong pointer, jint width, jint height, jint mode) {

    Qt::AspectRatioMode qAspMode = Qt::AspectRatioMode(mode);
    QSize * size = (QSize*)pointer;
    QSize target = size->scaled(width,height,qAspMode);
    QSize * result = new QSize(target);

    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_common_SSize
 * Method:    expandedTo
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SSize_expandedTo
(JNIEnv * env, jobject self, jlong pointer, jlong another) {

    QSize * size = (QSize*)pointer;
    QSize * anotherSize = (QSize*)another;

    QSize target = size->expandedTo(*anotherSize);
    QSize * result = new QSize(target);

    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_common_SSize
 * Method:    boundedTo
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SSize_boundedTo
(JNIEnv * env, jobject self, jlong pointer, jlong another) {

    QSize * size = (QSize*)pointer;
    QSize * anotherSize = (QSize*)another;

    QSize target = size->boundedTo(*anotherSize);
    QSize * result = new QSize(target);

    return (jlong)(intptr_t)result;
}


/*
 * Class:     org_swdc_qt_internal_common_SSize
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SSize_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QSize * size = (QSize*)pointer;
    delete size;
    cleanJavaPointer(env,self);
}
