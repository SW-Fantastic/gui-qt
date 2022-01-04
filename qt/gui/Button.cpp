#include "java/org_swdc_qt_internal_widgets_SButton.h"
#include "gui_global.h"


const char* ButtonClassType = "org/swdc/qt/internal/widgets/SButton";

/*
 * Class:     org_swdc_qt_widgets_SButton
 * Method:    create
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SButton_create
(JNIEnv *jenv, jobject self,jlong parent, jstring text) {

    const char* textVal = jenv->GetStringUTFChars(text,JNI_FALSE);
    QString qText = QString(textVal);
    QPushButton* btn = nullptr;
    if(parent > 0) {
        btn = new QPushButton(qText,(QWidget*)parent);
    } else {
        btn = new QPushButton(qText);
    }

    self = jenv->NewGlobalRef(self);

    btn->connect(btn,&QPushButton::clicked,[self]()->void {

        asyncExec([self]()-> void {
            JNIEnv* env = getContext();

            jclass buttonClazz = env->FindClass(ButtonClassType);
            jmethodID method = env->GetMethodID(buttonClazz,"onClickedEvent","()V");
            env->CallVoidMethod(self,method);

            releaseContext();
        });

    });

    btn->connect(btn,&QPushButton::destroyed,[self]()->void {
        JNIEnv* env = getContext();

        cleanJavaPointer(env,self);
        env->DeleteGlobalRef(self);

        releaseContext();
    });

    return  (jlong)(intptr_t)btn;
}

