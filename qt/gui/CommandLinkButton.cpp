#include "gui_global.h"
#include "java/types/SWidget.h"
#include "java/types/SCommandLinkButton.h"

#include "java/org_swdc_qt_internal_widgets_SCommandLinkButton.h"

SCommandLinkButton::SCommandLinkButton(jobject self):QCommandLinkButton() {
    this->self = self;
}

SCommandLinkButton::SCommandLinkButton(jobject self,QWidget * parent):QCommandLinkButton(parent) {
    this->self = self;
}

void SCommandLinkButton::paintEvent(QPaintEvent * event) {
    QCommandLinkButton::paintEvent(event);
    paintEventWithJava(event,this->self,(jlong)(intptr_t)this);
}


/*
 * Class:     org_swdc_qt_internal_widgets_SCommandLinkButton
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SCommandLinkButton_create
(JNIEnv * env, jobject self, jlong parent) {

    self = env->NewGlobalRef(self);
    SCommandLinkButton * button = nullptr;
    if(parent <= 0) {
        button = new SCommandLinkButton(self);
    } else {
        QWidget * widget = (QWidget*)parent;
        button = new SCommandLinkButton(self,widget);
    }

    SWidget::initializeWidgetEvents(button,self);

    return (jlong)(intptr_t)button;

}

