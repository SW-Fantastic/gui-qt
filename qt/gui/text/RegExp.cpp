#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_SRegExp.h"


/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_SRegExp_create__
(JNIEnv *, jobject) {

    QRegExp * regexp = new QRegExp();
    return _P(regexp);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_SRegExp_create__J
(JNIEnv * env, jobject self, jlong anotherPointer) {

    QRegExp * another = (QRegExp*)anotherPointer;
    QRegExp * regexp = new QRegExp(*another);
    return _P(regexp);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    create
 * Signature: (Ljava/lang/String;II)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_SRegExp_create__Ljava_lang_String_2II
(JNIEnv * env, jobject self, jstring pattern, jint caseFlag, jint syntax) {

    Qt::CaseSensitivity caseSen = Qt::CaseSensitivity(caseFlag);
    QRegExp::PatternSyntax patternSyntax = QRegExp::PatternSyntax(syntax);

    const char * str = env->GetStringUTFChars(pattern,0);
    QRegExp * regexp = new QRegExp(QString(str),caseSen,patternSyntax);
    env->ReleaseStringUTFChars(pattern,str);
    return _P(regexp);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_SRegExp_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QRegExp * regexp = (QRegExp*)pointer;
    delete regexp;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    isEmpty
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_SRegExp_isEmpty
(JNIEnv * env, jobject self, jlong pointer) {

    QRegExp * regexp = (QRegExp*)pointer;
    return regexp->isEmpty() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    isValid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_SRegExp_isValid
(JNIEnv * env, jobject self, jlong pointer) {

    QRegExp * regexp = (QRegExp*)pointer;
    return regexp->isValid() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    pattern
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_SRegExp_pattern
(JNIEnv * env, jobject self, jlong pointer) {

    QRegExp * regexp = (QRegExp*)pointer;
    std::string str = regexp->pattern().toStdString();
    const char * cStr = str.c_str();
    return asJavaString(env,cStr);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    setPattern
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_SRegExp_setPattern
(JNIEnv * env, jobject self, jlong pointer, jstring pattern) {

    QRegExp * regexp = (QRegExp*)pointer;
    const char * str = env->GetStringUTFChars(pattern,0);
    regexp->setPattern(QString(str));
    env->ReleaseStringUTFChars(pattern,str);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    caseSensitivity
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_SRegExp_caseSensitivity
(JNIEnv * env, jobject self, jlong pointer) {

    QRegExp * regexp = (QRegExp*)pointer;
    Qt::CaseSensitivity caseVal = regexp->caseSensitivity();
    return int(caseVal);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    setCaseSensitivity
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_SRegExp_setCaseSensitivity
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QRegExp * regexp = (QRegExp*)pointer;
    Qt::CaseSensitivity caseVal = Qt::CaseSensitivity(val);
    regexp->setCaseSensitivity(caseVal);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    patternSyntax
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_SRegExp_patternSyntax
(JNIEnv * env, jobject self, jlong pointer) {

    QRegExp * regexp = (QRegExp*)pointer;
    QRegExp::PatternSyntax syntax = regexp->patternSyntax();
    return int(syntax);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    setPatternSyntax
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_SRegExp_setPatternSyntax
(JNIEnv * env, jobject self, jlong pointer, jint syntaxVal) {

    QRegExp * regexp = (QRegExp*)pointer;
    QRegExp::PatternSyntax syntax = QRegExp::PatternSyntax(syntaxVal);
    regexp->setPatternSyntax(syntax);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    isMinimal
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_SRegExp_isMinimal
(JNIEnv * env, jobject self, jlong pointer) {

    QRegExp * regexp = (QRegExp*)pointer;
    return regexp->isMinimal() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    setMinimal
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_SRegExp_setMinimal
(JNIEnv * env, jobject self, jlong pointer, jboolean minVal) {

    QRegExp * regexp = (QRegExp*)pointer;
    regexp->setMinimal(minVal);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    exactMatch
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_SRegExp_exactMatch
(JNIEnv * env, jobject self, jlong pointer, jstring str) {

    const char * cStr = env->GetStringUTFChars(str,0);
    QRegExp * regexp = (QRegExp*)pointer;
    bool result = regexp->exactMatch(QString(cStr));
    env->ReleaseStringUTFChars(str,cStr);
    return result ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    indexIn
 * Signature: (JLjava/lang/String;II)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_SRegExp_indexIn
(JNIEnv * env, jobject self, jlong pointer, jstring str, jint offset, jint caretMode) {

    QRegExp * regexp = (QRegExp*)pointer;
    QRegExp::CaretMode caret = QRegExp::CaretMode(caretMode);
    const char * cStr = env->GetStringUTFChars(str,0);
    int val = regexp->indexIn(QString(cStr),offset,caret);
    env->ReleaseStringUTFChars(str,cStr);
    return val;
}

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    lastIndexIn
 * Signature: (JLjava/lang/String;II)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_SRegExp_lastIndexIn
(JNIEnv * env, jobject self, jlong pointer, jstring str, jint offset, jint caretMode) {

    QRegExp * regexp = (QRegExp*)pointer;
    QRegExp::CaretMode caret = QRegExp::CaretMode(caretMode);
    const char * cStr = env->GetStringUTFChars(str,0);
    int val = regexp->lastIndexIn(QString(cStr),offset,caret);
    env->ReleaseStringUTFChars(str,cStr);
    return val;
}

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    matchedLength
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_SRegExp_matchedLength
(JNIEnv * env, jobject self, jlong pointer) {

    QRegExp * regexp = (QRegExp*)pointer;
    return regexp->matchedLength();
}

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    captureCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_SRegExp_captureCount
(JNIEnv * env, jobject self, jlong pointer) {

    QRegExp * regexp = (QRegExp*)pointer;
    return regexp->captureCount();
}

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    capturedTexts
 * Signature: (J)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_org_swdc_qt_internal_text_SRegExp_capturedTexts
(JNIEnv * env, jobject self, jlong pointer) {

    QRegExp * regexp = (QRegExp*)pointer;
    QStringList list = regexp->capturedTexts();
    return asJavaStringArray(env,list);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    cap
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_SRegExp_cap
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QRegExp * regexp = (QRegExp*)pointer;
    std::string str = regexp->cap(val).toStdString();
    const char * data = str.c_str();
    return asJavaString(env,data);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    pos
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_SRegExp_pos
(JNIEnv * env, jobject self, jlong pointer, jint pos) {

    QRegExp * regexp = (QRegExp*)pointer;
    return regexp->pos(pos);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    errorString
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_SRegExp_errorString
(JNIEnv * env, jobject self, jlong pointer) {

    QRegExp * regexp = (QRegExp*)pointer;
    std::string str = regexp->errorString().toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    escape
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_SRegExp_escape
(JNIEnv * env, jclass type, jstring str) {

    const char * cStr = env->GetStringUTFChars(str,0);
    QString qStr(cStr);
    std::string val = QRegExp::escape(qStr).toStdString();
    jstring result = asJavaString(env,val.c_str());
    env->ReleaseStringUTFChars(str,cStr);
    return result;
}
