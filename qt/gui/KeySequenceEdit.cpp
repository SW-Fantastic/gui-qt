#include "gui_global.h"
#include "java/types/SWidget.h"
#include "java/types/SKeySequenceEdit.h"

#include "java/org_swdc_qt_internal_widgets_SKeySequenceEdit.h"

SKeySequenceEdit::SKeySequenceEdit(jobject self) {
    this->self = self;
}

SKeySequenceEdit::SKeySequenceEdit(jobject self, QWidget * parent):QKeySequenceEdit(parent) {
    this->self = self;
}

void SKeySequenceEdit::paintEvent(QPaintEvent * event) {
    QKeySequenceEdit::paintEvent(event);
    paintEventWithJava(event,this->self,_P(this));
}


/*
 * Class:     org_swdc_qt_internal_widgets_SKeySequenceEdit
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SKeySequenceEdit_create
(JNIEnv * env, jobject self, jlong pointer) {

    SKeySequenceEdit * seq = nullptr;
    self = env->NewGlobalRef(self);
    if(pointer > 0) {
        QWidget * widget = (QWidget*)pointer;
        seq = new SKeySequenceEdit(self,widget);
    } else {
        seq = new SKeySequenceEdit(self);
    }

    SWidget::initializeWidgetEvents(seq,self);
    return _P(seq);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SKeySequenceEdit
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SKeySequenceEdit_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QKeySequenceEdit * edit = (QKeySequenceEdit*)pointer;
    delete edit;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SKeySequenceEdit
 * Method:    setKeySequence
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SKeySequenceEdit_setKeySequence
(JNIEnv * env, jobject self, jlong pointer, jlong seqPointer) {

    QKeySequenceEdit * edit = (QKeySequenceEdit*)pointer;
    QKeySequence * seq = (QKeySequence*)seqPointer;
    edit->setKeySequence(*seq);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SKeySequenceEdit
 * Method:    clear
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SKeySequenceEdit_clear
(JNIEnv * env, jobject self, jlong pointer) {

    QKeySequenceEdit * edit = (QKeySequenceEdit*)pointer;
    edit->clear();
}


/*
 * Class:     org_swdc_qt_internal_widgets_SKeySequenceEdit
 * Method:    keySequence
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SKeySequenceEdit_keySequence
(JNIEnv * env, jobject self, jlong pointer) {

    QKeySequenceEdit * edit = (QKeySequenceEdit*)pointer;
    QKeySequence * seq = new QKeySequence();
    *seq = edit->keySequence();
    return _P(seq);
}
