#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_SRegularExpressionMatch.h"


/*
 * Class:     org_swdc_qt_internal_text_SRegularExpressionMatch
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_SRegularExpressionMatch_create
(JNIEnv *, jobject) {

    QRegularExpressionMatch  * match = new QRegularExpressionMatch();
    return _P(match);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpressionMatch
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_SRegularExpressionMatch_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QRegularExpressionMatch * match = (QRegularExpressionMatch*)pointer;
    delete match;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpressionMatch
 * Method:    regularExpression
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_SRegularExpressionMatch_regularExpression
(JNIEnv * env, jobject self, jlong pointer) {

    QRegularExpressionMatch * match = (QRegularExpressionMatch*)pointer;
    QRegularExpression * exp = new QRegularExpression();
    *exp = match->regularExpression();
    return _P(exp);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpressionMatch
 * Method:    matchType
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_SRegularExpressionMatch_matchType
(JNIEnv * env, jobject self, jlong pointer) {

    QRegularExpressionMatch * match = (QRegularExpressionMatch*)pointer;
    QRegularExpression::MatchType type = match->matchType();
    return int(type);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpressionMatch
 * Method:    hasMatch
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_SRegularExpressionMatch_hasMatch
(JNIEnv * env, jobject self, jlong pointer) {

    QRegularExpressionMatch * match = (QRegularExpressionMatch*)pointer;
    return match->hasMatch() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpressionMatch
 * Method:    hasPartialMatch
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_SRegularExpressionMatch_hasPartialMatch
(JNIEnv * env, jobject self, jlong pointer) {

    QRegularExpressionMatch * match = (QRegularExpressionMatch*)pointer;
    return match->hasPartialMatch() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpressionMatch
 * Method:    isValid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_SRegularExpressionMatch_isValid
(JNIEnv * env, jobject self, jlong pointer) {

    QRegularExpressionMatch * match = (QRegularExpressionMatch*)pointer;
    return match->isValid() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpressionMatch
 * Method:    lastCapturedIndex
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_SRegularExpressionMatch_lastCapturedIndex
(JNIEnv * env, jobject self, jlong pointer) {

    QRegularExpressionMatch * match = (QRegularExpressionMatch*)pointer;
    return match->lastCapturedIndex();
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpressionMatch
 * Method:    captured
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_SRegularExpressionMatch_captured__JI
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QRegularExpressionMatch * match = (QRegularExpressionMatch*)pointer;
    std::string str = match->captured(val).toStdString();
    const char * cStr = str.c_str();
    return asJavaString(env,cStr);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpressionMatch
 * Method:    captured
 * Signature: (JLjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_SRegularExpressionMatch_captured__JLjava_lang_String_2
(JNIEnv * env, jobject self, jlong pointer, jstring name) {

    const char* cName = env->GetStringUTFChars(name,0);
    QRegularExpressionMatch * match = (QRegularExpressionMatch*)pointer;
    std::string str = match->captured(QString(cName)).toStdString();
    env->ReleaseStringUTFChars(name,cName);
    const char* val = str.c_str();
    return asJavaString(env,val);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpressionMatch
 * Method:    capturedTexts
 * Signature: (J)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_org_swdc_qt_internal_text_SRegularExpressionMatch_capturedTexts
(JNIEnv * env, jobject self, jlong pointer) {

    QRegularExpressionMatch * match = (QRegularExpressionMatch*)pointer;
    QStringList list = match->capturedTexts();

    return asJavaStringArray(env,list);
}


/*
 * Class:     org_swdc_qt_internal_text_SRegularExpressionMatch
 * Method:    capturedStart
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_SRegularExpressionMatch_capturedStart__JI
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QRegularExpressionMatch * match = (QRegularExpressionMatch*)pointer;
    return match->capturedStart(val);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpressionMatch
 * Method:    capturedLength
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_SRegularExpressionMatch_capturedLength__JI
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QRegularExpressionMatch * match = (QRegularExpressionMatch*)pointer;
    return match->capturedLength(val);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpressionMatch
 * Method:    capturedEnd
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_SRegularExpressionMatch_capturedEnd__JI
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QRegularExpressionMatch * match = (QRegularExpressionMatch*)pointer;
    return match->capturedEnd(val);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpressionMatch
 * Method:    capturedStart
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_SRegularExpressionMatch_capturedStart__JLjava_lang_String_2
(JNIEnv * env, jobject self, jlong pointer, jstring name) {

    const char * cName = env->GetStringUTFChars(name,0);
    QRegularExpressionMatch * match = (QRegularExpressionMatch*)pointer;
    int val = match->capturedStart(QString(cName));
    env->ReleaseStringUTFChars(name,cName);
    return val;
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpressionMatch
 * Method:    capturedLength
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_SRegularExpressionMatch_capturedLength__JLjava_lang_String_2
(JNIEnv * env, jobject self, jlong pointer, jstring name) {

    const char * cName = env->GetStringUTFChars(name,0);
    QRegularExpressionMatch * match = (QRegularExpressionMatch*)pointer;
    int val = match->capturedLength(QString(cName));
    env->ReleaseStringUTFChars(name,cName);
    return val;
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpressionMatch
 * Method:    capturedEnd
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_SRegularExpressionMatch_capturedEnd__JLjava_lang_String_2
(JNIEnv * env, jobject self, jlong pointer, jstring name){

    const char * cName = env->GetStringUTFChars(name,0);
    QRegularExpressionMatch * match = (QRegularExpressionMatch*)pointer;
    int val = match->capturedEnd(QString(cName));
    env->ReleaseStringUTFChars(name,cName);
    return val;
}
