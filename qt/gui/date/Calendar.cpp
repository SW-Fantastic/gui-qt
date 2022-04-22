#include "gui_global.h"
#include "java/date/org_swdc_qt_internal_date_SCalendar.h"

/*
 * Class:     org_swdc_qt_internal_date_SCalendar
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SCalendar_create__
(JNIEnv *, jobject) {

    QCalendar * cl = new QCalendar();
    return _P(cl);
}

/*
 * Class:     org_swdc_qt_internal_date_SCalendar
 * Method:    create
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SCalendar_create__I
(JNIEnv *, jobject, jint system) {

    QCalendar::System sys = QCalendar::System(system);
    QCalendar * cl = new QCalendar(sys);
    return _P(cl);
}

/*
 * Class:     org_swdc_qt_internal_date_SCalendar
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_date_SCalendar_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QCalendar * cl = (QCalendar*)pointer;
    delete cl;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_date_SCalendar
 * Method:    isValid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_date_SCalendar_isValid
(JNIEnv * env, jobject self, jlong pointer) {

    QCalendar * cl = (QCalendar*)pointer;
    return cl->isValid() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_date_SCalendar
 * Method:    daysInMonth
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_SCalendar_daysInMonth
(JNIEnv * env, jobject self, jlong pointer, jint month, jint year) {

    QCalendar * cl = (QCalendar*)pointer;
    return cl->daysInMonth(month,year);
}

/*
 * Class:     org_swdc_qt_internal_date_SCalendar
 * Method:    daysInYear
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_SCalendar_daysInYear
(JNIEnv * env, jobject self, jlong pointer, jint year) {

    QCalendar * cl = (QCalendar*)pointer;
    return cl->daysInYear(year);
}

/*
 * Class:     org_swdc_qt_internal_date_SCalendar
 * Method:    monthsInYear
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_SCalendar_monthsInYear
(JNIEnv * env, jobject self, jlong pointer, jint year) {

    QCalendar * cl = (QCalendar*)pointer;
    return cl->monthsInYear(year);
}

/*
 * Class:     org_swdc_qt_internal_date_SCalendar
 * Method:    isDateValid
 * Signature: (JIII)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_date_SCalendar_isDateValid
(JNIEnv * env, jobject self, jlong pointer, jint year, jint month, jint day) {

    QCalendar * cl = (QCalendar*)pointer;
    return cl->isDateValid(year,month,day);
}

/*
 * Class:     org_swdc_qt_internal_date_SCalendar
 * Method:    isLeapYear
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_date_SCalendar_isLeapYear
(JNIEnv * env, jobject self, jlong pointer, jint year) {

    QCalendar * cl = (QCalendar*)pointer;
    return cl->isLeapYear(year);
}

/*
 * Class:     org_swdc_qt_internal_date_SCalendar
 * Method:    isGregorian
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_date_SCalendar_isGregorian
(JNIEnv * env, jobject self, jlong pointer) {

    QCalendar * cl = (QCalendar*)pointer;
    return cl->isGregorian() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_date_SCalendar
 * Method:    isLunar
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_date_SCalendar_isLunar
(JNIEnv * env, jobject self, jlong pointer) {

    QCalendar * cl = (QCalendar*)pointer;
    return cl->isLunar() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_date_SCalendar
 * Method:    isLuniSolar
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_date_SCalendar_isLuniSolar
(JNIEnv * env, jobject self, jlong pointer) {

    QCalendar * cl = (QCalendar*)pointer;
    return cl->isLuniSolar() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_date_SCalendar
 * Method:    isSolar
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_date_SCalendar_isSolar
(JNIEnv * env, jobject self, jlong pointer) {

    QCalendar * cl = (QCalendar*)pointer;
    return cl->isSolar() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_date_SCalendar
 * Method:    isProleptic
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_date_SCalendar_isProleptic
(JNIEnv * env, jobject self, jlong pointer) {

    QCalendar * cl = (QCalendar*)pointer;
    return cl->isProleptic() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_date_SCalendar
 * Method:    hasYearZero
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_date_SCalendar_hasYearZero
(JNIEnv * env, jobject self, jlong pointer) {

    QCalendar * cl = (QCalendar*)pointer;
    return cl->hasYearZero() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_date_SCalendar
 * Method:    maximumDaysInMonth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_SCalendar_maximumDaysInMonth
(JNIEnv * env, jobject self, jlong pointer) {

    QCalendar * cl = (QCalendar*)pointer;
    return cl->maximumDaysInMonth();
}

/*
 * Class:     org_swdc_qt_internal_date_SCalendar
 * Method:    minimumDaysInMonth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_SCalendar_minimumDaysInMonth
(JNIEnv * env, jobject self, jlong pointer) {

    QCalendar * cl = (QCalendar*)pointer;
    return cl->minimumDaysInMonth();
}

/*
 * Class:     org_swdc_qt_internal_date_SCalendar
 * Method:    maximumMonthsInYear
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_SCalendar_maximumMonthsInYear
(JNIEnv * env, jobject self, jlong pointer) {

    QCalendar * cl = (QCalendar*)pointer;
    return cl->maximumMonthsInYear();
}

/*
 * Class:     org_swdc_qt_internal_date_SCalendar
 * Method:    name
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_date_SCalendar_name
(JNIEnv * env, jobject self, jlong pointer) {

    QCalendar * cl = (QCalendar*)pointer;
    std::string val = cl->name().toStdString();
    return asJavaString(env,val.c_str());
}

/*
 * Class:     org_swdc_qt_internal_date_SCalendar
 * Method:    dateFromParts
 * Signature: (JIII)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SCalendar_dateFromParts
(JNIEnv * env, jobject self, jlong pointer, jint year, jint month , jint day) {

    QCalendar * cl = (QCalendar*)pointer;
    QDate * date = new QDate();
    *date = cl->dateFromParts(year,month,day);
    return _P(date);
}

/*
 * Class:     org_swdc_qt_internal_date_SCalendar
 * Method:    dayOfWeek
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_SCalendar_dayOfWeek
(JNIEnv * env, jobject self, jlong pointer, jlong datePointer) {

    QDate * date = (QDate*)datePointer;
    QCalendar * cl = (QCalendar*)pointer;
    return cl->dayOfWeek(*date);
}

/*
 * Class:     org_swdc_qt_internal_date_SCalendar
 * Method:    availableCalendars
 * Signature: ()[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_org_swdc_qt_internal_date_SCalendar_availableCalendars
(JNIEnv * env, jclass) {

    QStringList names = QCalendar::availableCalendars();
    return asJavaStringArray(env,names);
}
