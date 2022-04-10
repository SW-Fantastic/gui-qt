#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_STextTable.h"

/*
 * Class:     org_swdc_qt_internal_text_STextTable
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextTable_create
(JNIEnv * env, jobject self, jlong documentPointer) {

    QTextDocument * doc = (QTextDocument*)documentPointer;
    QTextTable * table = new QTextTable(doc);
    return _P(table);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTable
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTable_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTable * table = (QTextTable*)pointer;
    delete table;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTable
 * Method:    resize
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTable_resize
(JNIEnv * env, jobject self, jlong pointer, jint rows, jint cols) {

    QTextTable * table = (QTextTable*)pointer;
    table->resize(rows,cols);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTable
 * Method:    insertRows
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTable_insertRows
(JNIEnv * env, jobject self, jlong pointer, jint pos, jint nums) {

    QTextTable * table = (QTextTable*)pointer;
    table->insertRows(pos,nums);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTable
 * Method:    insertColumns
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTable_insertColumns
(JNIEnv * env, jobject self, jlong pointer, jint pos, jint nums) {

    QTextTable * table = (QTextTable*)pointer;
    table->insertColumns(pos,nums);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTable
 * Method:    appendRows
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTable_appendRows
(JNIEnv * env, jobject self, jlong pointer, jint count) {

    QTextTable * table = (QTextTable*)pointer;
    table->appendRows(count);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTable
 * Method:    appendColumns
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTable_appendColumns
(JNIEnv * env, jobject self, jlong pointer, jint count) {

    QTextTable * table = (QTextTable*)pointer;
    table->appendColumns(count);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTable
 * Method:    removeRows
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTable_removeRows
(JNIEnv * env, jobject self, jlong pointer, jint pos, jint nums) {

    QTextTable * table = (QTextTable*)pointer;
    table->removeRows(pos,nums);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTable
 * Method:    removeColumns
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTable_removeColumns
(JNIEnv * env, jobject self, jlong pointer, jint pos, jint nums) {

    QTextTable * table = (QTextTable*)pointer;
    table->removeColumns(pos,nums);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTable
 * Method:    mergeCells
 * Signature: (JIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTable_mergeCells__JIIII
(JNIEnv * env, jobject self, jlong pointer, jint row, jint col, jint rowCount, jint colCount) {

    QTextTable * table = (QTextTable*)pointer;
    table->mergeCells(row,col,rowCount,colCount);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTable
 * Method:    mergeCells
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTable_mergeCells__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong cursorPointer) {

    QTextCursor * cursor = (QTextCursor*)cursorPointer;
    QTextTable * table = (QTextTable*)pointer;
    table->mergeCells(*cursor);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTable
 * Method:    splitCell
 * Signature: (JIIII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTable_splitCell
(JNIEnv * env, jobject self, jlong pointer, jint row, jint col, jint rowCount, jint colCount) {

    QTextTable * table = (QTextTable*)pointer;
    table->splitCell(row,col,rowCount,colCount);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTable
 * Method:    rows
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextTable_rows
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTable * table = (QTextTable*)pointer;
    return table->rows();
}

/*
 * Class:     org_swdc_qt_internal_text_STextTable
 * Method:    columns
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextTable_columns
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTable * table = (QTextTable*)pointer;
    return table->columns();
}

/*
 * Class:     org_swdc_qt_internal_text_STextTable
 * Method:    cellAt
 * Signature: (JII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextTable_cellAt__JII
(JNIEnv * env, jobject self, jlong pointer, jint row, jint col) {

    QTextTable * table = (QTextTable*)pointer;
    QTextTableCell * cell = new QTextTableCell();
    *cell = table->cellAt(row,col);
    return _P(cell);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTable
 * Method:    cellAt
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextTable_cellAt__JI
(JNIEnv * env, jobject self, jlong pointer, jint pos) {

    QTextTable * table = (QTextTable*)pointer;
    QTextTableCell * cell = new QTextTableCell();
    *cell = table->cellAt(pos);
    return _P(cell);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTable
 * Method:    cellAt
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextTable_cellAt__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong textCursorPointer) {

    QTextTable * table = (QTextTable*)pointer;
    QTextCursor * cursor =(QTextCursor*)textCursorPointer;
    QTextTableCell * cell = new QTextTableCell();
    *cell = table->cellAt(*cursor);
    return _P(cell);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTable
 * Method:    rowStart
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextTable_rowStart
(JNIEnv * env, jobject self, jlong pointer, jlong cursorPointer) {

    QTextCursor * cursor = (QTextCursor*)cursorPointer;
    QTextTable * table = (QTextTable*)pointer;

    QTextCursor * result = new QTextCursor();
    *result = table->rowStart(*cursor);
    return _P(result);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTable
 * Method:    rowEnd
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextTable_rowEnd
(JNIEnv * env, jobject self, jlong pointer, jlong cursorPointer) {


    QTextCursor * cursor = (QTextCursor*)cursorPointer;
    QTextTable * table = (QTextTable*)pointer;

    QTextCursor * result = new QTextCursor();
    *result = table->rowEnd(*cursor);
    return _P(result);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTable
 * Method:    setFormat
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextTable_setFormat
(JNIEnv * env, jobject self, jlong pointer, jlong tableFormatPointer) {

    QTextTable * table = (QTextTable*)pointer;
    QTextTableFormat * format = (QTextTableFormat*)tableFormatPointer;
    table->setFormat(*format);
}

/*
 * Class:     org_swdc_qt_internal_text_STextTable
 * Method:    format
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextTable_format
(JNIEnv * env, jobject self, jlong pointer) {

    QTextTable * table = (QTextTable*)pointer;
    QTextTableFormat * format = new QTextTableFormat();
    *format = table->format();
    return _P(format);
}
