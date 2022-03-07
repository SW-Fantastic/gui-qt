#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_STextListFormat.h"

/*
 * Class:     org_swdc_qt_internal_text_STextListFormat
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextListFormat_create
(JNIEnv *, jobject) {

    QTextListFormat * format = new QTextListFormat();
    return (jlong)(intptr_t)format;
}

/*
 * Class:     org_swdc_qt_internal_text_STextListFormat
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextListFormat_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QTextListFormat * format = (QTextListFormat*)pointer;
    delete format;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_text_STextListFormat
 * Method:    setStyle
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextListFormat_setStyle
  (JNIEnv * env, jobject self, jlong pointer, jint styleVal) {

    QTextListFormat::Style style = QTextListFormat::Style(styleVal);
    QTextListFormat * format = (QTextListFormat*)pointer;
    format->setStyle(style);
}

/*
 * Class:     org_swdc_qt_internal_text_STextListFormat
 * Method:    style
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextListFormat_style
(JNIEnv * env, jobject self, jlong pointer) {

    QTextListFormat * format = (QTextListFormat*)pointer;
    return int(format->style());
}

/*
 * Class:     org_swdc_qt_internal_text_STextListFormat
 * Method:    setIndent
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextListFormat_setIndent
(JNIEnv * env, jobject self, jlong pointer, jint indent) {

    QTextListFormat * format = (QTextListFormat*)pointer;
    format->setIndent(indent);
}

/*
 * Class:     org_swdc_qt_internal_text_STextListFormat
 * Method:    indent
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextListFormat_indent
(JNIEnv * env, jobject self, jlong pointer) {

    QTextListFormat * format = (QTextListFormat*)pointer;
    return format->indent();
}

/*
 * Class:     org_swdc_qt_internal_text_STextListFormat
 * Method:    setNumberPrefix
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextListFormat_setNumberPrefix
(JNIEnv * env, jobject self, jlong pointer, jstring val) {

    const char * cStr = env->GetStringUTFChars(val,0);
    QTextListFormat * format = (QTextListFormat*)pointer;
    format->setNumberPrefix(QString(cStr));
    env->ReleaseStringUTFChars(val,cStr);
}

/*
 * Class:     org_swdc_qt_internal_text_STextListFormat
 * Method:    numberPrefix
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_STextListFormat_numberPrefix
(JNIEnv * env, jobject self, jlong pointer) {

    QTextListFormat * format = (QTextListFormat*)pointer;
    std::string str = format->numberPrefix().toStdString();
    const char * val = str.c_str();
    return asJavaString(env,val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextListFormat
 * Method:    setNumberSuffix
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextListFormat_setNumberSuffix
(JNIEnv * env, jobject self, jlong pointer, jstring subFix) {

    QTextListFormat * format = (QTextListFormat*)pointer;
    const char * subfixVal = env->GetStringUTFChars(subFix,0);
    format->setNumberSuffix(QString(subfixVal));
}

/*
 * Class:     org_swdc_qt_internal_text_STextListFormat
 * Method:    numberSuffix
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_STextListFormat_numberSuffix
(JNIEnv * env, jobject self, jlong pointer) {

    QTextListFormat * format = (QTextListFormat*)pointer;
    std::string stdVal = format->numberSuffix().toStdString();
    return asJavaString(env,stdVal.c_str());
}
