#include "gui_global.h"


#include "java/types/SWidget.h"
#include "java/types/SPushButton.h"
#include "java/dialogs/types/SMessageDialog.h"

#include "java/org_swdc_qt_internal_widgets_SButton.h"
#include "java/dialogs/org_swdc_qt_internal_dialogs_SMessageDialog.h"


SMessageDialog::SMessageDialog(jobject self):QMessageBox() {
    this->self = self;
}

SMessageDialog::SMessageDialog(jobject self, QWidget* parent):QMessageBox(parent) {
    this->self = self;
}

void SMessageDialog::paintEvent(QPaintEvent *event) {
    QMessageBox::paintEvent(event);
    paintEventWithJava(event,this->self,(jlong)(intptr_t)this);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SMessageDialog
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_dialogs_SMessageDialog_create
(JNIEnv * env, jobject self, jlong parentPointer) {

    SMessageDialog * dialog = NULL;
    self = env->NewGlobalRef(self);
    if(parentPointer == 0) {
        QWidget * widget = (QWidget*)parentPointer;
        dialog = new SMessageDialog(self,widget);
    } else {
        dialog = new SMessageDialog(self);
    }

    SWidget::initializeWidgetEvents(dialog,self);
    return (jlong)(intptr_t)dialog;
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SMessageDialog
 * Method:    addButton
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SMessageDialog_addButton__JJI
(JNIEnv * env, jobject self, jlong pointer, jlong buttonPointer, jint role) {

    QMessageBox * messageBox = (QMessageBox*)pointer;
    QAbstractButton * button = (QAbstractButton*)buttonPointer;

    QMessageBox::ButtonRole bRole = QMessageBox::ButtonRole(role);
    messageBox->addButton(button,bRole);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SMessageDialog
 * Method:    addButton
 * Signature: (JLjava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_dialogs_SMessageDialog_addButton__JLjava_lang_String_2I
(JNIEnv * env, jobject self, jlong pointer, jstring text, jint role) {

    QMessageBox * messageBox = (QMessageBox*)pointer;
    QMessageBox::ButtonRole bRole = QMessageBox::ButtonRole(role);

    const char * cText = env->GetStringUTFChars(text,JNI_FALSE);
    QString val(cText);

    SPushButton * button = new SPushButton(NULL);
    button->setText(val);
    messageBox->addButton(button,bRole);

    env->ReleaseStringUTFChars(text,cText);

    return (jlong)(intptr_t)button;
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SMessageDialog
 * Method:    addButton
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_dialogs_SMessageDialog_addButton__JI
(JNIEnv * env, jobject self, jlong pointer, jint stdButton) {

    QMessageBox::StandardButton stdBtn = QMessageBox::StandardButton(stdButton);
    QMessageBox * messageBox = (QMessageBox*)pointer;

    QAbstractButton * button = messageBox->addButton(stdBtn);
    return (jlong)(intptr_t)button;
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SMessageDialog
 * Method:    removeButton
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SMessageDialog_removeButton
(JNIEnv * env, jobject self, jlong pointer, jlong button) {

    QMessageBox * messageBox = (QMessageBox*)pointer;
    QAbstractButton * btn = (QAbstractButton*)button;
    messageBox->removeButton(btn);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SMessageDialog
 * Method:    buttons
 * Signature: (J)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_swdc_qt_internal_dialogs_SMessageDialog_buttons
(JNIEnv * env, jobject self, jlong pointer) {

    QMessageBox * messageBox = (QMessageBox*)pointer;
    QList<QAbstractButton *> buttons = messageBox->buttons();

    jlongArray array = env->NewLongArray(buttons.size());
    jlong * buf = new jlong[buttons.size()];
    for(int idx = 0; idx < buttons.length(); idx ++) {
       QAbstractButton * button = buttons.at(idx);
       buf[idx] = (jlong)(intptr_t)button;
    }

    env->SetLongArrayRegion(array,0,buttons.size(),buf);
    delete[] buf;

    return array;
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SMessageDialog
 * Method:    buttonRole
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_dialogs_SMessageDialog_buttonRole
(JNIEnv * env, jobject self, jlong pointer, jlong button) {

    QAbstractButton * absButton = (QAbstractButton*)button;
    QMessageBox * messageBox = (QMessageBox*)pointer;
    QMessageBox::ButtonRole role = messageBox->buttonRole(absButton);

    return int(role);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SMessageDialog
 * Method:    setStandardButtons
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SMessageDialog_setStandardButtons
(JNIEnv * env, jobject self, jlong pointer, jint stdButtons) {

    QMessageBox * messageBox = (QMessageBox*)pointer;
    messageBox->setStandardButtons(QMessageBox::StandardButtons(stdButtons));

}

/*
 * Class:     org_swdc_qt_internal_dialogs_SMessageDialog
 * Method:    standardButton
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_dialogs_SMessageDialog_standardButton
(JNIEnv * env, jobject self, jlong pointer, jlong buttonPointer) {

    QMessageBox * messageBox = (QMessageBox*)pointer;
    QAbstractButton * absButton = (QAbstractButton*)buttonPointer;

    QMessageBox::StandardButton stdButton = messageBox->standardButton(absButton);
    return int(stdButton);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SMessageDialog
 * Method:    button
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_dialogs_SMessageDialog_button
(JNIEnv * env, jobject self, jlong pointer, jint stdButton) {

    QMessageBox * messageBox = (QMessageBox*)pointer;
    QAbstractButton * button = messageBox->button(QMessageBox::StandardButton(stdButton));
    return (jlong)(intptr_t)button;
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SMessageDialog
 * Method:    defaultButton
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_dialogs_SMessageDialog_defaultButton
(JNIEnv * env, jobject self, jlong pointer) {

    QMessageBox * messageBox = (QMessageBox*)pointer;
    QAbstractButton * defaultButton = messageBox->defaultButton();
    return (jlong)(intptr_t)defaultButton;
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SMessageDialog
 * Method:    setDefaultButton
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SMessageDialog_setDefaultButton__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong buttonPointer) {

    QPushButton * button = (QPushButton*)buttonPointer;
    QMessageBox * messageBox = (QMessageBox*)pointer;
    messageBox->setDefaultButton(button);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SMessageDialog
 * Method:    setDefaultButton
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SMessageDialog_setDefaultButton__JI
(JNIEnv * env, jobject self, jlong pointer, jint stdButton) {

    QMessageBox * messageBox = (QMessageBox*)pointer;
    messageBox->setDefaultButton(QMessageBox::StandardButton(stdButton));
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SMessageDialog
 * Method:    escapeButton
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_dialogs_SMessageDialog_escapeButton
(JNIEnv * env, jobject self, jlong pointer) {

    QMessageBox * messageBox = (QMessageBox*)pointer;
    QAbstractButton * button = messageBox->escapeButton();

    return (jlong)(intptr_t)button;
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SMessageDialog
 * Method:    setEscapeButton
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SMessageDialog_setEscapeButton__JJ
  (JNIEnv * env, jobject self, jlong pointer, jlong buttonPointer) {

    QAbstractButton * absButton = (QAbstractButton*)buttonPointer;
    QMessageBox * messageBox = (QMessageBox*)pointer;
    messageBox->setEscapeButton(absButton);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SMessageDialog
 * Method:    setEscapeButton
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SMessageDialog_setEscapeButton__JI
(JNIEnv * env, jobject self, jlong pointer, jint stdButton) {

    QMessageBox::StandardButton stdBtn = QMessageBox::StandardButton(stdButton);
    QMessageBox * messageBox = (QMessageBox*)pointer;
    messageBox->setEscapeButton(stdBtn);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SMessageDialog
 * Method:    clickedButton
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_dialogs_SMessageDialog_clickedButton
(JNIEnv * env, jobject self, jlong pointer) {

    QMessageBox * messageBox = (QMessageBox*)pointer;
    QAbstractButton * button = messageBox->clickedButton();
    return (jlong)(intptr_t)button;
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SMessageDialog
 * Method:    text
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_dialogs_SMessageDialog_text
(JNIEnv * env, jobject self, jlong pointer) {

    QMessageBox * messageBox = (QMessageBox*)pointer;
    std::string text = messageBox->text().toStdString();
    const char * cText = text.c_str();
    return asJavaString(env,cText);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SMessageDialog
 * Method:    setText
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SMessageDialog_setText
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    QMessageBox * messageBox = (QMessageBox*)pointer;
    const char * cText = env->GetStringUTFChars(text,JNI_FALSE);
    messageBox->setText(QString(cText));
    env->ReleaseStringUTFChars(text,cText);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SMessageDialog
 * Method:    icon
 * Signature: (J)J
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_dialogs_SMessageDialog_icon
(JNIEnv * env, jobject self, jlong pointer){

    QMessageBox * messageBox = (QMessageBox*)pointer;
    QMessageBox::Icon icon = messageBox->icon();
    return int(icon);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SMessageDialog
 * Method:    setIcon
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SMessageDialog_setIcon
(JNIEnv * env, jobject self, jlong pointer, jint icon) {

     QMessageBox * messageBox = (QMessageBox*)pointer;
     QMessageBox::Icon msgIcon = QMessageBox::Icon(icon);
     messageBox->setIcon(msgIcon);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SMessageDialog
 * Method:    iconPixmap
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_dialogs_SMessageDialog_iconPixmap
  (JNIEnv * env, jobject self, jlong pointer) {

     QMessageBox * messageBox = (QMessageBox*)pointer;
     QPixmap * pixmap = new QPixmap(messageBox->iconPixmap());
     return (jlong)(intptr_t)pixmap;
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SMessageDialog
 * Method:    setIconPixmap
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SMessageDialog_setIconPixmap
(JNIEnv * env, jobject self, jlong pointer, jlong pixmap) {

    QPixmap * qPixmap = (QPixmap*)pixmap;
    QMessageBox * messageBox = (QMessageBox*)pointer;
    messageBox->setIconPixmap(*qPixmap);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SMessageDialog
 * Method:    informativeText
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_dialogs_SMessageDialog_informativeText
(JNIEnv * env, jobject self, jlong pointer) {

    QMessageBox * messageBox = (QMessageBox*)pointer;
    std::string str = messageBox->informativeText().toStdString();
    const char * cText = str.c_str();
    return asJavaString(env,cText);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SMessageDialog
 * Method:    setInformativeText
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SMessageDialog_setInformativeText
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    const char * cText = env->GetStringUTFChars(text,JNI_FALSE);
    QMessageBox * messageBox = (QMessageBox*)pointer;
    messageBox->setInformativeText(QString(cText));
    env->ReleaseStringUTFChars(text,cText);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SMessageDialog
 * Method:    setWindowTitle
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SMessageDialog_setWindowTitle
(JNIEnv * env, jobject self, jlong pointer, jstring title) {

    const char * cText = env->GetStringUTFChars(title,JNI_FALSE);
    QMessageBox * messageBox = (QMessageBox*)pointer;
    messageBox->setWindowTitle(QString(cText));
    env->ReleaseStringUTFChars(title,cText);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SMessageDialog
 * Method:    setWindowModality
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SMessageDialog_setWindowModality
(JNIEnv * env, jobject self, jlong pointer, jint mod) {

    Qt::WindowModality modal = Qt::WindowModality(mod);
    QMessageBox * messageBox = (QMessageBox*)pointer;
    messageBox->setWindowModality(modal);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SMessageDialog
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SMessageDialog_dispose
(JNIEnv * env, jobject self, jlong pointer) {

     QMessageBox * messageBox = (QMessageBox*)pointer;
     delete messageBox;
}

