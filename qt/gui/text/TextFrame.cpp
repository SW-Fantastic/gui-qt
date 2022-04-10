#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_STextFrame.h"

/*
 * Class:     org_swdc_qt_internal_text_STextFrame
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextFrame_create
(JNIEnv * env, jobject self, jlong documentPointer) {

    if(documentPointer <= 0) {
        return NULL;
    }
    QTextDocument * textDocument = (QTextDocument*)documentPointer;
    QTextFrame * textFrame = new QTextFrame(textDocument);
    return _P(textFrame);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrame
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFrame_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFrame * textFrame = (QTextFrame*)pointer;
    delete textFrame;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrame
 * Method:    setFrameFormat
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFrame_setFrameFormat
(JNIEnv * env, jobject self, jlong pointer, jlong formatPointer) {

    QTextFrameFormat * format = (QTextFrameFormat*)formatPointer;
    QTextFrame * textFrame = (QTextFrame*)pointer;
    textFrame->setFrameFormat(*format);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrame
 * Method:    frameFormat
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextFrame_frameFormat
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFrame * textFrame = (QTextFrame*)pointer;
    QTextFrameFormat * format = new QTextFrameFormat();
    *format = textFrame->frameFormat();
    return _P(format);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrame
 * Method:    firstCursorPosition
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextFrame_firstCursorPosition
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFrame * textFrame = (QTextFrame*)pointer;
    QTextCursor * cursor = new QTextCursor();
    *cursor = textFrame->firstCursorPosition();
    return _P(cursor);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrame
 * Method:    lastCursorPosition
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextFrame_lastCursorPosition
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFrame * textFrame = (QTextFrame*)pointer;
    QTextCursor * cursor = new QTextCursor();
    *cursor = textFrame->lastCursorPosition();
    return _P(cursor);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrame
 * Method:    firstPosition
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextFrame_firstPosition
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFrame * textFrame = (QTextFrame*)pointer;
    return textFrame->firstPosition();
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrame
 * Method:    lastPosition
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextFrame_lastPosition
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFrame * textFrame = (QTextFrame*)pointer;
    return textFrame->lastPosition();
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrame
 * Method:    childFrames
 * Signature: (J)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_swdc_qt_internal_text_STextFrame_childFrames
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFrame * textFrame = (QTextFrame*)pointer;
    QList<QTextFrame*> list = textFrame->childFrames();
    jlong * buf = new jlong[list.size()];

    for(int idx = 0; idx < list.size(); idx ++) {
        buf[idx] = _P(list.at(idx));
    }

    jlongArray arr = env->NewLongArray(list.size());
    env->SetLongArrayRegion(arr,0,list.size(),buf);
    delete [] buf;
    return arr;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrame
 * Method:    parentFrame
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextFrame_parentFrame
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFrame * textFrame = (QTextFrame*)pointer;
    return _P(textFrame->parentFrame());
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrame
 * Method:    iterator
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextFrame_iterator
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFrame * textFrame = (QTextFrame*)pointer;
    QTextFrame::Iterator * iter = new QTextFrame::Iterator();
    *iter = textFrame->begin();
    return _P(iter);
}
