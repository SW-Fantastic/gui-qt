#include "gui_global.h"
#include "java/text/org_swdc_qt_internal_text_STextOptionTab.h"

/*
 * Class:     org_swdc_qt_internal_text_STextOptionTab
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextOptionTab_create__
(JNIEnv *, jobject) {

    QTextOption::Tab * tab = new QTextOption::Tab();
    return (jlong)(intptr_t)tab;
}

/*
 * Class:     org_swdc_qt_internal_text_STextOptionTab
 * Method:    create
 * Signature: (DIC)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_text_STextOptionTab_create__DIC
(JNIEnv *, jobject, jdouble pos, jint typeVal, jchar declVal) {

    QTextOption::Tab * tab = new QTextOption::Tab(pos,QTextOption::TabType(typeVal),QChar(declVal));
    return (jlong)(intptr_t)tab;
}

/*
 * Class:     org_swdc_qt_internal_text_STextOptionTab
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextOptionTab_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QTextOption::Tab * option = (QTextOption::Tab *) pointer;
    delete option;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_text_STextOptionTab
 * Method:    position
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_swdc_qt_internal_text_STextOptionTab_position__J
(JNIEnv * env, jobject self, jlong pointer) {

    QTextOption::Tab * option = (QTextOption::Tab *) pointer;
    return option->position;
}

/*
 * Class:     org_swdc_qt_internal_text_STextOptionTab
 * Method:    position
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextOptionTab_position__JD
(JNIEnv * env, jobject self, jlong pointer, jdouble pos) {

    QTextOption::Tab * option = (QTextOption::Tab *) pointer;
    option->position = pos;
}

/*
 * Class:     org_swdc_qt_internal_text_STextOptionTab
 * Method:    type
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_text_STextOptionTab_type__J
(JNIEnv * env, jobject self, jlong pointer) {

    QTextOption::Tab * option = (QTextOption::Tab *) pointer;
    return int(option->type);
}

/*
 * Class:     org_swdc_qt_internal_text_STextOptionTab
 * Method:    type
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextOptionTab_type__JI
(JNIEnv * env, jobject self, jlong pointer, jint typeVal) {

    QTextOption::Tab * option = (QTextOption::Tab *) pointer;
    option->type = QTextOption::TabType(typeVal);
}

/*
 * Class:     org_swdc_qt_internal_text_STextOptionTab
 * Method:    delimiter
 * Signature: (J)C
 */
JNIEXPORT jchar JNICALL Java_org_swdc_qt_internal_text_STextOptionTab_delimiter__J
(JNIEnv * env, jobject self, jlong pointer) {

    QTextOption::Tab * option = (QTextOption::Tab *) pointer;
    return option->delimiter.unicode();
}

/*
 * Class:     org_swdc_qt_internal_text_STextOptionTab
 * Method:    delimiter
 * Signature: (JC)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_text_STextOptionTab_delimiter__JC
(JNIEnv * env, jobject self, jlong pointer, jchar delVal) {

    QTextOption::Tab * option = (QTextOption::Tab *) pointer;
    option->delimiter = QChar(delVal);
}
