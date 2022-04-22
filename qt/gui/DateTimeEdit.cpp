#include "gui_global.h"
#include "java/org_swdc_qt_internal_widgets_SDateTimeEdit.h"

#include "java/types/SWidget.h"
#include "java/types/SDateTimeEdit.h"

SDateTimeEdit::SDateTimeEdit(jobject self):QDateTimeEdit() {
    this->self = self;
}

SDateTimeEdit::SDateTimeEdit(jobject self, QWidget * widget):QDateTimeEdit(widget) {
    this->self = self;
}

void SDateTimeEdit::paintEvent(QPaintEvent *event) {
    QDateTimeEdit::paintEvent(event);
    paintEventWithJava(event,this->self,(jlong)(intptr_t)this);
}


/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    create
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_create
(JNIEnv * env, jobject self, jlong pointer) {

    self = env->NewGlobalRef(self);
    SDateTimeEdit * edit = nullptr;

    if(pointer > 0) {
        QWidget * widget = (QWidget*)pointer;
        edit = new SDateTimeEdit(self,widget);
    } else {
        edit = new SDateTimeEdit(self);
    }

    SWidget::initializeWidgetEvents(edit,self);
    return _P(edit);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_dispose
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    delete edit;
    cleanJavaPointer(env,self);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    dateTime
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_dateTime
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    QDateTime * date = new QDateTime();
    *date = edit->dateTime();

    return _P(date);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    date
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_date
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    QDate * date = new QDate();
    *date = edit->date();

    return _P(date);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    time
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_time
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    QTime * time = new QTime();
    *time = edit->time();

    return _P(time);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    calendar
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_calendar
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    QCalendar * cl = new QCalendar();
    *cl = edit->calendar();

    return _P(cl);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    setCalendar
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_setCalendar
(JNIEnv * env, jobject self, jlong pointer, jlong clPointer){

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    QCalendar * cl = (QCalendar*)clPointer;

    edit->setCalendar(*cl);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    minimumDateTime
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_minimumDateTime
  (JNIEnv * env, jobject self, jlong pointer) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;

    QDateTime * dt = new QDateTime();
    *dt = edit->minimumDateTime();

    return _P(dt);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    clearMinimumDateTime
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_clearMinimumDateTime
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    edit->clearMinimumDateTime();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    setMinimumDateTime
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_setMinimumDateTime
(JNIEnv * env, jobject self, jlong pointer, jlong dtPointer) {

    QDateTime * dt = (QDateTime*)dtPointer;
    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    edit->setMinimumDateTime(*dt);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    maximumDateTime
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_maximumDateTime
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    QDateTime * dt = new QDateTime();
    *dt = edit->maximumDateTime();

    return _P(dt);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    clearMaximumDateTime
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_clearMaximumDateTime
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    edit->clearMaximumDateTime();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    setMaximumDateTime
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_setMaximumDateTime
(JNIEnv * env, jobject self, jlong pointer, jlong dtPointer){

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    QDateTime * maxDt = (QDateTime*)dtPointer;
    edit->setMaximumDateTime(*maxDt);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    setDateTimeRange
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_setDateTimeRange
(JNIEnv * env, jobject self, jlong pointer, jlong dtMinPointer, jlong dtMaxPointer) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    QDateTime * max = (QDateTime*)dtMaxPointer;
    QDateTime * min = (QDateTime*)dtMinPointer;

    edit->setDateTimeRange(*min,*max);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    minimumDate
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_minimumDate
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    QDate * date = new QDate();
    *date = edit->minimumDate();
    return _P(date);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    setMinimumDate
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_setMinimumDate
(JNIEnv * env, jobject self, jlong pointer, jlong datePointer) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    QDate * date = (QDate*)datePointer;
    edit->setMinimumDate(*date);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    clearMinimumDate
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_clearMinimumDate
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    edit->clearMinimumDate();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    maximumDate
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_maximumDate
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    QDate * date = new QDate();
    *date = edit->maximumDate();

    return _P(date);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    setMaximumDate
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_setMaximumDate
(JNIEnv * env, jobject self, jlong pointer, jlong datePointer) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    QDate * date = (QDate*)datePointer;

    edit->setMaximumDate(*date);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    clearMaximumDate
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_clearMaximumDate
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    edit->clearMaximumDate();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    setDateRange
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_setDateRange
(JNIEnv * env, jobject self, jlong pointer, jlong minPointer, jlong maxPointer) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    QDate * dateMin = (QDate*)minPointer;
    QDate * dateMax = (QDate*)maxPointer;

    edit->setDateRange(*dateMin,*dateMax);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    minimumTime
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_minimumTime
(JNIEnv * env, jobject self, jlong pointer) {

    QTime * time = new QTime();
    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    *time = edit->minimumTime();

    return _P(time);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    setMinimumTime
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_setMinimumTime
(JNIEnv * env, jobject self, jlong pointer, jlong minPointer) {

    QTime * time = (QTime*)minPointer;
    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    edit->setMinimumTime(*time);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    clearMinimumTime
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_clearMinimumTime
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    edit->clearMaximumTime();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    maximumTime
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_maximumTime
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    QTime * time = new QTime();
    *time = edit->maximumTime();

    return _P(time);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    setMaximumTime
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_setMaximumTime
(JNIEnv * env, jobject self, jlong pointer, jlong maxPointer){

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    QTime * time = (QTime*)maxPointer;
    edit->setMaximumTime(*time);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    clearMaximumTime
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_clearMaximumTime
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    edit->clearMaximumTime();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    setTimeRange
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_setTimeRange
(JNIEnv * env, jobject self, jlong pointer, jlong minPointer, jlong maxPointer) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    QTime * min = (QTime*)minPointer;
    QTime * max = (QTime*)maxPointer;

    edit->setTimeRange(*min,*max);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    currentSection
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_currentSection
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    return int(edit->currentSection());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    sectionAt
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_sectionAt
(JNIEnv * env, jobject self, jlong pointer, jint index) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    return int(edit->sectionAt(index));
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    setCurrentSection
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_setCurrentSection
(JNIEnv * env, jobject self, jlong pointer, jint secVal) {

    QDateTimeEdit::Section sec = QDateTimeEdit::Section(secVal);
    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    edit->setCurrentSection(sec);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    currentSectionIndex
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_currentSectionIndex
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    return edit->currentSectionIndex();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    setCurrentSectionIndex
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_setCurrentSectionIndex
(JNIEnv * env, jobject self, jlong pointer, jint idx) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    edit->setCurrentSectionIndex(idx);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    sectionCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_sectionCount
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    return edit->sectionCount();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    setSelectedSection
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_setSelectedSection
(JNIEnv * env, jobject self, jlong pointer, jint secVal) {

    QDateTimeEdit::Section sec = QDateTimeEdit::Section(secVal);
    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    edit->setSelectedSection(sec);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    sectionText
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_sectionText
(JNIEnv * env, jobject self, jlong pointer, jint secVal){

    QDateTimeEdit::Section sec = QDateTimeEdit::Section(secVal);
    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    return asJavaString(env,edit->sectionText(sec).toStdString().c_str());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    displayFormat
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_displayFormat
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    std::string str = edit->displayFormat().toStdString();
    return asJavaString(env,str.c_str());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    setDisplayFormat
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_setDisplayFormat
(JNIEnv * env, jobject self, jlong pointer, jstring textStr){

    const char * cText = env->GetStringUTFChars(textStr,0);
    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    edit->setDisplayFormat(QString(cText));
    env->ReleaseStringUTFChars(textStr,cText);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    calendarPopup
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_calendarPopup
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    return edit->calendarPopup() ? JNI_TRUE : JNI_FALSE;
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    setCalendarPopup
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_setCalendarPopup
(JNIEnv * env, jobject self, jlong pointer, jboolean val) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    edit->setCalendarPopup(val);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    timeSpec
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_timeSpec
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    return int(edit->timeSpec());
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    setTimeSpec
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_setTimeSpec
(JNIEnv * env, jobject self, jlong pointer, jint specVal) {

    Qt::TimeSpec spec = Qt::TimeSpec(specVal);
    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    edit->setTimeSpec(spec);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    sizeHint
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_sizeHint
(JNIEnv * env, jobject self, jlong pointer) {

    QSize * size = new QSize();
    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    *size = edit->sizeHint();

    return _P(size);
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    clear
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_clear
(JNIEnv * env, jobject self, jlong pointer) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    edit->clear();
}

/*
 * Class:     org_swdc_qt_internal_widgets_SDateTimeEdit
 * Method:    stepBy
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_swdc_qt_internal_widgets_SDateTimeEdit_stepBy
(JNIEnv * env, jobject self, jlong pointer, jint val) {

    QDateTimeEdit * edit = (QDateTimeEdit*)pointer;
    edit->stepBy(val);
}
