#include "gui_global.h"
#include "java/types/SWidget.h"
#include "java/types/SProgressBar.h"

#include "java/org_swdc_qt_internal_widgets_SProgressBar.h"


SProgressBar::SProgressBar(jobject self) {
    this->self = self;
}

SProgressBar::SProgressBar(jobject self, QWidget* parent):QProgressBar(parent) {
    this->self = self;
}


void SProgressBar::paintEvent(QPaintEvent * event) {
    QProgressBar::paintEvent(event);
    paintEventWithJava(event,this->self,_P(this));
}

/*
 * Class:     org_swdc_qt_internal_widgets_SProgressBar
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SProgressBar_create
(JNIEnv * env, jobject self, jlong pointer) {

    SProgressBar * bar = nullptr;
    self = env->NewGlobalRef(self);
    if(pointer > 0) {
        QWidget * widget = (QWidget*)pointer;
        bar = new SProgressBar(self,widget);
    } else {
        bar = new SProgressBar(self);
    }

    SWidget::initializeWidgetEvents(bar,self);
    return _P(bar);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SProgressBar
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SProgressBar_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QProgressBar * bar = (QProgressBar*)pointer;
    delete bar;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SProgressBar
 * Method:    minimum
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SProgressBar_minimum
(JNIEnv * env, jobject self, jlong pointer) {

    QProgressBar * bar = (QProgressBar*)pointer;
    return bar->minimum();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SProgressBar
 * Method:    maximum
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SProgressBar_maximum
(JNIEnv * env, jobject self, jlong pointer) {

    QProgressBar * bar = (QProgressBar*)pointer;
    return bar->maximum();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SProgressBar
 * Method:    value
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SProgressBar_value
(JNIEnv * env, jobject self, jlong pointer) {

    QProgressBar * bar = (QProgressBar*)pointer;
    return bar->value();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SProgressBar
 * Method:    text
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SProgressBar_text
(JNIEnv * env, jobject self, jlong pointer){

    QProgressBar * bar = (QProgressBar*)pointer;
    std::string str = bar->text().toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SProgressBar
 * Method:    setTextVisible
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SProgressBar_setTextVisible
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QProgressBar * bar = (QProgressBar*)pointer;
    bar->setTextVisible(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SProgressBar
 * Method:    isTextVisible
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SProgressBar_isTextVisible
(JNIEnv * env, jobject self, jlong pointer) {

    QProgressBar * bar = (QProgressBar*)pointer;
    return bar->isTextVisible() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SProgressBar
 * Method:    alignment
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SProgressBar_alignment
(JNIEnv * env, jobject self, jlong pointer) {

    QProgressBar * bar = (QProgressBar*)pointer;
    return (jlong)(unsigned int)(bar->alignment());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SProgressBar
 * Method:    setAlignment
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SProgressBar_setAlignment
(JNIEnv * env, jobject self, jlong pointer, jlong align) {

    Qt::Alignment alignVal = Qt::Alignment((unsigned int) align);
    QProgressBar * bar = (QProgressBar*)pointer;
    bar->setAlignment(alignVal);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SProgressBar
 * Method:    sizeHint
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SProgressBar_sizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QProgressBar * bar = (QProgressBar*)pointer;
    QSize * size = new QSize();
    *size = bar->sizeHint();
    return _P(size);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SProgressBar
 * Method:    minimumSizeHint
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SProgressBar_minimumSizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QProgressBar * bar = (QProgressBar*)pointer;
    QSize * size = new QSize();
    *size = bar->minimumSizeHint();
    return _P(size);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SProgressBar
 * Method:    orientation
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SProgressBar_orientation
(JNIEnv * env, jobject self, jlong pointer) {

    QProgressBar * bar = (QProgressBar*)pointer;
    return int(bar->orientation());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SProgressBar
 * Method:    setInvertedAppearance
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SProgressBar_setInvertedAppearance
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QProgressBar * bar = (QProgressBar*)pointer;
    bar->setInvertedAppearance(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SProgressBar
 * Method:    invertedAppearance
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SProgressBar_invertedAppearance
(JNIEnv * env, jobject self, jlong pointer) {

    QProgressBar * bar = (QProgressBar*)pointer;
    return bar->invertedAppearance() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SProgressBar
 * Method:    setTextDirection
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SProgressBar_setTextDirection
(JNIEnv * env, jobject self, jlong pointer, jint dir){

    QProgressBar * bar = (QProgressBar*)pointer;
    QProgressBar::Direction dirVal = QProgressBar::Direction(dir);
    bar->setTextDirection(dirVal);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SProgressBar
 * Method:    textDirection
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SProgressBar_textDirection
(JNIEnv * env, jobject self, jlong pointer) {

    QProgressBar * bar = (QProgressBar*)pointer;
    return int(bar->textDirection());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SProgressBar
 * Method:    setFormat
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SProgressBar_setFormat
(JNIEnv * env, jobject self, jlong pointer, jstring val) {

    const char * str = env->GetStringUTFChars(val,0);
    QProgressBar * bar = (QProgressBar*)pointer;
    bar->setFormat(QString(str));
    env->ReleaseStringUTFChars(val,str);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SProgressBar
 * Method:    resetFormat
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SProgressBar_resetFormat
(JNIEnv * env, jobject self, jlong pointer) {

    QProgressBar * bar = (QProgressBar*)pointer;
    bar->resetFormat();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SProgressBar
 * Method:    format
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SProgressBar_format
(JNIEnv * env, jobject self, jlong pointer) {

    QProgressBar * bar = (QProgressBar*)pointer;
    std::string str = bar->format().toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SProgressBar
 * Method:    reset
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SProgressBar_reset
(JNIEnv * env, jobject self, jlong pointer)  {

    QProgressBar * bar = (QProgressBar*)pointer;
    bar->reset();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SProgressBar
 * Method:    setRange
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SProgressBar_setRange
(JNIEnv * env, jobject self, jlong pointer, jint min, jint max) {

    QProgressBar * bar = (QProgressBar*)pointer;
    bar->setRange(min,max);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SProgressBar
 * Method:    setMinimum
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SProgressBar_setMinimum
(JNIEnv * env, jobject self, jlong pointer, jint min) {

    QProgressBar * bar = (QProgressBar*)pointer;
    bar->setMinimum(min);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SProgressBar
 * Method:    setMaximum
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SProgressBar_setMaximum
(JNIEnv * env, jobject self, jlong pointer, jint max) {

    QProgressBar * bar = (QProgressBar*)pointer;
    bar->setMaximum(max);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SProgressBar
 * Method:    setValue
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SProgressBar_setValue
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QProgressBar * bar = (QProgressBar*)pointer;
    bar->setValue(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SProgressBar
 * Method:    setOrientation
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SProgressBar_setOrientation
(JNIEnv * env, jobject self, jlong pointer, jlong val) {

    Qt::Orientation oriVal = Qt::Orientation((unsigned int)val);
    QProgressBar * bar = (QProgressBar*)pointer;
    bar->setOrientation(oriVal);
}
