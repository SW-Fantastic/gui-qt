/* DO NOT EDIT THIS FILE - it is machine generated */
#include "../jni.h"
/* Header for class org_swdc_qt_internal_common_SRealPoint */

#ifndef _Included_org_swdc_qt_internal_common_SRealPoint
#define _Included_org_swdc_qt_internal_common_SRealPoint
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_swdc_qt_internal_common_SRealPoint
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealPoint_create__
  (JNIEnv *, jobject);

/*
 * Class:     org_swdc_qt_internal_common_SRealPoint
 * Method:    create
 * Signature: (DD)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealPoint_create__DD
  (JNIEnv *, jobject, jdouble, jdouble);

/*
 * Class:     org_swdc_qt_internal_common_SRealPoint
 * Method:    x
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_common_SRealPoint_x
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_common_SRealPoint
 * Method:    y
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_common_SRealPoint_y
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_common_SRealPoint
 * Method:    setX
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealPoint_setX
  (JNIEnv *, jobject, jlong, jdouble);

/*
 * Class:     org_swdc_qt_internal_common_SRealPoint
 * Method:    setY
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealPoint_setY
  (JNIEnv *, jobject, jlong, jdouble);

/*
 * Class:     org_swdc_qt_internal_common_SRealPoint
 * Method:    transposed
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealPoint_transposed
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_common_SRealPoint
 * Method:    manhattanLength
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_common_SRealPoint_manhattanLength
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_common_SRealPoint
 * Method:    toPoint
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SRealPoint_toPoint
  (JNIEnv *, jobject,jlong);

/*
 * Class:     org_swdc_qt_internal_common_SRealPoint
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SRealPoint_dispose
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif