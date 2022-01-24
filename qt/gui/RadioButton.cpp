#include "gui_global.h"
#include "java/types/SWidget.h"
#include "java/types/SRadioButton.h"
#include "java/org_swdc_qt_internal_widgets_SRadioButton.h"


SRadioButton::SRadioButton(jobject self):QRadioButton() {
    this->self = self;
}

SRadioButton::SRadioButton(jobject self,QWidget * parent):QRadioButton(parent) {
    this->self = self;
}

void SRadioButton::paintEvent(QPaintEvent *event) {
    QRadioButton::paintEvent(event);
    paintEventWithJava(event,this->self,(jlong)(intptr_t)this);
}


/*
 * Class:     org_swdc_qt_internal_widgets_SRadioButton
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SRadioButton_create
(JNIEnv * env, jobject self, jlong parentPointer) {

    self = env->NewGlobalRef(self);
    SRadioButton * radioButton = nullptr;
    if(parentPointer > 0) {
        QWidget * widget = (QWidget*)parentPointer;
        radioButton = new SRadioButton(self,widget);
    } else {
        radioButton = new SRadioButton(self);
    }

    SWidget::initializeWidgetEvents(radioButton,self);

    return (jlong)(intptr_t)radioButton;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SRadioButton
 * Method:    sizeHint
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SRadioButton_sizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QRadioButton * radioButton = (QRadioButton*)pointer;
    QSize * size = new QSize(radioButton->sizeHint());
    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SRadioButton
 * Method:    minimumSizeHint
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SRadioButton_minimumSizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QRadioButton * radioButton = (QRadioButton*)pointer;
    QSize * size = new QSize(radioButton->minimumSizeHint());
    return (jlong)(intptr_t)size;
}
