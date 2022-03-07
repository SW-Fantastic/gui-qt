#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_STextFrameFormat.h"
/*
 * Class:     org_swdc_qt_internal_text_STextFrameFormat
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextFrameFormat_create
(JNIEnv *, jobject) {

    QTextFrameFormat * format = new QTextFrameFormat();
    return (jlong)(intptr_t)format;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrameFormat
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFrameFormat_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFrameFormat* format = (QTextFrameFormat*)pointer;
    delete format;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrameFormat
 * Method:    setPosition
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFrameFormat_setPosition
  (JNIEnv * env, jobject self, jlong pointer, jint pos){

    QTextFrameFormat::Position posVal = QTextFrameFormat::Position(pos);
    QTextFrameFormat* format = (QTextFrameFormat*)pointer;
    format->setPosition(posVal);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrameFormat
 * Method:    position
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextFrameFormat_position
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFrameFormat* format = (QTextFrameFormat*)pointer;
    return int(format->position());
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrameFormat
 * Method:    setBorder
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFrameFormat_setBorder
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextFrameFormat* format = (QTextFrameFormat*)pointer;
    format->setBorder(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrameFormat
 * Method:    border
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextFrameFormat_border
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFrameFormat* format = (QTextFrameFormat*)pointer;
    return format->border();
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrameFormat
 * Method:    setBorderBrush
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFrameFormat_setBorderBrush
(JNIEnv * env, jobject self, jlong pointer, jlong brushPointer) {

    QBrush * brush = (QBrush*)brushPointer;
    QTextFrameFormat* format = (QTextFrameFormat*)pointer;
    format->setBorderBrush(*brush);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrameFormat
 * Method:    borderBrush
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextFrameFormat_borderBrush
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFrameFormat* format = (QTextFrameFormat*)pointer;
    QBrush brush = format->borderBrush();
    QBrush * target = new QBrush();
    *target = brush;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrameFormat
 * Method:    setBorderStyle
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFrameFormat_setBorderStyle
(JNIEnv * env, jobject self, jlong pointer, jint borderStyleVal) {

    QTextFrameFormat* format = (QTextFrameFormat*)pointer;
    QTextFrameFormat::BorderStyle style = QTextFrameFormat::BorderStyle(borderStyleVal);
    format->setBorderStyle(style);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrameFormat
 * Method:    borderStyle
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextFrameFormat_borderStyle
(JNIEnv * env, jobject self, jlong pointer){

    QTextFrameFormat* format = (QTextFrameFormat*)pointer;
    return int(format->borderStyle());
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrameFormat
 * Method:    setMargin
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFrameFormat_setMargin
(JNIEnv * env, jobject self, jlong pointer, jdouble marginVal){

    QTextFrameFormat* format = (QTextFrameFormat*)pointer;
    format->setMargin(marginVal);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrameFormat
 * Method:    margin
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextFrameFormat_margin
(JNIEnv * env, jobject self, jlong pointer){

    QTextFrameFormat* format = (QTextFrameFormat*)pointer;
    return format->margin();
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrameFormat
 * Method:    setTopMargin
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFrameFormat_setTopMargin
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextFrameFormat* format = (QTextFrameFormat*)pointer;
    format->setTopMargin(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrameFormat
 * Method:    topMargin
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextFrameFormat_topMargin
(JNIEnv * env, jobject self, jlong pointer){

    QTextFrameFormat* format = (QTextFrameFormat*)pointer;
    return format->topMargin();
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrameFormat
 * Method:    setBottomMargin
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFrameFormat_setBottomMargin
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextFrameFormat* format = (QTextFrameFormat*)pointer;
    format->setBottomMargin(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrameFormat
 * Method:    bottomMargin
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextFrameFormat_bottomMargin
(JNIEnv * env, jobject self, jlong pointer){

    QTextFrameFormat* format = (QTextFrameFormat*)pointer;
    return format->bottomMargin();
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrameFormat
 * Method:    setLeftMargin
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFrameFormat_setLeftMargin
(JNIEnv * env, jobject self, jlong pointer, jdouble val){

    QTextFrameFormat* format = (QTextFrameFormat*)pointer;
    format->setLeftMargin(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrameFormat
 * Method:    leftMargin
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextFrameFormat_leftMargin
(JNIEnv * env, jobject self, jlong pointer){

    QTextFrameFormat* format = (QTextFrameFormat*)pointer;
    return format->leftMargin();
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrameFormat
 * Method:    setRightMargin
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFrameFormat_setRightMargin
(JNIEnv * env, jobject self, jlong pointer, jdouble val){

    QTextFrameFormat* format = (QTextFrameFormat*)pointer;
    format->setRightMargin(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrameFormat
 * Method:    rightMargin
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextFrameFormat_rightMargin
(JNIEnv * env, jobject self, jlong pointer){

    QTextFrameFormat* format = (QTextFrameFormat*)pointer;
    return format->rightMargin();
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrameFormat
 * Method:    setPadding
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFrameFormat_setPadding
(JNIEnv * env, jobject self, jlong pointer, jdouble val){

    QTextFrameFormat* format = (QTextFrameFormat*)pointer;
    format->setPadding(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrameFormat
 * Method:    padding
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextFrameFormat_padding
(JNIEnv * env, jobject self, jlong pointer){

    QTextFrameFormat* format = (QTextFrameFormat*)pointer;
    return format->padding();
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrameFormat
 * Method:    setWidth
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFrameFormat_setWidth__JD
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextFrameFormat* format = (QTextFrameFormat*)pointer;
    format->setWidth(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrameFormat
 * Method:    setWidth
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFrameFormat_setWidth__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong lengPointer) {

    QTextLength * leng = (QTextLength*)lengPointer;
    QTextFrameFormat* format = (QTextFrameFormat*)pointer;
    format->setWidth(*leng);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrameFormat
 * Method:    width
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextFrameFormat_width
(JNIEnv * env, jobject self, jlong pointer){

    QTextFrameFormat* format = (QTextFrameFormat*)pointer;
    QTextLength leng = format->width();
    QTextLength * target = new QTextLength();
    *target = leng;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrameFormat
 * Method:    setHeight
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFrameFormat_setHeight__JD
(JNIEnv * env, jobject self, jlong pointer, jdouble height){

    QTextFrameFormat* format = (QTextFrameFormat*)pointer;
    format->setHeight(height);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrameFormat
 * Method:    setHeight
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFrameFormat_setHeight__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong lengPointer){

    QTextLength * leng = (QTextLength*)lengPointer;
    QTextFrameFormat* format = (QTextFrameFormat*)pointer;
    format->setHeight(*leng);
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrameFormat
 * Method:    height
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextFrameFormat_height
(JNIEnv * env, jobject self, jlong pointer) {

    QTextFrameFormat* format = (QTextFrameFormat*)pointer;
    QTextLength len = format->height();
    QTextLength * target = new QTextLength();
    *target = len;
    return (jlong)(intptr_t)target;
}

/*
 * Class:     org_swdc_qt_internal_text_STextFrameFormat
 * Method:    setPageBreakPolicy
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextFrameFormat_setPageBreakPolicy
(JNIEnv * env, jobject self, jlong pointer, jint flags){

    QTextFrameFormat* format = (QTextFrameFormat*)pointer;
    format->setPageBreakPolicy(QTextFormat::PageBreakFlags(flags));
}
