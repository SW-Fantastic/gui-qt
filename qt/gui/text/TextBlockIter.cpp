#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_STextBlockIterator.h"


/*
 * Class:     org_swdc_qt_internal_text_STextBlockIterator
 * Method:    hasNext
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextBlockIterator_hasNext
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlock::Iterator * iter = (QTextBlock::Iterator *)pointer;
    return iter->atEnd() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlockIterator
 * Method:    next
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextBlockIterator_next
(JNIEnv * env, jobject self, jlong pointer) {

     QTextBlock::Iterator * iter = (QTextBlock::Iterator *)pointer;
     *iter = (*iter)++;
     QTextFragment * target = new QTextFragment();
     *target = iter->fragment();
     return _P(target);
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlockIterator
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextBlockIterator_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlock::Iterator * iter = (QTextBlock::Iterator *)pointer;
    delete iter;
    cleanJavaPointer(env,self);
}
