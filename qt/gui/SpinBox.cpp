#include "gui_global.h"
#include "java/org_swdc_qt_internal_widgets_SSpinBox.h"

#include "java/types/SWidget.h"
#include "java/types/SSpinBox.h"

SSpinBox::SSpinBox(jobject self):QSpinBox() {
    this->self = self;
}

SSpinBox::SSpinBox(jobject self,QWidget * parent):QSpinBox(parent) {
    this->self = self;
}

void SSpinBox::paintEvent(QPaintEvent *event) {
    QSpinBox::paintEvent(event);
    paintEventWithJava(event,this->self,(jlong)(intptr_t)this);
}


/*
 * Class:     org_swdc_qt_internal_widgets_SSpinBox
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SSpinBox_create
(JNIEnv * env, jobject self, jlong pointer) {

    self = env->NewGlobalRef(self);
    SSpinBox * box = nullptr;
    if(pointer > 0) {
        QWidget * widget = (QWidget*)pointer;
        box = new SSpinBox(self,widget);
    } else {
        box = new SSpinBox(self);
    }
    SWidget::initializeWidgetEvents(box,self);
    return _P(box);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SSpinBox
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SSpinBox_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QSpinBox * box = (QSpinBox*)pointer;
    delete box;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SSpinBox
 * Method:    value
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SSpinBox_value
(JNIEnv * env, jobject self, jlong pointer) {

    QSpinBox * box = (QSpinBox*)pointer;
    return box->value();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SSpinBox
 * Method:    prefix
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SSpinBox_prefix
(JNIEnv * env, jobject self, jlong pointer) {

    QSpinBox * box = (QSpinBox*)pointer;
    std::string str = box->prefix().toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SSpinBox
 * Method:    setPrefix
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SSpinBox_setPrefix
(JNIEnv * env, jobject self, jlong pointer, jstring str) {

    const char * cStr = env->GetStringUTFChars(str,0);
    QSpinBox * box = (QSpinBox*)pointer;
    box->setPrefix(QString(cStr));
    env->ReleaseStringUTFChars(str,cStr);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SSpinBox
 * Method:    suffix
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SSpinBox_suffix
(JNIEnv * env, jobject self, jlong pointer) {

    QSpinBox * box = (QSpinBox*)pointer;
    std::string str = box->suffix().toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SSpinBox
 * Method:    setSuffix
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SSpinBox_setSuffix
(JNIEnv * env, jobject self, jlong pointer, jstring str) {

    const char * cStr = env->GetStringUTFChars(str,0);
    QSpinBox * box = (QSpinBox*)pointer;
    box->setSuffix(QString(cStr));
    env->ReleaseStringUTFChars(str,cStr);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SSpinBox
 * Method:    cleanText
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SSpinBox_cleanText
(JNIEnv * env, jobject self, jlong pointer) {

    QSpinBox * box = (QSpinBox*)pointer;
    std::string str = box->cleanText().toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SSpinBox
 * Method:    singleStep
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SSpinBox_singleStep
(JNIEnv * env, jobject self, jlong pointer) {

    QSpinBox * box = (QSpinBox*)pointer;
    return box->singleStep();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SSpinBox
 * Method:    setSingleStep
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SSpinBox_setSingleStep
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QSpinBox * box = (QSpinBox*)pointer;
    box->setSingleStep(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SSpinBox
 * Method:    minimum
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SSpinBox_minimum
(JNIEnv * env, jobject self, jlong pointer) {

    QSpinBox * box = (QSpinBox*)pointer;
    return box->minimum();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SSpinBox
 * Method:    setMinimum
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SSpinBox_setMinimum
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QSpinBox * box = (QSpinBox*)pointer;
    box->setMinimum(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SSpinBox
 * Method:    maximum
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SSpinBox_maximum
(JNIEnv * env, jobject self, jlong pointer){

    QSpinBox * box = (QSpinBox*)pointer;
    return box->maximum();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SSpinBox
 * Method:    setMaximum
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SSpinBox_setMaximum
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QSpinBox * box = (QSpinBox*)pointer;
    box->setMaximum(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SSpinBox
 * Method:    setRange
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SSpinBox_setRange
(JNIEnv * env, jobject self, jlong pointer, jint min, jint max) {

    QSpinBox * box = (QSpinBox*)pointer;
    box->setRange(min,max);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SSpinBox
 * Method:    stepType
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SSpinBox_stepType
(JNIEnv * env, jobject self, jlong pointer) {

    QSpinBox * box = (QSpinBox*)pointer;
    return int(box->stepType());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SSpinBox
 * Method:    setStepType
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SSpinBox_setStepType
(JNIEnv * env, jobject self, jlong pointer, jint typeVal) {

    QSpinBox::StepType type = QSpinBox::StepType(typeVal);
    QSpinBox * box = (QSpinBox*)pointer;
    box->setStepType(type);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SSpinBox
 * Method:    displayIntegerBase
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SSpinBox_displayIntegerBase
(JNIEnv * env, jobject self, jlong pointer) {

    QSpinBox * box = (QSpinBox*)pointer;
    return box->displayIntegerBase();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SSpinBox
 * Method:    setDisplayIntegerBase
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SSpinBox_setDisplayIntegerBase
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QSpinBox * box = (QSpinBox*)pointer;
    box->setDisplayIntegerBase(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SSpinBox
 * Method:    setValue
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SSpinBox_setValue
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QSpinBox * box = (QSpinBox*)pointer;
    box->setValue(val);
}
