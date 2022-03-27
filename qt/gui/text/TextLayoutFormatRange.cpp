#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_STextLayoutFormatRange.h"

/*
 * Class:     org_swdc_qt_internal_text_STextLayoutFormatRange
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextLayoutFormatRange_create
(JNIEnv *, jobject) {

    QTextLayout::FormatRange * range = new QTextLayout::FormatRange();
    return _P(range);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayoutFormatRange
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayoutFormatRange_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLayout::FormatRange * range = (QTextLayout::FormatRange*)pointer;
    delete range;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayoutFormatRange
 * Method:    start
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextLayoutFormatRange_start__J
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLayout::FormatRange * range = (QTextLayout::FormatRange*)pointer;
    return range->start;
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayoutFormatRange
 * Method:    start
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayoutFormatRange_start__JI
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QTextLayout::FormatRange * range = (QTextLayout::FormatRange*)pointer;
    range->start = val;
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayoutFormatRange
 * Method:    length
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextLayoutFormatRange_length__J
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLayout::FormatRange * range = (QTextLayout::FormatRange*)pointer;
    return range->length;
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayoutFormatRange
 * Method:    length
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayoutFormatRange_length__JI
(JNIEnv * env, jobject self, jlong pointer, jint length) {

    QTextLayout::FormatRange * range = (QTextLayout::FormatRange*)pointer;
    range->length = length;
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayoutFormatRange
 * Method:    format
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextLayoutFormatRange_format__J
(JNIEnv * env, jobject self, jlong pointer) {

    QTextLayout::FormatRange * range = (QTextLayout::FormatRange*)pointer;
    QTextCharFormat * format = new QTextCharFormat();
    *format = range->format;
    return _P(format);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayoutFormatRange
 * Method:    format
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayoutFormatRange_format__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong formatPointer) {

    QTextCharFormat * format = (QTextCharFormat*)formatPointer;
    QTextLayout::FormatRange * range = (QTextLayout::FormatRange*)pointer;
    range->format = *format;

}
