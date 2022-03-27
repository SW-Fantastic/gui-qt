#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_SRegularExpression.h"


/*
 * Class:     org_swdc_qt_internal_text_SRegularExpression
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_SRegularExpression_create__
(JNIEnv *, jobject) {

    QRegularExpression * exp = new QRegularExpression();
    return _P(exp);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpression
 * Method:    create
 * Signature: (Ljava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_SRegularExpression_create__Ljava_lang_String_2I
  (JNIEnv * env, jobject, jstring patternStr, jint optionVal) {

    const char* pattern = env->GetStringUTFChars(patternStr,0);
    QRegularExpression::PatternOption option = QRegularExpression::PatternOption(optionVal);
    QRegularExpression * exp = new QRegularExpression(QString(pattern),option);

    env->ReleaseStringUTFChars(patternStr,pattern);

    return _P(exp);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpression
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_SRegularExpression_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QRegularExpression * exp = (QRegularExpression*)pointer;
    delete exp;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpression
 * Method:    setPatternOptions
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_SRegularExpression_setPatternOptions
(JNIEnv * env, jobject self, jlong pointer, jint optionVal){

    QRegularExpression::PatternOptions option = QRegularExpression::PatternOptions(optionVal);
    QRegularExpression * exp = (QRegularExpression*)pointer;
    exp->setPatternOptions(option);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpression
 * Method:    pattern
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_SRegularExpression_pattern
(JNIEnv * env, jobject self, jlong pointer) {

    QRegularExpression * exp = (QRegularExpression*)pointer;
    std::string str = exp->pattern().toStdString();

    const char* cStr = str.c_str();
    return asJavaString(env,cStr);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpression
 * Method:    setPattern
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_SRegularExpression_setPattern
(JNIEnv * env, jobject self, jlong pointer, jstring patternVal) {

    const char * pattern = env->GetStringUTFChars(patternVal,0);
    QRegularExpression * exp = (QRegularExpression*)pointer;
    exp->setPattern(QString(pattern));
    env->ReleaseStringUTFChars(patternVal,pattern);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpression
 * Method:    isValid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_SRegularExpression_isValid
(JNIEnv * env, jobject self, jlong pointer) {

    QRegularExpression * exp = (QRegularExpression*)pointer;
    return exp->isValid() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpression
 * Method:    patternErrorOffset
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_SRegularExpression_patternErrorOffset
(JNIEnv * env, jobject self, jlong pointer) {

    QRegularExpression * exp = (QRegularExpression*)pointer;
    return exp->patternErrorOffset();
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpression
 * Method:    errorString
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_SRegularExpression_errorString
(JNIEnv * env, jobject self, jlong pointer) {

    QRegularExpression * exp = (QRegularExpression*)pointer;
    std::string str = exp->errorString().toStdString();
    const char * cStr = str.c_str();
    return asJavaString(env,cStr);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpression
 * Method:    captureCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_SRegularExpression_captureCount
(JNIEnv * env, jobject self, jlong pointer) {

    QRegularExpression * exp = (QRegularExpression*)pointer;
    return exp->captureCount();
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpression
 * Method:    namedCaptureGroups
 * Signature: (J)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_org_swdc_qt_internal_text_SRegularExpression_namedCaptureGroups
(JNIEnv * env, jobject self, jlong pointer) {

    QRegularExpression * exp = (QRegularExpression*)pointer;
    QStringList names = exp->namedCaptureGroups();
    return asJavaStringArray(env,names);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpression
 * Method:    match
 * Signature: (JLjava/lang/String;III)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_SRegularExpression_match
(JNIEnv * env, jobject self, jlong pointer, jstring subjectVal, jint offset, jint matchType, jint matchOptions) {

    QRegularExpression * exp = (QRegularExpression*)pointer;
    const char * str = env->GetStringUTFChars(subjectVal,0);

    QRegularExpression::MatchOptions matchOption = QRegularExpression::MatchOptions(matchOptions);
    QRegularExpression::MatchType type = QRegularExpression::MatchType(matchType);

    QRegularExpressionMatch * match = new QRegularExpressionMatch();
    *match = exp->match(QString(str),offset,type,matchOption);

    env->ReleaseStringUTFChars(subjectVal,str);
    return _P(match);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpression
 * Method:    globalMatch
 * Signature: (JLjava/lang/String;III)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_SRegularExpression_globalMatch
(JNIEnv * env, jobject self, jlong pointer, jstring subjectVal, jint offsetVal, jint typeVal, jint optionVal) {

    QRegularExpression * exp = (QRegularExpression*)pointer;
    const char * str = env->GetStringUTFChars(subjectVal,0);

    QRegularExpression::MatchOptions matchOption = QRegularExpression::MatchOptions(optionVal);
    QRegularExpression::MatchType type = QRegularExpression::MatchType(typeVal);

    QRegularExpressionMatchIterator* iter = new QRegularExpressionMatchIterator();
    *iter = exp->globalMatch(QString(str),offsetVal,type,matchOption);

    env->ReleaseStringUTFChars(subjectVal,str);

    return _P(iter);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpression
 * Method:    optimize
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_SRegularExpression_optimize
(JNIEnv * env, jobject self, jlong pointer) {

    QRegularExpression * exp = (QRegularExpression*)pointer;
    exp->optimize();
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpression
 * Method:    escape
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_SRegularExpression_escape
(JNIEnv * env, jclass, jstring val) {

    const char* str = env->GetStringUTFChars(val,0);
    std::string result = QRegularExpression::escape(QString(str)).toStdString();
    env->ReleaseStringUTFChars(val,str);
    return asJavaString(env,result.c_str());
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpression
 * Method:    wildcardToRegularExpression
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_SRegularExpression_wildcardToRegularExpression
(JNIEnv * env, jclass, jstring val) {

    const char* str = env->GetStringUTFChars(val,0);
    std::string result = QRegularExpression::wildcardToRegularExpression(QString(str)).toStdString();
    env->ReleaseStringUTFChars(val,str);
    return asJavaString(env,result.c_str());
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpression
 * Method:    anchoredPattern
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_SRegularExpression_anchoredPattern
(JNIEnv * env, jclass, jstring val) {

    const char* str = env->GetStringUTFChars(val,0);
    std::string result = QRegularExpression::anchoredPattern(QString(str)).toStdString();
    env->ReleaseStringUTFChars(val,str);
    return asJavaString(env,result.c_str());
}
