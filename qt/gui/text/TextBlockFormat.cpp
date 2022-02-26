#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_STextBlockFormat.h"

/*
 * Class:     org_swdc_qt_internal_text_STextBlockFormat
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextBlockFormat_create
(JNIEnv *, jobject) {

    QTextBlockFormat * blockFormat = new QTextBlockFormat();
    return (jlong)(intptr_t)blockFormat;
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlockFormat
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextBlockFormat_dispose
(JNIEnv * env, jobject self, jlong pointer){

    QTextBlockFormat * format = (QTextBlockFormat*)pointer;
    delete format;
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlockFormat
 * Method:    isValid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextBlockFormat_isValid
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlockFormat * format = (QTextBlockFormat*)pointer;
    return format->isValid() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlockFormat
 * Method:    setAlignment
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextBlockFormat_setAlignment
(JNIEnv * env, jobject self, jlong pointer, jlong alignmentVal) {

    QTextBlockFormat * format = (QTextBlockFormat*)pointer;
    Qt::Alignment align = Qt::Alignment(alignmentVal);
    format->setAlignment(align);
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlockFormat
 * Method:    alignment
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextBlockFormat_alignment
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlockFormat * format = (QTextBlockFormat*)pointer;
    return (unsigned int)(format->alignment());
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlockFormat
 * Method:    setTopMargin
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextBlockFormat_setTopMargin
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextBlockFormat * format = (QTextBlockFormat*)pointer;
    format->setTopMargin(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlockFormat
 * Method:    topMargin
 * Signature: (J)J
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextBlockFormat_topMargin
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlockFormat * format = (QTextBlockFormat*)pointer;
    return format->topMargin();
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlockFormat
 * Method:    setBottomMargin
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextBlockFormat_setBottomMargin
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextBlockFormat * format = (QTextBlockFormat*)pointer;
    format->setBottomMargin(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlockFormat
 * Method:    bottomMargin
 * Signature: (J)J
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextBlockFormat_bottomMargin
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlockFormat * format = (QTextBlockFormat*)pointer;
    return format->bottomMargin();
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlockFormat
 * Method:    setLeftMargin
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextBlockFormat_setLeftMargin
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextBlockFormat * format = (QTextBlockFormat*)pointer;
    format->setLeftMargin(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlockFormat
 * Method:    leftMargin
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextBlockFormat_leftMargin
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlockFormat * format = (QTextBlockFormat*)pointer;
    return format->leftMargin();
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlockFormat
 * Method:    setRightMargin
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextBlockFormat_setRightMargin
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextBlockFormat * format = (QTextBlockFormat*)pointer;
    format->setRightMargin(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlockFormat
 * Method:    rightMargin
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextBlockFormat_rightMargin
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlockFormat * format = (QTextBlockFormat*)pointer;
    return format->rightMargin();
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlockFormat
 * Method:    setTextIndent
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextBlockFormat_setTextIndent
(JNIEnv * env, jobject self, jlong pointer, jdouble val) {

    QTextBlockFormat * format = (QTextBlockFormat*)pointer;
    format->setTextIndent(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlockFormat
 * Method:    textIndent
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextBlockFormat_textIndent
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlockFormat * format = (QTextBlockFormat*)pointer;
    return format->textIndent();
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlockFormat
 * Method:    setIndent
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextBlockFormat_setIndent
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QTextBlockFormat * format = (QTextBlockFormat*)pointer;
    format->setIndent(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlockFormat
 * Method:    indent
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextBlockFormat_indent
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlockFormat * format = (QTextBlockFormat*)pointer;
    return format->indent();
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlockFormat
 * Method:    setHeadingLevel
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextBlockFormat_setHeadingLevel
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QTextBlockFormat * format = (QTextBlockFormat*)pointer;
    format->setHeadingLevel(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlockFormat
 * Method:    headingLevel
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextBlockFormat_headingLevel
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlockFormat * format = (QTextBlockFormat*)pointer;
    return format->headingLevel();
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlockFormat
 * Method:    setLineHeight
 * Signature: (JDI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextBlockFormat_setLineHeight
(JNIEnv * env, jobject self, jlong pointer, jdouble val, jint heightType) {

    QTextBlockFormat * format = (QTextBlockFormat*)pointer;
    format->setLineHeight(val,heightType);
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlockFormat
 * Method:    lineHeight
 * Signature: (JDD)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextBlockFormat_lineHeight__JDD
(JNIEnv * env, jobject self, jlong pointer, jdouble scriptLineheight, jdouble scaling) {

    QTextBlockFormat * format = (QTextBlockFormat*)pointer;
    return format->lineHeight(scriptLineheight,scaling);
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlockFormat
 * Method:    lineHeight
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextBlockFormat_lineHeight__J
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlockFormat * format = (QTextBlockFormat*)pointer;
    return format->lineHeight();
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlockFormat
 * Method:    lineHeightType
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextBlockFormat_lineHeightType
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlockFormat * format = (QTextBlockFormat*)pointer;
    return format->lineHeightType();
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlockFormat
 * Method:    setNonBreakableLines
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextBlockFormat_setNonBreakableLines
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QTextBlockFormat * format = (QTextBlockFormat*)pointer;
    format->setNonBreakableLines(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlockFormat
 * Method:    nonBreakableLines
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextBlockFormat_nonBreakableLines
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlockFormat * format = (QTextBlockFormat*)pointer;
    return format->nonBreakableLines() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlockFormat
 * Method:    setPageBreakPolicy
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextBlockFormat_setPageBreakPolicy
(JNIEnv * env, jobject self, jlong pointer, jint pgBreakPolicy) {

    QTextBlockFormat * format = (QTextBlockFormat*)pointer;
    format->setPageBreakPolicy(QTextBlockFormat::PageBreakFlags(pgBreakPolicy));
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlockFormat
 * Method:    setMarker
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextBlockFormat_setMarker
(JNIEnv * env, jobject self, jlong pointer, jint marker) {

    QTextBlockFormat::MarkerType markerType = QTextBlockFormat::MarkerType(marker);
    QTextBlockFormat * format = (QTextBlockFormat*)pointer;
    format->setMarker(markerType);
}

/*
 * Class:     org_swdc_qt_internal_text_STextBlockFormat
 * Method:    marker
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextBlockFormat_marker
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlockFormat * format = (QTextBlockFormat*)pointer;
    return int(format->marker());
}
