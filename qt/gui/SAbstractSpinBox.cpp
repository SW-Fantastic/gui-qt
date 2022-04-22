#include "gui_global.h"
#include "java/org_swdc_qt_internal_widgets_SAbstractSpinBox.h"

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSpinBox
 * Method:    setCorrectionMode
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSpinBox_setCorrectionMode
(JNIEnv * env, jobject self, jlong pointer, jint mode) {

    QAbstractSpinBox::CorrectionMode modeVal = QAbstractSpinBox::CorrectionMode(mode);
    QAbstractSpinBox * spin = (QAbstractSpinBox*)pointer;
    spin->setCorrectionMode(modeVal);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSpinBox
 * Method:    correctionMode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSpinBox_correctionMode
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractSpinBox * spin = (QAbstractSpinBox*)pointer;
    return int(spin->correctionMode());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSpinBox
 * Method:    hasAcceptableInput
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSpinBox_hasAcceptableInput
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractSpinBox * spin = (QAbstractSpinBox*)pointer;
    return spin->hasAcceptableInput() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSpinBox
 * Method:    text
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSpinBox_text
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractSpinBox * spin = (QAbstractSpinBox*)pointer;
    std::string str = spin->text().toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSpinBox
 * Method:    specialValueText
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSpinBox_specialValueText
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractSpinBox * spin = (QAbstractSpinBox*)pointer;
    std::string str = spin->specialValueText().toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSpinBox
 * Method:    setSpecialValueText
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSpinBox_setSpecialValueText
(JNIEnv * env, jobject self, jlong pointer, jstring str) {

    const char * cStr = env->GetStringUTFChars(str,0);
    QAbstractSpinBox * spin = (QAbstractSpinBox*)pointer;
    spin->setSpecialValueText(QString(cStr));
    env->ReleaseStringUTFChars(str,cStr);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSpinBox
 * Method:    wrapping
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSpinBox_wrapping
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractSpinBox * spin = (QAbstractSpinBox*)pointer;
    return spin->wrapping() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSpinBox
 * Method:    setWrapping
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSpinBox_setWrapping
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QAbstractSpinBox * spin = (QAbstractSpinBox*)pointer;
    spin->setWrapping(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSpinBox
 * Method:    setReadOnly
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSpinBox_setReadOnly
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QAbstractSpinBox * spin = (QAbstractSpinBox*)pointer;
    spin->setReadOnly(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSpinBox
 * Method:    isReadOnly
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSpinBox_isReadOnly
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractSpinBox * spin = (QAbstractSpinBox*)pointer;
    return spin->isReadOnly() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSpinBox
 * Method:    setKeyboardTracking
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSpinBox_setKeyboardTracking
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QAbstractSpinBox * spin = (QAbstractSpinBox*)pointer;
    spin->setKeyboardTracking(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSpinBox
 * Method:    keyboardTracking
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSpinBox_keyboardTracking
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractSpinBox * spin = (QAbstractSpinBox*)pointer;
    return spin->keyboardTracking() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSpinBox
 * Method:    setAlignment
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSpinBox_setAlignment
(JNIEnv * env, jobject self, jlong pointer, jlong alignmentVal) {

    Qt::Alignment align = Qt::Alignment((unsigned int)alignmentVal);
    QAbstractSpinBox * spin = (QAbstractSpinBox*)pointer;
    spin->setAlignment(align);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSpinBox
 * Method:    alignment
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSpinBox_alignment
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractSpinBox * spin = (QAbstractSpinBox*)pointer;
    return (unsigned int)(spin->alignment());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSpinBox
 * Method:    setFrame
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSpinBox_setFrame
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QAbstractSpinBox * spin = (QAbstractSpinBox*)pointer;
    spin->setFrame(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSpinBox
 * Method:    hasFrame
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSpinBox_hasFrame
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractSpinBox * spin = (QAbstractSpinBox*)pointer;
    return spin->hasFrame() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSpinBox
 * Method:    setAccelerated
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSpinBox_setAccelerated
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QAbstractSpinBox * spin = (QAbstractSpinBox*)pointer;
    spin->setAccelerated(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSpinBox
 * Method:    isAccelerated
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSpinBox_isAccelerated
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractSpinBox * spin = (QAbstractSpinBox*)pointer;
    return spin->isAccelerated() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSpinBox
 * Method:    setGroupSeparatorShown
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSpinBox_setGroupSeparatorShown
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QAbstractSpinBox * spin = (QAbstractSpinBox*)pointer;
    spin->setGroupSeparatorShown(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSpinBox
 * Method:    isGroupSeparatorShown
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSpinBox_isGroupSeparatorShown
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractSpinBox * spin = (QAbstractSpinBox*)pointer;
    return spin->isGroupSeparatorShown() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSpinBox
 * Method:    sizeHint
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSpinBox_sizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QSize * size = new QSize();
    QAbstractSpinBox * spin = (QAbstractSpinBox*)pointer;
    *size = spin->sizeHint();
    return _P(size);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSpinBox
 * Method:    minimumSizeHint
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSpinBox_minimumSizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractSpinBox * spin = (QAbstractSpinBox*)pointer;
    QSize * size = new QSize();
    *size = spin->minimumSizeHint();
    return _P(size);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSpinBox
 * Method:    interpretText
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSpinBox_interpretText
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractSpinBox * spin = (QAbstractSpinBox*)pointer;
    spin->interpretText();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSpinBox
 * Method:    stepUp
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSpinBox_stepUp
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractSpinBox * spin = (QAbstractSpinBox*)pointer;
    spin->stepUp();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSpinBox
 * Method:    stepDown
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSpinBox_stepDown
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractSpinBox * spin = (QAbstractSpinBox*)pointer;
    spin->stepDown();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSpinBox
 * Method:    selectAll
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSpinBox_selectAll
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractSpinBox * spin = (QAbstractSpinBox*)pointer;
    spin->selectAll();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAbstractSpinBox
 * Method:    clear
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractSpinBox_clear
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractSpinBox * spin = (QAbstractSpinBox*)pointer;
    spin->clear();
}
