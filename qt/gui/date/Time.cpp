#include "gui_global.h"
#include "java/date/org_swdc_qt_internal_date_STime.h"

/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_STime_create
(JNIEnv *, jobject) {

    QTime * time = new QTime();
    return _P(time);
}

/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_date_STime_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QTime * time = (QTime*)pointer;
    delete time;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    isValid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_date_STime_isValid
(JNIEnv * env, jobject self, jlong pointer) {

    QTime * time = (QTime*)pointer;
    return time->isValid() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    hour
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_STime_hour
(JNIEnv * env, jobject self, jlong pointer) {

    QTime * time = (QTime*)pointer;
    return time->hour();
}

/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    minute
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_STime_minute
(JNIEnv * env, jobject self, jlong pointer) {

    QTime * time = (QTime*)pointer;
    return time->minute();
}

/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    second
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_STime_second
(JNIEnv * env, jobject self, jlong pointer) {

    QTime * time = (QTime*)pointer;
    return time->second();
}

/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    msec
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_STime_msec
(JNIEnv * env, jobject self, jlong pointer) {

    QTime * time = (QTime*)pointer;
    return time->msec();
}

/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    setHMS
 * Signature: (JIIII)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_date_STime_setHMS
(JNIEnv * env, jobject self, jlong pointer, jint h, jint m, jint s, jint ms) {

    QTime * time = (QTime*)pointer;
    return time->setHMS(h,m,s,ms) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    addSecs
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_STime_addSecs
(JNIEnv * env, jobject self, jlong pointer, jint secs) {

    QTime * time = (QTime*)pointer;
    QTime * result = new QTime();
    *result = time->addSecs(secs);

    return _P(result);
}

/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    secsTo
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_STime_secsTo
(JNIEnv * env, jobject self, jlong pointer, jlong another) {

    QTime * anotherOne = (QTime*)another;
    QTime * time = (QTime*)pointer;
    return time->secsTo(*anotherOne);
}

/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    addMSecs
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_STime_addMSecs
(JNIEnv * env, jobject self, jlong pointer, jint msecs) {

    QTime * time = (QTime*)pointer;
    QTime * result = new QTime();

    *result = time->addMSecs(msecs);
    return _P(result);
}

/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    msecsTo
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_STime_msecsTo
(JNIEnv * env, jobject self, jlong pointer, jlong anotherPointer) {

    QTime * another = (QTime*)anotherPointer;
    QTime * time = (QTime*)pointer;

    return time->msecsTo(*another);
}

/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    equals
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_date_STime_equals
(JNIEnv * env, jobject self, jlong pointer, jlong anotherPointer) {

    QTime * another = (QTime*)anotherPointer;
    QTime * time = (QTime*)pointer;
    return *(time) == *(another) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    isBefore
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_date_STime_isBefore
(JNIEnv * env, jobject self, jlong pointer, jlong anotherPointer) {

    QTime * another = (QTime*)anotherPointer;
    QTime * time = (QTime*)pointer;

    return *(time) < *(another) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_date_STime
 * Method:    isAfter
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_date_STime_isAfter
(JNIEnv * env, jobject self, jlong pointer, jlong anotherPointer){

    QTime * time = (QTime*)pointer;
    QTime * another = (QTime*)anotherPointer;

    return *(time) > *(another) ? JNI_TRUE : JNI_FALSE;
}
