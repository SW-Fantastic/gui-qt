#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_STextLength.h"

/*
 * Class:     org_swdc_qt_internal_text_STextLength
 * Method:    create
 * Signature: (ID)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextLength_create
(JNIEnv *, jobject, jint type, jdouble val) {

    QTextLength::Type typeVal = QTextLength::Type(type);
    QTextLength * len = new QTextLength(typeVal,val);
    return _P(len);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLength
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLength_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLength * len = (QTextLength*)pointer;
    delete len;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLength
 * Method:    type
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextLength_type
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLength * len = (QTextLength*)pointer;
    return int(len->type());
}

/*
 * Class:     org_swdc_qt_internal_text_STextLength
 * Method:    value
 * Signature: (JD)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextLength_value
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextLength * len = (QTextLength*)pointer;
    return len->value(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLength
 * Method:    rawValue
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextLength_rawValue
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLength * len = (QTextLength*)pointer;
    return len->rawValue();
}
