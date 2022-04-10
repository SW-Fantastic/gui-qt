#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_STextDocumentFragment.h"

/*
 * Class:     org_swdc_qt_internal_text_STextDocumentFragment
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocumentFragment_create
(JNIEnv *, jobject) {

    QTextDocumentFragment * doc = new QTextDocumentFragment();
    return _P(doc);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocumentFragment
 * Method:    createByDocument
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocumentFragment_createByDocument
(JNIEnv * env, jobject self, jlong documnetPointer) {

    QTextDocumentFragment * doc = (QTextDocumentFragment*)documnetPointer;
    QTextDocumentFragment * target = new QTextDocumentFragment(*doc);
    return _P(target);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocumentFragment
 * Method:    createByCursor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocumentFragment_createByCursor
(JNIEnv * env, jobject self, jlong cursorPointer) {

    QTextCursor * cursor = (QTextCursor*)cursorPointer;
    QTextDocumentFragment * target = new QTextDocumentFragment(*cursor);
    return _P(target);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocumentFragment
 * Method:    createByFragment
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocumentFragment_createByFragment
(JNIEnv * env, jobject self, jlong fragmentPointer) {

    QTextDocumentFragment * fragment = (QTextDocumentFragment*)fragmentPointer;
    QTextDocumentFragment * target = new QTextDocumentFragment(*fragment);
    return _P(target);
}


/*
 * Class:     org_swdc_qt_internal_text_STextDocumentFragment
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextDocumentFragment_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocumentFragment * fragment = (QTextDocumentFragment*)pointer;
    delete fragment;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocumentFragment
 * Method:    isEmpty
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextDocumentFragment_isEmpty
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocumentFragment * target = (QTextDocumentFragment*)pointer;
    return target->isEmpty() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocumentFragment
 * Method:    toPlainText
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_STextDocumentFragment_toPlainText
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocumentFragment * target = (QTextDocumentFragment*)pointer;
    std::string str = target->toPlainText().toStdString();
    const char * text = str.c_str();
    return asJavaString(env,text);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocumentFragment
 * Method:    toHtml
 * Signature: (JLjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_STextDocumentFragment_toHtml
  (JNIEnv * env, jobject self, jlong pointer, jstring enc) {

    const char * encode = env->GetStringUTFChars(enc,0);
    QTextDocumentFragment * target = (QTextDocumentFragment*)pointer;
    QString data = target->toHtml(QString(encode).toLatin1());
    env->ReleaseStringUTFChars(enc,encode);
    std::string str = data.toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocumentFragment
 * Method:    fromPlainText
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocumentFragment_fromPlainText
(JNIEnv * env, jclass type, jstring str) {

    const char* text = env->GetStringUTFChars(str,0);
    QTextDocumentFragment * val = new QTextDocumentFragment();
    *val = QTextDocumentFragment::fromPlainText(QString(text));
    env->ReleaseStringUTFChars(str,text);
    return _P(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocumentFragment
 * Method:    fromHtml
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocumentFragment_fromHtml__Ljava_lang_String_2
(JNIEnv * env, jclass type, jstring str) {

    const char* text = env->GetStringUTFChars(str,0);
    QTextDocumentFragment * val = new QTextDocumentFragment();
    *val = QTextDocumentFragment::fromHtml(QString(text));
    env->ReleaseStringUTFChars(str,text);
    return _P(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocumentFragment
 * Method:    fromHtml
 * Signature: (Ljava/lang/String;J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocumentFragment_fromHtml__Ljava_lang_String_2J
(JNIEnv * env, jclass type, jstring str, jlong documentPointer) {

    QTextDocument * doc = (QTextDocument*)documentPointer;
    const char * text = env->GetStringUTFChars(str,0);
    QTextDocumentFragment * data = new QTextDocumentFragment();
    *data = QTextDocumentFragment::fromHtml(QString(text),doc);
    env->ReleaseStringUTFChars(str,text);
    return _P(data);
}
