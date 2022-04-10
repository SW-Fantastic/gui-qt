/* DO NOT EDIT THIS FILE - it is machine generated */
#include "../jni.h"
/* Header for class org_swdc_qt_internal_text_STextLayout */

#ifndef _Included_org_swdc_qt_internal_text_STextLayout
#define _Included_org_swdc_qt_internal_text_STextLayout
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextLayout_create__
  (JNIEnv *, jobject);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    create
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextLayout_create__Ljava_lang_String_2
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_dispose
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    setFont
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_setFont
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    font
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextLayout_font
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    setText
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_setText
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    text
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_STextLayout_text
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    setTextOption
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_setTextOption
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    textOption
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextLayout_textOption
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    setPreeditArea
 * Signature: (JILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_setPreeditArea
  (JNIEnv *, jobject, jlong, jint, jstring);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    preeditAreaPosition
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextLayout_preeditAreaPosition
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    preeditAreaText
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_STextLayout_preeditAreaText
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    setFormats
 * Signature: (J[J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_setFormats
  (JNIEnv *, jobject, jlong, jlongArray);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    formats
 * Signature: (J)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_swdc_qt_internal_text_STextLayout_formats
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    clearFormats
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_clearFormats
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    setCacheEnabled
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_setCacheEnabled
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    cacheEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextLayout_cacheEnabled
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    setCursorMoveStyle
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_setCursorMoveStyle
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    cursorMoveStyle
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextLayout_cursorMoveStyle
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    beginLayout
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_beginLayout
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    endLayout
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_endLayout
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    clearLayout
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_clearLayout
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    createLine
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextLayout_createLine
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    lineCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextLayout_lineCount
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    lineAt
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextLayout_lineAt
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    lineForTextPosition
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextLayout_lineForTextPosition
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    isValidCursorPosition
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_STextLayout_isValidCursorPosition
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    nextCursorPosition
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextLayout_nextCursorPosition
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    previousCursorPosition
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextLayout_previousCursorPosition
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    leftCursorPosition
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextLayout_leftCursorPosition
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    rightCursorPosition
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextLayout_rightCursorPosition
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    draw
 * Signature: (JJJ[JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_draw
  (JNIEnv *, jobject, jlong, jlong, jlong, jlongArray, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    drawCursor
 * Signature: (JJJI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_drawCursor__JJJI
  (JNIEnv *, jobject, jlong, jlong, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    drawCursor
 * Signature: (JJJII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_drawCursor__JJJII
  (JNIEnv *, jobject, jlong, jlong, jlong, jint, jint);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    position
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextLayout_position
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    setPosition
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextLayout_setPosition
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    boundingRect
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextLayout_boundingRect
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    minimumWidth
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextLayout_minimumWidth
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_STextLayout
 * Method:    maximumWidth
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextLayout_maximumWidth
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif