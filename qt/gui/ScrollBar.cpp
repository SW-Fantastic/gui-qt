#include "gui_global.h"
#include "java/types/SScrollBar.h"
#include "java/types/SWidget.h"
#include "java/org_swdc_qt_internal_widgets_SScrollBar.h"

SScrollBar::SScrollBar(jobject self):QScrollBar() {
    this->self = self;
}

SScrollBar::SScrollBar(jobject self, QWidget* parent):QScrollBar(parent) {
    this->self = self;
}

void SScrollBar::paintEvent(QPaintEvent *event){
    QScrollBar::paintEvent(event);
    paintEventWithJava(event,this->self,(jlong)(intptr_t)this);
}

void SScrollBar::setSelf(jobject self){
    if(this->self == NULL) {
        this->self = self;
    }
}

/*
 * Class:     org_swdc_qt_internal_widgets_SScrollBar
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SScrollBar_create
(JNIEnv * env, jobject self, jlong pointer) {

    self = env->NewGlobalRef(self);
    SScrollBar * bar = nullptr;
    if(pointer <= 0) {
        bar = new SScrollBar(self);
    } else {
        QWidget * widget = (QWidget*)pointer;
        bar = new SScrollBar(self,widget);
    }

    SWidget::initializeWidgetEvents(bar,self);

    return (jlong)(intptr_t)bar;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SScrollBar
 * Method:    sizeHint
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SScrollBar_sizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QScrollBar * bar = (QScrollBar*)pointer;
    QSize * size = new QSize(bar->sizeHint());
    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SScrollBar
 * Method:    wrap
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SScrollBar_wrap
(JNIEnv * env, jobject self, jlong pointer) {

    self = env->NewGlobalRef(self);
    QScrollBar * bar = (QScrollBar*)pointer;

    SWidget::initializeWidgetEvents(bar,self);

    SScrollBar * sscrollbar = qobject_cast<SScrollBar*>(bar);
    if(sscrollbar) {
        sscrollbar->setSelf(self);
    }
}

