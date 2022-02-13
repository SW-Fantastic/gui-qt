#include "gui_global.h"
#include "java/org_swdc_qt_internal_widgets_SMenu.h"


void initializeMenuEvents(JNIEnv * env,jobject self,QMenu* menu) {

    self = env->NewGlobalRef(self);
    menu->connect(menu,&QMenu::destroyed,[self]()->void {
        JNIEnv* env = getContext();
        cleanJavaPointer(env,self);
        env->DeleteGlobalRef(self);
        releaseContext();
    });

}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenu_create
  (JNIEnv * env, jobject self) {

    QMenu * menu = new QMenu();

    initializeMenuEvents(env,self,menu);

    return (jlong)(intptr_t)menu;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    addAction
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenu_addAction__JLjava_lang_String_2
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    QMenu* menu = (QMenu*)pointer;
    const char* textVal = env->GetStringUTFChars(text,JNI_FALSE);
    QString textStr(textVal);
    QAction* action = menu->addAction(textStr);
    env->ReleaseStringUTFChars(text,textVal);
    return (jlong)(intptr_t)action;

}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    addAction
 * Signature: (JJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenu_addAction__JJLjava_lang_String_2
(JNIEnv * env, jobject self, jlong pointer, jlong iconPointer, jstring text) {

    QMenu* menu = (QMenu*)pointer;
    const char* textVal = env->GetStringUTFChars(text,JNI_FALSE);

    QIcon * icon = (QIcon*)iconPointer;
    QString textStr(textVal);

    QAction* action = menu->addAction(*icon,textStr);
    env->ReleaseStringUTFChars(text,textVal);
    return (jlong)(intptr_t)action;
}


/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    popup
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenu_popup__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong pointPointer) {

    QPoint* point = (QPoint*)pointer;
    QMenu* menu = (QMenu*)pointer;

    menu->popup(*point);

}


