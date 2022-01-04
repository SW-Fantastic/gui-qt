#include"gui_global.h"
#include"java/org_swdc_qt_internal_widgets_SStackWidget.h"

/*
 * Class:     org_swdc_qt_internal_widgets_SStackWidget
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SStackWidget_create
(JNIEnv * env, jobject self) {

    QStackedWidget * stackWidget = new QStackedWidget();

    self = env->NewGlobalRef(self);
    stackWidget->connect(stackWidget,&QStackedWidget::destroyed,[self]()->void{
        JNIEnv* env = getContext();

        cleanJavaPointer(env,self);
        env->DeleteGlobalRef(self);

        releaseContext();
    });
    return (jlong)(intptr_t)stackWidget;

}


/*
 * Class:     org_swdc_qt_internal_widgets_SStackWidget
 * Method:    addWidget
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SStackWidget_addWidget
(JNIEnv * env, jobject self, jlong pointer, jlong widgetPointer) {

    QStackedWidget* widget = (QStackedWidget*)pointer;
    QWidget* target = (QWidget*)widgetPointer;

    return widget->addWidget(target);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SStackWidget
 * Method:    insertWidget
 * Signature: (JIJ)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SStackWidget_insertWidget
(JNIEnv * env, jobject self, jlong pointer, jint index, jlong widgetPointer) {

    QStackedWidget* widget = (QStackedWidget*)pointer;
    QWidget* target = (QWidget*)widgetPointer;
    return widget->insertWidget(index,target);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SStackWidget
 * Method:    removeWidget
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SStackWidget_removeWidget
(JNIEnv * env, jobject self, jlong pointer, jlong widgetPointer){

    QStackedWidget* widget = (QStackedWidget*)pointer;
    QWidget* target = (QWidget*)widgetPointer;
    widget->removeWidget(target);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SStackWidget
 * Method:    currentIndex
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SStackWidget_currentIndex
(JNIEnv * env, jobject self, jlong pointer) {

    QStackedWidget* widget = (QStackedWidget*)pointer;
    return widget->currentIndex();

}

/*
 * Class:     org_swdc_qt_internal_widgets_SStackWidget
 * Method:    indexOf
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SStackWidget_indexOf
(JNIEnv * env, jobject self, jlong pointer, jlong widgetPointer) {

    QStackedWidget* widget = (QStackedWidget*)pointer;
    QWidget* target = (QWidget*)widgetPointer;
    return widget->indexOf(target);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SStackWidget
 * Method:    count
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SStackWidget_count
(JNIEnv * env, jobject self, jlong pointer) {

    QStackedWidget* widget = (QStackedWidget*)pointer;
    return widget->count();

}

/*
 * Class:     org_swdc_qt_internal_widgets_SStackWidget
 * Method:    setCurrentIndex
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SStackWidget_setCurrentIndex
(JNIEnv * env, jobject self, jlong pointer, jint index) {

    QStackedWidget* widget = (QStackedWidget*)pointer;
    widget->setCurrentIndex(index);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SStackWidget
 * Method:    setCurrentWidget
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SStackWidget_setCurrentWidget
(JNIEnv * env, jobject self, jlong pointer, jlong widgetPointer) {

    QStackedWidget* widget = (QStackedWidget*)pointer;
    QWidget* target = (QWidget*)widgetPointer;
    widget->setCurrentWidget(target);

}
