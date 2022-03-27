#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_STextFragment.h"

/*
 * Class:     org_swdc_qt_internal_text_STextFragment
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextFragment_create__
(JNIEnv *, jobject) {

    QTextFragment * frag = new QTextFragment();
    return _P(frag);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFragment
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextFragment_create__J
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFragment * another = (QTextFragment*)pointer;
    QTextFragment * target = new QTextFragment(*another);
    return _P(target);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFragment
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFragment_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFragment * frag = (QTextFragment*)pointer;
    delete frag;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFragment
 * Method:    position
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextFragment_position
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFragment * frag = (QTextFragment*)pointer;
    return frag->position();
}

/*
 * Class:     org_swdc_qt_internal_text_STextFragment
 * Method:    length
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextFragment_length
(JNIEnv * env, jobject self, jlong pointer){

    QTextFragment * frag = (QTextFragment*)pointer;
    return frag->length();
}

/*
 * Class:     org_swdc_qt_internal_text_STextFragment
 * Method:    contains
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextFragment_contains
(JNIEnv * env, jobject self, jlong pointer, jint pos) {

    QTextFragment * frag = (QTextFragment*)pointer;
    return frag->contains(pos) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFragment
 * Method:    charFormat
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextFragment_charFormat
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFragment * frag = (QTextFragment*)pointer;
    QTextCharFormat * format = new QTextCharFormat();
    *format = frag->charFormat();
    return _P(format);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFragment
 * Method:    charFormatIndex
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextFragment_charFormatIndex
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFragment * frag = (QTextFragment*)pointer;
    return frag->charFormatIndex();
}

/*
 * Class:     org_swdc_qt_internal_text_STextFragment
 * Method:    text
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_STextFragment_text
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFragment * frag = (QTextFragment*)pointer;
    std::string str = frag->text().toStdString();
    const char * cStr = str.c_str();
    return asJavaString(env,cStr);
}
