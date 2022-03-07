#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_STextTableCellFormat.h"

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_create
(JNIEnv *, jobject) {

    QTextTableCellFormat * format = new QTextTableCellFormat();
    return (jlong)(intptr_t)format;
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    delete format;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    setTopPadding
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_setTopPadding
  (JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    format->setTopPadding(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    topPadding
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_topPadding
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    return format->topPadding();
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    setBottomPadding
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_setBottomPadding
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    format->setBottomPadding(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    bottomPadding
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_bottomPadding
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    return format->bottomPadding();
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    setLeftPadding
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_setLeftPadding
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    format->setLeftPadding(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    leftPadding
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_leftPadding
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    return format->leftPadding();
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    setRightPadding
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_setRightPadding
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    format->setRightPadding(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    rightPadding
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_rightPadding
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    return format->rightPadding();
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    setPadding
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_setPadding
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    format->setPadding(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    setTopBorder
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_setTopBorder
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    format->setTopBorder(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    topBorder
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_topBorder
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    return format->topBorder();
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    setBottomBorder
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_setBottomBorder
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    format->setBottomBorder(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    bottomBorder
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_bottomBorder
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    return format->bottomBorder();
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    setLeftBorder
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_setLeftBorder
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    format->setLeftBorder(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    leftBorder
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_leftBorder
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    return format->leftBorder();
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    setRightBorder
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_setRightBorder
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    format->setRightBorder(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    rightBorder
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_rightBorder
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    return format->rightBorder();
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    setBorder
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_setBorder
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    format->setBorder(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    setTopBorderStyle
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_setTopBorderStyle
(JNIEnv * env, jobject self, jlong pointer, jint border) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    format->setTopBorderStyle(QTextFrameFormat::BorderStyle(border));
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    topBorderStyle
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_topBorderStyle
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    return int(format->topBorderStyle());
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    setBottomBorderStyle
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_setBottomBorderStyle
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    format->setBottomBorderStyle(QTextFrameFormat::BorderStyle(val));
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    bottomBorderStyle
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_bottomBorderStyle
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    return int(format->bottomBorderStyle());
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    setLeftBorderStyle
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_setLeftBorderStyle
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    format->setLeftBorderStyle(QTextFrameFormat::BorderStyle(val));
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    leftBorderStyle
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_leftBorderStyle
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    return int(format->leftBorderStyle());
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    setRightBorderStyle
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_setRightBorderStyle
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    format->setRightBorderStyle(QTextFrameFormat::BorderStyle(val));
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    rightBorderStyle
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_rightBorderStyle
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    return int(format->rightBorderStyle());
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    setBorderStyle
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_setBorderStyle
(JNIEnv * env, jobject self, jlong pointer, jint val){

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    format->setBorderStyle(QTextFrameFormat::BorderStyle(val));
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    setTopBorderBrush
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_setTopBorderBrush
(JNIEnv * env, jobject self, jlong pointer, jlong brushPointer) {

    QBrush * brush = (QBrush*)brushPointer;
    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    format->setTopBorderBrush(*brush);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    topBorderBrush
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_topBorderBrush
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    QBrush * brush = new QBrush();
    *brush = format->topBorderBrush();
    return (jlong)(intptr_t)brush;
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    setBottomBorderBrush
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_setBottomBorderBrush
(JNIEnv * env, jobject self, jlong pointer, jlong brushPointer) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    QBrush * brush = (QBrush*)brushPointer;
    format->setBottomBorderBrush(*brush);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    bottomBorderBrush
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_bottomBorderBrush
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    QBrush * brush = new QBrush();
    *brush = format->bottomBorderBrush();
    return (jlong)(intptr_t)brush;
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    setLeftBorderBrush
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_setLeftBorderBrush
(JNIEnv * env, jobject self, jlong pointer, jlong brushPointer) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    QBrush * brush = (QBrush*)brushPointer;
    format->setLeftBorderBrush(*brush);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    leftBorderBrush
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_leftBorderBrush
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    QBrush * brush = new QBrush();
    *brush = format->leftBorderBrush();
    return (jlong)(intptr_t)brush;
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    setRightBorderBrush
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_setRightBorderBrush
(JNIEnv * env, jobject self, jlong pointer, jlong brushPointer) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    QBrush * brush = (QBrush*)brushPointer;
    format->setRightBorderBrush(*brush);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    rightBorderBrush
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_rightBorderBrush
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    QBrush * brush = new QBrush();
    *brush = format->rightBorderBrush();
    return (jlong)(intptr_t)brush;
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCellFormat
 * Method:    setBorderBrush
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableCellFormat_setBorderBrush
(JNIEnv * env, jobject self, jlong pointer, jlong borderBrushPointer) {

    QBrush * brush = (QBrush*)borderBrushPointer;
    QTextTableCellFormat * format = (QTextTableCellFormat*)pointer;
    format->setBorderBrush(*brush);
}
