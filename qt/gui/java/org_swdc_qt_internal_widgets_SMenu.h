/* DO NOT EDIT THIS FILE - it is machine generated */
#include "jni.h"
#include <qmenu.h>

/* Header for class org_swdc_qt_internal_widgets_SMenu */

#ifndef _Included_org_swdc_qt_internal_widgets_SMenu
#define _Included_org_swdc_qt_internal_widgets_SMenu
#ifdef __cplusplus
extern "C" {
#endif


void initializeMenuEvents(JNIEnv * env,jobject self,QMenu* menu);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenu_create
  (JNIEnv *, jobject);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    addAction
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenu_addAction__JLjava_lang_String_2
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    addAction
 * Signature: (JJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenu_addAction__JJLjava_lang_String_2
  (JNIEnv *, jobject, jlong, jlong, jstring);


/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    popup
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenu_popup__JJ
  (JNIEnv *, jobject, jlong, jlong);


/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    popup
 * Signature: (JJII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenu_popup__JJII
  (JNIEnv *, jobject, jlong, jlong, jint, jint);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    icon
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenu_icon
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    setIcon
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenu_setIcon
  (JNIEnv *, jobject, jlong, jlong);


/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    wrap
 * Signature: (J)J
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenu_wrap
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    addMenu
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenu_addMenu__JJ
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    addMenu
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenu_addMenu__JLjava_lang_String_2
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    addMenu
 * Signature: (JJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenu_addMenu__JJLjava_lang_String_2
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    addSeparator
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenu_addSeparator
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    addSection
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenu_addSection
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    insertMenu
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenu_insertMenu
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    insertSeparator
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenu_insertSeparator
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    insertSection
 * Signature: (JJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenu_insertSection
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    setTearOffEnabled
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenu_setTearOffEnabled
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    isTearOffEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SMenu_isTearOffEnabled
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    isTearOffMenuVisible
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SMenu_isTearOffMenuVisible
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    showTearOffMenu
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenu_showTearOffMenu
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    hideTearOffMenu
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenu_hideTearOffMenu
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    setDefaultAction
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenu_setDefaultAction
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    setActiveAction
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenu_setActiveAction
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    separatorsCollapsible
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SMenu_separatorsCollapsible
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    setSeparatorsCollapsible
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenu_setSeparatorsCollapsible
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    toolTipsVisible
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SMenu_toolTipsVisible
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    setToolTipsVisible
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenu_setToolTipsVisible
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    title
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SMenu_title
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    setTitle
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenu_setTitle
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    isEmpty
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SMenu_isEmpty
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenu
 * Method:    clear
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenu_clear
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
