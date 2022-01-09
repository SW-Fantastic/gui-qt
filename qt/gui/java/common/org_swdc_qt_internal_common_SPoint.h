/* DO NOT EDIT THIS FILE - it is machine generated */
#include "../jni.h"
/* Header for class org_swdc_qt_internal_common_SPoint */

#ifndef _Included_org_swdc_qt_internal_common_SPoint
#define _Included_org_swdc_qt_internal_common_SPoint
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_swdc_qt_internal_common_SPoint
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SPoint_create__
  (JNIEnv *, jobject);

/*
 * Class:     org_swdc_qt_internal_common_SPoint
 * Method:    create
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SPoint_create__II
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_swdc_qt_internal_common_SPoint
 * Method:    x
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SPoint_x
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_common_SPoint
 * Method:    y
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SPoint_y
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_common_SPoint
 * Method:    setX
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SPoint_setX
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_common_SPoint
 * Method:    setY
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SPoint_setY
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_common_SPoint
 * Method:    manhattanLength
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_common_SPoint_manhattanLength
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_common_SPoint
 * Method:    transposed
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_common_SPoint_transposed
  (JNIEnv *, jobject, jlong);


/*
 * Class:     org_swdc_qt_internal_common_SPoint
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_common_SPoint_dispose
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
