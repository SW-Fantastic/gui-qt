/* DO NOT EDIT THIS FILE - it is machine generated */
#include "jni.h"
#include "qpushbutton.h"
/* Header for class org_swdc_qt_internal_widgets_SButton */

#ifndef _Included_org_swdc_qt_internal_widgets_SButton
#define _Included_org_swdc_qt_internal_widgets_SButton
#ifdef __cplusplus
extern "C" {
#endif


class SPushButton :public QPushButton {

private:
    jobject self;
public:
    SPushButton(jobject self);
    SPushButton(jobject self,QWidget* parent);
protected:
    void paintEvent(QPaintEvent* event);
};


void initializeButtonEvents(QPushButton * pushButton,jobject self);


/*
 * Class:     org_swdc_qt_internal_widgets_SButton
 * Method:    create
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SButton_create
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_swdc_qt_internal_widgets_SButton
 * Method:    wrap
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SButton_wrap
  (JNIEnv *, jobject, jlong);


#ifdef __cplusplus
}
#endif
#endif
