#include"gui_global.h"
#include"java/layout/org_swdc_qt_internal_layout_SVBoxLayout.h"


/*
 * Class:     org_swdc_qt_layout_SVBoxLayout
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_layout_SVBoxLayout_create
(JNIEnv * env, jobject self) {
    QVBoxLayout* vboxLayout = new QVBoxLayout();
    return (jlong)(intptr_t)vboxLayout;
}
