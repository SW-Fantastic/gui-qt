#include "gui_global.h"
#include "java/org_swdc_qt_internal_widgets_SKeySequence.h"


/*
 * Class:     org_swdc_qt_internal_widgets_SKeySequence
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SKeySequence_create__
(JNIEnv *, jobject) {

    QKeySequence * seq = new QKeySequence();
    return _P(seq);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SKeySequence
 * Method:    create
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SKeySequence_create__Ljava_lang_String_2
(JNIEnv * env, jobject, jstring text) {

    const char * cText = env->GetStringUTFChars(text,0);
    QKeySequence * seq = new QKeySequence(QString(cText));
    env->ReleaseStringUTFChars(text,cText);
    return _P(seq);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SKeySequence
 * Method:    create
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SKeySequence_create__I
(JNIEnv *, jobject, jint stdKey) {

    QKeySequence::StandardKey std = QKeySequence::StandardKey(stdKey);
    QKeySequence * seq = new QKeySequence(std);
    return _P(seq);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SKeySequence
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SKeySequence_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QKeySequence * seq = (QKeySequence*)pointer;
    delete seq;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SKeySequence
 * Method:    matches
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SKeySequence_matches
(JNIEnv * env, jobject self, jlong pointer, jlong another) {

    QKeySequence * anotherSeq = (QKeySequence*)another;
    QKeySequence * seq = (QKeySequence*)pointer;
    return int(seq->matches(*anotherSeq));
}

/*
 * Class:     org_swdc_qt_internal_widgets_SKeySequence
 * Method:    toString
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SKeySequence_toString
(JNIEnv * env, jobject self, jlong pointer, jint format) {

    QKeySequence::SequenceFormat formatVal = QKeySequence::SequenceFormat(format);
    QKeySequence * seq = (QKeySequence*)pointer;
    std::string str = seq->toString(formatVal).toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SKeySequence
 * Method:    isDetached
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SKeySequence_isDetached
(JNIEnv * env, jobject self, jlong pointer) {

    QKeySequence * seq = (QKeySequence*)pointer;
    return seq->isDetached() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SKeySequence
 * Method:    fromString
 * Signature: (Ljava/lang/String;J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SKeySequence_fromString
(JNIEnv * env, jclass, jstring str, jint format) {

    QKeySequence::SequenceFormat formatVal = QKeySequence::SequenceFormat(format);
    const char * strVal = env->GetStringUTFChars(str,0);
    QKeySequence * seq = new QKeySequence();
    *seq = QKeySequence::fromString(QString(strVal),formatVal);
    env->ReleaseStringUTFChars(str,strVal);
    return _P(seq);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SKeySequence
 * Method:    mnemonic
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SKeySequence_mnemonic
(JNIEnv * env, jclass, jstring str) {

    const char * strVal = env->GetStringUTFChars(str,0);
    QKeySequence * seq = new QKeySequence();
    *seq = QKeySequence::mnemonic(QString(strVal));
    env->ReleaseStringUTFChars(str,strVal);
    return _P(seq);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SKeySequence
 * Method:    keyBindings
 * Signature: (I)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_swdc_qt_internal_widgets_SKeySequence_keyBindings
(JNIEnv * env, jclass, jint key) {

    QKeySequence::StandardKey stdKey = QKeySequence::StandardKey(key);
    QList<QKeySequence> bindings = QKeySequence::keyBindings(stdKey);

    jlongArray arr = env->NewLongArray(bindings.size());
    jlong * buf = new jlong[bindings.size()];

    for(int idx = 0; idx < bindings.size(); idx ++) {
        QKeySequence * item = new QKeySequence();
        *item = bindings.at(idx);
        buf[idx] = _P(item);
    }

    env->SetLongArrayRegion(arr,0,bindings.size(),buf);
    delete[] buf;

    return arr;
}
