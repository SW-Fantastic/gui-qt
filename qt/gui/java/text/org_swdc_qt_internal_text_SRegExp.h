/* DO NOT EDIT THIS FILE - it is machine generated */
#include "../jni.h"
/* Header for class org_swdc_qt_internal_text_SRegExp */

#ifndef _Included_org_swdc_qt_internal_text_SRegExp
#define _Included_org_swdc_qt_internal_text_SRegExp
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_SRegExp_create__
  (JNIEnv *, jobject);

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_SRegExp_create__J
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    create
 * Signature: (Ljava/lang/String;II)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_SRegExp_create__Ljava_lang_String_2II
  (JNIEnv *, jobject, jstring, jint, jint);

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_SRegExp_dispose
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    isEmpty
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_SRegExp_isEmpty
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    isValid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_SRegExp_isValid
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    pattern
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_SRegExp_pattern
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    setPattern
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_SRegExp_setPattern
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    caseSensitivity
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_SRegExp_caseSensitivity
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    setCaseSensitivity
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_SRegExp_setCaseSensitivity
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    patternSyntax
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_SRegExp_patternSyntax
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    setPatternSyntax
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_SRegExp_setPatternSyntax
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    isMinimal
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_SRegExp_isMinimal
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    setMinimal
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_SRegExp_setMinimal
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    exactMatch
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_text_SRegExp_exactMatch
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    indexIn
 * Signature: (JLjava/lang/String;II)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_SRegExp_indexIn
  (JNIEnv *, jobject, jlong, jstring, jint, jint);

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    lastIndexIn
 * Signature: (JLjava/lang/String;II)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_SRegExp_lastIndexIn
  (JNIEnv *, jobject, jlong, jstring, jint, jint);

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    matchedLength
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_SRegExp_matchedLength
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    captureCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_SRegExp_captureCount
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    capturedTexts
 * Signature: (J)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_org_swdc_qt_internal_text_SRegExp_capturedTexts
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    cap
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_SRegExp_cap
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    pos
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_SRegExp_pos
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    errorString
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_SRegExp_errorString
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_text_SRegExp
 * Method:    escape
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_text_SRegExp_escape
  (JNIEnv *, jclass, jstring);

#ifdef __cplusplus
}
#endif
#endif