/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    popup
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenu_popup__JJII
(JNIEnv * env, jobject self, jlong pointer,jlong widgetPointer, jint x, jint y) {

    QWidget* widget = (QWidget*)widgetPointer;
    QMenu* menu = (QMenu*)pointer;
    QPoint p = widget->mapToGlobal(QPoint(x,y));
    menu->popup(p);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    icon
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenu_icon
(JNIEnv * env, jobject self, jlong pointer) {

    QMenu* menu = (QMenu*)pointer;
    QIcon * icon = new QIcon(menu->icon());
    return (jlong)(intptr_t)icon;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    setIcon
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenu_setIcon
(JNIEnv * env, jobject self, jlong pointer, jlong iconPointer) {

    QIcon * icon = (QIcon*)iconPointer;
    QMenu* menu = (QMenu*)pointer;
    menu->setIcon(*icon);
}


/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    wrap
 * Signature: (J)J
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenu_wrap
(JNIEnv * env, jobject self, jlong pointer) {

    QMenu* menu = (QMenu*)pointer;
    initializeMenuEvents(env,self,menu);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    addMenu
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenu_addMenu__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong menuPointer) {

    QMenu* menu = (QMenu*)pointer;
    QMenu* target = (QMenu*)menuPointer;

    QAction* action = menu->addMenu(target);
    return (jlong)(intptr_t)action;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    addMenu
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenu_addMenu__JLjava_lang_String_2
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    QMenu* menu = (QMenu*)pointer;
    const char* textStr = env->GetStringUTFChars(text,JNI_FALSE);
    QString str(textStr);
    QMenu* target = menu->addMenu(str);
    env->ReleaseStringUTFChars(text,textStr);
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    addMenu
 * Signature: (JJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenu_addMenu__JJLjava_lang_String_2
(JNIEnv * env, jobject self, jlong pointer, jlong iconPointer, jstring text) {

    QMenu* menu = (QMenu*)pointer;
    const char* textStr = env->GetStringUTFChars(text,JNI_FALSE);
    QIcon * icon = (QIcon*)iconPointer;
    QString str(textStr);

    QMenu * subMenu = menu->addMenu(*icon,str);
    env->ReleaseStringUTFChars(text,textStr);
    return (jlong)(intptr_t)subMenu;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    addSeparator
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenu_addSeparator
(JNIEnv * env, jobject self, jlong pointer) {

    QMenu* menu = (QMenu*)pointer;
    QAction* action = menu->addSeparator();
    return (jlong)(intptr_t)action;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    addSection
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenu_addSection
  (JNIEnv * env, jobject self, jlong pointer, jstring text) {

    QMenu* menu = (QMenu*)pointer;
    const char* textVal = env->GetStringUTFChars(text,JNI_FALSE);
    QString str(textVal);
    QAction* result = menu->addSection(str);
    env->ReleaseStringUTFChars(text,textVal);
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    insertMenu
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenu_insertMenu
(JNIEnv * env, jobject self, jlong pointer, jlong beforeAction, jlong menuPointer) {

    QAction* before = (QAction*)beforeAction;
    QMenu* menu = (QMenu*)pointer;
    QMenu* target = (QMenu*)menuPointer;

    QAction * result = menu->insertMenu(before,target);
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    insertSeparator
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenu_insertSeparator
(JNIEnv * env, jobject self, jlong pointer, jlong beforeAction) {

    QAction* action = (QAction*)beforeAction;
    QMenu* menu = (QMenu*)pointer;
    QAction* result = menu->insertSeparator(action);
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    insertSection
 * Signature: (JJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenu_insertSection
(JNIEnv * env, jobject self, jlong pointer, jlong beforeAction, jstring title) {

    QAction* before = (QAction*)beforeAction;
    QMenu* menu = (QMenu*)pointer;

    const char* str = env->GetStringUTFChars(title,JNI_FALSE);
    QString strVal(str);
    QAction* action = menu->insertSection(before,strVal);
    env->ReleaseStringUTFChars(title,str);
    return (jlong)(intptr_t)action;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    setTearOffEnabled
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenu_setTearOffEnabled
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QMenu* menu = (QMenu*)pointer;
    menu->setTearOffEnabled(val);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    isTearOffEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SMenu_isTearOffEnabled
(JNIEnv * env, jobject self, jlong pointer) {

    QMenu* menu = (QMenu*)pointer;
    return menu->isTearOffEnabled() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    isTearOffMenuVisible
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SMenu_isTearOffMenuVisible
(JNIEnv * env, jobject self, jlong pointer) {

    QMenu* menu = (QMenu*)pointer;
    return menu->isTearOffMenuVisible() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    showTearOffMenu
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenu_showTearOffMenu
(JNIEnv * env, jobject self, jlong pointer, jint x, jint y) {

    QMenu* menu = (QMenu*)pointer;
    menu->showTearOffMenu(QPoint(x,y));
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    hideTearOffMenu
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenu_hideTearOffMenu
(JNIEnv * env, jobject self, jlong pointer) {

    QMenu* menu = (QMenu*)pointer;
    menu->hideTearOffMenu();

}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    setDefaultAction
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenu_setDefaultAction
(JNIEnv * env, jobject self, jlong pointer, jlong action) {

    QAction* defaultAction = (QAction*)action;
    QMenu* menu = (QMenu*)pointer;
    menu->setDefaultAction(defaultAction);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    setActiveAction
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenu_setActiveAction
(JNIEnv * env, jobject self, jlong pointer, jlong action) {

    QAction* actAction = (QAction*)action;
    QMenu* menu = (QMenu*)pointer;
    menu->setActiveAction(actAction);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    separatorsCollapsible
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SMenu_separatorsCollapsible
(JNIEnv * env, jobject self, jlong pointer) {

    QMenu* menu = (QMenu*)pointer;
    return menu->separatorsCollapsible() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    setSeparatorsCollapsible
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenu_setSeparatorsCollapsible
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QMenu* menu = (QMenu*)pointer;
    menu->setSeparatorsCollapsible(val);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    toolTipsVisible
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SMenu_toolTipsVisible
(JNIEnv * env, jobject self, jlong pointer) {

    QMenu* menu = (QMenu*)pointer;
    return menu->toolTipsVisible() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    setToolTipsVisible
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenu_setToolTipsVisible
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QMenu* menu = (QMenu*)pointer;
    menu->setToolTipsVisible(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    title
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SMenu_title
(JNIEnv * env, jobject self, jlong pointer) {

    QMenu* menu = (QMenu*)pointer;
    std::string str = menu->title().toStdString();
    const char* text = str.c_str();
    return asJavaString(env,text);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    setTitle
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenu_setTitle
(JNIEnv * env, jobject self, jlong pointer, jstring title) {

    QMenu* menu = (QMenu*)pointer;
    const char* text = env->GetStringUTFChars(title,JNI_FALSE);
    QString strTitle(text);
    menu->setTitle(strTitle);
    env->ReleaseStringUTFChars(title,text);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    isEmpty
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SMenu_isEmpty
(JNIEnv * env, jobject self, jlong pointer) {

    QMenu* menu = (QMenu*)pointer;
    return menu->isEmpty() ? JNI_TRUE : JNI_FALSE;

}

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    clear
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenu_clear
(JNIEnv * env, jobject self, jlong pointer) {

    QMenu* menu = (QMenu*)pointer;
    menu->clear();

}
