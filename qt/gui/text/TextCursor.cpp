#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_STextCursor.h"

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_create__
(JNIEnv *, jobject) {

    QTextCursor * cursor = new QTextCursor();
    return _P(cursor);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_create__J
(JNIEnv * env, jobject self, jlong documentPointer) {

    QTextDocument * doc = (QTextDocument*)documentPointer;
    QTextCursor * cursor = new QTextCursor(doc);
    return _P(cursor);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    delete cursor;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    setPosition
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_setPosition
(JNIEnv * env, jobject self, jlong pointer, jint posVal, jint modeVal) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    QTextCursor::MoveMode mode = QTextCursor::MoveMode(modeVal);
    cursor->setPosition(posVal,mode);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    position
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextCursor_position
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    return cursor->position();
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    positionInBlock
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextCursor_positionInBlock
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    return cursor->positionInBlock();
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    anchor
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextCursor_anchor
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    return cursor->anchor();
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertText
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertText__JLjava_lang_String_2
(JNIEnv * env, jobject self, jlong pointer, jstring text) {

    const char * cText = env->GetStringUTFChars(text,0);
    QTextCursor * cursor = (QTextCursor*)pointer;
    cursor->insertText(QString(cText));
    env->ReleaseStringUTFChars(text,cText);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertText
 * Signature: (JLjava/lang/String;J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertText__JLjava_lang_String_2J
(JNIEnv * env, jobject self, jlong pointer, jstring text, jlong charFormatPointer) {

    QTextCharFormat * format = (QTextCharFormat*)charFormatPointer;
    const char * cText = env->GetStringUTFChars(text,0);
    QTextCursor * cursor = (QTextCursor*)pointer;
    cursor->insertText(QString(cText),*format);
    env->ReleaseStringUTFChars(text,cText);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    movePosition
 * Signature: (JIII)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextCursor_movePosition
(JNIEnv * env, jobject self, jlong pointer, jint opVal, jint modeVal, jint n) {

    QTextCursor::MoveMode mode = QTextCursor::MoveMode(modeVal);
    QTextCursor::MoveOperation op = QTextCursor::MoveOperation(opVal);
    QTextCursor * cursor = (QTextCursor*)pointer;
    return cursor->movePosition(op,mode,n) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    visualNavigation
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextCursor_visualNavigation
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    return cursor->visualNavigation() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    setVisualNavigation
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_setVisualNavigation
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    cursor->setVisualNavigation(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    setVerticalMovementX
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_setVerticalMovementX
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    cursor->setVerticalMovementX(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    verticalMovementX
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextCursor_verticalMovementX
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    return cursor->verticalMovementX();
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    setKeepPositionOnInsert
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_setKeepPositionOnInsert
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    cursor->setKeepPositionOnInsert(val);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    keepPositionOnInsert
 * Signature: (J)V
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextCursor_keepPositionOnInsert
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    return cursor->keepPositionOnInsert() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    deleteChar
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_deleteChar
  (JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    cursor->deleteChar();
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    deletePreviousChar
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_deletePreviousChar
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    cursor->deletePreviousChar();
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    select
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_select
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    QTextCursor::SelectionType type = QTextCursor::SelectionType(val);
    cursor->select(type);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    hasSelection
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextCursor_hasSelection
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    return cursor->hasSelection() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    hasComplexSelection
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextCursor_hasComplexSelection
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    return cursor->hasComplexSelection() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    removeSelectedText
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_removeSelectedText
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    cursor->removeSelectedText();
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    clearSelection
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_clearSelection
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    cursor->clearSelection();
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    selectionStart
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextCursor_selectionStart
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    return cursor->selectionStart();
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    selectionEnd
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextCursor_selectionEnd
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    return cursor->selectionEnd();
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    selectedText
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_STextCursor_selectedText
  (JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    std::string str = cursor->selectedText().toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    selection
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_selection
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    QTextDocumentFragment * fragment = new QTextDocumentFragment();
    *fragment = cursor->selection();
    return _P(fragment);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    block
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_block
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBlock * block = new QTextBlock();
    QTextCursor * cursor = (QTextCursor*)pointer;
    *block = cursor->block();
    return _P(block);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    charFormat
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_charFormat
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    QTextCharFormat * format = new QTextCharFormat();
    *format = cursor->charFormat();
    return _P(format);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    setCharFormat
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_setCharFormat
(JNIEnv * env, jobject self, jlong pointer, jlong charFormatPointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    QTextCharFormat * format = (QTextCharFormat*)charFormatPointer;
    cursor->setCharFormat(*format);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    mergeCharFormat
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_mergeCharFormat
(JNIEnv * env, jobject self, jlong pointer, jlong charFormatPointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    QTextCharFormat * format = (QTextCharFormat*)charFormatPointer;
    cursor->mergeCharFormat(*format);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    blockFormat
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_blockFormat
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    QTextBlockFormat * format = new QTextBlockFormat();
    *format = cursor->blockFormat();
    return _P(format);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    setBlockFormat
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_setBlockFormat
(JNIEnv * env, jobject self, jlong pointer, jlong blockFormatPointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    QTextBlockFormat * format = (QTextBlockFormat*)blockFormatPointer;
    cursor->setBlockFormat(*format);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    mergeBlockFormat
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_mergeBlockFormat
(JNIEnv * env, jobject self, jlong pointer, jlong blockFormatPointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    QTextBlockFormat * format = (QTextBlockFormat*)blockFormatPointer;
    cursor->mergeBlockFormat(*format);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    blockCharFormat
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_blockCharFormat
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    QTextCharFormat * format = new QTextCharFormat();
    *format = cursor->blockCharFormat();
    return _P(format);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    setBlockCharFormat
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_setBlockCharFormat
(JNIEnv * env, jobject self, jlong pointer, jlong blockCharFormatPointer) {

    QTextCharFormat * format = (QTextCharFormat*)blockCharFormatPointer;
    QTextCursor * cursor = (QTextCursor*)pointer;
    cursor->setBlockCharFormat(*format);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    mergeBlockCharFormat
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_mergeBlockCharFormat
(JNIEnv * env, jobject self, jlong pointer, jlong blockCharFormatPointer) {

    QTextCharFormat * format = (QTextCharFormat*)blockCharFormatPointer;
    QTextCursor * cursor = (QTextCursor*)pointer;
    cursor->mergeBlockCharFormat(*format);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    atBlockStart
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextCursor_atBlockStart
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    return cursor->atBlockStart() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    atBlockEnd
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextCursor_atBlockEnd
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    return cursor->atBlockEnd() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    atStart
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextCursor_atStart
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    return cursor->atStart() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    atEnd
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextCursor_atEnd
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    return cursor->atEnd()  ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertBlock
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertBlock__J
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    cursor->insertBlock();
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertBlock
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertBlock__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong formatPointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    QTextBlockFormat * format = (QTextBlockFormat*)formatPointer;
    cursor->insertBlock(*format);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertBlock
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertBlock__JJJ
(JNIEnv * env, jobject self, jlong pointer, jlong blockFormatPointer, jlong charFormatPointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    QTextBlockFormat * format = (QTextBlockFormat*)blockFormatPointer;
    QTextCharFormat * cFormat = (QTextCharFormat*)charFormatPointer;

    cursor->insertBlock(*format,*cFormat);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertList
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertList__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong listPointer){

    QTextListFormat * textList = (QTextListFormat*)listPointer;
    QTextCursor * cursor = (QTextCursor*)pointer;
    return _P(cursor->insertList(*textList));
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertList
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertList__JI
(JNIEnv * env, jobject self, jlong pointer, jint styleVal) {

    QTextListFormat::Style style = QTextListFormat::Style(styleVal);
    QTextCursor * cursor = (QTextCursor*)pointer;
    return _P(cursor->insertList(style));
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    createList
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_createList__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong listPointer) {

    QTextListFormat * textList = (QTextListFormat*)listPointer;
    QTextCursor * cursor = (QTextCursor*)pointer;
    return _P(cursor->createList(*textList));
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    createList
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_createList__JI
(JNIEnv * env, jobject self, jlong pointer, jint styleVal) {

    QTextListFormat::Style style = QTextListFormat::Style(styleVal);
    QTextCursor * cursor = (QTextCursor*)pointer;
    return _P(cursor->createList(style));
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    currentList
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_currentList
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    return _P(cursor->currentList());
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertTable
 * Signature: (JIII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertTable__JIII
(JNIEnv * env, jobject self, jlong pointer, jint rows, jint cols, jlong formatVal) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    QTextTableFormat *format = (QTextTableFormat *) formatVal;
    return _P(cursor->insertTable(rows,cols,*format));
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertTable
 * Signature: (JII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertTable__JII
(JNIEnv * env, jobject self, jlong pointer, jint rows, jint cols) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    return _P(cursor->insertTable(rows,cols));
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    currentTable
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_currentTable
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    return _P(cursor->currentTable());
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertFrame
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertFrame
(JNIEnv * env, jobject self, jlong pointer, jlong frameFormatPointer) {

    QTextFrameFormat * format = (QTextFrameFormat*)frameFormatPointer;
    QTextCursor * cursor = (QTextCursor*)pointer;
    return _P(cursor->insertFrame(*format));
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    currentFrame
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_currentFrame
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    return _P(cursor->currentFrame());
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertFragment
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertFragment
(JNIEnv * env, jobject self, jlong pointer, jlong fragmentPointer) {

    QTextDocumentFragment * frag = (QTextDocumentFragment*)fragmentPointer;
    QTextCursor * cursor = (QTextCursor*)pointer;
    cursor->insertFragment(*frag);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertImage
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertImage__JJI
(JNIEnv * env, jobject self, jlong pointer, jlong imageFormatPointer, jint posVal) {

    QTextFrameFormat::Position pos = QTextFrameFormat::Position(posVal);
    QTextImageFormat * imageFormat = (QTextImageFormat*)imageFormatPointer;
    QTextCursor * cursor = (QTextCursor*)pointer;
    cursor->insertImage(*imageFormat,pos);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertImage
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertImage__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong imageFormatPointer) {

    QTextImageFormat * imageFormat = (QTextImageFormat*)imageFormatPointer;
    QTextCursor * cursor = (QTextCursor*)pointer;
    cursor->insertImage(*imageFormat);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertImage
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertImage__JLjava_lang_String_2
(JNIEnv * env, jobject self, jlong pointer, jstring nameVal) {

    const char * cName = env->GetStringUTFChars(nameVal,0);
    QTextCursor * cursor = (QTextCursor*)pointer;
    cursor->insertImage(QString(cName));
    env->ReleaseStringUTFChars(nameVal,cName);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertImage
 * Signature: (JJLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertImage__JJLjava_lang_String_2
(JNIEnv * env, jobject self, jlong pointer, jlong imageFormatPointer, jstring nameVal) {

    const char * cName = env->GetStringUTFChars(nameVal,0);
    QImage * image = (QImage*)imageFormatPointer;
    QTextCursor * cursor = (QTextCursor*)pointer;
    cursor->insertImage(*image,QString(cName));
    env->ReleaseStringUTFChars(nameVal,cName);
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    beginEditBlock
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_beginEditBlock
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    cursor->beginEditBlock();
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    joinPreviousEditBlock
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_joinPreviousEditBlock
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    cursor->joinPreviousEditBlock();
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    endEditBlock
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_endEditBlock
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    cursor->endEditBlock();
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    isCopyOf
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextCursor_isCopyOf
(JNIEnv * env, jobject self, jlong pointer, jlong otherPointer) {

    QTextCursor * another = (QTextCursor*)otherPointer;
    QTextCursor * cursor = (QTextCursor*)pointer;
    return cursor->isCopyOf(*another) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    blockNumber
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextCursor_blockNumber
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    return cursor->blockNumber();
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    columnNumber
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextCursor_columnNumber
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    return cursor->columnNumber();
}

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    document
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_document
(JNIEnv * env, jobject self, jlong pointer) {

    QTextCursor * cursor = (QTextCursor*)pointer;
    return _P(cursor->document());
}
