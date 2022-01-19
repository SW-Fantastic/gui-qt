#include "gui_global.h"
#include "java/dialogs/org_swdc_qt_internal_dialogs_SDialog.h"
#include "java/org_swdc_qt_internal_widgets_SWidget.h"

/*
 * Class:     org_swdc_qt_internal_dialogs_SDialog
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_dialogs_SDialog_create
(JNIEnv * env, jobject self, jlong parentPointer) {


    QDialog * dialog = NULL;
    self = env->NewGlobalRef(self);

    if(parentPointer > 0) {
        QWidget * widget = (QWidget*)parentPointer;
        dialog = new QDialog(widget);
    } else {
        dialog = new QDialog();
    }

   initializeWidgetEvents(dialog,self);

    return (jlong)(intptr_t)dialog;
}


/*
 * Class:     org_swdc_qt_internal_dialogs_SDialog
 * Method:    result
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_dialogs_SDialog_result
(JNIEnv * env, jobject self, jlong pointer) {

    QDialog * dialog = (QDialog*)pointer;
    return dialog->result();
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SDialog
 * Method:    setVisible
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SDialog_setVisible
(JNIEnv * env, jobject self, jlong pointer, jboolean visible) {

    QDialog * dialog = (QDialog*)pointer;
    dialog->setVisible(visible);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SDialog
 * Method:    sizeHint
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_dialogs_SDialog_sizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QDialog * dialog = (QDialog*)pointer;
    QSize * size = new QSize(dialog->sizeHint());

    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SDialog
 * Method:    minimumSizeHint
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_dialogs_SDialog_minimumSizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QDialog * dialog = (QDialog*)pointer;
    QSize * size = new QSize(dialog->minimumSizeHint());
    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SDialog
 * Method:    setSizeGripEnabled
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SDialog_setSizeGripEnabled
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QDialog * dialog = (QDialog*)pointer;
    dialog->setSizeGripEnabled(val);

}

/*
 * Class:     org_swdc_qt_internal_dialogs_SDialog
 * Method:    isSizeGripEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_dialogs_SDialog_isSizeGripEnabled
(JNIEnv * env, jobject self, jlong pointer) {

    QDialog * dialog = (QDialog*)pointer;
    return dialog->isSizeGripEnabled() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SDialog
 * Method:    setModal
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SDialog_setModal
(JNIEnv * env, jobject self, jlong pointer, jboolean modal) {

    QDialog * dialog = (QDialog*)pointer;
    dialog->setModal(modal);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SDialog
 * Method:    setResult
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SDialog_setResult
(JNIEnv * env, jobject self, jlong pointer, jint result) {

    QDialog * dialog = (QDialog*)pointer;
    dialog->setResult(result);
}


/*
 * Class:     org_swdc_qt_internal_dialogs_SDialog
 * Method:    open
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SDialog_open
(JNIEnv * env, jobject self, jlong pointer) {

    QDialog * dialog = (QDialog*)pointer;
    dialog->open();
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SDialog
 * Method:    exec
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SDialog_exec
(JNIEnv * env, jobject self, jlong pointer) {

    QDialog * dialog = (QDialog*)pointer;
    dialog->exec();
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SDialog
 * Method:    done
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SDialog_done
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QDialog * dialog = (QDialog*)pointer;
    dialog->done(val);
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SDialog
 * Method:    accept
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SDialog_accept
(JNIEnv * env, jobject self, jlong pointer) {

    QDialog * dialog = (QDialog*)pointer;
    dialog->accept();
}

/*
 * Class:     org_swdc_qt_internal_dialogs_SDialog
 * Method:    reject
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SDialog_reject
(JNIEnv * env, jobject self, jlong pointer) {

    QDialog * dialog = (QDialog*)pointer;
    dialog->reject();
}


/*
 * Class:     org_swdc_qt_internal_dialogs_SDialog
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_dialogs_SDialog_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QDialog * dialog = (QDialog*)pointer;
    delete dialog;
    cleanJavaPointer(env,self);
}
