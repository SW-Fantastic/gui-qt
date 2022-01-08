#include"gui_global.h"
#include"java/layout/org_swdc_qt_internal_layout_SLayoutItem.h"

/*
 * Class:     org_swdc_qt_layout_SLayoutItem
 * Method:    getSizeHint
 * Signature: (J)Lorg/swdc/qt/beans/SSize;
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_layout_SLayoutItem_getSizeHint
  (JNIEnv * env, jobject self, jlong pointer) {
    QLayoutItem* item = (QLayoutItem*)pointer;
    QSize * size = new QSize(item->sizeHint());
    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_layout_SLayoutItem
 * Method:    getMinimumSize
 * Signature: (J)Lorg/swdc/qt/beans/SSize;
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_layout_SLayoutItem_getMinimumSize
(JNIEnv * env, jobject self, jlong pointer) {
    QLayoutItem* item = (QLayoutItem*)pointer;
    QSize * size = new QSize(item->minimumSize());
    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_layout_SLayoutItem
 * Method:    getMaximumSize
 * Signature: (J)Lorg/swdc/qt/beans/SSize;
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_layout_SLayoutItem_getMaximumSize
(JNIEnv * env, jobject self, jlong pointer) {
    QLayoutItem* item = (QLayoutItem*)pointer;
    QSize * size = new QSize(item->maximumSize());
    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_layout_SLayoutItem
 * Method:    setGeometry
 * Signature: (JIIIIIIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_layout_SLayoutItem_setGeometry
(JNIEnv * env, jobject self, jlong pointer,
  jint x, jint y, jint width, jint height,
  jint top, jint center, jint bottom, jint left, jint right) {

    QLayoutItem* item = (QLayoutItem*)pointer;

    QRect rect(left,top,width,height);
    rect.setX(x);
    rect.setY(y);
    rect.setBottom(bottom);
    rect.setRight(right);
    rect.setWidth(width);

    item->setGeometry(rect);
}

/*
 * Class:     org_swdc_qt_layout_SLayoutItem
 * Method:    getGeometry
 * Signature: (J)Lorg/swdc/qt/beans/SRect;
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_layout_SLayoutItem_getGeometry
(JNIEnv * env, jobject self, jlong pointer) {
    QLayoutItem* item = (QLayoutItem*)pointer;
    QRect rect = item->geometry();
    QRect * target = new QRect(rect);
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_layout_SLayoutItem
 * Method:    isEmpty
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_layout_SLayoutItem_isEmpty
(JNIEnv * env, jobject self, jlong pointer){
    QLayoutItem* item = (QLayoutItem*)pointer;
    return item->isEmpty() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_layout_SLayoutItem
 * Method:    hasHeightForWidth
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_layout_SLayoutItem_hasHeightForWidth
(JNIEnv * env, jobject self, jlong pointer) {
    QLayoutItem* item = (QLayoutItem*)pointer;
    return item->hasHeightForWidth() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_layout_SLayoutItem
 * Method:    setHeightForWidth
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_layout_SLayoutItem_setHeightForWidth
(JNIEnv * env, jobject self, jlong pointer, jint value) {
    QLayoutItem* item = (QLayoutItem*)pointer;
    return item->heightForWidth(value);
}

/*
 * Class:     org_swdc_qt_layout_SLayoutItem
 * Method:    setMinimumHeightForWidth
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_layout_SLayoutItem_setMinimumHeightForWidth
(JNIEnv * env, jobject self, jlong pointer, jint value) {
    QLayoutItem* item = (QLayoutItem*)pointer;
    return item->minimumHeightForWidth(value);
}

/*
 * Class:     org_swdc_qt_layout_SLayoutItem
 * Method:    doInvalidate
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_layout_SLayoutItem_doInvalidate
(JNIEnv * env, jobject self, jlong pointer) {
    QLayoutItem* item = (QLayoutItem*)pointer;
    item->invalidate();
}
