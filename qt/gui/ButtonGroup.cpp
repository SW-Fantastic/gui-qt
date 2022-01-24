#include "gui_global.h"
#include "java/org_swdc_qt_internal_widgets_SButtonGroup.h"

/*
 * Class:     org_swdc_qt_internal_widgets_SButtonGroup
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SButtonGroup_create
(JNIEnv * env, jobject self) {

    QButtonGroup * group = new QButtonGroup();
    return (jlong)(intptr_t)group;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SButtonGroup
 * Method:    setExclusive
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SButtonGroup_setExclusive
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QButtonGroup * group = (QButtonGroup*)pointer;
    group->setExclusive(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SButtonGroup
 * Method:    exclusive
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SButtonGroup_exclusive
(JNIEnv * env, jobject self, jlong pointer){

    QButtonGroup * group = (QButtonGroup*)pointer;
    return group->exclusive();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SButtonGroup
 * Method:    addButton
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SButtonGroup_addButton
(JNIEnv * env, jobject self, jlong pointer, jlong button, jint val) {

    QButtonGroup * group = (QButtonGroup*)pointer;
    QAbstractButton * qButton = (QAbstractButton*)button;
    group->addButton(qButton,val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SButtonGroup
 * Method:    removeButton
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SButtonGroup_removeButton
(JNIEnv * env, jobject self, jlong pointer, jlong buttonPointer) {

    QButtonGroup * group = (QButtonGroup*)pointer;
    QAbstractButton * qButton = (QAbstractButton*)buttonPointer;
    group->removeButton(qButton);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SButtonGroup
 * Method:    buttons
 * Signature: (J)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_swdc_qt_internal_widgets_SButtonGroup_buttons
(JNIEnv * env, jobject self, jlong pointer) {

    QButtonGroup * group = (QButtonGroup*)pointer;
    QList<QAbstractButton*> buttons = group->buttons();

    jlong * values = new jlong[buttons.size()];
    for(int idx = 0; idx < buttons.size(); idx ++) {
        QAbstractButton * button = buttons[idx];
        values[idx] = (jlong)(intptr_t)button;
    }

    jlongArray arr = env->NewLongArray(buttons.size());
    env->SetLongArrayRegion(arr,0,buttons.size(),values);
    delete[] values;

    return arr;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SButtonGroup
 * Method:    checkedButton
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SButtonGroup_checkedButton
(JNIEnv * env, jobject self, jlong pointer) {

    QButtonGroup * group = (QButtonGroup*)pointer;
    QAbstractButton * checked = group->checkedButton();
    return (jlong)(intptr_t)checked;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SButtonGroup
 * Method:    button
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SButtonGroup_button
(JNIEnv * env, jobject self, jlong pointer, jint id) {

    QButtonGroup * group = (QButtonGroup*)pointer;
    QAbstractButton * button = group->button(id);
    return (jlong)(intptr_t)button;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SButtonGroup
 * Method:    setId
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SButtonGroup_setId
(JNIEnv * env, jobject self, jlong pointer, jlong buttonPointer, jint idVal) {

    QButtonGroup * group = (QButtonGroup*)pointer;
    QAbstractButton * button = (QAbstractButton*)buttonPointer;
    group->setId(button,idVal);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SButtonGroup
 * Method:    id
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SButtonGroup_id
(JNIEnv * env, jobject self, jlong pointer, jlong buttonPointer) {

    QButtonGroup * group = (QButtonGroup*)pointer;
    QAbstractButton * button = (QAbstractButton*)buttonPointer;
    return group->id(button);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SButtonGroup
 * Method:    checkedId
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SButtonGroup_checkedId
(JNIEnv * env, jobject self, jlong pointer) {

    QButtonGroup * group = (QButtonGroup*)pointer;
    return group->checkedId();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SButtonGroup
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SButtonGroup_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QButtonGroup * group = (QButtonGroup*)pointer;
    delete group;
    cleanJavaPointer(env,self);
}
