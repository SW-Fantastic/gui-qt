#include "gui_global.h"

#include "java/types/SWidget.h"
#include "java/types/SFontComboBox.h"

#include "java/org_swdc_qt_internal_widgets_SFontComboBox.h"

SFontComboBox::SFontComboBox(jobject self):QFontComboBox() {
    this->self = self;
}

SFontComboBox::SFontComboBox(jobject self,QWidget * widget):QFontComboBox(widget) {
    this->self = self;
}

void SFontComboBox::paintEvent(QPaintEvent * event) {
    QFontComboBox::paintEvent(event);
    paintEventWithJava(event,this->self,(jlong)(intptr_t)this);
}


/*
 * Class:     org_swdc_qt_internal_widgets_SFontComboBox
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SFontComboBox_create
(JNIEnv * env, jobject self, jlong pointer) {

    self = env->NewGlobalRef(self);
    SFontComboBox * box = nullptr;

    if(pointer > 0 ) {
        QWidget * widget = (QWidget*)pointer;
        box = new SFontComboBox(self,widget);
    } else {
        box = new SFontComboBox(self);
    }

    SWidget::initializeWidgetEvents(box,self);
    return (jlong)(intptr_t)box;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SFontComboBox
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SFontComboBox_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QFontComboBox * box = (QFontComboBox*)pointer;
    delete box;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SFontComboBox
 * Method:    setFontFilters
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SFontComboBox_setFontFilters
(JNIEnv * env, jobject self, jlong pointer, jint filters) {

    QFontComboBox::FontFilters filter = QFontComboBox::FontFilters(filters);
    QFontComboBox * box = (QFontComboBox*)pointer;
    box->setFontFilters(filter);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SFontComboBox
 * Method:    currentFont
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SFontComboBox_currentFont
(JNIEnv * env, jobject self, jlong pointer) {

    QFontComboBox * box = (QFontComboBox*)pointer;
    QFont font = box->currentFont();
    QFont * target = new QFont();
    *target = font;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SFontComboBox
 * Method:    sizeHint
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SFontComboBox_sizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QFontComboBox * box = (QFontComboBox*)pointer;
    QSize* size = new QSize(box->sizeHint());
    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SFontComboBox
 * Method:    setCurrentFont
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SFontComboBox_setCurrentFont
(JNIEnv * env, jobject self, jlong pointer, jlong font) {

    QFontComboBox * box = (QFontComboBox*)pointer;
    QFont * fontVal = (QFont*)font;
    box->setCurrentFont(*fontVal);
}
