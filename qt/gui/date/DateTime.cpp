#include "gui_global.h"
#include "java/date/org_swdc_qt_internal_date_SDateTime.h"

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SDateTime_create
(JNIEnv *, jobject) {

    QDateTime * dt = new QDateTime();
    return _P(dt);
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_date_SDateTime_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTime * dt = (QDateTime*)pointer;
    delete dt;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    date
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SDateTime_date
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTime * dt = (QDateTime*)pointer;
    QDate * date = new QDate();
    *date = dt->date();

    return _P(date);
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    time
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SDateTime_time
(JNIEnv * env, jobject self, jlong pointer) {

    QTime * time = new QTime();
    QDateTime * dt = (QDateTime*)pointer;
    *time = dt->time();

    return _P(time);
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    timeSpec
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_SDateTime_timeSpec
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTime * dt = (QDateTime*)pointer;
    return int(dt->timeSpec());
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    offsetFromUtc
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_date_SDateTime_offsetFromUtc
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTime * dt = (QDateTime*)pointer;
    return dt->offsetFromUtc();
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    timeZoneAbbreviation
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_date_SDateTime_timeZoneAbbreviation
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTime * dt = (QDateTime*)pointer;
    return asJavaString(env,dt->timeZoneAbbreviation().toStdString().c_str());
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    isDaylightTime
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_date_SDateTime_isDaylightTime
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTime * dt = (QDateTime*)pointer;
    return dt->isDaylightTime() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    toMSecsSinceEpoch
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SDateTime_toMSecsSinceEpoch
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTime * dt = (QDateTime*)pointer;
    return dt->toMSecsSinceEpoch();
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    toSecsSinceEpoch
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SDateTime_toSecsSinceEpoch
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTime * dt = (QDateTime*)pointer;
    return dt->toSecsSinceEpoch();
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    setDate
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_date_SDateTime_setDate
(JNIEnv * env, jobject self, jlong pointer, jlong datePointer) {

    QDate * date = (QDate*)datePointer;
    QDateTime * dt = (QDateTime*)pointer;
    dt->setDate(*date);
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    setTime
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_date_SDateTime_setTime
(JNIEnv * env, jobject self, jlong pointer, jlong timePointer) {

    QTime * time = (QTime*)timePointer;
    QDateTime * dt = (QDateTime*)pointer;
    dt->setTime(*time);
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    setTimeSpec
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_date_SDateTime_setTimeSpec
(JNIEnv * env, jobject self, jlong pointer, jint timeSpecVal) {

    Qt::TimeSpec spec = Qt::TimeSpec(timeSpecVal);
    QDateTime * dt = (QDateTime*)pointer;
    dt->setTimeSpec(spec);
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    setOffsetFromUtc
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_date_SDateTime_setOffsetFromUtc
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QDateTime * dt = (QDateTime*)pointer;
    dt->setOffsetFromUtc(val);
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    setTimeZone
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_date_SDateTime_setTimeZone
(JNIEnv * env, jobject self, jlong pointer, jstring zone) {

    const char* cTimezone = env->GetStringUTFChars(zone,0);
    QByteArray tzData(cTimezone);
    QTimeZone qtz(tzData);

    QDateTime * dt = (QDateTime*)pointer;
    dt->setTimeZone(qtz);
    env->ReleaseStringUTFChars(zone,cTimezone);
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    setMSecsSinceEpoch
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_date_SDateTime_setMSecsSinceEpoch
(JNIEnv * env, jobject self, jlong pointer, jlong val) {

    QDateTime * dt = (QDateTime*)pointer;
    dt->setMSecsSinceEpoch(val);
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    setSecsSinceEpoch
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_date_SDateTime_setSecsSinceEpoch
(JNIEnv * env, jobject self, jlong pointer, jlong val) {

    QDateTime * dt = (QDateTime*)pointer;
    dt->setSecsSinceEpoch(val);
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    addDays
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SDateTime_addDays
(JNIEnv * env, jobject self, jlong pointer, jlong days) {

    QDateTime * dt = (QDateTime*)pointer;
    QDateTime * date = new QDateTime();
    *date = dt->addDays(days);

    return _P(date);
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    addMonths
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SDateTime_addMonths
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QDateTime * dt = (QDateTime*)pointer;
    QDateTime * date = new QDateTime();

    *date = dt->addMonths(val);
    return _P(date);
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    addYears
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SDateTime_addYears
(JNIEnv * env, jobject self, jlong pointer, jint years){

    QDateTime * dt = (QDateTime*)pointer;
    QDateTime * date = new QDateTime();

    *date = dt->addYears(years);
    return _P(date);
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    addSecs
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SDateTime_addSecs
(JNIEnv * env, jobject self, jlong pointer, jlong vals) {

    QDateTime * dt = (QDateTime*)pointer;
    QDateTime * date = new QDateTime();
    *date = dt->addSecs(vals);

    return _P(date);
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    addMSecs
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SDateTime_addMSecs
(JNIEnv * env, jobject self, jlong pointer, jlong val) {

    QDateTime * dt = (QDateTime*)pointer;
    QDateTime * date = new QDateTime();
    *date = dt->addMSecs(val);

    return _P(date);
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    toTimeSpec
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SDateTime_toTimeSpec
(JNIEnv * env, jobject self, jlong pointer, jint specVal) {

    QDateTime * dt = (QDateTime*)pointer;
    Qt::TimeSpec spec = Qt::TimeSpec(specVal);
    QDateTime * date = new QDateTime();
    *date = dt->toTimeSpec(spec);

    return _P(date);
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    toLocalTime
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SDateTime_toLocalTime
(JNIEnv * env, jobject self, jlong pointer){

    QDateTime * dt = (QDateTime*)pointer;
    QDateTime * date = new QDateTime();
    *date = dt->toLocalTime();
    return _P(date);
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    toUTC
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SDateTime_toUTC
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTime * dt = (QDateTime*)pointer;
    QDateTime * date = new QDateTime();
    *date = dt->toUTC();

    return _P(date);
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    toOffsetFromUtc
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SDateTime_toOffsetFromUtc
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QDateTime * dt = (QDateTime*)pointer;
    QDateTime * date = new QDateTime();

    *date = dt->toOffsetFromUtc(val);
    return _P(date);
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    toTimeZone
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SDateTime_toTimeZone
(JNIEnv * env, jobject self, jlong pointer, jstring zone) {

    const char* cTimezone = env->GetStringUTFChars(zone,0);
    QByteArray tzData(cTimezone);
    QTimeZone qtz(tzData);

    QDateTime * dt = (QDateTime*)pointer;
    QDateTime * date = new QDateTime();

    *date = dt->toTimeZone(qtz);
    env->ReleaseStringUTFChars(zone,cTimezone);
    return _P(date);
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    daysTo
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SDateTime_daysTo
(JNIEnv * env, jobject self, jlong pointer, jlong otherPointer) {

    QDateTime * dt = (QDateTime*)pointer;
    QDateTime * other = (QDateTime*)otherPointer;

    return dt->daysTo(*other);
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    secsTo
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SDateTime_secsTo
(JNIEnv * env, jobject self, jlong pointer, jlong otherPointer) {

    QDateTime * dt = (QDateTime*)pointer;
    QDateTime * other = (QDateTime*)otherPointer;

    return dt->secsTo(*other);
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    msecsTo
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SDateTime_msecsTo
(JNIEnv * env, jobject self, jlong pointer, jlong otherPointer) {

    QDateTime * dt = (QDateTime*)pointer;
    QDateTime * other = (QDateTime*)otherPointer;

    return dt->msecsTo(*other);
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    currentDateTime
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SDateTime_currentDateTime
(JNIEnv *, jclass) {

    QDateTime * date = new QDateTime();
    *date = QDateTime::currentDateTime();
    return _P(date);
}

/*
 * Class:     org_swdc_qt_internal_date_SDateTime
 * Method:    currentDateTimeUtc
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_date_SDateTime_currentDateTimeUtc
(JNIEnv *, jclass) {

    QDateTime * date = new QDateTime();
    *date = QDateTime::currentDateTimeUtc();
    return _P(date);
}
