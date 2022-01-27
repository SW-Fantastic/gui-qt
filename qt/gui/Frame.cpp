#include "gui_global.h"

#include "java/types/SWidget.h"
#include "java/types/SFrame.h"

SFrame::SFrame(jobject obj):QFrame() {
    this->self = obj;
}

SFrame::SFrame(jobject obj,QWidget * widget):QFrame(widget) {
    this->self = obj;
}


void SFrame::paintEvent(QPaintEvent * event) {
    QFrame::paintEvent(event);
    paintEventWithJava(event,this->self,(jlong)(intptr_t)this);
}


/*
 * Class:     org_swdc_qt_internal_widgets_SFrame
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SFrame_create
(JNIEnv * env, jobject self, jlong pointer) {

    SFrame * frame = nullptr;
    self = env->NewGlobalRef(self);
    if(pointer <= 0) {
        frame = new SFrame(self);
    } else {
        QWidget * widget = (QWidget*)pointer;
        frame = new SFrame(self,widget);
    }

    SWidget::initializeWidgetEvents(frame,self);

    return (jlong)(intptr_t)frame;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SFrame
 * Method:    lineWidth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SFrame_lineWidth
(JNIEnv * env, jobject self, jlong pointer) {

    QFrame * frame = (QFrame*)pointer;
    return frame->lineWidth();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SFrame
 * Method:    setLineWidth
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SFrame_setLineWidth
(JNIEnv * env, jobject self, jlong pointer, jint width){

    QFrame * frame = (QFrame*)pointer;
    frame->setLineWidth(width);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SFrame
 * Method:    midLineWidth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SFrame_midLineWidth
(JNIEnv * env, jobject self, jlong pointer) {

    QFrame * frame = (QFrame*)pointer;
    return frame->midLineWidth();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SFrame
 * Method:    setMidLineWidth
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SFrame_setMidLineWidth
(JNIEnv * env, jobject self, jlong pointer, jint width) {

    QFrame * frame = (QFrame*)pointer;
    frame->setMidLineWidth(width);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SFrame
 * Method:    frameRect
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SFrame_frameRect
(JNIEnv * env, jobject self, jlong pointer) {

    QFrame * frame = (QFrame*)pointer;
    QRect * rect = new QRect(frame->frameRect());
    return (jlong)(intptr_t)rect;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SFrame
 * Method:    setFrameRect
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SFrame_setFrameRect
(JNIEnv * env, jobject self, jlong pointer, jlong rect) {

    QFrame * frame = (QFrame*)pointer;
    QRect * qRect = (QRect*)rect;
    frame->setFrameRect(*qRect);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SFrame
 * Method:    frameShape
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SFrame_frameShape
(JNIEnv * env, jobject self, jlong pointer) {

    QFrame * frame = (QFrame*)pointer;
    QFrame::Shape shape = frame->frameShape();
    return int(shape);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SFrame
 * Method:    setFrameShape
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SFrame_setFrameShape
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QFrame::Shape shape = QFrame::Shape(val);
    QFrame * frame = (QFrame*)pointer;
    frame->setFrameShape(shape);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SFrame
 * Method:    frameShadow
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SFrame_frameShadow
(JNIEnv * env, jobject self, jlong pointer) {

    QFrame * frame = (QFrame*)pointer;
    QFrame::Shadow shadow = frame->frameShadow();
    return int(shadow);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SFrame
 * Method:    setFrameShadow
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SFrame_setFrameShadow
(JNIEnv * env, jobject self, jlong pointer, jint shadow) {

    QFrame::Shadow frameShadow = QFrame::Shadow(shadow);
    QFrame * frame = (QFrame*)pointer;
    frame->setFrameShadow(frameShadow);
}
