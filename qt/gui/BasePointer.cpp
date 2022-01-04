#include"gui_global.h"
#include"java/org_swdc_qt_SBasePointer.h"

/*
 * Class:     org_swdc_qt_SBasePointer
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_SBasePointer_dispose
(JNIEnv * env, jobject self, jlong pointer){
    QObject* obj = (QObject*)pointer;
    delete obj;
}
