#include"gui_global.h"
#include"java/layout/org_swdc_qt_internal_layout_SSpacerItem.h"

/*
 * Class:     org_swdc_qt_layout_SSpacer
 * Method:    createSpacer
 * Signature: (III)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_layout_SSpacerItem_createSpacer
(JNIEnv *, jobject, jint width, jint height, jint policy,jint vPolicy) {

    QSizePolicy::Policy sizePolicyW = QSizePolicy::Policy(policy);
    QSizePolicy::Policy sizePolicyV = QSizePolicy::Policy(vPolicy);

    QSpacerItem * item = new QSpacerItem(width,height,sizePolicyW,sizePolicyV);
    return (jlong)(intptr_t)item;
}

/*
 * Class:     org_swdc_qt_layout_SSpacer
 * Method:    doDispose
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_layout_SSpacerItem_doDispose
(JNIEnv * env, jobject self, jlong pointer) {
    QSpacerItem * item = (QSpacerItem*)pointer;
    delete item;
    return JNI_TRUE;
}

