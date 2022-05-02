/* DO NOT EDIT THIS FILE - it is machine generated */
#include "../jni.h"
/* Header for class org_swdc_qt_internal_date_STime */

#ifndef _Included_org_swdc_qt_internal_date_STime
#define _Included_org_swdc_qt_internal_date_STime
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_STime_create
  (JNIEnv *, jobject);

/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_date_STime_dispose
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    isValid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_date_STime_isValid
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    hour
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_STime_hour
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    minute
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_STime_minute
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    second
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_STime_second
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    msec
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_STime_msec
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    setHMS
 * Signature: (JIIII)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_date_STime_setHMS
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint);

/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    addSecs
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_STime_addSecs
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    secsTo
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_STime_secsTo
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    addMSecs
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_STime_addMSecs
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    msecsTo
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_STime_msecsTo
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    equals
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_date_STime_equals
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    isBefore
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_date_STime_isBefore
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    isAfter
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_date_STime_isAfter
  (JNIEnv *, jobject, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif