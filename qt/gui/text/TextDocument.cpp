#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_STextDocument.h"

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocument_create
(JNIEnv *, jobject) {

    QTextDocument * document = new QTextDocument();
    return _P(document);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextDocument_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    delete document;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    isEmpty
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextDocument_isEmpty
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    return document->isEmpty() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    clear
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextDocument_clear
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    document->clear();
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    setUndoRedoEnabled
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextDocument_setUndoRedoEnabled
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QTextDocument * document = (QTextDocument*)pointer;
    document->setUndoRedoEnabled(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    isUndoRedoEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextDocument_isUndoRedoEnabled
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    return document->isUndoRedoEnabled() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    isUndoAvailable
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextDocument_isUndoAvailable
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    return document->isUndoAvailable() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    isRedoAvailable
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextDocument_isRedoAvailable
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    return document->isRedoAvailable();
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    availableUndoSteps
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextDocument_availableUndoSteps
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    return document->availableRedoSteps();
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    availableRedoSteps
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextDocument_availableRedoSteps
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    return document->availableRedoSteps();
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    revision
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextDocument_revision
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    return document->revision();
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    setDocumentLayout
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextDocument_setDocumentLayout
(JNIEnv * env, jobject self, jlong pointer, jlong layoutPointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    QAbstractTextDocumentLayout * layout = (QAbstractTextDocumentLayout*)layoutPointer;
    document->setDocumentLayout(layout);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    documentLayout
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocument_documentLayout
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    return _P(document->documentLayout());
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    setMetaInformation
 * Signature: (JILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextDocument_setMetaInformation
(JNIEnv * env, jobject self, jlong pointer, jint infoVal, jstring str) {


    const char * cStr = env->GetStringUTFChars(str,0);
    QTextDocument * document = (QTextDocument*)pointer;
    QTextDocument::MetaInformation info = QTextDocument::MetaInformation(infoVal);
    document->setMetaInformation(info,QString(cStr));
    env->ReleaseStringUTFChars(str,cStr);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    metaInformation
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_STextDocument_metaInformation
(JNIEnv * env, jobject self, jlong pointer, jint infoVal) {

    QTextDocument * document = (QTextDocument*)pointer;
    QTextDocument::MetaInformation info = QTextDocument::MetaInformation(infoVal);
    std::string str = document->metaInformation(info).toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    toHtml
 * Signature: (JLjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_STextDocument_toHtml
(JNIEnv * env, jobject self, jlong pointer, jstring encode) {

    const char * encodeVal = env->GetStringUTFChars(encode,0);
    QTextDocument * document = (QTextDocument*)pointer;
    QString str = document->toHtml(QString(encodeVal).toLatin1());
    std::string strVal = str.toStdString();
    env->ReleaseStringUTFChars(encode,encodeVal);

    return asJavaString(env,strVal.c_str());
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    setHtml
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextDocument_setHtml
(JNIEnv * env, jobject self, jlong pointer, jstring htmlVal) {

    const char * html = env->GetStringUTFChars(htmlVal,0);
    QTextDocument * document = (QTextDocument*)pointer;
    document->setHtml(QString(html));
    env->ReleaseStringUTFChars(htmlVal,html);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    toMarkdown
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_STextDocument_toMarkdown
(JNIEnv * env, jobject self, jlong pointer, jint futureVal) {

    QTextDocument::MarkdownFeatures future = QTextDocument::MarkdownFeatures(futureVal);
    QTextDocument * document = (QTextDocument*)pointer;
    std::string str = document->toMarkdown(future).toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    setMarkdown
 * Signature: (JLjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextDocument_setMarkdown
(JNIEnv * env, jobject self, jlong pointer, jstring markdown, jint futureVal) {

    const char * str = env->GetStringUTFChars(markdown,0);
    QTextDocument::MarkdownFeatures future = QTextDocument::MarkdownFeatures(futureVal);
    QTextDocument * document = (QTextDocument*)pointer;
    document->setMarkdown(QString(str),future);

}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    toRawText
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_STextDocument_toRawText
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    std::string str = document->toRawText().toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    toPlainText
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_STextDocument_toPlainText
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    std::string str = document->toPlainText().toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    setPlainText
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextDocument_setPlainText
(JNIEnv * env, jobject self, jlong pointer, jstring textVal) {

    QTextDocument * document = (QTextDocument*)pointer;
    const char * cText = env->GetStringUTFChars(textVal,0);
    document->setPlainText(QString(cText));
    env->ReleaseStringUTFChars(textVal,cText);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    characterAt
 * Signature: (JI)C
 */
JNIEXPORT jchar JNICALL Java_org_swdc_qt_internal_text_STextDocument_characterAt
(JNIEnv * env, jobject self, jlong pointer, jint pos) {

    QTextDocument * document = (QTextDocument*)pointer;
    QChar chara = document->characterAt(pos);
    return chara.toLatin1();
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    find
 * Signature: (JLjava/lang/String;II)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocument_find__JLjava_lang_String_2II
(JNIEnv * env, jobject self, jlong pointer, jstring subStrVal, jint form, jint flags) {

    QTextDocument * document = (QTextDocument*)pointer;
    QTextDocument::FindFlags flag = QTextDocument::FindFlags(flags);
    const char * subStr = env->GetStringUTFChars(subStrVal,0);

    QTextCursor * cursor = new QTextCursor();
    *cursor = document->find(QString(subStr),form,flag);
    env->ReleaseStringUTFChars(subStrVal,subStr);
    return _P(cursor);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    find
 * Signature: (JLjava/lang/String;JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocument_find__JLjava_lang_String_2JI
(JNIEnv * env, jobject self, jlong pointer, jstring subStrVal, jlong cursorPointer, jint flags) {

    QTextDocument * document = (QTextDocument*)pointer;
    const char * subStr = env->GetStringUTFChars(subStrVal,0);
    QTextDocument::FindFlags flag = QTextDocument::FindFlags(flags);

    QTextCursor * anotherCursor = (QTextCursor*)cursorPointer;
    QTextCursor * cursor = new QTextCursor();
    *cursor = document->find(QString(subStr),*anotherCursor,flag);

    env->ReleaseStringUTFChars(subStrVal,subStr);

    return _P(cursor);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    findRegExp
 * Signature: (JJII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocument_findRegExp__JJII
(JNIEnv * env, jobject self, jlong pointer, jlong regexpPointer, jint form , jint flags) {

    QTextDocument::FindFlags flag = QTextDocument::FindFlags(flags);
    QRegExp * regexp = (QRegExp*)regexpPointer;

    QTextDocument * document = (QTextDocument*)pointer;
    QTextCursor * cursor = new QTextCursor();
    *cursor = document->find(*regexp,form,flag);
    return _P(cursor);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    findRegExp
 * Signature: (JJJI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocument_findRegExp__JJJI
(JNIEnv * env, jobject self, jlong pointer, jlong regexpPointer, jlong cursorPointer, jint flags) {


    QTextCursor * anotherCursor = (QTextCursor*)cursorPointer;
    QTextDocument::FindFlags flag = QTextDocument::FindFlags(flags);
    QRegExp * regex = (QRegExp*)regexpPointer;

    QTextDocument * document = (QTextDocument*)pointer;
    QTextCursor * result = new QTextCursor();

    *result = document->find(*regex,*anotherCursor,flag);
    return _P(result);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    findRegularExpression
 * Signature: (JJII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocument_findRegularExpression__JJII
(JNIEnv * env, jobject self, jlong pointer, jlong regularExpressionPointer, jint from, jint flags){

    QTextDocument::FindFlags flag = QTextDocument::FindFlags(flags);
    QRegularExpression * expr = (QRegularExpression*)regularExpressionPointer;
    QTextDocument * document = (QTextDocument*)pointer;

    QTextCursor * cursor = new QTextCursor();
    *cursor = document->find(*expr,from,flag);
    return _P(cursor);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    findRegularExpression
 * Signature: (JJJI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocument_findRegularExpression__JJJI
(JNIEnv * env, jobject self, jlong pointer, jlong regularExpressPointer, jlong cursorPointer, jint flags) {

    QTextDocument::FindFlags flag = QTextDocument::FindFlags(flags);
    QRegularExpression * expr = (QRegularExpression*)regularExpressPointer;
    QTextCursor * anotherCursor = (QTextCursor*)cursorPointer;

    QTextDocument * document = (QTextDocument*)pointer;
    QTextCursor * cursor = new QTextCursor();
    *cursor = document->find(*expr,*anotherCursor,flag);

    return _P(cursor);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    frameAt
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocument_frameAt
(JNIEnv * env, jobject self, jlong pointer, jint pos) {

    QTextDocument * document = (QTextDocument*)pointer;
    return _P(document->frameAt(pos));
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    rootFrame
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocument_rootFrame
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    return _P(document->rootFrame());
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    object
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocument_object
(JNIEnv * env, jobject self, jlong pointer, jint idx) {

    QTextDocument * document = (QTextDocument*)pointer;
    return _P(document->object(idx));
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    objectForFormat
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocument_objectForFormat
(JNIEnv * env, jobject self, jlong pointer, jlong textFormatPointer) {

    QTextFormat * format = (QTextFormat*)textFormatPointer;
    QTextDocument * document = (QTextDocument*)pointer;
    return _P(document->objectForFormat(*format));
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    findBlock
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocument_findBlock
(JNIEnv * env, jobject self, jlong pointer, jint pos) {

    QTextDocument * document = (QTextDocument*)pointer;
    QTextBlock * block = new QTextBlock();
    *block = document->findBlock(pos);
    return _P(block);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    findBlockByNumber
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocument_findBlockByNumber
(JNIEnv * env, jobject self, jlong pointer, jint blockNum) {

    QTextDocument * document = (QTextDocument*)pointer;
    QTextBlock * block = new QTextBlock();
    *block = document->findBlockByNumber(blockNum);
    return _P(block);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    findBlockByLineNumber
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocument_findBlockByLineNumber
(JNIEnv * env, jobject self, jlong pointer, jint blockNum){

    QTextDocument * document = (QTextDocument*)pointer;
    QTextBlock * block = new QTextBlock();
    *block = document->findBlockByLineNumber(blockNum);
    return _P(block);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    begin
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocument_begin
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    QTextBlock * block = new QTextBlock();
    *block = document->begin();
    return _P(block);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    end
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocument_end
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    QTextBlock * block = new QTextBlock();
    *block = document->end();
    return _P(block);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    firstBlock
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocument_firstBlock
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    QTextBlock * block = new QTextBlock();
    *block = document->firstBlock();
    return _P(block);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    lastBlock
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocument_lastBlock
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    QTextBlock * block = new QTextBlock();
    *block = document->lastBlock();
    return _P(block);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    setPageSize
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextDocument_setPageSize
(JNIEnv * env, jobject self, jlong pointer, jlong sizePointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    QSizeF * sizeF = (QSizeF*)sizePointer;
    document->setPageSize(*sizeF);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    pageSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocument_pageSize
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    QSizeF * sizeF = new QSizeF();
    *sizeF = document->pageSize();
    return _P(sizeF);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    setDefaultFont
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextDocument_setDefaultFont
(JNIEnv * env, jobject self, jlong pointer, jlong fontPointer) {

    QFont * font = (QFont*)fontPointer;
    QTextDocument * document = (QTextDocument*)pointer;
    document->setDefaultFont(*font);

}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    defaultFont
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocument_defaultFont
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    QFont * font = new QFont();
    *font = document->defaultFont();
    return _P(font);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    pageCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextDocument_pageCount
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    return document->pageCount();
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    isModified
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextDocument_isModified
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    return document->isModified() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    resource
 * Signature: (ILjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocument_resource
(JNIEnv * env, jobject self, jlong pointer, jint typeVal, jstring urlVal) {

    const char * cUrl = env->GetStringUTFChars(urlVal,0);
    QString strUrl(cUrl);
    QUrl url(strUrl);

    QTextDocument * document = (QTextDocument*)pointer;
    QVariant * data = new QVariant();
    *data = document->resource(typeVal,url);
    env->ReleaseStringUTFChars(urlVal,cUrl);

    return _P(data);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    addResource
 * Signature: (ILjava/lang/String;J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextDocument_addResource
(JNIEnv * env, jobject self, jlong pointer, jint typeVal, jstring urlVal, jlong variantPointer) {

    const char * cUrl = env->GetStringUTFChars(urlVal,0);
    QString strUrl(cUrl);
    QUrl url(strUrl);
    QVariant * variant = (QVariant*)variantPointer;

    QTextDocument * document = (QTextDocument*)pointer;
    document->addResource(typeVal,url,*variant);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    allFormats
 * Signature: (J)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_swdc_qt_internal_text_STextDocument_allFormats
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    QVector<QTextFormat> formatList = document->allFormats();

    jlong * buf = new jlong[formatList.size()];

    for(int idx = 0; idx < formatList.size(); idx ++) {
        QTextFormat * format = new QTextFormat();
        *format = formatList.at(idx);
        buf[idx] = _P(format);
    }

    jlongArray arr = env->NewLongArray(formatList.size());
    env->SetLongArrayRegion(arr,0,formatList.size(),buf);
    return arr;
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    markContentsDirty
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextDocument_markContentsDirty
(JNIEnv * env, jobject self, jlong pointer, jint from, jint length) {

    QTextDocument * document = (QTextDocument*)pointer;
    document->markContentsDirty(from,length);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    setUseDesignMetrics
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextDocument_setUseDesignMetrics
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QTextDocument * document = (QTextDocument*)pointer;
    document->setUseDesignMetrics(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    useDesignMetrics
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextDocument_useDesignMetrics
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    return document->useDesignMetrics() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    drawContents
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextDocument_drawContents
(JNIEnv * env, jobject self, jlong pointer, jlong painterPointer, jlong rectPointer) {

    QRectF * rectF = (QRectF*)rectPointer;
    QPainter * painter= (QPainter*)painterPointer;

    QTextDocument * document = (QTextDocument*)pointer;
    document->drawContents(painter,*rectF);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    setTextWidth
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextDocument_setTextWidth
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextDocument * document = (QTextDocument*)pointer;
    document->setTextWidth(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    textWidth
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextDocument_textWidth
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    return document->textWidth();
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    idealWidth
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextDocument_idealWidth
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    return document->idealWidth();
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    indentWidth
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextDocument_indentWidth
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    return document->indentWidth();
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    setIndentWidth
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextDocument_setIndentWidth
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextDocument * document = (QTextDocument*)pointer;
    document->setIndentWidth(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    documentMargin
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextDocument_documentMargin
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    return document->documentMargin();
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    setDocumentMargin
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextDocument_setDocumentMargin
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextDocument * document = (QTextDocument*)pointer;
    document->setDocumentMargin(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    adjustSize
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextDocument_adjustSize
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    document->adjustSize();
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    size
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocument_size
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    QSizeF * sizeF = new QSizeF();

    *sizeF = document->size();
    return _P(sizeF);
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    blockCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextDocument_blockCount
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    return document->blockCount();
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    lineCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextDocument_lineCount
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    return document->lineCount();
}

/*
 * Class:     org_swdc_qt_internal_text_STextDocument
 * Method:    characterCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextDocument_characterCount
(JNIEnv * env, jobject self, jlong pointer) {

    QTextDocument * document = (QTextDocument*)pointer;
    return document->characterCount();
}
