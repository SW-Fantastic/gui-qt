#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_STextTableCell.h"

/*
 * Class:     org_swdc_qt_internal_text_STextTableCell
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextTableCell_create__
(JNIEnv *, jobject) {

    QTextTableCell * cell = new QTextTableCell();
    return _P(cell);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCell
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextTableCell_create__J
(JNIEnv * env, jobject self, jlong anotherPointer) {

    QTextTableCell * another = (QTextTableCell*)anotherPointer;
    QTextTableCell * cell = new QTextTableCell(*another);
    return _P(cell);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCell
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableCell_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCell * cell = (QTextTableCell*)pointer;
    delete cell;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCell
 * Method:    setFormat
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTableCell_setFormat
(JNIEnv * env, jobject self, jlong pointer, jlong textCharPointer) {

    QTextCharFormat * format = (QTextCharFormat*)textCharPointer;
    QTextTableCell * cell = (QTextTableCell*)pointer;
    cell->setFormat(*format);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCell
 * Method:    format
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextTableCell_format
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCell * cell = (QTextTableCell*)pointer;
    QTextCharFormat * format = new QTextCharFormat();
    *format = cell->format();

    return _P(format);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCell
 * Method:    row
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextTableCell_row
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCell * cell = (QTextTableCell*)pointer;
    return cell->row();
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCell
 * Method:    column
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextTableCell_column
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCell * cell = (QTextTableCell*)pointer;
    return cell->column();
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCell
 * Method:    rowSpan
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextTableCell_rowSpan
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCell * cell = (QTextTableCell*)pointer;
    return cell->rowSpan();
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCell
 * Method:    columnSpan
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextTableCell_columnSpan
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCell * cell = (QTextTableCell*)pointer;
    return cell->columnSpan();
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCell
 * Method:    isValid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextTableCell_isValid
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCell * cell = (QTextTableCell*)pointer;
    return cell->isValid() ? JNI_TRUE: JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCell
 * Method:    firstCursorPosition
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextTableCell_firstCursorPosition
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCell * cell = (QTextTableCell*)pointer;
    QTextCursor * cursor = new QTextCursor();
    *cursor = cell->firstCursorPosition();
    return _P(cursor);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCell
 * Method:    lastCursorPosition
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextTableCell_lastCursorPosition
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCell * cell = (QTextTableCell*)pointer;
    QTextCursor * cursor = new QTextCursor();
    *cursor = cell->lastCursorPosition();
    return _P(cursor);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCell
 * Method:    firstPosition
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextTableCell_firstPosition
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCell * cell = (QTextTableCell*)pointer;
    return cell->firstPosition();
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCell
 * Method:    lastPosition
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextTableCell_lastPosition
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCell * cell = (QTextTableCell*)pointer;
    return cell->lastPosition();
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCell
 * Method:    iterator
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextTableCell_iterator
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCell * cell = (QTextTableCell*)pointer;
    QTextFrame::Iterator * iter = new QTextFrame::Iterator();
    *iter = cell->begin();
    return _P(iter);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTableCell
 * Method:    tableCellFormatIndex
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextTableCell_tableCellFormatIndex
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTableCell * cell = (QTextTableCell*)pointer;
    return cell->tableCellFormatIndex();
}
