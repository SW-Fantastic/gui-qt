#include "gui_global.h"
#include "java/org_swdc_qt_internal_widgets_SMenuBar.h"

#include "java/types/SMenuBar.h"
#include "java/types/SWidget.h"


SMenuBar::SMenuBar(jobject self):QMenuBar() {
    this->self = self;
}

SMenuBar::SMenuBar(jobject self, QWidget * widget):QMenuBar(widget){
    this->self = self;
}

void SMenuBar::paintEvent(QPaintEvent * event) {

    QMenuBar::paintEvent(event);
    paintEventWithJava(event,this->self,(jlong)(intptr_t)this);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_create
(JNIEnv * env, jobject self){

    self = env->NewGlobalRef(self);
    SMenuBar * menuBar = new SMenuBar(self);
    SWidget::initializeWidgetEvents(menuBar,self);

    return (jlong)(intptr_t)menuBar;

}


/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    addAction
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_addAction
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    QMenuBar * menuBar = (QMenuBar*)pointer;
    const char* title = env->GetStringUTFChars(text,JNI_FALSE);
    QString str(title);
    QAction * action = menuBar->addAction(str);
    return (jlong)(intptr_t)action;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    addMenu
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_addMenu__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong menuPointer) {

    QMenuBar * menuBar = (QMenuBar*)pointer;
    QMenu * menu = (QMenu*)menuPointer;
    QAction* added = menuBar->addMenu(menu);

    return (jlong)(intptr_t)added;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    addMenu
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_addMenu__JLjava_lang_String_2
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    QMenuBar * bar = (QMenuBar*)pointer;
    const char* title = env->GetStringUTFChars(text,JNI_FALSE);
    QString str(title);
    QMenu* result = bar->addMenu(str);
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    addSeparator
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_addSeparator
(JNIEnv * env, jobject self, jlong pointer) {


    QMenuBar * menuBar = (QMenuBar*)pointer;
    QAction* action = menuBar->addSeparator();
    return (jlong)(intptr_t)action;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    insertSeparator
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_insertSeparator
(JNIEnv * env, jobject self, jlong pointer, jlong actionBefore) {

    QAction* beforeAction = (QAction*)actionBefore;
    QMenuBar * menuBar = (QMenuBar*)pointer;
    QAction* action = menuBar->insertSeparator(beforeAction);

    return (jlong)(intptr_t)action;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    insertMenu
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_insertMenu
(JNIEnv * env, jobject self, jlong pointer, jlong actionBefore, jlong menuPointer){

    QMenuBar * menuBar = (QMenuBar*)pointer;
    QMenu* menu = (QMenu*)menuPointer;
    QAction* action = (QAction*)actionBefore;
    QAction* result = menuBar->insertMenu(action,menu);

    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    clear
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_clear
(JNIEnv * env, jobject self, jlong pointer) {

    QMenuBar * menuBar = (QMenuBar*)pointer;
    menuBar->clear();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    setActiveAction
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_setActiveAction
(JNIEnv * env, jobject self, jlong pointer, jlong action) {

    QMenuBar * menuBar = (QMenuBar*)pointer;
    QAction  * qAction  = (QAction*)action;
    menuBar->setActiveAction(qAction);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    setDefaultUp
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_setDefaultUp
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QMenuBar * menuBar = (QMenuBar*)pointer;
    menuBar->setDefaultUp(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    isDefaultUp
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_isDefaultUp
(JNIEnv * env, jobject self, jlong pointer) {

    QMenuBar * menuBar = (QMenuBar*)pointer;
    return menuBar->isDefaultUp() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    sizeHint
 * Signature: (J)Lorg/swdc/qt/beans/SSize;
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_sizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QMenuBar * menuBar = (QMenuBar*)pointer;
    QSize * size = new QSize(menuBar->sizeHint());

    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    minimumSizeHint
 * Signature: (J)Lorg/swdc/qt/beans/SSize;
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_minimumSizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QMenuBar * menuBar = (QMenuBar*)pointer;
    QSize*  size = new QSize(menuBar->minimumSizeHint());

    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    heightForWidth
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_heightForWidth
(JNIEnv * env, jobject self, jlong pointer, jint width) {

    QMenuBar * menuBar = (QMenuBar*)pointer;
    return menuBar->heightForWidth(width);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    setVisible
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_setVisible
(JNIEnv * env, jobject self, jlong pointer, jboolean visible) {

    QMenuBar * menuBar = (QMenuBar*)pointer;
    menuBar->setVisible(visible);
}

