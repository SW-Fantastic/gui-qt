#include "java/types/SPushButton.h"

#include "java/org_swdc_qt_internal_widgets_SButton.h"

#include "java/types/SWidget.h"
#include "gui_global.h"


const char* ButtonClassType = "org/swdc/qt/internal/widgets/SButton";


SPushButton::SPushButton(jobject self):QPushButton() {
    this->self = self;
}

SPushButton::SPushButton(jobject self,QWidget * parent):QPushButton(parent) {
    this->self = self;
}

void SPushButton::setSelf(jobject obj) {
    if(this->self == NULL) {
        this->self = obj;
    }
}

void SPushButton::paintEvent(QPaintEvent *event) {
    QPushButton::paintEvent(event);
    paintEventWithJava(event,this->self,(jlong)(intptr_t)this);
}

void SPushButton::initializeButtonEvents(QPushButton * pushButton,jobject self) {

    pushButton->disconnect(pushButton,&QPushButton::clicked,pushButton,NULL);
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
(JNIEnv *jenv, jobject self,jlong parent) {

    self = jenv->NewGlobalRef(self);

    SPushButton* btn = nullptr;
    if(parent > 0) {
        btn = new SPushButton(self,(QWidget*)parent);
    } else {
        btn = new SPushButton(self);
    }

    SWidget::initializeWidgetEvents(btn,self);
    SPushButton::initializeButtonEvents(btn,self);

    return  (jlong)(intptr_t)btn;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SButton
 * Method:    wrap
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SButton_wrap
(JNIEnv * env, jobject self, jlong pointer) {

    self = env->NewGlobalRef(self);
    QPushButton * pushButton = (QPushButton*)pointer;
    SWidget::initializeWidgetEvents(pushButton,self);
    SPushButton::initializeButtonEvents(pushButton,self);

    SPushButton * sPushButton = qobject_cast<SPushButton *>(pushButton);

    if(sPushButton) {
        sPushButton->setSelf(self);
    }

}


