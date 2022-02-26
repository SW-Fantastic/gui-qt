#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_STextImageFormat.h"

/*
 * Class:     org_swdc_qt_internal_text_STextImageFormat
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextImageFormat_create
(JNIEnv *, jobject) {

    QTextImageFormat * imageFormat = new QTextImageFormat();
    return (jlong)(intptr_t)imageFormat;
}

/*
 * Class:     org_swdc_qt_internal_text_STextImageFormat
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextImageFormat_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QTextImageFormat * format = (QTextImageFormat*)pointer;
    delete format;
}

/*
 * Class:     org_swdc_qt_internal_text_STextImageFormat
 * Method:    setName
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextImageFormat_setName
(JNIEnv * env, jobject self, jlong pointer, jstring name){

    const char* cText = env->GetStringUTFChars(name,0);
    QTextImageFormat * format = (QTextImageFormat*)pointer;
    format->setName(QString(cText));
    env->ReleaseStringUTFChars(name,cText);
}

/*
 * Class:     org_swdc_qt_internal_text_STextImageFormat
 * Method:    name
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_STextImageFormat_name
(JNIEnv * env, jobject self, jlong pointer) {

    QTextImageFormat * format = (QTextImageFormat*)pointer;
    std::string str = format->name().toStdString();
    const char * val = str.c_str();
    return asJavaString(env,val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextImageFormat
 * Method:    setWidth
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextImageFormat_setWidth
(JNIEnv * env, jobject self, jlong pointer, jdouble width){

    QTextImageFormat * format = (QTextImageFormat*)pointer;
    format->setWidth(width);
}

/*
 * Class:     org_swdc_qt_internal_text_STextImageFormat
 * Method:    width
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextImageFormat_width
(JNIEnv * env, jobject self, jlong pointer) {

    QTextImageFormat * format = (QTextImageFormat*)pointer;
    return format->width();
}

/*
 * Class:     org_swdc_qt_internal_text_STextImageFormat
 * Method:    setHeight
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextImageFormat_setHeight
(JNIEnv * env, jobject self, jlong pointer, jdouble height) {

    QTextImageFormat * format = (QTextImageFormat*)pointer;
    format->setHeight(height);
}

/*
 * Class:     org_swdc_qt_internal_text_STextImageFormat
 * Method:    height
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextImageFormat_height
(JNIEnv * env, jobject self, jlong pointer) {

    QTextImageFormat * format = (QTextImageFormat*)pointer;
    return format->height();
}

/*
 * Class:     org_swdc_qt_internal_text_STextImageFormat
 * Method:    setQuality
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextImageFormat_setQuality
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QTextImageFormat * format = (QTextImageFormat*)pointer;
    format->setQuality(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextImageFormat
 * Method:    quality
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextImageFormat_quality
(JNIEnv * env, jobject self, jlong pointer) {

    QTextImageFormat * format = (QTextImageFormat*)pointer;
    return format->quality();
}
