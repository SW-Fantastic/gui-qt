#include"gui_global.h"
#include <stdio.h>
#include"java/org_swdc_qt_internal_widgets_SWidget.h"

extern const char* PainterClassType;
const char* WidgetClassType = "org/swdc/qt/internal/widgets/SWidget";

SWidget::SWidget(jobject self):QWidget() {
    this->self = self;
}

SWidget::SWidget(jobject self,QWidget * parent):QWidget(parent) {
    this->self = self;
}

void SWidget::paintEvent(QPaintEvent * event) {
    QWidget::paintEvent(event);
    paintEventWithJava(event,this->self,(jlong)(intptr_t)this);
}


void initializeWidgetEvents(QWidget* widget,jobject self){

    widget->connect(widget,&QWidget::windowTitleChanged,[self](QString title)->void {
        asyncExec([self,title]() -> void {

            std::string newTitle = title.toStdString();
            JNIEnv* env = getContext();

            jclass targetClass = env->FindClass(WidgetClassType);
            jmethodID method = env->GetMethodID(targetClass,"onWindowTitleChange","(Ljava/lang/String;)V");
            env->CallVoidMethod(self,method,asJavaString(env,newTitle.c_str()));

            releaseContext();

        });
    });

    widget->connect(widget,&QWidget::customContextMenuRequested,[self](QPoint p) -> void {
        asyncExec([self,p]() -> void {

            JNIEnv* env = getContext();

            jclass targetClass = env->FindClass(WidgetClassType);
            jmethodID method = env->GetMethodID(targetClass,"onWindowContextMenuRequest","(II)V");
            env->CallVoidMethod(self,method,p.x(),p.y());

            releaseContext();
        });
    });



    widget->connect(widget,&QWidget::destroyed,[self]()->void{

        JNIEnv* env = getContext();

        cleanJavaPointer(env,self);
        env->DeleteGlobalRef(self);

        releaseContext();

    });

}



/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SWidget_create
  (JNIEnv *jenv, jobject self,jlong parent) {

    SWidget* widget = nullptr;

    self = jenv->NewGlobalRef(self);

    if(parent > 0) {
        widget = new SWidget(self,(QWidget*)parent);
    } else {
        widget = new SWidget(self);
    }

    initializeWidgetEvents(widget,self);

    return (jlong)(intptr_t)widget;
}


