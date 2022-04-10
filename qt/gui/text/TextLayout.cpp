#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_STextLayout.h"


/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextLayout_create__
(JNIEnv *, jobject) {

    QTextLayout * layout = new QTextLayout();
    return _P(layout);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    create
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextLayout_create__Ljava_lang_String_2
(JNIEnv * env, jobject, jstring str) {

    const char * cStr = env->GetStringUTFChars(str,0);
    QTextLayout * layout = new QTextLayout(QString(cStr));
    env->ReleaseStringUTFChars(str,cStr);
    return _P(layout);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLayout * layout = (QTextLayout*)pointer;
    delete layout;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    setFont
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_setFont
(JNIEnv * env, jobject self, jlong pointer, jlong fontPointer) {

    QFont * font = (QFont*)fontPointer;
    QTextLayout * layout = (QTextLayout*)pointer;
    layout->setFont(*font);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    font
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextLayout_font
(JNIEnv * env, jobject self, jlong pointer) {

    QFont * font = new QFont();
    QTextLayout * layout = (QTextLayout*)pointer;
    *font = layout->font();
    return _P(font);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    setText
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_setText
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    const char * str = env->GetStringUTFChars(text,0);
    QTextLayout * layout = (QTextLayout*)pointer;
    layout->setText(QString(str));
    env->ReleaseStringUTFChars(text,str);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    text
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_STextLayout_text
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLayout * layout = (QTextLayout*)pointer;
    std::string str = layout->text().toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    setTextOption
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_setTextOption
(JNIEnv * env, jobject self, jlong pointer, jlong optPointer) {

    QTextOption * opt = (QTextOption*)optPointer;
    QTextLayout * layout = (QTextLayout*)pointer;
    layout->setTextOption(*opt);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    textOption
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextLayout_textOption
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLayout * layout = (QTextLayout*)pointer;
    QTextOption * opt = new QTextOption();
    *opt = layout->textOption();
    return _P(opt);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    setPreeditArea
 * Signature: (JILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_setPreeditArea
(JNIEnv * env, jobject self, jlong pointer, jint pos, jstring text) {

    const char * str = env->GetStringUTFChars(text,0);
    QTextLayout * layout = (QTextLayout*)pointer;
    layout->setPreeditArea(pos,QString(str));
    env->ReleaseStringUTFChars(text,str);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    preeditAreaPosition
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextLayout_preeditAreaPosition
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLayout * layout = (QTextLayout*)pointer;
    return layout->preeditAreaPosition();
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    preeditAreaText
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_STextLayout_preeditAreaText
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLayout * layout = (QTextLayout*)pointer;
    std::string str = layout->preeditAreaText().toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    setFormats
 * Signature: (J[J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_setFormats
(JNIEnv * env, jobject self, jlong pointer, jlongArray formatArr) {

    int len = env->GetArrayLength(formatArr);
    jlong* arr = env->GetLongArrayElements(formatArr,0);
    QTextLayout * layout = (QTextLayout*)pointer;
    QVector<QTextLayout::FormatRange> ranges;

    for(int idx = 0; idx < len; idx ++) {
        QTextLayout::FormatRange * range = (QTextLayout::FormatRange*)arr[idx];
        ranges.append(*range);
    }

    env->ReleaseLongArrayElements(formatArr,arr,0);
    layout->setFormats(ranges);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    formats
 * Signature: (J)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_swdc_qt_internal_text_STextLayout_formats
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLayout * layout = (QTextLayout*)pointer;
    QVector<QTextLayout::FormatRange> ranges = layout->formats();

    jlongArray arr = env->NewLongArray(ranges.size());
    jlong * buf = new jlong[ranges.size()];

    for(int idx = 0; idx < ranges.size(); idx++) {
        QTextLayout::FormatRange * range = new QTextLayout::FormatRange();
        *range = ranges.at(idx);
        buf[idx] = _P(range);
    }

    env->SetLongArrayRegion(arr,0,ranges.size(),buf);
    return arr;
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    clearFormats
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_clearFormats
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLayout * layout = (QTextLayout*)pointer;
    layout->clearFormats();
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    setCacheEnabled
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_setCacheEnabled
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QTextLayout * layout = (QTextLayout*)pointer;
    layout->setCacheEnabled(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    cacheEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextLayout_cacheEnabled
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLayout * layout = (QTextLayout*)pointer;
    return layout->cacheEnabled() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    setCursorMoveStyle
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_setCursorMoveStyle
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    Qt::CursorMoveStyle style = Qt::CursorMoveStyle(val);
    QTextLayout * layout = (QTextLayout*)pointer;
    layout->setCursorMoveStyle(style);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    cursorMoveStyle
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextLayout_cursorMoveStyle
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLayout * layout = (QTextLayout*)pointer;
    return int(layout->cursorMoveStyle());
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    beginLayout
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_beginLayout
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLayout * layout = (QTextLayout*)pointer;
    layout->beginLayout();
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    endLayout
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_endLayout
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLayout * layout = (QTextLayout*)pointer;
    layout->endLayout();
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    clearLayout
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_clearLayout
(JNIEnv * env, jobject self, jlong pointer){

    QTextLayout * layout = (QTextLayout*)pointer;
    layout->clearLayout();
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    createLine
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextLayout_createLine
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLayout * layout = (QTextLayout*)pointer;
    QTextLine * line = new QTextLine();
    *line = layout->createLine();
    return _P(line);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    lineCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextLayout_lineCount
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLayout * layout = (QTextLayout*)pointer;
    return layout->lineCount();
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    lineAt
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextLayout_lineAt
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QTextLine * line = new QTextLine();
    QTextLayout * layout = (QTextLayout*)pointer;
    *line = layout->lineAt(val);
    return _P(line);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    lineForTextPosition
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextLayout_lineForTextPosition
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QTextLayout * layout = (QTextLayout*)pointer;
    QTextLine * line = new QTextLine();
    *line = layout->lineForTextPosition(val);
    return _P(line);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    isValidCursorPosition
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextLayout_isValidCursorPosition
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QTextLayout * layout = (QTextLayout*)pointer;
    return layout->isValidCursorPosition(val) ? JNI_TRUE: JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    nextCursorPosition
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextLayout_nextCursorPosition
(JNIEnv * env, jobject self, jlong pointer, jint pos, jint modeVal) {

    QTextLayout * layout = (QTextLayout*)pointer;
    QTextLayout::CursorMode mode = QTextLayout::CursorMode(modeVal);
    return layout->nextCursorPosition(pos,mode);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    previousCursorPosition
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextLayout_previousCursorPosition
(JNIEnv * env, jobject self, jlong pointer, jint pos, jint modeVal) {

    QTextLayout::CursorMode mode = QTextLayout::CursorMode(modeVal);
    QTextLayout * layout = (QTextLayout*)pointer;
    return layout->previousCursorPosition(pos,mode);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    leftCursorPosition
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextLayout_leftCursorPosition
(JNIEnv * env, jobject self, jlong pointer, jint pos) {

    QTextLayout * layout = (QTextLayout*)pointer;
    return layout->leftCursorPosition(pos);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    rightCursorPosition
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextLayout_rightCursorPosition
(JNIEnv * env, jobject self, jlong pointer, jint pos) {

    QTextLayout * layout = (QTextLayout*)pointer;
    return layout->rightCursorPosition(pos);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    draw
 * Signature: (JJJ[JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_draw
(JNIEnv * env, jobject self, jlong pointer, jlong painterPointer, jlong posPointer, jlongArray selections, jlong clipPointer) {

    QPainter * painter = (QPainter*)painterPointer;
    QPointF * pos = (QPointF*)posPointer;

    int len = env->GetArrayLength(selections);
    jlong* arr = env->GetLongArrayElements(selections,0);
    QVector<QTextLayout::FormatRange> ranges;

    for(int idx = 0; idx < len; idx ++) {
        QTextLayout::FormatRange * range = (QTextLayout::FormatRange*)arr[idx];
        ranges.append(*range);
    }

    QRectF* clip = (QRectF*)clipPointer;
    QTextLayout * layout = (QTextLayout*)pointer;

    layout->draw(painter,*pos,ranges,*clip);

    env->ReleaseLongArrayElements(selections,arr,0);

}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    drawCursor
 * Signature: (JJJI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_drawCursor__JJJI
(JNIEnv * env, jobject self, jlong pointer, jlong painterPointer, jlong posPointer, jint curPos) {

    QPainter * painter = (QPainter*)painterPointer;
    QPointF * pos = (QPointF*)posPointer;
    QTextLayout * layout = (QTextLayout*)pointer;
    layout->drawCursor(painter,*pos,curPos);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    drawCursor
 * Signature: (JJJII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_drawCursor__JJJII
(JNIEnv * env, jobject self, jlong pointer, jlong painterPointer, jlong posPointer, jint curPos, jint width) {

    QPainter * painter = (QPainter*)painterPointer;
    QPointF * pos = (QPointF*)posPointer;
    QTextLayout * layout = (QTextLayout*)pointer;
    layout->drawCursor(painter,*pos,curPos,width);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    position
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextLayout_position
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLayout * layout = (QTextLayout*)pointer;
    QPointF * pos = new QPointF();
    *pos = layout->position();
    return _P(pos);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    setPosition
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_setPosition
(JNIEnv * env, jobject self, jlong pointer, jlong posPointer) {

    QPointF * pos = (QPointF*)posPointer;
    QTextLayout * layout = (QTextLayout*)pointer;
    layout->setPosition(*pos);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    boundingRect
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextLayout_boundingRect
(JNIEnv * env, jobject self, jlong pointer) {

    QRectF * rect = new QRectF();
    QTextLayout * layout = (QTextLayout*)pointer;
    *rect = layout->boundingRect();
    return _P(rect);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    minimumWidth
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextLayout_minimumWidth
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLayout * layout = (QTextLayout*)pointer;
    return layout->minimumWidth();
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    maximumWidth
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextLayout_maximumWidth
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLayout * layout = (QTextLayout*)pointer;
    return layout->maximumWidth();
}
