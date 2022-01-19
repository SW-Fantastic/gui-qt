#include "gui_global.h"
#include "java/org_swdc_qt_internal_widgets_SToolBar.h"
#include "java/org_swdc_qt_internal_widgets_SWidget.h"

SToolBar::SToolBar(jobject self):QToolBar() {
    this->self = self;
}


SToolBar::SToolBar(jobject self,QWidget * widget):QToolBar(widget) {
    this->self = self;
}

void SToolBar::paintEvent(QPaintEvent * event) {
    QToolBar::paintEvent(event);
    paintEventWithJava(event,this->self,(jlong)(intptr_t)self);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBar
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SToolBar_create
(JNIEnv * env, jobject self) {


    self = env->NewGlobalRef(self);

    SToolBar * bar = new SToolBar(self);
    initializeWidgetEvents(bar,self);

    return (jlong)(intptr_t)bar;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBar
 * Method:    setMovable
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SToolBar_setMovable
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QToolBar * bar = (QToolBar*)pointer;
    bar->setMovable(val);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBar
 * Method:    isMovable
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SToolBar_isMovable
(JNIEnv * env, jobject self,jlong pointer) {

     QToolBar * bar = (QToolBar*)pointer;
     return bar->isMovable();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBar
 * Method:    setOrientation
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SToolBar_setOrientation
(JNIEnv * env, jobject self, jlong pointer, jlong orientation) {

    Qt::Orientation orientationVal = Qt::Orientation(orientation);
    QToolBar * bar = (QToolBar*)pointer;

    bar->setOrientation(orientationVal);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBar
 * Method:    orientation
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SToolBar_orientation
(JNIEnv * env, jobject self, jlong pointer) {

     QToolBar * bar = (QToolBar*)pointer;
     return long(bar->orientation());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBar
 * Method:    clear
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SToolBar_clear
(JNIEnv * env, jobject self, jlong pointer) {

     QToolBar * bar = (QToolBar*)pointer;
     bar->clear();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBar
 * Method:    addAction
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SToolBar_addAction__JLjava_lang_String_2
(JNIEnv * env, jobject self, jlong pointer, jstring val) {

    const char * text = env->GetStringUTFChars(val,JNI_FALSE);
    QToolBar * bar = (QToolBar*)pointer;

    QAction * action = bar->addAction(QString(text));
    return (jlong)(intptr_t)action;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBar
 * Method:    addAction
 * Signature: (JJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SToolBar_addAction__JJLjava_lang_String_2
(JNIEnv * env, jobject self, jlong pointer, jlong iconPointer, jstring str) {

    const char * text = env->GetStringUTFChars(str,JNI_FALSE);
    QIcon * icon = (QIcon*)iconPointer;
    QToolBar * bar = (QToolBar*)pointer;
    QString qText(text);

    QAction * action = bar->addAction(*icon,qText);
    return (jlong)(intptr_t)action;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBar
 * Method:    addSeparator
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SToolBar_addSeparator
(JNIEnv * env, jobject self, jlong pointer) {

    QToolBar * bar = (QToolBar*)pointer;
    QAction * action = bar->addSeparator();

    return (jlong)(intptr_t)action;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBar
 * Method:    insertSeparator
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SToolBar_insertSeparator
(JNIEnv * env, jobject self, jlong pointer, jlong beforeAction) {

    QAction * before = (QAction*)beforeAction;
    QToolBar * bar = (QToolBar*)pointer;

    QAction * action = bar->insertSeparator(before);
    return (jlong)(intptr_t)action;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBar
 * Method:    addWidget
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SToolBar_addWidget
(JNIEnv * env, jobject self, jlong pointer, jlong widgetPointer) {

    QToolBar * bar = (QToolBar*)pointer;
    QWidget * widget = (QWidget*)widgetPointer;

    QAction * action = bar->addWidget(widget);
    return (jlong)(intptr_t)action;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBar
 * Method:    insertWidget
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SToolBar_insertWidget
(JNIEnv * env, jobject self, jlong pointer, jlong actionBefore, jlong widgetPointer) {

    QAction * action = (QAction*)actionBefore;
    QWidget * widget = (QWidget*)widgetPointer;

    QToolBar * bar = (QToolBar*)pointer;
    QAction* result = bar->insertWidget(action,widget);

    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBar
 * Method:    actionGeometry
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SToolBar_actionGeometry
(JNIEnv * env, jobject self, jlong pointer, jlong actionPointer) {

    QAction * action = (QAction*)actionPointer;
    QToolBar * bar = (QToolBar*)pointer;

    QRect * rect = new QRect(bar->actionGeometry(action));
    return (jlong)(intptr_t)rect;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBar
 * Method:    setAllowedAreas
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SToolBar_setAllowedAreas
(JNIEnv * env, jobject self, jlong pointer, jlong areas) {

    Qt::ToolBarAreas area = Qt::ToolBarAreas(areas);
    QToolBar * bar = (QToolBar*)pointer;
    bar->setAllowedAreas(area);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBar
 * Method:    isAreaAllowed
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SToolBar_isAreaAllowed
(JNIEnv * env, jobject self, jlong pointer, jlong areasVal) {

    Qt::ToolBarArea area = Qt::ToolBarArea((unsigned int)areasVal);
    QToolBar * bar = (QToolBar*)pointer;
    return bar->isAreaAllowed(area) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBar
 * Method:    isFloatable
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SToolBar_isFloatable
(JNIEnv * env, jobject self, jlong pointer) {

    QToolBar * bar = (QToolBar*)pointer;
    return bar->isFloatable() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBar
 * Method:    setFloatable
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SToolBar_setFloatable
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

     QToolBar * bar = (QToolBar*)pointer;
     bar->setFloatable(val);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBar
 * Method:    isFloating
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SToolBar_isFloating
(JNIEnv * env, jobject self, jlong pointer) {

    QToolBar * bar = (QToolBar*)pointer;
    return bar->isFloating() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBar
 * Method:    iconSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SToolBar_iconSize
(JNIEnv * env, jobject self, jlong pointer) {

    QToolBar * bar = (QToolBar*)pointer;
    QSize * size = new QSize(bar->iconSize());

    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBar
 * Method:    setIconSize
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SToolBar_setIconSize
(JNIEnv * env, jobject self, jlong pointer, jlong sizePointer) {

    QToolBar * bar = (QToolBar*)pointer;
    QSize * size = (QSize*)sizePointer;

    bar->setIconSize(*size);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBar
 * Method:    toolButtonStyle
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SToolBar_toolButtonStyle
(JNIEnv * env, jobject self, jlong pointer) {

    QToolBar * bar = (QToolBar*)pointer;
    return int(bar->toolButtonStyle());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolBar
 * Method:    setToolButtonStyle
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SToolBar_setToolButtonStyle
(JNIEnv * env, jobject self, jlong pointer, jint styleVal) {

    Qt::ToolButtonStyle buttonStyle = Qt::ToolButtonStyle(styleVal);
    QToolBar * bar = (QToolBar*)pointer;
    bar->setToolButtonStyle(buttonStyle);
}



/*
 * Class:     org_swdc_qt_internal_widgets_SToolBar
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SToolBar_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QToolBar * bar = (QToolBar*)pointer;
    delete bar;
    cleanJavaPointer(env,self);
}
