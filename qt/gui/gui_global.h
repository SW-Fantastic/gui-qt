#ifndef GUI_GLOBAL_H
#define GUI_GLOBAL_H

#include <QtCore/qglobal.h>
#include <QApplication>
#include <QPushButton>
#include <QDir>
#include <QSize>
#include <QWidget>
#include <QRectF>
#include <QRect>
#include <QLineEdit>
#include <QTabWidget>
#include <QPaintDevice>
#include <QIcon>
#include <QBitmap>
#include <QImage>
#include <QColor>
#include <QColorSpace>
#include <QStackedWidget>
#include <QToolButton>
#include <QMenu>
#include <QMenuBar>

#include <QPainterPath>
#include <QPainter>
#include <QThreadPool>

#include <QLayout>

#include "java/jni.h"

#if defined(GUI_LIBRARY)
#  define GUI_EXPORT Q_DECL_EXPORT
#else
#  define GUI_EXPORT Q_DECL_IMPORT
#endif

jstring asJavaString(JNIEnv* env, const char* pat);

jbyteArray asJavaArray(JNIEnv *env, unsigned char *buf, int len);
/**
 *
 * QSize在java中对应的SSize。
 *
 * @brief qsize
 * @param env
 * @param width
 * @param height
 * @return
 */
jobject ssize(JNIEnv* env, int width, int height);

/**
 * @brief sMargins
 * @param env
 * @param margins
 * @return
 */
jobject sMargins(JNIEnv* env, QMargins margins);



jobject sRgb(JNIEnv * env,QRgb val);


/**
 * get the JNI ENV
 * @brief getContext
 * @return JNIEnv
 */
JNIEnv* getContext();

/**
 * Free the JniEnv on a thread
 * @brief releaseContext
 */
void releaseContext();


void paintEventWithJava(QPaintEvent* event,jobject self,jlong me);



/**
 *
 * clean the java object pointer address;
 * */
void cleanJavaPointer(JNIEnv* env,jobject target);

/**
 *
 * JNI Life cycle.
 *
 * @brief JNI_OnLoad
 * @param vm
 * @param reserved
 * @return
 */
JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved);


/**
 * run function on qt thread pool
 * @brief asyncExec
 */
void asyncExec(std::function<void()>);

#endif // GUI_GLOBAL_H
