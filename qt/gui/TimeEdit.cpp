#include "gui_global.h"
#include "java/types/STimeEdit.h"
#include "java/types/SWidget.h"

#include "java/org_swdc_qt_internal_widgets_STimeEdit.h"


STimeEdit::STimeEdit(jobject self):QTimeEdit() {
    this->self = self;
}

STimeEdit::STimeEdit(jobject self,QWidget * widget):QTimeEdit(widget) {
    this->self = self;
}

void STimeEdit::paintEvent(QPaintEvent *event) {
    QTimeEdit::paintEvent(event);
    paintEventWithJava(event,this->self,_P(this));
}


/*
 * Class:     org_swdc_qt_internal_widgets_STimeEdit
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_STimeEdit_create
(JNIEnv * env, jobject self, jlong pointer) {

    STimeEdit * edit = nullptr;
    self = env->NewGlobalRef(self);
    if(pointer > 0) {
        QWidget * widget = (QWidget*)pointer;
        edit = new STimeEdit(self,widget);
    } else {
        edit = new STimeEdit(self);
    }

    SWidget::initializeWidgetEvents(edit,self);
    return _P(edit);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STimeEdit
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STimeEdit_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    STimeEdit * edit = (STimeEdit*)pointer;
    delete edit;
    cleanJavaPointer(env,self);
}
