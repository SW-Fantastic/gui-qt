/* DO NOT EDIT THIS FILE - it is machine generated */
#include "jni.h"
/* Header for class org_swdc_qt_internal_widgets_SButtonGroup */

#ifndef _Included_org_swdc_qt_internal_widgets_SButtonGroup
#define _Included_org_swdc_qt_internal_widgets_SButtonGroup
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_swdc_qt_internal_widgets_SButtonGroup
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SButtonGroup_create
  (JNIEnv *, jobject);

/*
 * Class:     org_swdc_qt_internal_widgets_SButtonGroup
 * Method:    setExclusive
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SButtonGroup_setExclusive
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_swdc_qt_internal_widgets_SButtonGroup
 * Method:    exclusive
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SButtonGroup_exclusive
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SButtonGroup
 * Method:    addButton
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SButtonGroup_addButton
  (JNIEnv *, jobject, jlong, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_widgets_SButtonGroup
 * Method:    removeButton
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SButtonGroup_removeButton
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SButtonGroup
 * Method:    buttons
 * Signature: (J)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_swdc_qt_internal_widgets_SButtonGroup_buttons
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SButtonGroup
 * Method:    checkedButton
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SButtonGroup_checkedButton
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SButtonGroup
 * Method:    button
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SButtonGroup_button
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_widgets_SButtonGroup
 * Method:    setId
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SButtonGroup_setId
  (JNIEnv *, jobject, jlong, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_widgets_SButtonGroup
 * Method:    id
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SButtonGroup_id
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SButtonGroup
 * Method:    checkedId
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SButtonGroup_checkedId
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SButtonGroup
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SButtonGroup_dispose
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
