/* DO NOT EDIT THIS FILE - it is machine generated */
#include "../jni.h"
/* Header for class org_swdc_qt_internal_text_STextCursor */

#ifndef _Included_org_swdc_qt_internal_text_STextCursor
#define _Included_org_swdc_qt_internal_text_STextCursor
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_create__
  (JNIEnv *, jobject);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_create__J
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_dispose
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    setPosition
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_setPosition
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    position
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextCursor_position
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    positionInBlock
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextCursor_positionInBlock
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    anchor
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextCursor_anchor
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertText
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertText__JLjava_lang_String_2
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertText
 * Signature: (JLjava/lang/String;J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertText__JLjava_lang_String_2J
  (JNIEnv *, jobject, jlong, jstring, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    movePosition
 * Signature: (JIII)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextCursor_movePosition
  (JNIEnv *, jobject, jlong, jint, jint, jint);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    visualNavigation
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextCursor_visualNavigation
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    setVisualNavigation
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_setVisualNavigation
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    setVerticalMovementX
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_setVerticalMovementX
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    verticalMovementX
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextCursor_verticalMovementX
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    setKeepPositionOnInsert
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_setKeepPositionOnInsert
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    keepPositionOnInsert
 * Signature: (J)V
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextCursor_keepPositionOnInsert
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    deleteChar
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_deleteChar
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    deletePreviousChar
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_deletePreviousChar
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    select
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_select
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    hasSelection
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextCursor_hasSelection
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    hasComplexSelection
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextCursor_hasComplexSelection
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    removeSelectedText
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_removeSelectedText
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    clearSelection
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_clearSelection
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    selectionStart
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextCursor_selectionStart
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    selectionEnd
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextCursor_selectionEnd
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    selectedText
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_STextCursor_selectedText
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    selection
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_selection
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    block
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_block
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    charFormat
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_charFormat
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    setCharFormat
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_setCharFormat
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    mergeCharFormat
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_mergeCharFormat
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    blockFormat
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_blockFormat
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    setBlockFormat
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_setBlockFormat
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    mergeBlockFormat
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_mergeBlockFormat
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    blockCharFormat
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_blockCharFormat
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    setBlockCharFormat
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_setBlockCharFormat
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    mergeBlockCharFormat
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_mergeBlockCharFormat
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    atBlockStart
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextCursor_atBlockStart
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    atBlockEnd
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextCursor_atBlockEnd
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    atStart
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextCursor_atStart
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    atEnd
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextCursor_atEnd
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertBlock
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertBlock__J
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertBlock
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertBlock__JJ
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertBlock
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertBlock__JJJ
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertList
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertList__JJ
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertList
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertList__JI
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    createList
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_createList__JJ
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    createList
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_createList__JI
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    currentList
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_currentList
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertTable
 * Signature: (JIII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertTable__JIII
  (JNIEnv *, jobject, jlong, jint, jint, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertTable
 * Signature: (JII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertTable__JII
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    currentTable
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_currentTable
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertFrame
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertFrame
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    currentFrame
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_currentFrame
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertFragment
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertFragment
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertImage
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertImage__JJI
  (JNIEnv *, jobject, jlong, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertImage
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertImage__JJ
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertImage
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertImage__JLjava_lang_String_2
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    insertImage
 * Signature: (JJLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_insertImage__JJLjava_lang_String_2
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    beginEditBlock
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_beginEditBlock
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    joinPreviousEditBlock
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_joinPreviousEditBlock
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    endEditBlock
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextCursor_endEditBlock
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    isCopyOf
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextCursor_isCopyOf
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    blockNumber
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextCursor_blockNumber
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    columnNumber
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextCursor_columnNumber
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextCursor
 * Method:    document
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextCursor_document
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
