#include "gui_global.h"

#include "java/types/SWidget.h"
#include "java/dialogs/types/SInputDialog.h"
#include "java/dialogs/org_swdc_qt_internal_dialogs_SInputDialog.h"


SInputDialog::SInputDialog(jobject self):QInputDialog() {
    this->self = self;
}

SInputDialog::SInputDialog(jobject self, QWidget* widget):QInputDialog(widget) {
    this->self = self;
}

void SInputDialog::paintEvent(QPaintEvent *event) {
    QInputDialog::paintEvent(event);
    paintEventWithJava(event,this->self,(jlong)(intptr_t)this);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_create
(JNIEnv * env, jobject self, jlong parentPointer) {

    SInputDialog * dialog = NULL;
    self = env->NewGlobalRef(self);
    if(parentPointer == 0) {
        QWidget * widget = (QWidget*)parentPointer;
        dialog = new SInputDialog(self,widget);
    } else {
        dialog = new SInputDialog(self);
    }

    SWidget::initializeWidgetEvents(dialog,self);
    return (jlong)(intptr_t)dialog;
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    setTextValue
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_setTextValue
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    const char * cText = env->GetStringUTFChars(text,JNI_FALSE);
    QInputDialog * dialog = (QInputDialog*)pointer;
    dialog->setTextValue(QString(cText));

}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    textValue
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_textValue
(JNIEnv * env, jobject self, jlong pointer) {

    QInputDialog * dialog = (QInputDialog*)pointer;
    QString text = dialog->textValue();
    std::string str = text.toStdString();

    const char* cStr = str.c_str();
    return asJavaString(env,cStr);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    setTextEchoMode
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_setTextEchoMode
(JNIEnv * env, jobject self, jlong pointer, jint echoMode) {

    QLineEdit::EchoMode mode = QLineEdit::EchoMode(echoMode);
    QInputDialog * dialog = (QInputDialog*)pointer;
    dialog->setTextEchoMode(mode);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    textEchoMode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_textEchoMode
(JNIEnv * env, jobject self, jlong pointer) {

    QInputDialog * dialog = (QInputDialog*)pointer;
    return int(dialog->textEchoMode());
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    setIntValue
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_setIntValue
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QInputDialog * dialog = (QInputDialog*)pointer;
    dialog->setIntValue(val);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    intValue
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_intValue
(JNIEnv * env, jobject self, jlong pointer) {

    QInputDialog * dialog = (QInputDialog*)pointer;
    return dialog->intValue();
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    setIntMinimum
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_setIntMinimum
(JNIEnv * env, jobject self, jlong pointer, jint min) {

    QInputDialog * dialog = (QInputDialog*)pointer;
    dialog->setIntMinimum(min);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    intMinimum
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_intMinimum
(JNIEnv * env, jobject self, jlong pointer) {

    QInputDialog * dialog = (QInputDialog*)pointer;
    return dialog->intMinimum();
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    setIntMaximum
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_setIntMaximum
(JNIEnv * env, jobject self, jlong pointer, jint max) {

    QInputDialog * dialog = (QInputDialog*)pointer;
    dialog->setIntMaximum(max);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    intMaximum
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_intMaximum
(JNIEnv * env, jobject self, jlong pointer) {

    QInputDialog * dialog = (QInputDialog*)pointer;
    return dialog->intMaximum();
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    setIntRange
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_setIntRange
(JNIEnv * env, jobject self, jlong pointer, jint begin, jint end) {

    QInputDialog * dialog = (QInputDialog*)pointer;
    dialog->setIntRange(begin,end);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    setIntStep
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_setIntStep
(JNIEnv * env, jobject self, jlong pointer, jint step) {

    QInputDialog * dialog = (QInputDialog*)pointer;
    dialog->setIntStep(step);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    intStep
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_intStep
(JNIEnv * env, jobject self, jlong pointer) {

    QInputDialog * dialog = (QInputDialog*)pointer;
    return dialog->intStep();
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    setDoubleValue
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_setDoubleValue
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QInputDialog * dialog = (QInputDialog*)pointer;
    dialog->setDoubleValue(val);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    doubleValue
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_doubleValue
(JNIEnv * env, jobject self, jlong pointer) {

    QInputDialog * dialog = (QInputDialog*)pointer;
    return dialog->doubleValue();
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    setDoubleMinimum
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_setDoubleMinimum
(JNIEnv * env, jobject self, jlong pointer, jdouble doubleMin) {

    QInputDialog * dialog = (QInputDialog*)pointer;
    dialog->setDoubleMinimum(doubleMin);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    doubleMinimum
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_doubleMinimum
(JNIEnv * env, jobject self, jlong pointer) {

    QInputDialog * dialog = (QInputDialog*)pointer;
    return dialog->doubleMinimum();
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    setDoubleMaximum
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_setDoubleMaximum
(JNIEnv * env, jobject self, jlong pointer, jdouble maxium) {

    QInputDialog * dialog = (QInputDialog*)pointer;
    dialog->setDoubleMaximum(maxium);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    doubleMaximum
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_doubleMaximum
(JNIEnv * env, jobject self, jlong pointer) {

    QInputDialog * dialog = (QInputDialog*)pointer;
    return dialog->doubleMaximum();
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    setDoubleRange
 * Signature: (JDD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_setDoubleRange
(JNIEnv * env, jobject self, jlong pointer, jdouble begin, jdouble end) {

    QInputDialog * dialog = (QInputDialog*)pointer;
    dialog->setDoubleRange(begin,end);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    setDoubleDecimals
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_setDoubleDecimals
(JNIEnv * env, jobject self, jlong pointer, jint decimals) {

    QInputDialog * dialog = (QInputDialog*)pointer;
    dialog->setDoubleDecimals(decimals);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    doubleDecimals
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_doubleDecimals
(JNIEnv * env, jobject self, jlong pointer) {

    QInputDialog * dialog = (QInputDialog*)pointer;
    return dialog->doubleDecimals();
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    setOkButtonText
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_setOkButtonText
(JNIEnv * env, jobject self, jlong pointer, jstring okText) {

    const char* cOkText = env->GetStringUTFChars(okText,JNI_FALSE);
    QInputDialog * dialog = (QInputDialog*)pointer;
    dialog->setOkButtonText(QString(cOkText));
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    okButtonText
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_okButtonText
(JNIEnv * env, jobject self, jlong pointer) {

    QInputDialog * dialog = (QInputDialog*)pointer;
    std::string str = dialog->okButtonText().toStdString();
    const char * cStr = str.c_str();
    return asJavaString(env,cStr);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    setCancelButtonText
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_setCancelButtonText
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    const char * cText = env->GetStringUTFChars(text,JNI_FALSE);
    QInputDialog * dialog = (QInputDialog*)pointer;
    dialog->setCancelButtonText(QString(cText));
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    cancelButtonText
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_cancelButtonText
(JNIEnv * env, jobject self, jlong pointer) {

    QInputDialog * dialog = (QInputDialog*)pointer;
    std::string str = dialog->cancelButtonText().toStdString();
    const char * cStr = str.c_str();

    return asJavaString(env,cStr);
}



/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    setInputMode
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_setInputMode
(JNIEnv * env, jobject self, jlong pointer, jint mode) {

    QInputDialog * dialog = (QInputDialog*)pointer;
    QInputDialog::InputMode modeType = QInputDialog::InputMode(mode);
    dialog->setInputMode(modeType);

}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    inputMode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_inputMode
(JNIEnv * env, jobject self, jlong pointer) {

    QInputDialog * dialog = (QInputDialog*)pointer;
    return int(dialog->inputMode());
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    setLabelText
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_setLabelText
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    const char * val = env->GetStringUTFChars(text,JNI_FALSE);
    QInputDialog * dialog = (QInputDialog*)pointer;
    dialog->setLabelText(QString(val));

}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    labelText
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_labelText
(JNIEnv * env, jobject self, jlong pointer) {

    QInputDialog * dialog = (QInputDialog*)pointer;
    std::string textVal = dialog->labelText().toStdString();
    const char * text = textVal.c_str();
    return asJavaString(env,text);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    setComboBoxItems
 * Signature: (J[Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_setComboBoxItems
  (JNIEnv * env, jobject self, jlong pointer, jobjectArray options) {

    QInputDialog * dialog = (QInputDialog*)pointer;

    QStringList list;
    int len = env->GetArrayLength(options);
    for(int idx = 0; idx < len; idx ++) {
       jstring str = (jstring)env->GetObjectArrayElement(options,idx);
       const char * cStr = env->GetStringUTFChars(str,JNI_FALSE);
       list.append(QString(cStr));
    }

    dialog->setComboBoxItems(list);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    comboBoxItems
 * Signature: (J)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_comboBoxItems
  (JNIEnv * env, jobject self, jlong pointer) {

    QInputDialog * dialog = (QInputDialog*)pointer;
    QStringList list = dialog->comboBoxItems();

    jobjectArray array = env->NewObjectArray(list.size(),env->FindClass("java/lang/String"),NULL);

    for(int idx = 0; idx < list.size(); idx ++) {
        QString str = list.at(idx);
        std::string stdStr = str.toStdString();
        const char * data = stdStr.c_str();
        env->SetObjectArrayElement(array,idx,asJavaString(env,data));
    }

    return array;
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SInputDialog
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SInputDialog_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QInputDialog * dialog = (QInputDialog*)pointer;
    delete dialog;
}