/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    isAcceptDrops
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SWidget_isAcceptDrops
(JNIEnv * env, jobject self, jlong pointer) {
    QWidget * widget = (QWidget*)pointer;
    if(widget->acceptDrops()) {
        return JNI_TRUE;
    }
    return JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    getAccessibleDescription
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SWidget_getAccessibleDescription
(JNIEnv * env, jobject self, jlong pointer) {
    QWidget * widget = (QWidget*)pointer;
    QString str = widget->accessibleDescription();
    return asJavaString(env,str.toLatin1().data());
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    getAccessibleName
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SWidget_getAccessibleName
(JNIEnv * env, jobject self, jlong pointer) {
    QWidget * widget = (QWidget*)pointer;
    QString str = widget->accessibleName();
    return asJavaString(env,str.toLatin1().data());
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doActivateWindow
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doActivateWindow
  (JNIEnv * env, jobject self, jlong pointer) {
    QWidget * widget = (QWidget*)pointer;
    widget->activateWindow();
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    isAutoFillBackground
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SWidget_isAutoFillBackground
(JNIEnv * env, jobject self, jlong pointer) {
    QWidget * widget = (QWidget*)pointer;
    if(widget->autoFillBackground()) {
        return JNI_TRUE;
    }
    return JNI_FALSE;
}


// ----------------------- Size Methods --------------------- //


/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doAdjustSize
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doAdjustSize
(JNIEnv * env, jobject self, jlong pointer) {
    QWidget * widget = (QWidget*)pointer;
    widget->adjustSize();
}


/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doSetSize
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doSetMinSize
(JNIEnv * env, jobject self, jlong pointer, jint width, jint height) {
    QWidget * widget = (QWidget*)pointer;
    widget->setMinimumSize(width,height);
}


/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    getBaseSize
 * Signature: (J)Lorg/swdc/qt/beans/SSize;
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SWidget_getBaseSize
(JNIEnv * env, jobject self, jlong pointer) {
    QWidget * widget = (QWidget*)pointer;
    QSize * size = new QSize(widget->baseSize());
    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doSetBaseSize
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doSetBaseSize__JII
  (JNIEnv * env, jobject self, jlong pointer, jint width, jint height) {
      QWidget * widget = (QWidget*)pointer;
      widget->setBaseSize(width,height);
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doSetBaseSize
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doSetBaseSize__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong ssizePointer) {
    QWidget * widget = (QWidget*)pointer;
    QSize* size = (QSize*)ssizePointer;
    widget->setBaseSize(*size);
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doSetMaxSize
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doSetMaxSize
(JNIEnv * env, jobject self, jlong pointer, jint width, jint height) {
    QWidget * widget = (QWidget*)pointer;
    widget->setMaximumSize(width,height);
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doSetMaxWidth
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doSetMaxWidth
(JNIEnv * env, jobject self, jlong pointer, jint width) {
    QWidget * widget = (QWidget*)pointer;
    widget->setMaximumWidth(width);
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doSetMinWidth
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doSetMinWidth
(JNIEnv * env, jobject self, jlong pointer, jint width) {
    QWidget * widget = (QWidget*)pointer;
    widget->setMinimumWidth(width);
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doSetMaxHeight
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doSetMaxHeight
  (JNIEnv * env, jobject self, jlong pointer, jint height) {
    QWidget * widget = (QWidget*)pointer;
    widget->setMaximumHeight(height);
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doSetMinHeight
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doSetMinHeight
(JNIEnv * env, jobject self, jlong pointer, jint height) {
    QWidget * widget = (QWidget*)pointer;
    widget->setMinimumHeight(height);
}



/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doGetContextMenuPolicy
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doGetContextMenuPolicy
(JNIEnv * env, jobject self,jlong pointer) {
    QWidget * widget = (QWidget*)pointer;
    Qt::ContextMenuPolicy policy = widget->contextMenuPolicy();
    return int(policy);
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doSetContextMenuPolicy
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doSetContextMenuPolicy
(JNIEnv * env, jobject self, jlong pointer, jint val) {
    QWidget * widget = (QWidget*)pointer;
    Qt::ContextMenuPolicy policy = Qt::ContextMenuPolicy(val);
    widget->setContextMenuPolicy(policy);
}



// ------------------Size Method End ------------------



/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    getFrameGeometry
 * Signature: (J)Lorg/swdc/qt/beans/SRect;
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SWidget_getFrameGeometry
  (JNIEnv * env, jobject self, jlong pointer) {
    QWidget * widget = (QWidget*)pointer;
    QRect rect = widget->frameGeometry();

    QRect *target = new QRect(rect);

    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    show
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_show
(JNIEnv * env, jobject self, jlong pointer) {
    QWidget * widget = (QWidget*)pointer;
    widget->show();
}


/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doClearFocus
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doClearFocus
  (JNIEnv * env, jobject self, jlong pointer){
    QWidget * widget = (QWidget*)pointer;
    widget->clearFocus();
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doClearMark
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doClearMark
(JNIEnv * env, jobject self, jlong pointer) {
    QWidget * widget = (QWidget*)pointer;
    widget->clearMask();
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    close
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_close
(JNIEnv * env, jobject self, jlong pointer) {
    QWidget * widget = (QWidget*)pointer;
    widget->close();
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doSetFocus
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doSetFocus
(JNIEnv * env, jobject self, jlong pointer) {
    QWidget * widget = (QWidget*)pointer;
    widget->setFocus();
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doSetMark
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doSetMark
(JNIEnv * env, jobject self, jlong pointer) {
    QWidget * widget = (QWidget*)pointer;
    widget->mask();
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doSetFixedWidth
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doSetFixedWidth
(JNIEnv * env, jobject self, jlong pointer, jint width) {
    QWidget * widget = (QWidget*)pointer;
    widget->setFixedWidth(width);
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doSetFixedHeight
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doSetFixedHeight
(JNIEnv * env, jobject self, jlong pointer, jint height) {
    QWidget * widget = (QWidget*)pointer;
    widget->setFixedHeight(height);
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doSetFixSize
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doSetFixSize
(JNIEnv * env, jobject self, jlong pointer, jint width, jint height) {
    QWidget * widget = (QWidget*)pointer;
    widget->setFixedSize(width,height);
}



/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    getMaxSize
 * Signature: (J)Lorg/swdc/qt/beans/SSize;
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SWidget_getMaxSize
(JNIEnv * env, jobject self, jlong pointer) {
    QWidget * widget = (QWidget*)pointer;
    QSize * size = new QSize(widget->maximumSize());
    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    getMinSize
 * Signature: (J)Lorg/swdc/qt/beans/SSize;
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SWidget_getMinSize
(JNIEnv * env, jobject self, jlong pointer) {
    QWidget * widget = (QWidget*)pointer;
    QSize * size = new QSize(widget->minimumSize());
    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    resize
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_resize
(JNIEnv * env, jobject self, jlong pointer, jint width, jint height) {
     QWidget * widget = (QWidget*)pointer;
     widget->resize(width,height);
}


/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doSetTooltip
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doSetTooltip
(JNIEnv * env, jobject self, jlong pointer, jstring text) {
     QWidget * widget = (QWidget*)pointer;
     widget->setToolTip(env->GetStringUTFChars(text,JNI_FALSE));
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doGetTooltip
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doGetTooltip
(JNIEnv * env, jobject self, jlong pointer) {
    QWidget * widget = (QWidget*)pointer;
    return asJavaString(env,widget->toolTip().toLatin1().data());
}


/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doGetStyleSheet
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doGetStyleSheet
(JNIEnv * env, jobject self, jlong pointer) {
    QWidget * widget = (QWidget*)pointer;
    QString style = widget->styleSheet();
    std::string styleStr = style.toStdString();
    return asJavaString(env,styleStr.c_str());
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doSetSizeIncrement
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doSetSizeIncrement
(JNIEnv * env, jobject self, jlong pointer, jint width, jint height) {
    QWidget * widget = (QWidget*)pointer;
    QSize size(width,height);
    widget->setSizeIncrement(size);
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doGetSizeIncrement
 * Signature: (J)Lorg/swdc/qt/beans/SSize;
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doGetSizeIncrement
(JNIEnv * env, jobject self, jlong pointer) {
    QWidget * widget = (QWidget*)pointer;
    QSize * size = new QSize(widget->sizeIncrement());
    return (jlong)(intptr_t)size;
}


/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doSetStyleSheet
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doSetStyleSheet
(JNIEnv * env, jobject self, jlong pointer, jstring styleSheet) {
    QWidget * widget = (QWidget*)pointer;
    const char* styleData = env->GetStringUTFChars(styleSheet,JNI_FALSE);
    QString qStyleData = QString(styleData);
    widget->setStyleSheet(qStyleData);
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doSetObjectName
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doSetObjectName
(JNIEnv * env, jobject self, jlong pointer, jstring name) {
    QWidget * widget = (QWidget*)pointer;
    const char* cName = env->GetStringUTFChars(name,JNI_FALSE);
    QString qName = QString(cName);
    widget->setObjectName(qName);
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doSetProperty
 * Signature: (JLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doSetProperty
(JNIEnv * env, jobject self, jlong pointer, jstring key, jstring value) {
    QWidget * widget = (QWidget*)pointer;

    const char* cKey = env->GetStringUTFChars(key,JNI_FALSE);
    QString qName = QString(cKey);

    const char* cVal = env->GetStringUTFChars(value,JNI_FALSE);

    widget->setProperty(cKey,QVariant(cVal));

}


/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    isDisable
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SWidget_isDisable
(JNIEnv * env, jobject self, jlong pointer) {
    QWidget * widget = (QWidget*)pointer;
    return widget->isEnabled() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doSetDisable
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doSetDisable
(JNIEnv * env, jobject self, jlong  pointer, jboolean disabled) {
    QWidget * widget = (QWidget*)pointer;
    widget->setDisabled(disabled);
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    setWindowTitle
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_setWindowTitle
(JNIEnv * env, jobject self, jlong pointer, jstring title) {
    QWidget * widget = (QWidget*)pointer;
    const char* cTitle = env->GetStringUTFChars(title,JNI_FALSE);
    widget->setWindowTitle(QString(cTitle));
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doGetWindowTitle
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doGetWindowTitle
(JNIEnv * env, jobject self, jlong pointer) {
    QWidget * widget = (QWidget*)pointer;
    return asJavaString(env,widget->windowTitle().toLatin1().data());
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    showFullScreen
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_showFullScreen
(JNIEnv * env, jobject self, jlong pointer) {
    QWidget * widget = (QWidget*)pointer;
    widget->showFullScreen();
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    showMaxSized
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_showMaxSized
(JNIEnv * env, jobject self, jlong pointer) {
    QWidget* widget = (QWidget*)pointer;
    widget->showMaximized();
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    showMinSized
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_showMinSized
(JNIEnv * env, jobject self, jlong pointer) {
    QWidget* widget = (QWidget*)pointer;
    widget->showMinimized();
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    hide
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_hide
(JNIEnv * env, jobject self, jlong pointer) {
    QWidget* widget = (QWidget*)pointer;
    widget->hide();
}



/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    setLayout
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_setLayout
(JNIEnv * env, jobject self, jlong pointer, jlong layoutPointer) {
    QWidget* widget = (QWidget*)pointer;
    QLayout* layout = (QLayout*)layoutPointer;
    widget->setLayout(layout);
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    getLayout
 * Signature: (J)V
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SWidget_getLayout
(JNIEnv * env, jobject self, jlong pointer) {
    QWidget* widget = (QWidget*)pointer;
    QLayout* layout = widget->layout();
    return (jlong)(intptr_t)layout;
}

/*
 * Class:     org_swdc_qt_widgets_SWidget
 * Method:    doDispose
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SWidget_doDispose
  (JNIEnv * env, jobject self,jlong pointer) {
    QWidget* widget = (QWidget*)pointer;
    delete widget;
    return JNI_TRUE;
}




/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    addAction
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_addAction
(JNIEnv * env, jobject self, jlong pointer, jlong actionPointer) {


    QWidget* widget = (QWidget*)pointer;
    QAction* action = (QAction*)actionPointer;
    widget->addAction(action);

}


/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    insertAction
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_insertAction
(JNIEnv * env, jobject self, jlong pointer, jlong beforeActionPointer, jlong actionPointer) {

    QWidget* widget = (QWidget*)pointer;
    QAction* before = (QAction*)beforeActionPointer;
    QAction* target = (QAction*)actionPointer;

    widget->insertAction(before,target);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    removeAction
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_removeAction
(JNIEnv * env, jobject self, jlong pointer, jlong actionPointer) {

    QWidget* widget = (QWidget*)pointer;
    QAction* action = (QAction*)actionPointer;

    widget->removeAction(action);

}


/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    setContentsMargins
 * Signature: (JIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_setContentsMargins
(JNIEnv * env, jobject self, jlong pointer, jint left, jint top, jint right, jint bottom) {

    QWidget* widget = (QWidget*)pointer;
    widget->setContentsMargins(left,top,right,bottom);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    contentsMargins
 * Signature: (J)Lorg/swdc/qt/beans/Margins;
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SWidget_contentsMargins
(JNIEnv * env, jobject self, jlong pointer) {

    QWidget* widget = (QWidget*)pointer;
    QMargins * margins =new QMargins(widget->contentsMargins());
    return (jlong)(intptr_t)margins;
}


/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    font
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SWidget_font
  (JNIEnv * env, jobject self, jlong pointer) {

    QWidget * widget = (QWidget*)pointer;
    QFont * font = new QFont(widget->font());
    return (jlong)(intptr_t)font;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    setFont
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_setFont
(JNIEnv * env, jobject self, jlong pointer, jlong font) {

    QWidget * widget = (QWidget*)pointer;
    QFont * fontVal = (QFont*)font;
    widget->setFont(*fontVal);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    setWindowIcon
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_setWindowIcon
(JNIEnv * env, jobject self, jlong pointer, jlong iconPointer) {

    QIcon * icon = (QIcon*)iconPointer;
    QWidget * widget = (QWidget*)pointer;
    widget->setWindowIcon(*icon);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    windowIcon
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SWidget_windowIcon
(JNIEnv * env, jobject self, jlong pointer) {

    QWidget * widget = (QWidget*)pointer;
    QIcon * icon = new QIcon(widget->windowIcon());

    return (jlong)(intptr_t)icon;
}



/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    update
 * Signature: (JIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_update__JIIII
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y, jint w, jint h) {

    QWidget * widget = (QWidget*)pointer;
    widget->update(x,y,w,h);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    update
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_update__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong rectPointer) {

    QWidget * widget = (QWidget*)pointer;
    QRect * rect = (QRect*)rectPointer;

    widget->update(*rect);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    update
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_update__J
(JNIEnv * env, jobject self, jlong pointer) {

    QWidget * widget = (QWidget*)pointer;
    widget->update();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    isTopLevel
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SWidget_isTopLevel
(JNIEnv * env, jobject self, jlong pointer) {

    QWidget * widget = (QWidget*)pointer;
    return widget->isTopLevel() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    isWindow
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SWidget_isWindow
(JNIEnv * env, jobject self, jlong pointer) {

    QWidget * widget = (QWidget*)pointer;
    return widget->isWindow() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    isModal
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SWidget_isModal
(JNIEnv * env, jobject self, jlong pointer) {

    QWidget * widget = (QWidget*)pointer;
    return widget->isModal() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    windowModality
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SWidget_windowModality
(JNIEnv * env, jobject self, jlong pointer) {

    QWidget * widget = (QWidget*)pointer;
    return int(widget->windowModality());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    setWindowModality
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_setWindowModality
(JNIEnv * env, jobject self, jlong pointer, jint modalVal) {

    Qt::WindowModality modal = Qt::WindowModality(modalVal);
    QWidget * widget = (QWidget*)pointer;
    widget->setWindowModality(modal);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    isEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SWidget_isEnabled
(JNIEnv * env, jobject self, jlong pointer) {

    QWidget * widget = (QWidget*)pointer;
    return widget->isEnabled();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    mapToGlobal
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SWidget_mapToGlobal
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QWidget * widget = (QWidget*)pointer;
    QPoint* point = (QPoint*)pointPointer;

    QPoint * result = new QPoint(widget->mapToGlobal(*point));
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    mapFromGlobal
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SWidget_mapFromGlobal
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QWidget * widget = (QWidget*)pointer;
    QPoint* point = (QPoint*)pointPointer;

    QPoint * result = new QPoint(widget->mapFromGlobal(*point));
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    mapToParent
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SWidget_mapToParent
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QWidget * widget = (QWidget*)pointer;
    QPoint* point = (QPoint*)pointPointer;

    QPoint * result = new QPoint(widget->mapToParent(*point));
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    mapFromParent
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SWidget_mapFromParent
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QWidget * widget = (QWidget*)pointer;
    QPoint* point = (QPoint*)pointPointer;

    QPoint * result = new QPoint(widget->mapFromParent(*point));
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    mapTo
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SWidget_mapTo
(JNIEnv * env, jobject self, jlong pointer, jlong widgetPointer, jlong pointPointer) {

    QWidget * widget = (QWidget*)pointer;
    QPoint* point = (QPoint*)pointPointer;

    QWidget * from = (QWidget*)widgetPointer;

    QPoint * result = new QPoint(widget->mapTo(from,*point));
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    mapFrom
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SWidget_mapFrom
(JNIEnv * env, jobject self, jlong pointer, jlong widgetPointer, jlong pointPointer){

    QWidget * widget = (QWidget*)pointer;
    QPoint* point = (QPoint*)pointPointer;

    QWidget * from = (QWidget*)widgetPointer;

    QPoint * result = new QPoint(widget->mapFrom(from,*point));
    return (jlong)(intptr_t)result;
}


/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    x
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SWidget_x
(JNIEnv * env, jobject self, jlong pointer) {

    QWidget * widget = (QWidget*)pointer;
    return widget->x();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    y
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SWidget_y
(JNIEnv * env, jobject self, jlong pointer) {

    QWidget * widget = (QWidget*)pointer;
    return widget->y();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    pos
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SWidget_pos
(JNIEnv * env, jobject self, jlong pointer) {

    QWidget * widget = (QWidget*)pointer;
    QPoint * point = new QPoint(widget->pos());

    return (jlong)(intptr_t)point;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    frameSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SWidget_frameSize
(JNIEnv * env, jobject self, jlong pointer) {

    QWidget * widget = (QWidget*)pointer;
    QSize * size = new QSize(widget->frameSize());

    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    size
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SWidget_size
(JNIEnv * env, jobject self, jlong pointer) {

    QWidget * widget = (QWidget*)pointer;
    QSize * size = new QSize(widget->size());
    return (jlong)(intptr_t)size;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    width
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SWidget_width
(JNIEnv * env, jobject self, jlong pointer) {

    QWidget * widget = (QWidget*)pointer;
    return widget->width();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    height
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SWidget_height
(JNIEnv * env, jobject self, jlong pointer) {

    QWidget * widget = (QWidget*)pointer;
    return widget->height();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    rect
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SWidget_rect
(JNIEnv * env, jobject self, jlong pointer) {

    QWidget * widget = (QWidget*)pointer;
    QRect * rect = new QRect(widget->rect());
    return (jlong)(intptr_t)rect;
}


/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    isActiveWindow
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SWidget_isActiveWindow
(JNIEnv * env, jobject self, jlong pointer) {

    QWidget * widget = (QWidget*)pointer;
    return widget->isActiveWindow() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    hasFocus
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SWidget_hasFocus
(JNIEnv * env, jobject self, jlong pointer) {

    QWidget * widget = (QWidget*)pointer;
    return widget->hasFocus() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    setGeometry
 * Signature: (JIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_setGeometry__JIIII
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y, jint w, jint h) {

    QWidget * widget = (QWidget*)pointer;
    widget->setGeometry(x,y,w,h);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    setGeometry
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_setGeometry__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong rectPointer) {

    QWidget * widget = (QWidget*)pointer;
    QRect * rect = (QRect*)rectPointer;
    widget->setGeometry(*rect);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    geometry
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SWidget_geometry
(JNIEnv * env, jobject self, jlong pointer) {

    QWidget * widget = (QWidget*)pointer;
    QRect * rect = new QRect(widget->geometry());
    return (jlong)(intptr_t)rect;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    normalGeometry
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SWidget_normalGeometry
(JNIEnv * env, jobject self, jlong pointer) {

    QWidget * widget = (QWidget*)pointer;
    QRect * rect = new QRect(widget->normalGeometry());
    return (jlong)(intptr_t)rect;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    isMinimized
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SWidget_isMinimized
(JNIEnv * env, jobject self, jlong pointer) {

    QWidget * widget = (QWidget*)pointer;
    return widget->isMinimized() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    isMaximized
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SWidget_isMaximized
(JNIEnv * env, jobject self, jlong pointer) {

    QWidget * widget = (QWidget*)pointer;
    return widget->isMaximized() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    isFullScreen
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SWidget_isFullScreen
(JNIEnv * env, jobject self, jlong pointer) {

    QWidget * widget = (QWidget*)pointer;
    return widget->isFullScreen() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    isHidden
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SWidget_isHidden
(JNIEnv * env, jobject self, jlong pointer) {

    QWidget * widget = (QWidget*)pointer;
    return widget->isHidden() ? JNI_TRUE : JNI_FALSE;
}


/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    horizontalSizePolicy
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SWidget_horizontalSizePolicy
(JNIEnv * env, jobject self, jlong pointer) {

     QWidget * widget = (QWidget*)pointer;
     QSizePolicy p = widget->sizePolicy();
     return int(p.horizontalPolicy());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    verticalSizePolicy
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SWidget_verticalSizePolicy
(JNIEnv * env, jobject self, jlong pointer) {

     QWidget * widget = (QWidget*)pointer;
     QSizePolicy p = widget->sizePolicy();
     return (int)p.verticalPolicy();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    setSizePolicy
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_setSizePolicy
(JNIEnv * env, jobject self, jlong pointer, jint horizontol, jint vertical) {

    QSizePolicy::Policy h = QSizePolicy::Policy(horizontol);
    QSizePolicy::Policy v = QSizePolicy::Policy(vertical);

     QWidget * widget = (QWidget*)pointer;
     widget->setSizePolicy(h,v);
}
/*
 * Class:     org_swdc_qt_internal_widgets_SWidget
 * Method:    setTabOrder
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SWidget_setTabOrder
(JNIEnv * env, jclass type, jlong widgetPointerA, jlong widgetPointerB) {

    QWidget * widget = (QWidget*)widgetPointerA;
    QWidget * widgetB = (QWidget*)widgetPointerB;

    QWidget::setTabOrder(widget,widgetB);
}
