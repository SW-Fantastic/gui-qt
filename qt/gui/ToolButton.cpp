#include"gui_global.h"
#include"java/org_swdc_qt_internal_widgets_SToolButton.h"

#include"java/org_swdc_qt_internal_widgets_SWidget.h"

SToolButton::SToolButton(jobject self,QWidget * parent):QToolButton(parent) {
    this->self = self;
}

SToolButton::SToolButton(jobject self):QToolButton() {
    this->self = self;
}


void SToolButton::paintEvent(QPaintEvent *event)  {
    QToolButton::paintEvent(event);
    paintEventWithJava(event,this->self,(jlong)(intptr_t)this);
 }


/*
 * Class:     org_swdc_qt_internal_widgets_SToolButton
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SToolButton_create
(JNIEnv * env, jobject self) {


    self = env->NewGlobalRef(self);
    QToolButton * toolButton = new SToolButton(self);
    initializeWidgetEvents(toolButton,self);

    return (jlong)(intptr_t)toolButton;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolButton
 * Method:    sizeHint
 * Signature: (J)Lorg/swdc/qt/beans/SSize;
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SToolButton_sizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QToolButton * toolButton = (QToolButton*)pointer;
    QSize * size = new QSize(toolButton->sizeHint());
    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolButton
 * Method:    minimumSizeHint
 * Signature: (J)Lorg/swdc/qt/beans/SSize;
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SToolButton_minimumSizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QToolButton * toolButton = (QToolButton*)pointer;
    QSize * size = new QSize(toolButton->minimumSizeHint());
    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolButton
 * Method:    setToolButtonStyle
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SToolButton_setToolButtonStyle
(JNIEnv * env, jobject self, jlong pointer, jint style) {

    Qt::ToolButtonStyle qStyle = Qt::ToolButtonStyle(style);
    QToolButton * toolButton = (QToolButton*)pointer;
    toolButton->setToolButtonStyle(qStyle);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolButton
 * Method:    toolButtonStyle
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SToolButton_toolButtonStyle
(JNIEnv * env, jobject self, jlong pointer) {

    QToolButton * qToolButton = (QToolButton*)pointer;
    return int(qToolButton->toolButtonStyle());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolButton
 * Method:    setAutoRaise
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SToolButton_setAutoRaise
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QToolButton * button = (QToolButton*)pointer;
    button->setAutoRaise(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolButton
 * Method:    autoRaise
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SToolButton_autoRaise
(JNIEnv * env, jobject self, jlong pointer) {

    QToolButton * toolButtons = (QToolButton*)pointer;
    return toolButtons->autoRaise() ? JNI_TRUE:JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolButton
 * Method:    arrowType
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SToolButton_arrowType
(JNIEnv * env, jobject self, jlong pointer) {

    QToolButton * button = (QToolButton*)pointer;
    Qt::ArrowType type = button->arrowType();
    return int(type);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolButton
 * Method:    setArrowType
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SToolButton_setArrowType
(JNIEnv * env, jobject self, jlong pointer, jint type) {

    QToolButton * button = (QToolButton*)pointer;
    Qt::ArrowType typeVal = Qt::ArrowType(type);
    button->setArrowType(typeVal);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolButton
 * Method:    setMenu
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SToolButton_setMenu
(JNIEnv * env, jobject self, jlong pointer, jlong menuPointer) {

    QToolButton * button = (QToolButton*)pointer;
    QMenu* menu = (QMenu*)menuPointer;
    button->setMenu(menu);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolButton
 * Method:    setPopupMode
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SToolButton_setPopupMode
(JNIEnv * env, jobject self, jlong pointer, jint mode) {

    QToolButton * button = (QToolButton*)pointer;
    QToolButton::ToolButtonPopupMode popMode = QToolButton::ToolButtonPopupMode(mode);
    button->setPopupMode(popMode);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolButton
 * Method:    popupMode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SToolButton_popupMode
(JNIEnv * env, jobject self, jlong pointer) {

    QToolButton * button = (QToolButton*)pointer;
    QToolButton::ToolButtonPopupMode mode = button->popupMode();
    return int(mode);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SToolButton
 * Method:    showMenu
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SToolButton_showMenu
(JNIEnv * env, jobject self, jlong pointer) {

    QToolButton * button = (QToolButton*)pointer;
    button->showMenu();
}



/*
 * Class:     org_swdc_qt_internal_widgets_SToolButton
 * Method:    setDefaultAction
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SToolButton_setDefaultAction
(JNIEnv * env, jobject self, jlong pointer, jlong actionPointer) {

    QToolButton * toolButtons = (QToolButton*)pointer;
    QAction* action = (QAction*)actionPointer;
    toolButtons->setDefaultAction(action);
}
