#include "gui_global.h"
#include "java/types/SWidget.h"
#include "java/types/SLabel.h"

#include "java/org_swdc_qt_internal_widgets_SLabel.h"

SLabel::SLabel(jobject self) {
    this->self = self;
}

SLabel::SLabel(jobject self,QWidget * parent):QLabel(parent) {
    this->self = self;
}

void SLabel::paintEvent(QPaintEvent * event) {
   QLabel::paintEvent(event);
   paintEventWithJava(event,this->self,_P(this));
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLabel
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SLabel_create
(JNIEnv * env, jobject self, jlong pointer) {

    self = env->NewGlobalRef(self);
    SLabel * label = nullptr;
    if(pointer > 0) {
        QWidget * widget = (QWidget*)pointer;
        label = new SLabel(self,widget);
    } else {
        label = new SLabel(self);
    }

    SWidget::initializeWidgetEvents(label,self);
    return _P(label);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLabel
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLabel_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QLabel * label = (QLabel*)pointer;
    delete label;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLabel
 * Method:    text
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SLabel_text
(JNIEnv * env, jobject self, jlong pointer) {

    QLabel * label = (QLabel*)pointer;
    std::string str = label->text().toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLabel
 * Method:    textFormat
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SLabel_textFormat
(JNIEnv * env, jobject self, jlong pointer) {

    QLabel * label = (QLabel*)pointer;
    return int(label->textFormat());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLabel
 * Method:    setTextFormat
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLabel_setTextFormat
(JNIEnv * env, jobject self, jlong pointer, jint formatVal) {

    QLabel * label = (QLabel*)pointer;
    Qt::TextFormat format = Qt::TextFormat(formatVal);
    label->setTextFormat(format);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLabel
 * Method:    alignment
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SLabel_alignment
(JNIEnv * env, jobject self, jlong pointer) {

    QLabel * label = (QLabel*)pointer;
    Qt::Alignment align = label->alignment();
    return (jlong)(unsigned int)(align);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLabel
 * Method:    setAlignment
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLabel_setAlignment
(JNIEnv * env, jobject self, jlong pointer, jlong align) {

    Qt::Alignment alignVal = Qt::Alignment((unsigned int)align);
    QLabel * label = (QLabel*)pointer;
    label->setAlignment(alignVal);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLabel
 * Method:    setWordWrap
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLabel_setWordWrap
(JNIEnv * env, jobject self, jlong pointer, jboolean val){

    QLabel * label = (QLabel*)pointer;
    label->setWordWrap(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLabel
 * Method:    wordWrap
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SLabel_wordWrap
(JNIEnv * env, jobject self, jlong pointer) {

    QLabel * label = (QLabel*)pointer;
    return label->wordWrap() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLabel
 * Method:    indent
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SLabel_indent
(JNIEnv * env, jobject self, jlong pointer) {

    QLabel * label = (QLabel*)pointer;
    return label->indent();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLabel
 * Method:    setIndent
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLabel_setIndent
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QLabel * label = (QLabel*)pointer;
    label->setIndent(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLabel
 * Method:    margin
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SLabel_margin
(JNIEnv * env, jobject self, jlong pointer) {

    QLabel * label = (QLabel*)pointer;
    return label->margin();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLabel
 * Method:    setMargin
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLabel_setMargin
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QLabel * label = (QLabel*)pointer;
    label->setMargin(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLabel
 * Method:    hasScaledContents
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SLabel_hasScaledContents
(JNIEnv * env, jobject self, jlong pointer) {

    QLabel * label = (QLabel*)pointer;
    return label->hasScaledContents() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLabel
 * Method:    setScaledContents
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLabel_setScaledContents
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QLabel * label = (QLabel*)pointer;
    label->setScaledContents(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLabel
 * Method:    sizeHint
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SLabel_sizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QLabel * label = (QLabel*)pointer;
    QSize * size = new QSize();
    *size = label->sizeHint();
    return _P(size);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLabel
 * Method:    minimumSizeHint
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SLabel_minimumSizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QLabel * label = (QLabel*)pointer;
    QSize * size = new QSize();
    *size = label->minimumSizeHint();

    return _P(size);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLabel
 * Method:    heightForWidth
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SLabel_heightForWidth
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QLabel * label = (QLabel*)pointer;
    return label->heightForWidth(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLabel
 * Method:    openExternalLinks
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SLabel_openExternalLinks
(JNIEnv * env, jobject self, jlong pointer) {

    QLabel * label = (QLabel*)pointer;
    return label->openExternalLinks() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLabel
 * Method:    setOpenExternalLinks
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLabel_setOpenExternalLinks
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QLabel * label = (QLabel*)pointer;
    label->setOpenExternalLinks(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLabel
 * Method:    setSelection
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLabel_setSelection
(JNIEnv * env, jobject self, jlong pointer, jint st, jint ed) {

    QLabel * label = (QLabel*)pointer;
    label->setSelection(st,ed);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLabel
 * Method:    hasSelectedText
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SLabel_hasSelectedText
(JNIEnv * env, jobject self, jlong pointer) {

    QLabel * label = (QLabel*)pointer;
    return label->hasSelectedText() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLabel
 * Method:    selectedText
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SLabel_selectedText
(JNIEnv * env, jobject self, jlong pointer) {

    QLabel * label = (QLabel*)pointer;
    std::string str = label->selectedText().toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLabel
 * Method:    selectionStart
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SLabel_selectionStart
(JNIEnv * env, jobject self, jlong pointer) {

    QLabel * label = (QLabel*)pointer;
    return label->selectionStart();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLabel
 * Method:    setText
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLabel_setText
(JNIEnv * env, jobject self, jlong pointer, jstring str) {

    const char * cstr = env->GetStringUTFChars(str,0);
    QLabel * label = (QLabel*)pointer;
    label->setText(QString(cstr));
    env->ReleaseStringUTFChars(str,cstr);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLabel
 * Method:    setPixmap
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLabel_setPixmap
(JNIEnv * env, jobject self, jlong pointer, jlong pixmapPointer) {

    QPixmap * pixmap = (QPixmap*)pixmapPointer;
    QLabel * label = (QLabel*)pointer;
    label->setPixmap(*pixmap);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLabel
 * Method:    setNum
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLabel_setNum
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

     QLabel * label = (QLabel*)pointer;
     label->setNum(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SLabel
 * Method:    clear
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SLabel_clear
(JNIEnv * env, jobject self, jlong pointer) {

     QLabel * label = (QLabel*)pointer;
     label->clear();
}
