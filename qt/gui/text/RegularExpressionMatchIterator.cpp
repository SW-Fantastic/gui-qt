#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_SRegularExpressionMatchIterator.h"

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpressionMatchIterator
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_SRegularExpressionMatchIterator_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QRegularExpressionMatchIterator * iter = (QRegularExpressionMatchIterator*)pointer;
    delete iter;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpressionMatchIterator
 * Method:    hasNext
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_SRegularExpressionMatchIterator_hasNext
(JNIEnv * env, jobject self, jlong pointer) {

    QRegularExpressionMatchIterator * iter = (QRegularExpressionMatchIterator*)pointer;
    return iter->hasNext() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpressionMatchIterator
 * Method:    nextMatch
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_SRegularExpressionMatchIterator_nextMatch
(JNIEnv * env, jobject self, jlong pointer) {

    QRegularExpressionMatchIterator * iter = (QRegularExpressionMatchIterator*)pointer;
    QRegularExpressionMatch * match = new QRegularExpressionMatch();
    *match = iter->next();
    return _P(match);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpressionMatchIterator
 * Method:    peekNextMatch
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_SRegularExpressionMatchIterator_peekNextMatch
(JNIEnv * env, jobject self, jlong pointer) {

    QRegularExpressionMatchIterator * iter = (QRegularExpressionMatchIterator*)pointer;
    QRegularExpressionMatch * match = new QRegularExpressionMatch();
    *match = iter->peekNext();
    return _P(match);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpressionMatchIterator
 * Method:    regularExpression
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_SRegularExpressionMatchIterator_regularExpression
(JNIEnv * env, jobject self, jlong pointer) {

    QRegularExpressionMatchIterator * iter = (QRegularExpressionMatchIterator*)pointer;
    QRegularExpression * exp = new QRegularExpression();
    *exp = iter->regularExpression();
    return _P(exp);
}

/*
 * Class:     org_swdc_qt_internal_text_SRegularExpressionMatchIterator
 * Method:    matchType
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_SRegularExpressionMatchIterator_matchType
(JNIEnv * env, jobject self, jlong pointer) {

    QRegularExpressionMatchIterator * iter = (QRegularExpressionMatchIterator*)pointer;
    return int(iter->matchType());
}
