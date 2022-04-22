#include "gui_global.h"
#include "java/org_swdc_qt_internal_widgets_SDateEdit.h"

#include "java/types/SDateEdit.h"
#include "java/types/SWidget.h"

SDateEdit::SDateEdit(jobject self):QDateEdit() {
    this->self = self;
}

SDateEdit::SDateEdit(jobject self,QWidget * parent):QDateEdit(parent) {
    this->self = self;
}

void SDateEdit::paintEvent(QPaintEvent *event) {
    QDateEdit::paintEvent(event);
    paintEventWithJava(event,this->self,(jlong)(intptr_t)this);
}


/*
 * Class:     org_swdc_qt_internal_widgets_SDateEdit
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SDateEdit_create
(JNIEnv * env, jobject self, jlong pointer) {

    SDateEdit * edit = nullptr;
    self = env->NewGlobalRef(self);
    if(pointer > 0) {
        QWidget * widget = (QWidget*)pointer;
        edit = new SDateEdit(self,widget);
    } else {
        edit = new SDateEdit(self);
    }

    SWidget::initializeWidgetEvents(edit,self);
    return _P(edit);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateEdit
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDateEdit_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QDateEdit * edit = (QDateEdit*)pointer;
    delete edit;
    cleanJavaPointer(env,self);

}
