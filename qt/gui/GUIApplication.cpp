#include"gui_global.h"
#include <stdio.h>
#include"java/org_swdc_qt_SApplication.h"

/*
 * Class:     org_swdc_qt_SApplication
 * Method:    create
 * Signature: (I[Ljava/lang/String;)I
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_QtApplication_create
(JNIEnv * jenv, jobject obj, jint argc, jobjectArray argv,jstring dir) {

    const char* rootPath = jenv->GetStringUTFChars(dir,JNI_FALSE);
    QString qPath = QString(rootPath);
    //QDir::setCurrent(qPath);

    QApplication::addLibraryPath(qPath);

    int len = jenv->GetArrayLength(argv);
    char** arrays = (char**)malloc(sizeof(char*) * len);

    for(int idx = 0; idx < len; idx ++) {
        jstring str = (jstring)jenv->GetObjectArrayElement(argv,idx);
        const char* strArg = jenv->GetStringUTFChars(str,JNI_FALSE);
        arrays[idx] = const_cast<char*>(strArg);
    }

    QApplication* app = new QApplication(len,arrays);

    return (jlong)app;
}

/*
 * Class:     org_swdc_qt_SApplication
 * Method:    exec
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_QtApplication_exec
(JNIEnv * jenv, jobject obj, jlong pointer) {
    QApplication* app = (QApplication*)pointer;
    app->exec();
}
