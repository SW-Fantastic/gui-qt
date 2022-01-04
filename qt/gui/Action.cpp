#include "gui_global.h"
#include "java/org_swdc_qt_internal_widgets_SAction.h"

const char* ActionClassType = "org/swdc/qt/internal/widgets/SAction";

void init(QAction* action,jobject self,JNIEnv* env) {

    self = env->NewGlobalRef(self);

    action->connect(action,&QAction::triggered,[self](bool isChecked) -> void {
        asyncExec([=]()->void{

            JNIEnv* env = getContext();
            jclass type = env->FindClass(ActionClassType);
            jmethodID method = env->GetMethodID(type,"onTrigger","(Z)V");
            env->CallVoidMethod(self,method,isChecked ? JNI_TRUE : JNI_FALSE);

        });
    });

    action->connect(action,&QAction::toggled,[self](bool isChecked)->void{
        asyncExec([=]()->void {

            JNIEnv* env = getContext();

            jclass type = env->FindClass(ActionClassType);
            jmethodID method = env->GetMethodID(type,"onToggled","(Z)V");
            env->CallVoidMethod(self,method,isChecked ? JNI_TRUE : JNI_FALSE);

            releaseContext();

        });
    });

    action->connect(action,&QAction::hovered,[self]()->void{
        asyncExec([=]() -> void{
            JNIEnv* env = getContext();

            jclass type = env->FindClass(ActionClassType);
            jmethodID method = env->GetMethodID(type,"onHovered","()V");
            env->CallVoidMethod(self,method);

            releaseContext();
        });
    });

    action->connect(action,&QAction::changed,[self]()->void {
        asyncExec([=]() -> void{
            JNIEnv* env = getContext();

            jclass type = env->FindClass(ActionClassType);
            jmethodID method = env->GetMethodID(type,"onChanged","()V");
            env->CallVoidMethod(self,method);

            releaseContext();
        });
    });

    action->connect(action,&QAction::destroyed,[self]()->void {

        JNIEnv* env = getContext();
        cleanJavaPointer(env,self);
        env->DeleteGlobalRef(self);
        releaseContext();

    });
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SAction_create
(JNIEnv * env, jobject self) {

    QAction *action = new QAction();
    init(action,self,env);
    return (jlong)(intptr_t)action;
}


/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    wrap
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAction_wrap
(JNIEnv * env, jobject self, jlong pointer) {

    QAction* action = (QAction*)pointer;
    init(action,self,env);

}


/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    setText
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAction_setText
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    QAction* action = (QAction*)pointer;
    const char* str = env->GetStringUTFChars(text,JNI_FALSE);
    QString textStr(str);
    action->setText(textStr);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    text
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SAction_text
(JNIEnv * env, jobject self, jlong pointer) {

    QAction* action = (QAction*)pointer;
    std::string str = action->text().toStdString();
    const char* text = str.c_str();
    return asJavaString(env,text);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    setIconText
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAction_setIconText
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    QAction* action = (QAction*)pointer;
    const char* str = env->GetStringUTFChars(text,JNI_FALSE);
    QString strText(str);
    action->setIconText(strText);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    iconText
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SAction_iconText
(JNIEnv * env, jobject self, jlong pointer) {

    QAction * action = (QAction*)pointer;
    std::string strText = action->iconText().toStdString();
    const char* str = strText.c_str();
    return asJavaString(env,str);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    setToolTip
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAction_setToolTip
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    QAction * action = (QAction*)pointer;
    const char* textStr = env->GetStringUTFChars(text,JNI_FALSE);
    QString str(textStr);
    action->setIconText(str);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    toolTip
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SAction_toolTip
(JNIEnv * env, jobject self, jlong pointer) {

    QAction* action = (QAction*)pointer;
    std::string strVal = action->toolTip().toStdString();
    const char* text = strVal.c_str();
    return asJavaString(env,text);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    setStatusTip
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAction_setStatusTip
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    QAction* action = (QAction*)pointer;
    const char* textVal = env->GetStringUTFChars(text,JNI_FALSE);
    QString str(textVal);
    action->setStatusTip(str);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    statusTip
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SAction_statusTip
(JNIEnv * env, jobject self, jlong pointer) {

    QAction * action = (QAction*)pointer;
    std::string str = action->statusTip().toStdString();
    const char* val = str.c_str();
    return asJavaString(env,val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    setWhatsThis
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAction_setWhatsThis
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    QAction * action = (QAction*)pointer;
    const char* str = env->GetStringUTFChars(text,JNI_FALSE);
    QString textStr(str);
    action->setWhatsThis(textStr);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    whatsThis
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SAction_whatsThis
(JNIEnv * env, jobject self, jlong pointer) {

    QAction * action = (QAction*)pointer;
    std::string str = action->whatsThis().toStdString();
    const char* text = str.c_str();
    return asJavaString(env,text);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    setPriority
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAction_setPriority
(JNIEnv * env, jobject self, jlong pointer, jint priority) {

    QAction::Priority qPriority = QAction::Priority(priority);
    QAction* action = (QAction*)pointer;
    action->setPriority(qPriority);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    priority
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SAction_priority
(JNIEnv * env, jobject self, jlong pointer) {

    QAction* action = (QAction*)pointer;
    QAction::Priority priority = action->priority();
    return int(priority);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    setSeparator
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAction_setSeparator
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QAction* action = (QAction*)pointer;
    action->setSeparator(val);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    isSeparator
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAction_isSeparator
(JNIEnv * env, jobject self, jlong pointer) {

    QAction* action = (QAction*)pointer;
    return action->isSeparator() ? JNI_TRUE : JNI_FALSE;

}

/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    setAutoRepeat
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAction_setAutoRepeat
(JNIEnv * env, jobject self, jlong pointer, jboolean repeat) {

    QAction * action = (QAction*)pointer;
    action->setAutoRepeat(repeat);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    autoRepeat
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAction_autoRepeat
(JNIEnv * env, jobject self, jlong pointer) {

    QAction* action = (QAction*)pointer;
    return action->autoRepeat() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    setShortcut
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAction_setShortcut__JLjava_lang_String_2
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    QAction * action = (QAction*)pointer;
    const char* str = env->GetStringUTFChars(text,JNI_FALSE);
    QString textVal(str);
    action->setShortcut(QKeySequence(textVal));

}

/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    setShortcut
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAction_setShortcut__JI
(JNIEnv * env, jobject self, jlong pointer, jlong val){

    QAction * action = (QAction*)pointer;
    action->setShortcut(QKeySequence(val));

}


/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    setStandardShortcut
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAction_setStandardShortcut
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QAction * action = (QAction*)pointer;
    QKeySequence::StandardKey key = QKeySequence::StandardKey(val);

    action->setShortcut(key);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    shortcut
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SAction_shortcut
(JNIEnv * env, jobject self, jlong pointer) {

    QAction* action = (QAction*)pointer;
    QKeySequence seq = action->shortcut();
    if(seq == NULL) {
        return asJavaString(env,"");
    }
    QString val = seq.toString();
    std::string text = val.toStdString();
    const char* textVal = text.c_str();

    return asJavaString(env,textVal);
}


/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    setCheckable
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAction_setCheckable
(JNIEnv * env, jobject self, jlong pointer, jboolean checkable) {

    QAction* action = (QAction*)pointer;
    action->setCheckable(checkable);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    isCheckable
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAction_isCheckable
(JNIEnv * env, jobject self, jlong pointer) {

    QAction* action = (QAction*)pointer;
    return action->isCheckable() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    isChecked
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAction_isChecked
(JNIEnv * env, jobject self, jlong pointer) {

    QAction* action = (QAction*)pointer;
    return action->isChecked() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    isEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAction_isEnabled
(JNIEnv * env, jobject self, jlong pointer) {

    QAction* action = (QAction*)pointer;
    return action->isEnabled() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    isVisible
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAction_isVisible
(JNIEnv * env, jobject self, jlong pointer) {

    QAction* action = (QAction*)pointer;
    return action->isVisible() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    setMenuRole
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAction_setMenuRole
(JNIEnv * env, jobject self, jlong pointer,jint val) {

    QAction::MenuRole role = QAction::MenuRole(val);
    QAction* action = (QAction*)pointer;
    action->setMenuRole(role);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    menuRole
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SAction_menuRole
(JNIEnv * env, jobject self, jlong pointer) {

    QAction* action = (QAction*)pointer;
    QAction::MenuRole role = action->menuRole();

    return int(role);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    setIconVisibleInMenu
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAction_setIconVisibleInMenu
(JNIEnv * env, jobject self, jlong pointer, jboolean visible) {

    QAction* action = (QAction*)pointer;
    action->setIconVisibleInMenu(visible);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    isIconVisibleInMenu
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAction_isIconVisibleInMenu
(JNIEnv * env, jobject self, jlong pointer) {

    QAction* action = (QAction*)pointer;
    return action->isIconVisibleInMenu() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    setShortcutVisibleInContextMenu
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SAction_setShortcutVisibleInContextMenu
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QAction* action = (QAction*)pointer;
    action->setShortcutVisibleInContextMenu(val);

}

/*
 * Class:     org_swdc_qt_internal_widgets_SAction
 * Method:    isShortcutVisibleInContextMenu
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SAction_isShortcutVisibleInContextMenu
(JNIEnv * env, jobject self, jlong pointer) {

    QAction* action = (QAction*)pointer;
    return action->isShortcutVisibleInContextMenu() ? JNI_TRUE : JNI_FALSE;
}
