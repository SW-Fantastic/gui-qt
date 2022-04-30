#include "gui_global.h"

#include "java/types/SSlider.h"
#include "java/types/SWidget.h"

#include "java/org_swdc_qt_internal_widgets_SSlider.h"

SSlider::SSlider(jobject self):QSlider(){
    this->self = self;
}

SSlider::SSlider(jobject self, QWidget * parent):QSlider(parent) {
    this->self = self;
}


void SSlider::paintEvent(QPaintEvent * event) {
    QSlider::paintEvent(event);
    paintEventWithJava(event,this->self,(jlong)(intptr_t)this);
}


/*
 * Class:     org_swdc_qt_internal_widgets_SSlider
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SSlider_create
(JNIEnv * env, jobject self, jlong pointer) {

    self = env->NewGlobalRef(self);

    SSlider * slider = nullptr;
    if(pointer > 0) {
        QWidget * widget = (QWidget*)pointer;
        slider = new SSlider(self,widget);
    } else {
        slider = new SSlider(self);
    }

    SWidget::initializeWidgetEvents(slider,self);
    return _P(slider);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SSlider
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SSlider_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QSlider * slider = (QSlider*)pointer;
    delete slider;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SSlider
 * Method:    sizeHint
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SSlider_sizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QSize * size = new QSize();
    QSlider * slider = (QSlider*)pointer;
    *size = slider->sizeHint();
    return _P(size);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SSlider
 * Method:    minimumSizeHint
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SSlider_minimumSizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QSlider * slider = (QSlider*)pointer;
    QSize * size = new QSize();

    *size = slider->minimumSizeHint();
    return _P(size);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SSlider
 * Method:    setTickPosition
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SSlider_setTickPosition
(JNIEnv * env, jobject self, jlong pointer, jint posVal) {

    QSlider::TickPosition pos = QSlider::TickPosition(posVal);
    QSlider * slider = (QSlider*)pointer;
    slider->setTickPosition(pos);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SSlider
 * Method:    tickPosition
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SSlider_tickPosition
(JNIEnv * env, jobject self, jlong pointer) {

    QSlider * slider = (QSlider*)pointer;
    return int(slider->tickPosition());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SSlider
 * Method:    setTickInterval
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SSlider_setTickInterval
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QSlider * slider = (QSlider*)pointer;
    slider->setTickInterval(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SSlider
 * Method:    tickInterval
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SSlider_tickInterval
(JNIEnv * env, jobject self, jlong pointer) {

    QSlider * slider = (QSlider*)pointer;
    return slider->tickInterval();
}
