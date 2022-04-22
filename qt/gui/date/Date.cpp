#include "gui_global.h"
#include "java/date/org_swdc_qt_internal_date_SDate.h"

/*
 * Class:     org_swdc_qt_internal_date_SDate
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SDate_create
(JNIEnv *, jobject) {

    QDate * date = new QDate();
    return _P(date);
}

/*
 * Class:     org_swdc_qt_internal_date_SDate
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_date_SDate_dispose
(JNIEnv * env, jobject self, jlong pointer){

    QDate * date = (QDate*)pointer;
    delete date;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_date_SDate
 * Method:    year
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_SDate_year__J
(JNIEnv * env, jobject self, jlong pointer) {

    QDate * date = (QDate*)pointer;
    return date->year();
}

/*
 * Class:     org_swdc_qt_internal_date_SDate
 * Method:    month
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_SDate_month__J
(JNIEnv * env, jobject self, jlong pointer) {

    QDate * date = (QDate*)pointer;
    return date->month();
}

/*
 * Class:     org_swdc_qt_internal_date_SDate
 * Method:    day
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_SDate_day__J
(JNIEnv * env, jobject self, jlong pointer) {

    QDate * date = (QDate*)pointer;
    return date->day();
}

/*
 * Class:     org_swdc_qt_internal_date_SDate
 * Method:    dayOfWeek
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_SDate_dayOfWeek__J
(JNIEnv * env, jobject self, jlong pointer) {

    QDate * date = (QDate*)pointer;
    return date->dayOfWeek();
}

/*
 * Class:     org_swdc_qt_internal_date_SDate
 * Method:    dayOfYear
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_SDate_dayOfYear__J
(JNIEnv * env, jobject self, jlong pointer) {

    QDate * date = (QDate*)pointer;
    return date->dayOfYear();
}

/*
 * Class:     org_swdc_qt_internal_date_SDate
 * Method:    daysInMonth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_SDate_daysInMonth__J
(JNIEnv * env, jobject self, jlong pointer) {

    QDate * date = (QDate*)pointer;
    return date->daysInMonth();
}

/*
 * Class:     org_swdc_qt_internal_date_SDate
 * Method:    daysInYear
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_SDate_daysInYear__J
(JNIEnv * env, jobject self, jlong pointer) {

    QDate * date = (QDate*)pointer;
    return date->daysInYear();
}

/*
 * Class:     org_swdc_qt_internal_date_SDate
 * Method:    weekNumber
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_SDate_weekNumber
(JNIEnv * env, jobject self, jlong pointer) {
    QDate * date = (QDate*)pointer;
    return date->weekNumber();
}

/*
 * Class:     org_swdc_qt_internal_date_SDate
 * Method:    year
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_SDate_year__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong clPointer){

    QCalendar * cl = (QCalendar*)clPointer;
    QDate * date = (QDate*)pointer;
    return date->year(*cl);
}

/*
 * Class:     org_swdc_qt_internal_date_SDate
 * Method:    month
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_SDate_month__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong clPointer) {

    QDate * date = (QDate*)pointer;
    QCalendar * cl = (QCalendar*)clPointer;

    return date->month(*cl);
}
/*
 * Class:     org_swdc_qt_internal_date_SDate
 * Method:    day
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_SDate_day__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong clPointer) {

    QCalendar * cl = (QCalendar*)clPointer;
    QDate * date = (QDate*)pointer;
    return date->day(*cl);
}

/*
 * Class:     org_swdc_qt_internal_date_SDate
 * Method:    dayOfWeek
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_SDate_dayOfWeek__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong clPointer) {

    QDate * date = (QDate*)pointer;
    QCalendar * cl = (QCalendar*)clPointer;
    return date->dayOfWeek(*cl);
}

/*
 * Class:     org_swdc_qt_internal_date_SDate
 * Method:    dayOfYear
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_SDate_dayOfYear__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong clPointer) {

    QCalendar * cl = (QCalendar*)clPointer;
    QDate * date = (QDate*)pointer;
    return date->dayOfYear(*cl);
}

/*
 * Class:     org_swdc_qt_internal_date_SDate
 * Method:    daysInMonth
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_SDate_daysInMonth__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong clPointer) {

    QDate * date = (QDate*)pointer;
    QCalendar * cl = (QCalendar*)clPointer;

    return date->daysInMonth(*cl);
}

/*
 * Class:     org_swdc_qt_internal_date_SDate
 * Method:    daysInYear
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_SDate_daysInYear__JJ
(JNIEnv * env, jobject self, jlong pointer, jlong clPointer) {

    QCalendar * cl = (QCalendar*)clPointer;
    QDate * date = (QDate*)pointer;
    return date->daysInYear(*cl);
}

/*
 * Class:     org_swdc_qt_internal_date_SDate
 * Method:    setDate
 * Signature: (JIII)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_date_SDate_setDate__JIII
(JNIEnv * env, jobject self, jlong pointer, jint year, jint month, jint day) {

    QDate * date = (QDate*)pointer;
    return date->setDate(year,month,day) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_date_SDate
 * Method:    setDate
 * Signature: (JIIIJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_date_SDate_setDate__JIIIJ
(JNIEnv * env, jobject self, jlong pointer, jint year, jint month, jint day, jlong clPointer) {

    QCalendar * cl = (QCalendar*)clPointer;
    QDate * date = (QDate*)pointer;
    return date->setDate(year,month,day,*cl) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_date_SDate
 * Method:    addDays
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SDate_addDays
(JNIEnv * env, jobject self, jlong pointer, jint days) {

    QDate * date = (QDate*)pointer;
    QDate * result = new QDate();
    *result = date->addDays(days);
    return _P(result);
}

/*
 * Class:     org_swdc_qt_internal_date_SDate
 * Method:    addMonths
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SDate_addMonths__JI
(JNIEnv * env, jobject self, jlong pointer, jint month) {

    QDate * date = (QDate*)pointer;
    QDate * result = new QDate();

    *result = date->addMonths(month);
    return _P(result);
}

/*
 * Class:     org_swdc_qt_internal_date_SDate
 * Method:    addYears
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SDate_addYears__JI
(JNIEnv * env, jobject self, jlong pointer, jint years) {

    QDate * date = (QDate*)pointer;
    QDate * result = new QDate();

    *result = date->addYears(years);
    return _P(result);
}

/*
 * Class:     org_swdc_qt_internal_date_SDate
 * Method:    addMonths
 * Signature: (JIJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SDate_addMonths__JIJ
(JNIEnv * env, jobject self, jlong pointer, jint months, jlong clPointer) {

    QDate * date = (QDate*)pointer;
    QCalendar * cl = (QCalendar*)clPointer;

    QDate * result = new QDate();
    *result = date->addMonths(months,*cl);

    return _P(result);
}

/*
 * Class:     org_swdc_qt_internal_date_SDate
 * Method:    addYears
 * Signature: (JIJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SDate_addYears__JIJ
(JNIEnv * env, jobject self, jlong pointer, jint years, jlong clPointer) {

    QCalendar * cl = (QCalendar*)clPointer;
    QDate * date = (QDate*)pointer;
    QDate * result = new QDate();

    *result = date->addYears(years,*cl);
    return _P(result);
}

/*
 * Class:     org_swdc_qt_internal_date_SDate
 * Method:    daysTo
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SDate_daysTo
(JNIEnv * env, jobject self, jlong pointer, jlong datePointer) {

    QDate * other = (QDate*)datePointer;
    QDate * date = (QDate*)pointer;

    return date->daysTo(*other);
}

/*
 * Class:     org_swdc_qt_internal_date_SDate
 * Method:    equals
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_date_SDate_equals
(JNIEnv * env, jobject self, jlong pointer, jlong datePointer) {

    QDate * date = (QDate*)pointer;
    QDate * other = (QDate*)datePointer;

    return *(date) == *(other) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_date_SDate
 * Method:    isBefore
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_date_SDate_isBefore
(JNIEnv * env, jobject self, jlong pointer, jlong datePointer) {

    QDate * date = (QDate*)pointer;
    QDate * other = (QDate*)datePointer;

    return *(date) < *(other) ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_date_SDate
 * Method:    isAfter
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_date_SDate_isAfter
(JNIEnv * env, jobject self, jlong pointer, jlong datePointer) {

    QDate * date = (QDate*)pointer;
    QDate * other = (QDate*)datePointer;

    return *(date) > *(other) ? JNI_TRUE : JNI_FALSE;
}
