#include "gui_global.h"
#include "java/types/SWidget.h"
#include "java/types/SCheckBox.h"
#include "java/org_swdc_qt_internal_widgets_SCheckBox.h"

SCheckBox::SCheckBox(jobject self):QCheckBox() {
    this->self = self;
}

SCheckBox::SCheckBox(jobject self, QWidget * parent):QCheckBox(parent) {
    this->self = self;
}

void SCheckBox::paintEvent(QPaintEvent * event) {
    QCheckBox::paintEvent(event);
    paintEventWithJava(event,this->self,(jlong)(intptr_t)this);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SCheckBox
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SCheckBox_create
  (JNIEnv * env, jobject self, jlong parent) {

    self = env->NewGlobalRef(self);
    SCheckBox * box = nullptr;
    if(parent <= 0) {
        box = new SCheckBox(self);
    } else {
        QWidget * widget = (QWidget*)parent;
        box = new SCheckBox(self,widget);
    }

    SWidget::initializeWidgetEvents(box,self);

    return (jlong)(intptr_t)box;

}

/*
 * Class:     org_swdc_qt_internal_widgets_SCheckBox
 * Method:    sizeHint
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SCheckBox_sizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QCheckBox * box = (QCheckBox*)pointer;
    QSize * size = new QSize(box->sizeHint());

    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SCheckBox
 * Method:    minimumSizeHint
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SCheckBox_minimumSizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QCheckBox * box = (QCheckBox*)pointer;
    QSize * size = new QSize(box->minimumSizeHint());

    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SCheckBox
 * Method:    setTristate
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SCheckBox_setTristate
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QCheckBox * box = (QCheckBox*)pointer;
    box->setTristate(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SCheckBox
 * Method:    isTristate
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SCheckBox_isTristate
(JNIEnv * env, jobject self, jlong pointer) {

    QCheckBox * box = (QCheckBox*)pointer;
    return box->isTristate() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SCheckBox
 * Method:    checkState
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SCheckBox_checkState
(JNIEnv * env, jobject self, jlong pointer) {

    QCheckBox * box = (QCheckBox*)pointer;
    Qt::CheckState state = box->checkState();
    return int(state);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SCheckBox
 * Method:    setCheckState
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SCheckBox_setCheckState
(JNIEnv * env, jobject self, jlong pointer, jint state) {

    Qt::CheckState stat = Qt::CheckState(state);
    QCheckBox * box = (QCheckBox*)pointer;
    box->setCheckState(stat);
}
