/* DO NOT EDIT THIS FILE - it is machine generated */
#include "jni.h"
#include <qmenubar.h>

/* Header for class org_swdc_qt_internal_widgets_SMenuBar */

#ifndef _Included_org_swdc_qt_internal_widgets_SMenuBar
#define _Included_org_swdc_qt_internal_widgets_SMenuBar
#ifdef __cplusplus
extern "C" {
#endif


class SMenuBar :public QMenuBar {

private:

    jobject self;

public:

    SMenuBar(jobject self);
    SMenuBar(jobject self,QWidget * widget);

protected:

    void paintEvent(QPaintEvent *);

};

/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_create
  (JNIEnv *, jobject);


/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    addAction
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_addAction
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    addMenu
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_addMenu__JJ
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    addMenu
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_addMenu__JLjava_lang_String_2
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    addSeparator
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_addSeparator
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    insertSeparator
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_insertSeparator
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    insertMenu
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_insertMenu
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    clear
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_clear
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    setActiveAction
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_setActiveAction
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    setDefaultUp
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_setDefaultUp
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    isDefaultUp
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_isDefaultUp
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    sizeHint
 * Signature: (J)Lorg/swdc/qt/beans/SSize;
 */
JNIEXPORT jobject JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_sizeHint
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    minimumSizeHint
 * Signature: (J)Lorg/swdc/qt/beans/SSize;
 */
JNIEXPORT jobject JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_minimumSizeHint
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    heightForWidth
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_heightForWidth
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_swdc_qt_internal_widgets_SMenuBar
 * Method:    setVisible
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SMenuBar_setVisible
  (JNIEnv *, jobject, jlong, jboolean);

#ifdef __cplusplus
}
#endif
#endif
