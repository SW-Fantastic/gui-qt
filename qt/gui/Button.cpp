#include "java/org_swdc_qt_internal_widgets_SButton.h"
#include "java/org_swdc_qt_internal_widgets_SWidget.h"
#include "gui_global.h"


const char* ButtonClassType = "org/swdc/qt/internal/widgets/SButton";


SPushButton::SPushButton(jobject self):QPushButton() {
    this->self = self;
}

SPushButton::SPushButton(jobject self,QWidget * parent):QPushButton(parent) {
    this->self = self;
}

void SPushButton::paintEvent(QPaintEvent *event) {
    QPushButton::paintEvent(event);
    paintEventWithJava(event,this->self,(jlong)(intptr_t)this);
}

void initializeButtonEvents(QPushButton * pushButton,jobject self) {

    pushButton->connect(pushButton,&QPushButton::clicked,[self]()->void {

        asyncExec([self]()-> void {
            JNIEnv* env = getContext();

            jclass buttonClazz = env->FindClass(ButtonClassType);
            jmethodID method = env->GetMethodID(buttonClazz,"onClickedEvent","()V");
            env->CallVoidMethod(self,method);

            releaseContext();
        });

    });

}


/*
 * Class:     org_swdc_qt_widgets_SButton
 * Method:    create
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SButton_create
(JNIEnv *jenv, jobject self,jlong parent, jstring text) {

    self = jenv->NewGlobalRef(self);

    SPushButton* btn = nullptr;
    if(parent > 0) {
        btn = new SPushButton(self,(QWidget*)parent);
    } else {
        btn = new SPushButton(self);
    }

    initializeWidgetEvents(btn,self);
    initializeButtonEvents(btn,self);

    return  (jlong)(intptr_t)btn;
}

