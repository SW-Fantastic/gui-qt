#include "gui_global.h"
#include "java/types/SGroupBox.h"
#include "java/types/SWidget.h"
#include "java/org_swdc_qt_internal_widgets_SGroupBox.h"

SGroupBox::SGroupBox(jobject self):QGroupBox() {
    this->self = self;
}

SGroupBox::SGroupBox(jobject self, QWidget* parent):QGroupBox(parent) {
    this->self = self;
}

void SGroupBox::paintEvent(QPaintEvent * e) {
    QGroupBox::paintEvent(e);
    paintEventWithJava(e,this->self,(jlong)(intptr_t)this);
}


/*
 * Class:     org_swdc_qt_internal_widgets_SGroupBox
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SGroupBox_create
(JNIEnv * env, jobject self, jlong parent) {

    self = env->NewGlobalRef(self);
    SGroupBox * box = nullptr;
    if(parent <= 0) {
        box = new SGroupBox(self);
    } else {
        QWidget * widget = (QWidget*)parent;
        box = new SGroupBox(self,widget);
    }

    SWidget::initializeWidgetEvents(box,self);

    return (jlong)(intptr_t)box;

}

/*
 * Class:     org_swdc_qt_internal_widgets_SGroupBox
 * Method:    title
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SGroupBox_title
(JNIEnv * env, jobject self, jlong pointer) {

    QGroupBox * box = (QGroupBox*)pointer;
    std::string str = box->title().toStdString();
    const char * cStr = str.c_str();
    return asJavaString(env,cStr);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SGroupBox
 * Method:    setTitle
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SGroupBox_setTitle
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    const char* cText = env->GetStringUTFChars(text,JNI_FALSE);
    QGroupBox * box = (QGroupBox*)pointer;
    box->setTitle(QString(cText));

}

/*
 * Class:     org_swdc_qt_internal_widgets_SGroupBox
 * Method:    alignment
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SGroupBox_alignment
(JNIEnv * env, jobject self, jlong pointer) {

    QGroupBox * box = (QGroupBox*)pointer;
    return (jlong)box->alignment();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SGroupBox
 * Method:    setAlignment
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SGroupBox_setAlignment
(JNIEnv * env, jobject self, jlong pointer, jlong alignment) {

    QGroupBox * box = (QGroupBox*)pointer;
    Qt::Alignment align = Qt::Alignment((unsigned int)alignment);
    box->setAlignment(align);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SGroupBox
 * Method:    minimumSizeHint
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SGroupBox_minimumSizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QGroupBox * box = (QGroupBox*)pointer;
    QSize * size = new QSize(box->minimumSizeHint());
    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SGroupBox
 * Method:    isFlat
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SGroupBox_isFlat
(JNIEnv * env, jobject self, jlong pointer) {

    QGroupBox * box = (QGroupBox*)pointer;
    return box->isFlat() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SGroupBox
 * Method:    setFlat
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SGroupBox_setFlat
(JNIEnv * env, jobject self, jlong pointer, jboolean flat) {

    QGroupBox * box = (QGroupBox*)pointer;
    box->setFlat(flat);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SGroupBox
 * Method:    isCheckable
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SGroupBox_isCheckable
(JNIEnv * env, jobject self, jlong pointer) {

    QGroupBox * box = (QGroupBox*)pointer;
    return box->isCheckable() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SGroupBox
 * Method:    setCheckable
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SGroupBox_setCheckable
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QGroupBox * box = (QGroupBox*)pointer;
    box->setCheckable(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SGroupBox
 * Method:    isChecked
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SGroupBox_isChecked
(JNIEnv * env, jobject self, jlong pointer) {

    QGroupBox * box = (QGroupBox*)pointer;
    return box->isChecked() ? JNI_TRUE: JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SGroupBox
 * Method:    setChecked
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SGroupBox_setChecked
(JNIEnv * env, jobject self, jlong pointer,jboolean val) {

    QGroupBox * box = (QGroupBox*)pointer;
    box->setChecked(val);
}
