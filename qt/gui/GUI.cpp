#include"gui_global.h"
#include"Executors.h"

JavaVM* VMContext = NULL;
Executors asyncContext;

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved) {

   JNIEnv *env = NULL;

   if (vm->GetEnv((void **) &env, JNI_VERSION_1_6) != JNI_OK) {
      return -1;
   }

   VMContext = vm;

   return JNI_VERSION_1_6;
}

JNIEnv* getContext() {

    if(VMContext == NULL) {
        printf("can not find JVM");
        return NULL;
    }

    JNIEnv* env;

    auto get_env_result = VMContext->GetEnv((void**)&env, JNI_VERSION_1_6);

    if (get_env_result == JNI_EDETACHED) {
       if (VMContext->AttachCurrentThread((void **)&env, NULL) == JNI_OK) {
          // Success to attach thread.
       } else {
          // Failed to attach thread. Throw an exception if you want to.
       }
    } else if (get_env_result == JNI_EVERSION) {
       // Unsupported JNI version. Throw an exception if you want to.
    }

    return env;
}


void paintEventWithJava(QPaintEvent* event,jobject self,jlong me) {
    JNIEnv * env = getContext();

    jclass type = env->FindClass("org/swdc/qt/internal/widgets/SWidget");

    jmethodID method = env->GetMethodID(type,"onPaint","(Lorg/swdc/qt/widgets/graphics/Painter;)V");

    jmethodID getPainter = env->GetMethodID(type,"createPainter","(J)Lorg/swdc/qt/widgets/graphics/Painter;");
    jmethodID removePainter = env->GetMethodID(type,"removePainter","(Lorg/swdc/qt/widgets/graphics/Painter;)V");
    // create a qpainter from java
    jobject painter = env->CallObjectMethod(self,getPainter,me);
    // call java paint listener
    env->CallVoidMethod(self,method,painter);
    // destroy qpainter
    env->CallVoidMethod(self,removePainter,painter);

    releaseContext();
}


/*
 * Class:     org_swdc_qt_Platform
 * Method:    runLater
 * Signature: (Ljava/lang/Runnable;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_Platform_runLater
(JNIEnv * env, jclass type, jobject runnable) {

    if(runnable == NULL) {
        return;
    }

    runnable = env->NewGlobalRef(runnable);

    QMetaObject::invokeMethod(QApplication::instance(),[=]()->void {
        JNIEnv * env = getContext();

        jclass runnableType = env->GetObjectClass(runnable);
        jmethodID runMethod = env->GetMethodID(runnableType,"run","()V");
        env->CallStaticVoidMethod(runnableType,runMethod);
        env->DeleteGlobalRef(runnable);

        releaseContext();
    },Qt::BlockingQueuedConnection);
}


void releaseContext() {
    VMContext->DetachCurrentThread();
}



jbyteArray asJavaArray(JNIEnv *env, unsigned char *buf, int len) {
    jbyteArray array = env->NewByteArray(len);
    env->SetByteArrayRegion(array, 0, len, reinterpret_cast<jbyte *>(buf));
    return array;
}



jobject sRgb(JNIEnv * env, QRgb val) {

    jclass rgbClass = env->FindClass("org/swdc/qt/internal/graphics/SRgb");
    jmethodID ctorId = env->GetMethodID(rgbClass,"<init>","(J)V");
    return env->NewObject(rgbClass,ctorId,jlong(val));

}


jstring asJavaString(JNIEnv* env, const char* pat){
    //定义java String类 strClass
    jclass strClass = (env)->FindClass("java/lang/String");
    //获取java String类方法String(byte[],String)的构造器,用于将本地byte[]数组转换为一个新String
    jmethodID ctorID = (env)->GetMethodID(strClass, "<init>", "([BLjava/lang/String;)V");
    //建立byte数组
    jbyteArray bytes = (env)->NewByteArray((jsize)strlen(pat));
    //将char* 转换为byte数组
    (env)->SetByteArrayRegion(bytes, 0, (jsize)strlen(pat), (jbyte*)pat);
    //设置String, 保存语言类型,用于byte数组转换至String时的参数
    jstring encoding = (env)->NewStringUTF("UTF8");
    //将byte数组转换为java String,并输出
    return (jstring)(env)->NewObject(strClass, ctorID, bytes, encoding);
}

void cleanJavaPointer(JNIEnv* env,jobject target) {

    jclass jpointer = env->FindClass("org/swdc/qt/internal/SPointer");
    jmethodID cleanMethod = env->GetMethodID(jpointer,"cleanAddress","()V");

    env->CallVoidMethod(target,cleanMethod);
}


void asyncExec(std::function<void()> func) {

    asyncContext.exec([func]()->void{
        QMetaObject::invokeMethod(QApplication::instance(),[func]()->void {
            func();
        },Qt::BlockingQueuedConnection);
    });

}

