#include "gui_global.h"
#include "java/graphics/org_swdc_qt_internal_graphics_SIcon.h"

/*
 * Class:     org_swdc_qt_internal_graphics_SIcon
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SIcon_create
(JNIEnv * env, jobject self) {

    QIcon * icon = new QIcon();
    return (jlong)(intptr_t)icon;

}

/*
 * Class:     org_swdc_qt_internal_graphics_SIcon
 * Method:    createWithFile
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SIcon_createWithFile
(JNIEnv * env, jobject self, jstring absPath) {

    const char* filePath = env->GetStringUTFChars(absPath,JNI_FALSE);
    QIcon * icon = new QIcon(filePath);
    return (jlong)(intptr_t)icon;

}

/*
 * Class:     org_swdc_qt_internal_graphics_SIcon
 * Method:    createWithPixmap
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SIcon_createWithPixmap
(JNIEnv * env, jobject self, jlong pixmapPointer) {

    QPixmap * pixmap = (QPixmap*)pixmapPointer;
    QIcon * icon = new QIcon(*pixmap);

    return (jlong)(intptr_t)icon;
}


/*
 * Class:     org_swdc_qt_internal_graphics_SIcon
 * Method:    actualSize
 * Signature: (JJII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SIcon_actualSize
  (JNIEnv * env, jobject self, jlong pointer, jlong sizePointer, jint mode, jint state) {

    QIcon::Mode iconMode = QIcon::Mode(mode);
    QIcon::State iconState = QIcon::State(state);

    QSize * size = (QSize*)sizePointer;
    QIcon * icon = (QIcon*)pointer;

    QSize target = icon->actualSize(*size,iconMode,iconState);
    QSize * result = new QSize(target);

    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SIcon
 * Method:    name
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_graphics_SIcon_name
(JNIEnv * env, jobject self, jlong pointer) {

    QIcon * icon = (QIcon*)pointer;
    std::string str = icon->name().toStdString();

    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_graphics_SIcon
 * Method:    paint
 * Signature: (JJJJII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SIcon_paint__JJJJII
(JNIEnv * env, jobject self, jlong pointer, jlong painterPointer, jlong rect, jlong alignment, jint mode, jint state) {

    QRect * qRect = (QRect*)rect;
    Qt::Alignment align = Qt::Alignment(alignment);
    QPainter * painter = (QPainter*)painterPointer;
    QIcon * icon = (QIcon*)pointer;
    QIcon::Mode iconMode = QIcon::Mode(mode);
    QIcon::State iconState = QIcon::State(state);

    icon->paint(painter,*qRect,align,iconMode,iconState);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SIcon
 * Method:    paint
 * Signature: (JJIIIIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SIcon_paint__JJIIIIIII
(JNIEnv * env, jobject self, jlong pointer, jlong painterPointer, jint x, jint y, jint w, jint h, jlong alignment, jint mode, jint state) {

    QIcon::Mode iconMode = QIcon::Mode(mode);
    QIcon::State iconState = QIcon::State(state);
    Qt::Alignment align = Qt::Alignment(alignment);
    QIcon * icon = (QIcon*)pointer;

    QPainter * painter = (QPainter*)painterPointer;
    icon->paint(painter,x,y,w,h,align,iconMode,iconState);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SIcon
 * Method:    addPixmap
 * Signature: (JJII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SIcon_addPixmap
(JNIEnv * env, jobject self, jlong pointer, jlong pixmapPointer, jint mode, jint state) {

    QIcon * icon = (QIcon*)pointer;
    QPixmap * pixmap = (QPixmap*)pixmapPointer;
    QIcon::Mode iconMode = QIcon::Mode(mode);
    QIcon::State iconState = QIcon::State(state);

    icon->addPixmap(*pixmap,iconMode,iconState);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SIcon
 * Method:    addFile
 * Signature: (JLjava/lang/String;JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SIcon_addFile
(JNIEnv * env, jobject self, jlong pointer, jstring fileName, jlong sizePointer, jint mode, jint state) {

    QSize * size = (QSize*)sizePointer;
    QIcon::Mode iconMode = QIcon::Mode(mode);
    QIcon::State iconState = QIcon::State(state);

    QIcon * icon = (QIcon*)pointer;
    const char* text = env->GetStringUTFChars(fileName,JNI_FALSE);

    icon->addFile(QString(text),*size,iconMode,iconState);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SIcon
 * Method:    setIsMask
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SIcon_setIsMask
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QIcon * icon = (QIcon*)pointer;
    icon->setIsMask(val);

}

/*
 * Class:     org_swdc_qt_internal_graphics_SIcon
 * Method:    isMask
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_graphics_SIcon_isMask
(JNIEnv * env, jobject self, jlong pointer) {

    QIcon * icon = (QIcon*)pointer;
    return icon->isMask() ? JNI_TRUE : JNI_FALSE;
}


/*
 * Class:     org_swdc_qt_internal_graphics_SIcon
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SIcon_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QIcon * icon = (QIcon*)pointer;
    delete icon;
    cleanJavaPointer(env,self);

}
