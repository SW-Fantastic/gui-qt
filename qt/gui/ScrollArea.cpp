#include "gui_global.h"
#include "java/types/SScrollArea.h"
#include "java/types/SWidget.h"

#include "java/org_swdc_qt_internal_widgets_SScrollArea.h"

SScrollArea::SScrollArea(jobject self):QScrollArea() {
    this->self = self;
}

SScrollArea::SScrollArea(jobject self,QWidget * parent):QScrollArea(parent) {
    this->self = self;
}

void SScrollArea::paintEvent(QPaintEvent* event) {
    QScrollArea::paintEvent(event);
    paintEventWithJava(event,this->self,(jlong)(intptr_t)this);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SScrollArea
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SScrollArea_create
(JNIEnv * env, jobject self, jlong parentPointer) {

    self = env->NewGlobalRef(self);
    SScrollArea * area = nullptr;

    if(parentPointer <= 0) {
        area = new SScrollArea(self);
    } else {
        QWidget * widget = (QWidget*)parentPointer;
        area = new SScrollArea(self,widget);
    }

    SWidget::initializeWidgetEvents(area,self);

    return (jlong)(intptr_t)area;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SScrollArea
 * Method:    widget
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SScrollArea_widget
(JNIEnv * env, jobject self, jlong pointer) {

    QScrollArea * area = (QScrollArea*)pointer;
    return (jlong)(intptr_t)area->widget();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SScrollArea
 * Method:    setWidget
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SScrollArea_setWidget
(JNIEnv * env, jobject self, jlong pointer, jlong widgetPointer) {

    QScrollArea * area = (QScrollArea*)pointer;
    QWidget * widget = (QWidget*)widgetPointer;
    area->setWidget(widget);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SScrollArea
 * Method:    takeWidget
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SScrollArea_takeWidget
(JNIEnv * env, jobject self, jlong pointer) {

    QScrollArea * area = (QScrollArea*)pointer;
    return (jlong)(intptr_t)area->takeWidget();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SScrollArea
 * Method:    widgetResizable
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SScrollArea_widgetResizable
(JNIEnv * env, jobject self, jlong pointer) {

    QScrollArea * area = (QScrollArea*)pointer;
    return area->widgetResizable() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SScrollArea
 * Method:    setWidgetResizable
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SScrollArea_setWidgetResizable
(JNIEnv * env, jobject self, jlong pointer, jboolean resizeable) {

    QScrollArea * area = (QScrollArea*)pointer;
    area->setWidgetResizable(resizeable);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SScrollArea
 * Method:    sizeHint
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SScrollArea_sizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QScrollArea * area = (QScrollArea*)pointer;
    QSize * size = new QSize(area->sizeHint());
    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SScrollArea
 * Method:    focusNextPrevChild
 * Signature: (JZ)J
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SScrollArea_focusNextPrevChild
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QScrollArea * area = (QScrollArea*)pointer;
    return area->focusNextPrevChild(val) ? JNI_TRUE : JNI_TRUE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SScrollArea
 * Method:    alignment
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SScrollArea_alignment
(JNIEnv * env, jobject self, jlong pointer) {

    QScrollArea * area = (QScrollArea*)pointer;
    Qt::Alignment align = area->alignment();
    return (unsigned int)(align);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SScrollArea
 * Method:    setAlignment
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SScrollArea_setAlignment
(JNIEnv * env, jobject self, jlong pointer, jlong align) {

    Qt::Alignment alignment = Qt::Alignment((unsigned int)align);
    QScrollArea * area = (QScrollArea*)pointer;
    area->setAlignment(alignment);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SScrollArea
 * Method:    ensureVisible
 * Signature: (JIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SScrollArea_ensureVisible
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y, jint xmargin, jint ymargin) {

    QScrollArea * area = (QScrollArea*)pointer;
    area->ensureVisible(x,y,xmargin,ymargin);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SScrollArea
 * Method:    ensureWidgetVisible
 * Signature: (JJII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SScrollArea_ensureWidgetVisible
(JNIEnv * env, jobject self, jlong pointer, jlong widgetPointer, jint xmargin, jint ymargin) {

    QScrollArea * area = (QScrollArea*)pointer;
    QWidget * widget = (QWidget*)widgetPointer;
    area->ensureWidgetVisible(widget,xmargin,ymargin);
}
