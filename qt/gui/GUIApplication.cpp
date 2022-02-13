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
    jenv->ReleaseStringUTFChars(dir,rootPath);
    //QDir::setCurrent(qPath);

    QApplication::addLibraryPath(qPath);

    QApplication* app = NULL;

    int len = jenv->GetArrayLength(argv);

    if(len > 0) {

        len = len + 1;
        char** arrays = (char**)malloc(sizeof(char*) * len);

        for(int idx = 1; idx < len + 1; idx ++) {
            jstring str = (jstring)jenv->GetObjectArrayElement(argv,idx);
            const char* strArg = jenv->GetStringUTFChars(str,0);
            arrays[idx] = const_cast<char*>(strArg);
        }

        arrays[0] = const_cast<char*>(rootPath);
        app = new QApplication(len,arrays);

    } else {

        int argc = 1;
        char* arr[1] = { const_cast<char*>(rootPath) };
        app = new QApplication(argc,arr);
    }

    //app->setAttribute(Qt::AA_DontUseNativeMenuBar);

    return (jlong)app;
}


/*
 * Class:     org_swdc_qt_QtApplication
 * Method:    loadLanguage
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_QtApplication_loadLanguage
(JNIEnv * env, jobject self,jlong pointer,jstring folder, jstring langFile) {

    const char * name = env->GetStringUTFChars(langFile,JNI_FALSE);
    const char * path = env->GetStringUTFChars(folder,JNI_FALSE);

    QString transFileName(name);
    QString transFilePath(path);
    QTranslator * translator = new QTranslator();
    translator->load(transFileName,transFilePath);

    QApplication * app = (QApplication*)pointer;
    app->installTranslator(translator);

    env->ReleaseStringUTFChars(folder,path);
    env->ReleaseStringUTFChars(langFile,name);

    return (jlong)(intptr_t)translator;

}

/*
 * Class:     org_swdc_qt_QtApplication
 * Method:    disposeLanguage
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_QtApplication_disposeLanguage
(JNIEnv * env, jobject self, jlong pointer, jlong translatorPointer) {

    QTranslator * translator = (QTranslator*)translatorPointer;
    QApplication * app = (QApplication*)pointer;
    app->removeTranslator(translator);
    delete translator;

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
