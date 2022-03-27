#include <qglobal.h>
#include <qmetatype.h>

#ifndef JNI
#define JNI

#define _P(val) (jlong)(intptr_t)val

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
