#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_STextBlock.h"

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextBlock_create__
(JNIEnv *, jobject) {

    QTextBlock * block = new QTextBlock();
    return _P(block);
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextBlock_create__J
(JNIEnv * env, jobject self, jlong textBlockPointer) {

    QTextBlock * another = (QTextBlock*)textBlockPointer;
    QTextBlock * block = new QTextBlock(*another);
    return _P(block);
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextBlock_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlock * block = (QTextBlock*)pointer;
    delete block;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    isValid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextBlock_isValid
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlock * block = (QTextBlock*)pointer;
    return block->isValid() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    position
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextBlock_position
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlock * block = (QTextBlock*)pointer;
    return block->position();
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    length
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextBlock_length
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlock * block = (QTextBlock*)pointer;
    return block->length();
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    contains
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextBlock_contains
(JNIEnv * env, jobject self, jlong pointer, jint pos) {

    QTextBlock * block = (QTextBlock*)pointer;
    return block->contains(pos) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    layout
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextBlock_layout
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlock * block = (QTextBlock*)pointer;
    return (jlong)(intptr_t)block->layout();
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    clearLayout
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextBlock_clearLayout
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlock * block = (QTextBlock*)pointer;
    block->clearLayout();
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    blockFormat
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextBlock_blockFormat
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlock * block = (QTextBlock*)pointer;
    QTextBlockFormat * format = new QTextBlockFormat();
    *format = block->blockFormat();
    return (jlong)(intptr_t)format;
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    blockFormatIndex
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextBlock_blockFormatIndex
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlock * block = (QTextBlock*)pointer;
    return block->blockFormatIndex();
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    charFormat
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextBlock_charFormat
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlock * block = (QTextBlock*)pointer;
    QTextCharFormat * charFormat = new QTextCharFormat();
    *charFormat = block->charFormat();
    return (jlong)(intptr_t)charFormat;
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    charFormatIndex
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextBlock_charFormatIndex
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlock * block = (QTextBlock*)pointer;
    return block->charFormatIndex();
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    textDirection
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextBlock_textDirection
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlock * block = (QTextBlock*)pointer;
    return int(block->textDirection());
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    text
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_STextBlock_text
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlock * block = (QTextBlock*)pointer;
    std::string str = block->text().toStdString();
    const char* cStr = str.c_str();
    return asJavaString(env,cStr);
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    textFormats
 * Signature: (J)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_swdc_qt_internal_text_STextBlock_textFormats
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlock * block = (QTextBlock*)pointer;
    QVector<QTextLayout::FormatRange> range = block->textFormats();

    jlong * vals = new jlong[range.size()];
    for(int idx = 0; idx < range.size(); idx ++) {
        QTextLayout::FormatRange * rg = new QTextLayout::FormatRange();
        *rg = range.at(idx);
        vals[idx] = (jlong)(intptr_t)rg;
    }

    jlongArray arr = env->NewLongArray(range.size());
    env->SetLongArrayRegion(arr,0,range.size(),vals);
    delete [] vals;
    return arr;
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    document
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextBlock_document
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlock * block = (QTextBlock*)pointer;
    return (jlong)(intptr_t)block->document();
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    textList
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextBlock_textList
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlock * block = (QTextBlock*)pointer;
    QTextList * list = block->textList();

    return (jlong)(intptr_t)list;
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    userState
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextBlock_userState
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlock * block = (QTextBlock*)pointer;
    return block->userState();
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    setUserState
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextBlock_setUserState
(JNIEnv * env, jobject self, jlong pointer, jint state) {

    QTextBlock * block = (QTextBlock*)pointer;
    block->setUserState(state);
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    revision
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextBlock_revision
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlock * block = (QTextBlock*)pointer;
    return block->revision();
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    setRevision
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextBlock_setRevision
(JNIEnv * env, jobject self, jlong pointer, jint revision) {

    QTextBlock * block = (QTextBlock*)pointer;
    block->setRevision(revision);
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    isVisible
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextBlock_isVisible
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlock * block = (QTextBlock*)pointer;
    return block->isVisible() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    setVisible
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextBlock_setVisible
(JNIEnv * env, jobject self, jlong pointer, jboolean val){

    QTextBlock * block = (QTextBlock*)pointer;
    block->setVisible(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    blockNumber
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextBlock_blockNumber
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlock * block = (QTextBlock*)pointer;
    return block->blockNumber();
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    firstLineNumber
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextBlock_firstLineNumber
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlock * block = (QTextBlock*)pointer;
    return block->firstLineNumber();
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    setLineCount
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextBlock_setLineCount
(JNIEnv * env, jobject self, jlong pointer, jint lineCount){

    QTextBlock * block = (QTextBlock*)pointer;
    block->setLineCount(lineCount);
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    lineCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextBlock_lineCount
(JNIEnv * env, jobject self, jlong pointer){

    QTextBlock * block = (QTextBlock*)pointer;
    return block->lineCount();
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    next
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextBlock_next
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlock * block = (QTextBlock*)pointer;
    QTextBlock * target = new QTextBlock();
    *target = block->next();
    return _P(target);
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    previous
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextBlock_previous
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlock * block = (QTextBlock*)pointer;
    QTextBlock * target = new QTextBlock();
    *target = block->previous();
    return _P(target);
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    iterator
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextBlock_iterator
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlock * block = (QTextBlock*)pointer;
    QTextBlock::Iterator * iter = new QTextBlock::Iterator();
    *iter = block->begin();
    return _P(iter);
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlock
 * Method:    fragmentIndex
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextBlock_fragmentIndex
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlock * block = (QTextBlock*)pointer;
    return block->fragmentIndex();
}
