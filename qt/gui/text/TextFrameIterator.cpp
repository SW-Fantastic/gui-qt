#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_STextFrameIterator.h"

/*
 * Class:     org_swdc_qt_internal_text_STextFrameIterator
 * Method:    hasNext
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextFrameIterator_hasNext
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFrame::Iterator * iter = (QTextFrame::Iterator *)pointer;
    return iter->atEnd() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrameIterator
 * Method:    next
 * Signature: (J)Lorg/swdc/qt/internal/text/STextFrameIterItem;
 */
JNIEXPORT jobject JNICALL Java_org_swdc_qt_internal_text_STextFrameIterator_next
(JNIEnv * env, jobject self, jlong pointer) {

    jclass type = env->GetObjectClass(self);
    jmethodID getItem = env->GetMethodID(type,"getItem","(JJ)Lorg/swdc/qt/internal/text/STextFrameIterItem;");

    QTextFrame::Iterator * iter = (QTextFrame::Iterator *)pointer;
    QTextBlock * block = new QTextBlock();
    *block = iter->currentBlock();
    jlong framePointer = _P(iter->currentFrame());
    jlong blockPointer = _P(block);

    jobject result = env->CallObjectMethod(self,getItem,blockPointer,framePointer);
    return result;
}


/*
 * Class:     org_swdc_qt_internal_text_STextFrameIterator
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFrameIterator_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFrame::Iterator * iter = (QTextFrame::Iterator *)pointer;
    delete iter;
    cleanJavaPointer(env,self);

}
