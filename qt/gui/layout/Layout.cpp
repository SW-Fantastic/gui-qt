#include"gui_global.h"
#include"java/layout/org_swdc_qt_internal_layout_SLayout.h"

/*
 * Class:     org_swdc_qt_layout_SLayout
 * Method:    doActive
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_layout_SLayout_doActive
(JNIEnv * env, jobject self, jlong pointer) {
    QLayout * layout = (QLayout*)pointer;
    bool result = layout->activate();
    return result ? JNI_TRUE : JNI_FALSE;
}


/*
 * Class:     org_swdc_qt_layout_SLayout
 * Method:    addWidget
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_layout_SLayout_addWidget
(JNIEnv * env, jobject self, jlong pointer, jlong widgetPointer) {
    QLayout * layout = (QLayout*)pointer;
    layout->addWidget((QWidget*)widgetPointer);
}

/*
 * Class:     org_swdc_qt_layout_SLayout
 * Method:    count
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_layout_SLayout_count
(JNIEnv * env, jobject self, jlong pointer) {
    QLayout * layout = (QLayout*)pointer;
    return (jint)layout->count();
}


/*
 * Class:     org_swdc_qt_layout_SLayout
 * Method:    removeWidget
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_layout_SLayout_removeWidget
(JNIEnv * env, jobject self, jlong pointer, jlong widgetPointer) {
    QLayout * layout = (QLayout*)pointer;
    layout->removeWidget((QWidget*)widgetPointer);
}


/*
 * Class:     org_swdc_qt_layout_SLayout
 * Method:    addItem
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_layout_SLayout_addItem
(JNIEnv * env, jobject self, jlong pointer, jlong itemPointer) {
    QLayout * layout = (QLayout*)pointer;
    layout->addItem((QLayoutItem*)itemPointer);
}

/*
 * Class:     org_swdc_qt_layout_SLayout
 * Method:    removeItem
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_layout_SLayout_removeItem
(JNIEnv * env, jobject self, jlong pointer, jlong itemPointer) {
    QLayout * layout = (QLayout*)pointer;
    layout->removeItem((QLayoutItem*)itemPointer);
}


/*
 * Class:     org_swdc_qt_layout_SLayout
 * Method:    setSpacing
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_layout_SLayout_setSpacing
(JNIEnv * env, jobject self, jlong pointer, jint val) {
    QLayout * layout = (QLayout*)pointer;
    layout->setSpacing(val);
}

/*
 * Class:     org_swdc_qt_layout_SLayout
 * Method:    getSpacing
 * Signature: (J)V
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_layout_SLayout_getSpacing
(JNIEnv * env, jobject self, jlong pointer) {
    QLayout * layout = (QLayout*)pointer;
    return layout->spacing();
}

/*
 * Class:     org_swdc_qt_layout_SLayout
 * Method:    getContentsMargins
 * Signature: (J)Lorg/swdc/qt/beans/SMargins;
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_layout_SLayout_getContentsMargins
(JNIEnv * env, jobject self, jlong pointer) {
    QLayout * layout = (QLayout*)pointer;
    QMargins * margins = new QMargins(layout->contentsMargins());
    return (jlong)(intptr_t)margins;
}

/*
 * Class:     org_swdc_qt_layout_SLayout
 * Method:    setContentsMargins
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_layout_SLayout_setContentsMargins
(JNIEnv * env, jobject self,jlong pointer, jint top, jint bottom, jint left, jint right) {
    QLayout * layout = (QLayout*)pointer;
    layout->setContentsMargins(left,top,right,bottom);
}


/*
 * Class:     org_swdc_qt_layout_SLayout
 * Method:    doDispose
 * Signature: (J)V
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_layout_SLayout_doDispose
(JNIEnv * env, jobject self, jlong pointer) {
    QLayout * layout = (QLayout*)pointer;
    delete layout;
    return JNI_TRUE;
}
