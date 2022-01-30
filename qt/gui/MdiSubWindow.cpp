#include "gui_global.h"
#include "java/types/SWidget.h"
#include "java/org_swdc_qt_internal_widgets_SMdiSubWindow.h"

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiSubWindow
 * Method:    sizeHint
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMdiSubWindow_sizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QMdiSubWindow * window = (QMdiSubWindow*)pointer;
    QSize * size = new QSize(window->sizeHint());
    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiSubWindow
 * Method:    minimumSizeHint
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMdiSubWindow_minimumSizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QMdiSubWindow * window = (QMdiSubWindow*)pointer;
    QSize * size = new QSize(window->minimumSizeHint());
    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiSubWindow
 * Method:    setWidget
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMdiSubWindow_setWidget
(JNIEnv * env, jobject self, jlong pointer, jlong widgetPointer) {

    QMdiSubWindow * window = (QMdiSubWindow*)pointer;
    QWidget * widget = (QWidget*)widgetPointer;
    window->setWidget(widget);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiSubWindow
 * Method:    widget
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMdiSubWindow_widget
(JNIEnv * env, jobject self, jlong pointer) {

    QMdiSubWindow * window = (QMdiSubWindow*)pointer;
    return (jlong)(intptr_t)window->widget();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiSubWindow
 * Method:    isShaded
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SMdiSubWindow_isShaded
(JNIEnv * env, jobject self, jlong pointer) {

    QMdiSubWindow * window = (QMdiSubWindow*)pointer;
    return window->isShaded() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiSubWindow
 * Method:    setOption
 * Signature: (JIZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMdiSubWindow_setOption
(JNIEnv * env, jobject self, jlong pointer, jint option, jboolean val) {

    QMdiSubWindow * window = (QMdiSubWindow*)pointer;
    QMdiSubWindow::SubWindowOption opt = QMdiSubWindow::SubWindowOption(option);
    window->setOption(opt,val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiSubWindow
 * Method:    setKeyboardSingleStep
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMdiSubWindow_setKeyboardSingleStep
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QMdiSubWindow * window = (QMdiSubWindow*)pointer;
    window->setKeyboardSingleStep(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiSubWindow
 * Method:    keyboardSingleStep
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SMdiSubWindow_keyboardSingleStep
(JNIEnv * env, jobject self, jlong pointer) {

    QMdiSubWindow * window = (QMdiSubWindow*)pointer;
    return window->keyboardSingleStep();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiSubWindow
 * Method:    setKeyboardPageStep
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMdiSubWindow_setKeyboardPageStep
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QMdiSubWindow * window = (QMdiSubWindow*)pointer;
    window->setKeyboardPageStep(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiSubWindow
 * Method:    keyboardPageStep
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SMdiSubWindow_keyboardPageStep
(JNIEnv * env, jobject self, jlong pointer) {

    QMdiSubWindow * window = (QMdiSubWindow*)pointer;
    return window->keyboardPageStep();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMdiSubWindow
 * Method:    wrap
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMdiSubWindow_wrap
(JNIEnv * env, jobject self, jlong pointer) {

    QMdiSubWindow * window = (QMdiSubWindow*)pointer;
    self = env->NewGlobalRef(self);
    SWidget::initializeWidgetEvents(window,self);
}
