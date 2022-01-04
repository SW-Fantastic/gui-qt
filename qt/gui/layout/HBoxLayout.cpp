#include"gui_global.h"
#include"java/layout/org_swdc_qt_internal_layout_SHBoxLayout.h"

/*
 * Class:     org_swdc_qt_layout_SHBoxLayout
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_layout_SHBoxLayout_create
  (JNIEnv * env, jobject self) {
    QHBoxLayout* boxLayout = new QHBoxLayout();
    return (jlong)(intptr_t)boxLayout;;
}
