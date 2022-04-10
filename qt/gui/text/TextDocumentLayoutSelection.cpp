#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_STextDocumentLayoutSelection.h"

/*
 * Class:     org_swdc_qt_internal_text_STextLayoutSelection
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocumentLayoutSelection_create
(JNIEnv *, jobject) {

    QAbstractTextDocumentLayout::Selection * sel = new QAbstractTextDocumentLayout::Selection();
    return _P(sel);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayoutSelection
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextDocumentLayoutSelection_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractTextDocumentLayout::Selection * sel = (QAbstractTextDocumentLayout::Selection*)pointer;
    delete sel;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayoutSelection
 * Method:    cursor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocumentLayoutSelection_cursor__J
(JNIEnv * env, jobject self, jlong pointer) {

   QAbstractTextDocumentLayout::Selection * sel = (QAbstractTextDocumentLayout::Selection*)pointer;
   QTextCursor * cursor = new QTextCursor();
   *cursor = sel->cursor;
   return _P(cursor);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayoutSelection
 * Method:    cursor
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextDocumentLayoutSelection_cursor__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong cursorPointer) {

   QAbstractTextDocumentLayout::Selection * sel = (QAbstractTextDocumentLayout::Selection*)pointer;
   QTextCursor * cursor = (QTextCursor*)cursorPointer;
   sel->cursor = *cursor;
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayoutSelection
 * Method:    format
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextDocumentLayoutSelection_format__J
(JNIEnv * env, jobject self, jlong pointer) {

    QAbstractTextDocumentLayout::Selection * sel = (QAbstractTextDocumentLayout::Selection*)pointer;
    QTextCharFormat * format = new QTextCharFormat();
    *format = sel->format;
    return _P(format);
}

/*
 * Class:     org_swdc_qt_internal_text_STextLayoutSelection
 * Method:    format
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextDocumentLayoutSelection_format__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong formatPointer) {

    QAbstractTextDocumentLayout::Selection * sel = (QAbstractTextDocumentLayout::Selection*)pointer;
    QTextCharFormat * format = (QTextCharFormat*)formatPointer;
    sel->format = *format;
}
