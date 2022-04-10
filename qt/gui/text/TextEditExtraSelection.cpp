#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_STextEditExtraSelection.h"

/*
 * Class:     org_swdc_qt_internal_text_STextEditExtraSelection
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextEditExtraSelection_create
(JNIEnv *, jobject) {

    QTextEdit::ExtraSelection * sel = new QTextEdit::ExtraSelection();
    return _P(sel);
}

/*
 * Class:     org_swdc_qt_internal_text_STextEditExtraSelection
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextEditExtraSelection_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit::ExtraSelection * sel = (QTextEdit::ExtraSelection*)pointer;
    delete sel;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_text_STextEditExtraSelection
 * Method:    cursor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextEditExtraSelection_cursor__J
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit::ExtraSelection * sel = (QTextEdit::ExtraSelection*)pointer;
    QTextCursor * cursor = new QTextCursor();
    *cursor = sel->cursor;
    return _P(cursor);
}

/*
 * Class:     org_swdc_qt_internal_text_STextEditExtraSelection
 * Method:    cursor
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextEditExtraSelection_cursor__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong cursorPointer) {

    QTextEdit::ExtraSelection * sel = (QTextEdit::ExtraSelection*)pointer;
    QTextCursor * cursor = (QTextCursor*)cursorPointer;
    sel->cursor = *cursor;
}

/*
 * Class:     org_swdc_qt_internal_text_STextEditExtraSelection
 * Method:    format
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextEditExtraSelection_format__J
(JNIEnv * env, jobject self, jlong pointer) {

    QTextEdit::ExtraSelection * sel = (QTextEdit::ExtraSelection*)pointer;
    QTextCharFormat * format = new QTextCharFormat();
    *format = sel->format;
    return _P(format);
}

/*
 * Class:     org_swdc_qt_internal_text_STextEditExtraSelection
 * Method:    format
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextEditExtraSelection_format__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong textFormatPointer) {

    QTextEdit::ExtraSelection * sel = (QTextEdit::ExtraSelection*)pointer;
    QTextCharFormat * format = (QTextCharFormat*)textFormatPointer;
    sel->format = *format;
}
