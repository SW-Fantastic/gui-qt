#include <qglobal.h>

#ifndef JNI
#define JNI

#ifdef Q_OS_WIN32
    #include "os/windows/jni.h"
#endif

#ifdef Q_OS_WIN64
    #include "os/windows/jni.h"
#endif

#ifdef Q_OS_MAC
    #include "os/macos/jni.h"
#endif

#ifdef Q_OS_LINUX
// linux
#endif

#endif
