#include "gui_global.h"
#include "java/types/SDockWidget.h"
#include "java/types/SWidget.h"
#include "java/org_swdc_qt_internal_widgets_SDockWidget.h"

SDockWidget::SDockWidget(jobject self):QDockWidget() {
    this->self = self;
}

SDockWidget::SDockWidget(jobject self, QWidget * parent) : QDockWidget(parent) {
    this->self = self;
}

void SDockWidget::paintEvent(QPaintEvent *event) {
    QDockWidget::paintEvent(event);
    paintEventWithJava(event,this->self,(jlong)(intptr_t)this);
}


/*
 * Class:     org_swdc_qt_internal_widgets_SDockWidget
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SDockWidget_create
(JNIEnv * env, jobject self, jlong parentPointer) {

    self = env->NewGlobalRef(self);
    SDockWidget * dock = nullptr;
    if(parentPointer <= 0) {
        dock = new SDockWidget(self);
    } else {
        QWidget * parent = (QWidget*)parentPointer;
        dock = new SDockWidget(self,parent);
    }

    SWidget::initializeWidgetEvents(dock,self);

    return (jlong)(intptr_t)dock;

}

/*
 * Class:     org_swdc_qt_internal_widgets_SDockWidget
 * Method:    setFeatures
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDockWidget_setFeatures
(JNIEnv * env, jobject self, jlong pointer, jint futures) {


    QDockWidget::DockWidgetFeatures qFutures = QDockWidget::DockWidgetFeatures(futures);
    QDockWidget * dock = (QDockWidget*)pointer;
    dock->setFeatures(qFutures);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDockWidget
 * Method:    setFloating
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDockWidget_setFloating
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QDockWidget * dock = (QDockWidget*)pointer;
    dock->setFloating(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDockWidget
 * Method:    isFloating
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SDockWidget_isFloating
(JNIEnv * env, jobject self, jlong pointer) {

    QDockWidget * dock = (QDockWidget*)pointer;
    return dock->isFloating() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDockWidget
 * Method:    setAllowedAreas
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDockWidget_setAllowedAreas
(JNIEnv * env, jobject self, jlong pointer, jint areas) {

    QDockWidget * dock = (QDockWidget*)pointer;
    Qt::DockWidgetAreas areasVal = Qt::DockWidgetAreas(areas);
    dock->setAllowedAreas(areasVal);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDockWidget
 * Method:    setTitleBarWidget
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDockWidget_setTitleBarWidget
(JNIEnv * env, jobject self, jlong pointer, jlong widgetPointer) {

    QDockWidget * dock = (QDockWidget*)pointer;
    QWidget * titleWidget = (QWidget*)widgetPointer;
    dock->setTitleBarWidget(titleWidget);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDockWidget
 * Method:    titleBarWidget
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SDockWidget_titleBarWidget
(JNIEnv * env, jobject self, jlong pointer) {

    QDockWidget * dock = (QDockWidget*)pointer;
    QWidget * widget = dock->titleBarWidget();
    return (jlong)(intptr_t)widget;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDockWidget
 * Method:    isAreaAllowed
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SDockWidget_isAreaAllowed
(JNIEnv * env, jobject self, jlong pointer, jint area) {

    Qt::DockWidgetArea qArea = Qt::DockWidgetArea(area);
    QDockWidget * dock = (QDockWidget*)pointer;
    return dock->isAreaAllowed(qArea) ? JNI_TRUE : JNI_FALSE;
}
