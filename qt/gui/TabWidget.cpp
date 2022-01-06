#include"gui_global.h"
#include"java/org_swdc_qt_internal_widgets_STabWidget.h"

#include"java/org_swdc_qt_internal_widgets_SWidget.h"


STabWidget::STabWidget(jobject self):QTabWidget() {
    this->self = self;
}

STabWidget::STabWidget(jobject self,QWidget * parent):QTabWidget(parent) {
    this->self = self;
}

void STabWidget::paintEvent(QPaintEvent * event){

    QTabWidget::paintEvent(event);
    paintEventWithJava(event,this->self,(jlong)(intptr_t)this);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_create
(JNIEnv * env, jobject self) {

    self = env->NewGlobalRef(self);

    STabWidget* tabWidget = new STabWidget(self);
    initializeWidgetEvents(tabWidget,self);

    return (jlong)(intptr_t)tabWidget;

}



/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    addTab
 * Signature: (JJLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_addTab
(JNIEnv * env, jobject self, jlong pointer, jlong widgetPointer, jstring text) {

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    const char* label = env->GetStringUTFChars(text,JNI_FALSE);
    QString str(label);
    QWidget * widget = (QWidget*)widgetPointer;

    return tabWidget->addTab(widget,str);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    insertTab
 * Signature: (JIJLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_insertTab
(JNIEnv * env, jobject self, jlong pointer, jint index, jlong widgetPointer, jstring text) {

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    const char* label = env->GetStringUTFChars(text,JNI_FALSE);
    QString str(label);
    QWidget* widget = (QWidget*)widgetPointer;

    return tabWidget->insertTab(index,widget,str);

}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    removeTab
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_removeTab
(JNIEnv * env, jobject self, jlong pointer, jint index) {

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    tabWidget->removeTab(index);

}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    isTabEnabled
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_isTabEnabled
(JNIEnv * env, jobject self, jlong pointer, jint index) {

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    return tabWidget->isTabEnabled(index);

}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    setTabEnabled
 * Signature: (JIZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_setTabEnabled
(JNIEnv * env, jobject self, jlong pointer, jint index, jboolean enable) {

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    tabWidget->setTabEnabled(index,enable);

}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    isTabVisible
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_isTabVisible
(JNIEnv * env, jobject self, jlong pointer, jint index) {

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    return tabWidget->isTabVisible(index);

}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    setTabVisible
 * Signature: (JIZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_setTabVisible
(JNIEnv * env, jobject self, jlong pointer, jint index, jboolean val) {

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    tabWidget->setTabVisible(index,val);

}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    tabText
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_tabText
(JNIEnv * env, jobject self, jlong pointer, jint index) {

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    std::string str = tabWidget->tabText(index).toStdString();
    const char* text = str.c_str();
    return asJavaString(env,text);

}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    setTabText
 * Signature: (JILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_setTabText
(JNIEnv * env, jobject self, jlong pointer, jint index, jstring text) {

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    const char* label = env->GetStringUTFChars(text,JNI_FALSE);
    QString str(label);
    tabWidget->setTabText(index,str);

}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    setTabToolTip
 * Signature: (JILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_setTabToolTip
(JNIEnv * env, jobject self, jlong pointer, jint index, jstring tooltip) {

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    const char* label = env->GetStringUTFChars(tooltip,JNI_FALSE);
    QString str(label);
    tabWidget->setTabToolTip(index,str);

}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    tabToolTip
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_tabToolTip
(JNIEnv * env, jobject self, jlong pointer, jint index){

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    std::string tooltip = tabWidget->tabToolTip(index).toStdString();
    const char* text = tooltip.c_str();
    return asJavaString(env,text);

}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    setTabWhatsThis
 * Signature: (JILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_setTabWhatsThis
(JNIEnv * env, jobject self, jlong pointer, jint index, jstring whatIsThis) {

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    const char * text = env->GetStringUTFChars(whatIsThis,JNI_FALSE);
    QString str(text);
    tabWidget->setTabWhatsThis(index,str);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    tabWhatsThis
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_tabWhatsThis
(JNIEnv * env, jobject self, jlong pointer,jint index) {

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    std::string label = tabWidget->tabWhatsThis(index).toStdString();
    const char* text = label.c_str();
    return asJavaString(env,text);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    currentIndex
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_currentIndex
(JNIEnv * env, jobject self, jlong pointer) {

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    return tabWidget->currentIndex();
}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    count
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_count
(JNIEnv * env, jobject self, jlong pointer) {

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    return tabWidget->count();

}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    tabPosition
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_tabPosition
(JNIEnv * env, jobject self, jlong pointer) {

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    QTabWidget::TabPosition pos = tabWidget->tabPosition();
    return int(pos);

}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    setTabPosition
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_setTabPosition
(JNIEnv * env, jobject self, jlong pointer, jint pos) {

    QTabWidget::TabPosition position = QTabWidget::TabPosition(pos);
    QTabWidget* tabWidget = (QTabWidget*)pointer;
    tabWidget->setTabPosition(position);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    tabsClosable
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_tabsClosable
(JNIEnv * env, jobject self, jlong pointer) {

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    return tabWidget->tabsClosable();

}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    setTabsClosable
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_setTabsClosable
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    tabWidget->setTabsClosable(val);

}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    isMovable
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_isMovable
(JNIEnv * env, jobject self, jlong pointer){

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    return tabWidget->isMovable() ? JNI_TRUE : JNI_FALSE;

}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    setMovable
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_setMovable
(JNIEnv * env, jobject self, jlong pointer, jboolean val){

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    tabWidget->setMovable(val);

}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    tabShape
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_tabShape
(JNIEnv * env, jobject self, jlong pointer) {

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    QTabWidget::TabShape shape = tabWidget->tabShape();
    return int(shape);

}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    setTabShape
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_setTabShape
(JNIEnv * env, jobject self, jlong pointer, jint shape) {

    QTabWidget::TabShape qShape = QTabWidget::TabShape(shape);
    QTabWidget* tabWidget = (QTabWidget*)pointer;
    tabWidget->setTabShape(qShape);

}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    usesScrollButtons
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_usesScrollButtons
(JNIEnv * env, jobject self, jlong pointer){

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    return tabWidget->usesScrollButtons() ? JNI_TRUE : JNI_FALSE;

}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    setUsesScrollButtons
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_setUsesScrollButtons
(JNIEnv * env, jobject self, jlong pointer, jboolean val){

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    tabWidget->setUsesScrollButtons(val);

}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    documentMode
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_documentMode
(JNIEnv * env, jobject self, jlong pointer) {

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    return tabWidget->documentMode() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    setDocumentMode
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_setDocumentMode
(JNIEnv * env, jobject self, jlong pointer, jboolean val){

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    tabWidget->setDocumentMode(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    tabBarAutoHide
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_tabBarAutoHide
(JNIEnv * env, jobject self, jlong pointer){

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    return tabWidget->tabBarAutoHide() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    setTabBarAutoHide
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_setTabBarAutoHide
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    clear
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_clear
(JNIEnv * env, jobject self, jlong pointer) {

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    tabWidget->clear();
}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    sizeHint
 * Signature: (J)Lorg/swdc/qt/beans/SSize;
 */
JNIEXPORT jobject JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_sizeHint
(JNIEnv * env, jobject self, jlong pointer){

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    QSize size = tabWidget->sizeHint();

    return ssize(env,size.width(),size.height());

}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    minimumSizeHint
 * Signature: (J)Lorg/swdc/qt/beans/SSize;
 */
JNIEXPORT jobject JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_minimumSizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    QSize size = tabWidget->minimumSizeHint();

    return ssize(env,size.width(),size.height());
}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    heightForWidth
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_heightForWidth
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    return tabWidget->heightForWidth(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STabWidget
 * Method:    hasHeightForWidth
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_STabWidget_hasHeightForWidth
(JNIEnv * env, jobject self, jlong pointer) {

    QTabWidget* tabWidget = (QTabWidget*)pointer;
    return tabWidget->hasHeightForWidth() ? JNI_TRUE : JNI_FALSE;
}
