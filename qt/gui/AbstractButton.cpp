#include"gui_global.h"
#include"java/org_swdc_qt_internal_widgets_SAbstractButton.h"

/*
 * Class:     org_swdc_qt_widgets_SAbstractButton
 * Method:    setText
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractButton_setText
(JNIEnv * jenv, jobject self, jlong pointer, jstring text) {

    QAbstractButton* button = (QAbstractButton*)pointer;

    const char* textVal = jenv->GetStringUTFChars(text,JNI_FALSE);
    QString qText = QString(textVal);
    button->setText(qText);
}

/*
 * Class:     org_swdc_qt_widgets_SAbstractButton
 * Method:    getText
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SAbstractButton_getText
(JNIEnv * jenv, jobject self, jlong pointer) {

    QAbstractButton* button = (QAbstractButton*)pointer;
    std::string str = button->text().toStdString();
    return asJavaString(jenv,str.c_str());
}

/*
 * Class:     org_swdc_qt_widgets_SAbstractButton
 * Method:    setCheckable
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractButton_setCheckable
(JNIEnv * jenv, jobject self, jlong pointer, jboolean val) {

    QAbstractButton* button = (QAbstractButton*)pointer;
    button->setCheckable(val);
}

/*
 * Class:     org_swdc_qt_widgets_SAbstractButton
 * Method:    isCheckable
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAbstractButton_isCheckable
(JNIEnv * jenv, jobject self, jlong pointer) {

    QAbstractButton* button = (QAbstractButton*)pointer;
    return button->isCheckable() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_widgets_SAbstractButton
 * Method:    isChecked
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAbstractButton_isChecked
(JNIEnv * jenv, jobject self, jlong pointer) {

    QAbstractButton* button = (QAbstractButton*)pointer;
    return button->isChecked() ? JNI_TRUE : JNI_FALSE;

}

/*
 * Class:     org_swdc_qt_widgets_SAbstractButton
 * Method:    setDown
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractButton_setDown
(JNIEnv * jenv, jobject self, jlong pointer, jboolean val) {

    QAbstractButton* button = (QAbstractButton*)pointer;
    button->setDown(val);

}

/*
 * Class:     org_swdc_qt_widgets_SAbstractButton
 * Method:    isDown
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAbstractButton_isDown
(JNIEnv * jenv, jobject self, jlong pointer) {
    QAbstractButton* button = (QAbstractButton*)pointer;
    return button->isDown() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_widgets_SAbstractButton
 * Method:    setAutoRepeat
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractButton_setAutoRepeat
(JNIEnv * jenv, jobject self, jlong pointer, jboolean val) {

    QAbstractButton* button = (QAbstractButton*)pointer;
    button->setAutoRepeat(val);

}

/*
 * Class:     org_swdc_qt_widgets_SAbstractButton
 * Method:    autoRepeat
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAbstractButton_autoRepeat
(JNIEnv * jenv, jobject self, jlong pointer) {
    QAbstractButton* button = (QAbstractButton*)pointer;
    return button->autoRepeat() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_widgets_SAbstractButton
 * Method:    setAutoRepeatDelay
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractButton_setAutoRepeatDelay
(JNIEnv * jenv, jobject self, jlong pointer, jint val) {
    QAbstractButton* button = (QAbstractButton*)pointer;
    button->setAutoRepeatDelay(val);
}

/*
 * Class:     org_swdc_qt_widgets_SAbstractButton
 * Method:    autoRepeatDelay
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SAbstractButton_autoRepeatDelay
(JNIEnv * env, jobject self, jlong pointer) {
    QAbstractButton* button = (QAbstractButton*)pointer;
    return button->autoRepeatDelay();
}

/*
 * Class:     org_swdc_qt_widgets_SAbstractButton
 * Method:    setAutoRepeatInterval
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractButton_setAutoRepeatInterval
(JNIEnv * env, jobject self, jlong pointer, jint val) {
    QAbstractButton* button = (QAbstractButton*)pointer;
    button->setAutoRepeatInterval(val);
}

/*
 * Class:     org_swdc_qt_widgets_SAbstractButton
 * Method:    autoRepeatInterval
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SAbstractButton_autoRepeatInterval
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractButton* button = (QAbstractButton*)pointer;
    return button->autoRepeatInterval();

}

/*
 * Class:     org_swdc_qt_widgets_SAbstractButton
 * Method:    setAutoExclusive
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAbstractButton_setAutoExclusive
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QAbstractButton* button = (QAbstractButton*)pointer;
    button->setAutoExclusive(val);

}

/*
 * Class:     org_swdc_qt_widgets_SAbstractButton
 * Method:    autoExclusive
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAbstractButton_autoExclusive
(JNIEnv * env, jobject self, jlong pointer) {
    QAbstractButton* button = (QAbstractButton*)pointer;
    return button->autoExclusive();
}
