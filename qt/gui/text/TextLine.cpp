#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_STextLine.h"


/*
 * Class:     org_swdc_qt_internal_text_STextLine
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextLine_create
(JNIEnv *, jobject) {

    QTextLine * line = new QTextLine();
    return _P(line);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLine
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLine_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLine * line = (QTextLine*)pointer;
    delete line;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLine
 * Method:    isValid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextLine_isValid
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLine * line = (QTextLine*)pointer;
    return line->isValid() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextLine
 * Method:    rect
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextLine_rect
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLine * line = (QTextLine*)pointer;
    QRectF * rect = new QRectF();
    *rect = line->rect();
    return _P(rect);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLine
 * Method:    x
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextLine_x
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLine * line = (QTextLine*)pointer;
    return line->x();
}

/*
 * Class:     org_swdc_qt_internal_text_STextLine
 * Method:    y
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextLine_y
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLine * line = (QTextLine*)pointer;
    return line->y();
}

/*
 * Class:     org_swdc_qt_internal_text_STextLine
 * Method:    width
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextLine_width
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLine * line = (QTextLine*)pointer;
    return line->width();
}

/*
 * Class:     org_swdc_qt_internal_text_STextLine
 * Method:    ascent
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextLine_ascent
(JNIEnv * env, jobject self, jlong pointer){

    QTextLine * line = (QTextLine*)pointer;
    return line->ascent();
}

/*
 * Class:     org_swdc_qt_internal_text_STextLine
 * Method:    descent
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextLine_descent
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLine * line = (QTextLine*)pointer;
    return line->descent();
}

/*
 * Class:     org_swdc_qt_internal_text_STextLine
 * Method:    height
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextLine_height
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLine * line = (QTextLine*)pointer;
    return line->height();
}

/*
 * Class:     org_swdc_qt_internal_text_STextLine
 * Method:    leading
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextLine_leading
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLine * line = (QTextLine*)pointer;
    return line->leading();
}

/*
 * Class:     org_swdc_qt_internal_text_STextLine
 * Method:    setLeadingIncluded
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLine_setLeadingIncluded
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QTextLine * line = (QTextLine*)pointer;
    line->setLeadingIncluded(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLine
 * Method:    leadingIncluded
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextLine_leadingIncluded
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLine * line = (QTextLine*)pointer;
    return line->leadingIncluded() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextLine
 * Method:    naturalTextWidth
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextLine_naturalTextWidth
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLine * line = (QTextLine*)pointer;
    return line->naturalTextWidth();
}

/*
 * Class:     org_swdc_qt_internal_text_STextLine
 * Method:    horizontalAdvance
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextLine_horizontalAdvance
(JNIEnv * env, jobject self, jlong pointer){

    QTextLine * line = (QTextLine*)pointer;
    return line->horizontalAdvance();
}

/*
 * Class:     org_swdc_qt_internal_text_STextLine
 * Method:    naturalTextRect
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextLine_naturalTextRect
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLine * line = (QTextLine*)pointer;
    QRectF * rect = new QRectF();
    *rect = line->naturalTextRect();
    return _P(rect);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLine
 * Method:    cursorToX
 * Signature: (JII)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextLine_cursorToX
(JNIEnv * env, jobject self, jlong pointer, jint pos, jint edgeVal) {

    QTextLine::Edge edge = QTextLine::Edge(edgeVal);
    QTextLine * line = (QTextLine*)pointer;
    return line->cursorToX(pos,edge);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLine
 * Method:    xToCursor
 * Signature: (JDI)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextLine_xToCursor
(JNIEnv * env, jobject self, jlong pointer, jdouble x, jint posVal) {

    QTextLine::CursorPosition pos = QTextLine::CursorPosition(posVal);
    QTextLine * line = (QTextLine*)pointer;
    return line->xToCursor(x,pos);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLine
 * Method:    setLineWidth
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLine_setLineWidth
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextLine * line = (QTextLine*)pointer;
    line->setLineWidth(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLine
 * Method:    setNumColumns
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLine_setNumColumns__JI
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QTextLine * line = (QTextLine*)pointer;
    line->setNumColumns(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLine
 * Method:    setNumColumns
 * Signature: (JID)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLine_setNumColumns__JID
(JNIEnv * env, jobject self, jlong pointer, jint col, jdouble width) {

    QTextLine * line = (QTextLine*)pointer;
    line->setNumColumns(col,width);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLine
 * Method:    setPosition
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLine_setPosition
(JNIEnv * env, jobject self, jlong pointer, jlong posPointer) {

    QPointF * pos = (QPointF*)posPointer;
    QTextLine * line = (QTextLine*)pointer;
    line->setPosition(*pos);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLine
 * Method:    position
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextLine_position
(JNIEnv * env, jobject self, jlong pointer) {

    QPointF * posF = new QPointF();
    QTextLine * line = (QTextLine*)pointer;
    *posF = line->position();
    return _P(posF);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLine
 * Method:    textStart
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextLine_textStart
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLine * line = (QTextLine*)pointer;
    return line->textStart();
}

/*
 * Class:     org_swdc_qt_internal_text_STextLine
 * Method:    textLength
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextLine_textLength
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLine * line = (QTextLine*)pointer;
    return line->textLength();
}

/*
 * Class:     org_swdc_qt_internal_text_STextLine
 * Method:    lineNumber
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextLine_lineNumber
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLine * line = (QTextLine*)pointer;
    return line->lineNumber();
}

/*
 * Class:     org_swdc_qt_internal_text_STextLine
 * Method:    draw
 * Signature: (JJJJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLine_draw
(JNIEnv * env, jobject self, jlong pointer, jlong painterPointer, jlong posPointer, jlong rangePointer) {

    QPainter * painter = (QPainter*)painterPointer;
    QPointF * pos = (QPointF*)posPointer;
    QTextLayout::FormatRange * range = (QTextLayout::FormatRange*)rangePointer;
    QTextLine * line = (QTextLine*)pointer;
    line->draw(painter,*pos,range);
}
