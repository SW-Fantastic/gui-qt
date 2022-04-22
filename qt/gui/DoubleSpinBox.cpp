#include "gui_global.h"

#include "java/types/SWidget.h"
#include "java/types/SDoubleSpinBox.h"
#include "java/org_swdc_qt_internal_widgets_SDoubleSpinBox.h"

SDoubleSpinBox::SDoubleSpinBox(jobject self):QDoubleSpinBox() {
    this->self = self;
}

SDoubleSpinBox::SDoubleSpinBox(jobject self,QWidget * parent):QDoubleSpinBox(parent) {
    this->self = self;
}


void SDoubleSpinBox::paintEvent(QPaintEvent * event){
    QDoubleSpinBox::paintEvent(event);
    paintEventWithJava(event,this->self,(jlong)(intptr_t)this);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDoubleSpinBox
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SDoubleSpinBox_create
(JNIEnv * env, jobject self, jlong pointer) {

    self = env->NewGlobalRef(self);
    SDoubleSpinBox * box = nullptr;
    if(pointer > 0) {
        QWidget * widget = (QWidget*)pointer;
        box = new SDoubleSpinBox(self,widget);
    } else {
        box = new SDoubleSpinBox(self);
    }
    SWidget::initializeWidgetEvents(box,self);
    return _P(box);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDoubleSpinBox
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDoubleSpinBox_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QDoubleSpinBox * box = (QDoubleSpinBox*)pointer;
    delete box;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDoubleSpinBox
 * Method:    value
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_widgets_SDoubleSpinBox_value
(JNIEnv * env, jobject self, jlong pointer) {

    QDoubleSpinBox * box = (QDoubleSpinBox*)pointer;
    return box->value();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDoubleSpinBox
 * Method:    prefix
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SDoubleSpinBox_prefix
(JNIEnv * env, jobject self, jlong pointer) {

    QDoubleSpinBox * box = (QDoubleSpinBox*)pointer;
    std::string str = box->prefix().toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDoubleSpinBox
 * Method:    setPrefix
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDoubleSpinBox_setPrefix
(JNIEnv * env, jobject self, jlong pointer, jstring val) {

    const char * str = env->GetStringUTFChars(val,0);
    QDoubleSpinBox * box = (QDoubleSpinBox*)pointer;
    box->setPrefix(QString(str));
    env->ReleaseStringUTFChars(val,str);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDoubleSpinBox
 * Method:    suffix
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SDoubleSpinBox_suffix
(JNIEnv * env, jobject self, jlong pointer) {

    QDoubleSpinBox * box = (QDoubleSpinBox*)pointer;
    std::string str = box->suffix().toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDoubleSpinBox
 * Method:    setSuffix
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDoubleSpinBox_setSuffix
(JNIEnv * env, jobject self, jlong pointer, jstring val) {

    const char * str = env->GetStringUTFChars(val,0);
    QDoubleSpinBox * box = (QDoubleSpinBox*)pointer;
    box->setSuffix(QString(str));
    env->ReleaseStringUTFChars(val,str);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDoubleSpinBox
 * Method:    cleanText
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SDoubleSpinBox_cleanText
(JNIEnv * env, jobject self, jlong pointer) {

    QDoubleSpinBox * box = (QDoubleSpinBox*)pointer;
    std::string str = box->cleanText().toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDoubleSpinBox
 * Method:    singleStep
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_widgets_SDoubleSpinBox_singleStep
(JNIEnv * env, jobject self, jlong pointer) {

    QDoubleSpinBox * box = (QDoubleSpinBox*)pointer;
    return box->singleStep();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDoubleSpinBox
 * Method:    setSingleStep
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDoubleSpinBox_setSingleStep
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QDoubleSpinBox * box = (QDoubleSpinBox*)pointer;
    box->setSingleStep(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDoubleSpinBox
 * Method:    minimum
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_widgets_SDoubleSpinBox_minimum
(JNIEnv * env, jobject self, jlong pointer) {

    QDoubleSpinBox * box = (QDoubleSpinBox*)pointer;
    return box->minimum();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDoubleSpinBox
 * Method:    setMinimum
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDoubleSpinBox_setMinimum
(JNIEnv * env, jobject self, jlong pointer, jdouble min) {

    QDoubleSpinBox * box = (QDoubleSpinBox*)pointer;
    box->setMinimum(min);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDoubleSpinBox
 * Method:    maximum
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_widgets_SDoubleSpinBox_maximum
(JNIEnv * env, jobject self, jlong pointer) {

    QDoubleSpinBox * box = (QDoubleSpinBox*)pointer;
    return box->maximum();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDoubleSpinBox
 * Method:    setMaximum
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDoubleSpinBox_setMaximum
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QDoubleSpinBox * box = (QDoubleSpinBox*)pointer;
    box->setMaximum(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDoubleSpinBox
 * Method:    setRange
 * Signature: (JDD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDoubleSpinBox_setRange
(JNIEnv * env, jobject self, jlong pointer, jdouble min, jdouble max) {

    QDoubleSpinBox * box = (QDoubleSpinBox*)pointer;
    box->setRange(min,max);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDoubleSpinBox
 * Method:    stepType
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SDoubleSpinBox_stepType
(JNIEnv * env, jobject self, jlong pointer) {

    QDoubleSpinBox * box = (QDoubleSpinBox*)pointer;
    return int(box->stepType());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDoubleSpinBox
 * Method:    setStepType
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDoubleSpinBox_setStepType
(JNIEnv * env, jobject self, jlong pointer, jint type) {

    QAbstractSpinBox::StepType stepType = QAbstractSpinBox::StepType(type);
    QDoubleSpinBox * box = (QDoubleSpinBox*)pointer;
    box->setStepType(stepType);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDoubleSpinBox
 * Method:    decimals
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SDoubleSpinBox_decimals
(JNIEnv * env, jobject self, jlong pointer) {

    QDoubleSpinBox * box = (QDoubleSpinBox*)pointer;
    return box->decimals();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDoubleSpinBox
 * Method:    setDecimals
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDoubleSpinBox_setDecimals
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QDoubleSpinBox * box = (QDoubleSpinBox*)pointer;
    box->setDecimals(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDoubleSpinBox
 * Method:    valueFromText
 * Signature: (JLjava/lang/String;)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_widgets_SDoubleSpinBox_valueFromText
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    const char * val = env->GetStringUTFChars(text,0);
    QDoubleSpinBox * box = (QDoubleSpinBox*)pointer;
    double result = box->valueFromText(QString(val));
    env->ReleaseStringUTFChars(text,val);

    return result;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDoubleSpinBox
 * Method:    textFromValue
 * Signature: (JD)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SDoubleSpinBox_textFromValue
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QDoubleSpinBox * box = (QDoubleSpinBox*)pointer;
    std::string str = box->textFromValue(val).toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDoubleSpinBox
 * Method:    fixup
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDoubleSpinBox_fixup
(JNIEnv * env, jobject self, jlong pointer, jstring val) {

    QDoubleSpinBox * box = (QDoubleSpinBox*)pointer;
    const char * txt = env->GetStringUTFChars(val,0);
    QString str(txt);
    box->fixup(str);
    env->ReleaseStringUTFChars(val,txt);
}
