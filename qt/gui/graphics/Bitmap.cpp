#include"gui_global.h"
#include"java/graphics/org_swdc_qt_internal_graphics_SBitmap.h"


/*
 * Class:     org_swdc_qt_internal_graphics_SBitmap
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SBitmap_create__J
(JNIEnv * env, jobject self, jlong pointer) {

    QPixmap * pixmap = (QPixmap*)pointer;
    QBitmap * bitmap = new QBitmap(*pixmap);

    return (jlong)(intptr_t)bitmap;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SBitmap
 * Method:    create
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SBitmap_create__II
(JNIEnv * env, jobject self, jint width, jint height) {

    QBitmap * bitmap = new QBitmap(width,height);

    return (jlong)(intptr_t)bitmap;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SBitmap
 * Method:    create
 * Signature: (Ljava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SBitmap_create__Ljava_lang_String_2Ljava_lang_String_2
(JNIEnv * env, jobject self, jstring path, jstring format) {

    const char* cFormat = env->GetStringUTFChars(format,JNI_FALSE);
    const char* cPath = env->GetStringUTFChars(path,JNI_FALSE);

    QString qPath(cPath);
    QBitmap * bitmap = new QBitmap(qPath,cFormat);
    return (jlong)(intptr_t)bitmap;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SBitmap
 * Method:    swap
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SBitmap_swap
(JNIEnv * env, jobject self, jlong pointer, jlong bitmapPointer) {

    QBitmap * another = (QBitmap*)bitmapPointer;
    QBitmap * bitmap = (QBitmap*)pointer;

    bitmap->swap(*another);
}

/*
 * Class:     org_swdc_qt_internal_graphics_SBitmap
 * Method:    clear
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SBitmap_clear
(JNIEnv * env, jobject self, jlong pointer) {

    QBitmap * bitmap = (QBitmap*)pointer;
    bitmap->clear();
}

/*
 * Class:     org_swdc_qt_internal_graphics_SBitmap
 * Method:    transformed
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_graphics_SBitmap_transformed
(JNIEnv * env, jobject self, jlong pointer, jlong tansformPointer) {

    QTransform * transform = (QTransform*)tansformPointer;
    QBitmap * bitmap = (QBitmap*)pointer;
    QBitmap target = bitmap->transformed(*transform);

    QBitmap * result = new QBitmap(target);
    return (jlong)(intptr_t)result;
}

/*
 * Class:     org_swdc_qt_internal_graphics_SBitmap
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_graphics_SBitmap_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QBitmap * bitmap = (QBitmap*)pointer;
    bitmap->clear();
    delete bitmap;
    cleanJavaPointer(env,self);
}
