#include "gui_global.h"
#include "java/types/STextBrowser.h"
#include "java/types/SWidget.h"

#include "java/org_swdc_qt_internal_widgets_STextBrowser.h"

STextBrowser::STextBrowser(jobject self) {
    this->self = self;
}

STextBrowser::STextBrowser(jobject self, QWidget * parent):QTextBrowser(parent) {
    this->self = self;
}

void STextBrowser::paintEvent(QPaintEvent *e) {
    QTextBrowser::paintEvent(e);
    paintEventWithJava(e,this->self,_P(this));
}


/*
 * Class:     org_swdc_qt_internal_widgets_STextBrowser
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_STextBrowser_create
(JNIEnv * env, jobject self, jlong pointer) {

    STextBrowser * browser = nullptr;
    self = env->NewGlobalRef(self);
    if(pointer > 0) {
        QWidget * widget = (QWidget*)pointer;
        browser = new STextBrowser(self,widget);
    } else {
        browser = new STextBrowser(self);
    }

    SWidget::initializeWidgetEvents(browser,self);
    return _P(browser);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextBrowser
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextBrowser_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBrowser * browser = (QTextBrowser*)pointer;
    delete browser;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextBrowser
 * Method:    source
 * Signature: (J)J
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_STextBrowser_source
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBrowser * browser = (QTextBrowser*)pointer;
    std::string str = browser->source().toString().toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextBrowser
 * Method:    sourceType
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_STextBrowser_sourceType
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBrowser * browser = (QTextBrowser*)pointer;
    return int(browser->sourceType());
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextBrowser
 * Method:    searchPaths
 * Signature: (J)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_org_swdc_qt_internal_widgets_STextBrowser_searchPaths
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBrowser * browser = (QTextBrowser*)pointer;
    QStringList paths = browser->searchPaths();
    return asJavaStringArray(env,paths);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextBrowser
 * Method:    setSearchPaths
 * Signature: (J[Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextBrowser_setSearchPaths
(JNIEnv * env, jobject self, jlong pointer, jobjectArray arrs) {

    QStringList list;

    int len = env->GetArrayLength(arrs);
    for(int idx = 0; idx < len; idx ++) {
        jstring strItem = (jstring)env->GetObjectArrayElement(arrs,idx);
        const char * item = env->GetStringUTFChars(strItem, 0);
        list.append(QString(item));
        env->ReleaseStringUTFChars(strItem,item);
    }

    QTextBrowser * browser = (QTextBrowser*)pointer;
    browser->setSearchPaths(list);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextBrowser
 * Method:    loadResource
 * Signature: (JILjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_STextBrowser_loadResource
(JNIEnv * env, jobject self, jlong pointer, jint resType, jstring urlVal) {

    QTextDocument::ResourceType type = QTextDocument::ResourceType(resType);
    const char * str = env->GetStringUTFChars(urlVal,0);
    QString urlStr(str);
    QUrl url(urlStr);

    QVariant * variant = new QVariant();
    QTextBrowser * browser = (QTextBrowser*)pointer;
    *variant = browser->loadResource(type,url);
    env->ReleaseStringUTFChars(urlVal,str);

    return _P(variant);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextBrowser
 * Method:    isBackwardAvailable
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_STextBrowser_isBackwardAvailable
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBrowser * browser = (QTextBrowser*)pointer;
    return browser->isBackwardAvailable() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextBrowser
 * Method:    isForwardAvailable
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_STextBrowser_isForwardAvailable
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBrowser * browser = (QTextBrowser*)pointer;
    return browser->isForwardAvailable() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextBrowser
 * Method:    clearHistory
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextBrowser_clearHistory
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBrowser * browser = (QTextBrowser*)pointer;
    browser->clearHistory();
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextBrowser
 * Method:    historyTitle
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_STextBrowser_historyTitle
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QTextBrowser * browser = (QTextBrowser*)pointer;
    std::string title = browser->historyTitle(val).toStdString();
    return asJavaString(env,title.c_str());
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextBrowser
 * Method:    historyUrl
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_STextBrowser_historyUrl
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QTextBrowser * browser = (QTextBrowser*)pointer;
    std::string str = browser->historyUrl(val).toString().toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextBrowser
 * Method:    backwardHistoryCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_STextBrowser_backwardHistoryCount
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBrowser * browser = (QTextBrowser*)pointer;
    return browser->backwardHistoryCount();
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextBrowser
 * Method:    forwardHistoryCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_STextBrowser_forwardHistoryCount
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBrowser * browser = (QTextBrowser*)pointer;
    return browser->forwardHistoryCount();
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextBrowser
 * Method:    openExternalLinks
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_STextBrowser_openExternalLinks
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBrowser * browser = (QTextBrowser*)pointer;
    return browser->openExternalLinks() ?  JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextBrowser
 * Method:    setOpenExternalLinks
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextBrowser_setOpenExternalLinks
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QTextBrowser * browser = (QTextBrowser*)pointer;
    browser->setOpenExternalLinks(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextBrowser
 * Method:    openLinks
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_STextBrowser_openLinks
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBrowser * browser = (QTextBrowser*)pointer;
    return browser->openExternalLinks() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextBrowser
 * Method:    setOpenLinks
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextBrowser_setOpenLinks
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QTextBrowser * browser = (QTextBrowser*)pointer;
    browser->setOpenLinks(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextBrowser
 * Method:    setSource
 * Signature: (JLjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextBrowser_setSource
(JNIEnv * env, jobject self, jlong pointer, jstring str, jint type) {

    const char * cStr = env->GetStringUTFChars(str,0);
    QString qstr(cStr);
    QUrl url(qstr);

    QTextDocument::ResourceType typeVal = QTextDocument::ResourceType(type);

    QTextBrowser * browser = (QTextBrowser*)pointer;
    browser->setSource(url,typeVal);

    env->ReleaseStringUTFChars(str,cStr);
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextBrowser
 * Method:    backward
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextBrowser_backward
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBrowser * browser = (QTextBrowser*)pointer;
    browser->backward();
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextBrowser
 * Method:    forward
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextBrowser_forward
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBrowser * browser = (QTextBrowser*)pointer;
    browser->forward();
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextBrowser
 * Method:    home
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextBrowser_home
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBrowser * browser = (QTextBrowser*)pointer;
    browser->home();
}

/*
 * Class:     org_swdc_qt_internal_widgets_STextBrowser
 * Method:    reload
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_STextBrowser_reload
(JNIEnv * env, jobject self, jlong pointer) {

    QTextBrowser * browser = (QTextBrowser*)pointer;
    browser->reload();
}
