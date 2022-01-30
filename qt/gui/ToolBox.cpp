#include "gui_global.h"
#include "java/types/SWidget.h"
#include "java/types/SToolBox.h"

#include "java/org_swdc_qt_internal_widgets_SToolBox.h"

SToolBox::SToolBox(jobject self):QToolBox() {
    this->self = self;
}

SToolBox::SToolBox(jobject self,QWidget * parent):QToolBox(parent) {
    this->self = self;
}

void SToolBox::paintEvent(QPaintEvent * event) {
    QToolBox::paintEvent(event);
    paintEventWithJava(event,this->self,(jlong)(intptr_t)this);
}


/*
 * Class:     org_swdc_qt_internal_widgets_SToolBox
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SToolBox_create
(JNIEnv * env, jobject self, jlong parentPointer) {

    self = env->NewGlobalRef(self);
    SToolBox * box = nullptr;
    if(parentPointer <= 0) {
        box = new SToolBox(self);
    } else {
        QWidget * widget = (QWidget*)parentPointer;
        box = new SToolBox(self,widget);
    }

    SWidget::initializeWidgetEvents(box,self);

    return (jlong)(intptr_t)box;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBox
 * Method:    addItem
 * Signature: (JJLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SToolBox_addItem__JJLjava_lang_String_2
(JNIEnv * env, jobject self, jlong pointer, jlong widgetPointer, jstring text) {

    QWidget* widget = (QWidget*)widgetPointer;
    QToolBox * box = (QToolBox*)pointer;

    const char* cText = env->GetStringUTFChars(text,JNI_FALSE);
    return box->addItem(widget,QString(cText));
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBox
 * Method:    addItem
 * Signature: (JJJLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SToolBox_addItem__JJJLjava_lang_String_2
(JNIEnv * env, jobject self, jlong pointer, jlong widgetPointer, jlong iconPointer, jstring text) {

    QIcon * icon = (QIcon*)iconPointer;
    QWidget* widget = (QWidget*)widgetPointer;
    QToolBox * box = (QToolBox*)pointer;

    const char* cText = env->GetStringUTFChars(text,JNI_FALSE);
    return box->addItem(widget,*icon,QString(cText));
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBox
 * Method:    insertItem
 * Signature: (JIJLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SToolBox_insertItem__JIJLjava_lang_String_2
(JNIEnv * env, jobject self, jlong pointer, jint idx, jlong widgetPointer, jstring text) {

    QWidget* widget = (QWidget*)widgetPointer;
    QToolBox * box = (QToolBox*)pointer;

    const char* cText = env->GetStringUTFChars(text,JNI_FALSE);
    return box->insertItem(idx,widget,QString(cText));
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBox
 * Method:    insertItem
 * Signature: (JIJJLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SToolBox_insertItem__JIJJLjava_lang_String_2
(JNIEnv * env, jobject self, jlong pointer, jint idx, jlong widgetPointer, jlong iconPointer, jstring text) {

    QIcon * icon = (QIcon*)iconPointer;
    QWidget* widget = (QWidget*)widgetPointer;
    QToolBox * box = (QToolBox*)pointer;

    const char* cText = env->GetStringUTFChars(text,JNI_FALSE);
    return box->insertItem(idx,widget,*icon,QString(cText));
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBox
 * Method:    removeItem
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SToolBox_removeItem
(JNIEnv * env, jobject self, jlong pointer, jint index) {

    QToolBox * box = (QToolBox*)pointer;
    box->removeItem(index);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBox
 * Method:    setItemEnabled
 * Signature: (JIZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SToolBox_setItemEnabled
(JNIEnv * env, jobject self, jlong pointer, jint index, jboolean val) {

    QToolBox * box = (QToolBox*)pointer;
    box->setItemEnabled(index,val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBox
 * Method:    isItemEnabled
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SToolBox_isItemEnabled
(JNIEnv * env, jobject self, jlong pointer, jint index) {

    QToolBox * box = (QToolBox*)pointer;
    return box->isItemEnabled(index) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBox
 * Method:    setItemText
 * Signature: (JILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SToolBox_setItemText
(JNIEnv * env, jobject self, jlong pointer, jint index, jstring text) {

    const char* itemText = env->GetStringUTFChars(text,JNI_FALSE);
    QToolBox * box = (QToolBox*)pointer;
    box->setItemText(index,QString(itemText));
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBox
 * Method:    itemText
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SToolBox_itemText
(JNIEnv * env, jobject self, jlong pointer, jint index) {

    QToolBox * box = (QToolBox*)pointer;
    std::string text = box->itemText(index).toStdString();
    const char * cText = text.c_str();
    return asJavaString(env,cText);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBox
 * Method:    setItemIcon
 * Signature: (JIJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SToolBox_setItemIcon
(JNIEnv * env, jobject self, jlong pointer, jint index, jlong iconPointer) {

    QToolBox * box = (QToolBox*)pointer;
    QIcon * icon = (QIcon*)iconPointer;
    box->setItemIcon(index,*icon);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBox
 * Method:    itemIcon
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SToolBox_itemIcon
(JNIEnv * env, jobject self, jlong pointer, jint index) {

    QToolBox * box = (QToolBox*)pointer;
    QIcon * icon = new QIcon(box->itemIcon(index));
    return (jlong)(intptr_t)icon;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBox
 * Method:    setItemToolTip
 * Signature: (JILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SToolBox_setItemToolTip
(JNIEnv * env, jobject self, jlong pointer, jint index, jstring text) {

    const char * cText = env->GetStringUTFChars(text,JNI_FALSE);
    QToolBox * box = (QToolBox*)pointer;
    box->setItemToolTip(index,QString(cText));
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBox
 * Method:    itemToolTip
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SToolBox_itemToolTip
(JNIEnv * env, jobject self, jlong pointer, jint index) {

    QToolBox * box = (QToolBox*)pointer;
    std::string str = box->itemToolTip(index).toStdString();
    const char * cStr = str.c_str();

    return asJavaString(env,cStr);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBox
 * Method:    currentIndex
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SToolBox_currentIndex
(JNIEnv * env, jobject self, jlong pointer) {

    QToolBox * box = (QToolBox*)pointer;
    return box->currentIndex();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBox
 * Method:    currentWidget
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SToolBox_currentWidget
(JNIEnv * env, jobject self, jlong pointer) {

    QToolBox * box = (QToolBox*)pointer;
    QWidget * widget = box->currentWidget();
    return (jlong)(intptr_t)widget;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBox
 * Method:    widget
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SToolBox_widget
(JNIEnv * env, jobject self, jlong pointer, jint index) {

    QToolBox * box = (QToolBox*)pointer;
    QWidget * widget = box->widget(index);
    return (jlong)(intptr_t)widget;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBox
 * Method:    indexOf
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SToolBox_indexOf
(JNIEnv * env, jobject self, jlong pointer, jlong widgetPointer) {

    QToolBox * box = (QToolBox*)pointer;
    QWidget * widget = (QWidget*)widgetPointer;
    return box->indexOf(widget);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBox
 * Method:    count
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SToolBox_count
(JNIEnv * env, jobject self, jlong pointer) {

    QToolBox * box = (QToolBox*)pointer;
    return box->count();
}
