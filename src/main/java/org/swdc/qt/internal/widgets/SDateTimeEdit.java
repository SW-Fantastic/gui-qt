package org.swdc.qt.internal.widgets;

public class SDateTimeEdit extends SAbstractSpinBox {

    public native long create(long parentPointer);
    public native void dispose(long pointer);

    public native long dateTime(long pointer);
    public native long date(long pointer);
    public native long time(long pointer);

    public native long calendar(long pointer);
    public native void setCalendar(long pointer,long calendarPointer);

    public native long minimumDateTime(long pointer);
    public native void clearMinimumDateTime(long pointer);
    public native void setMinimumDateTime(long pointer,long dt);

    public native long maximumDateTime(long pointer);
    public native void clearMaximumDateTime(long pointer);
    public native void setMaximumDateTime(long pointer,long dt);

    public native void setDateTimeRange(long pointer,long min,long max);

    public native long minimumDate(long pointer);
    public native void setMinimumDate(long pointer,long min);
    public native void clearMinimumDate(long pointer);

    public native long maximumDate(long pointer);
    public native void setMaximumDate(long pointer,long max);
    public native void clearMaximumDate(long pointer);

    public native void setDateRange(long pointer,long min,long max);

    public native long minimumTime(long pointer);
    public native void setMinimumTime(long pointer,long min);
    public native void clearMinimumTime(long pointer);

    public native long maximumTime(long pointer);
    public native void setMaximumTime(long pointer,long max);
    public native void clearMaximumTime(long pointer);

    public native void setTimeRange(long pointer,long min,long max);

    public native int currentSection(long pointer);
    public native int sectionAt(long pointer,int index);
    public native void setCurrentSection(long pointer,int section);

    public native int currentSectionIndex(long pointer);
    public native void setCurrentSectionIndex(long pointer,int index);

    //QCalendarWidget *calendarWidget() const;
    //void setCalendarWidget(QCalendarWidget *calendarWidget);

    public native int sectionCount(long pointer);

    public native void setSelectedSection(long pointer,int section);

    public native String sectionText(long pointer,int section);

    public native String displayFormat(long pointer);
    public native void setDisplayFormat(long pointer,String format);

    public native boolean calendarPopup(long pointer);
    public native void setCalendarPopup(long pointer,boolean enable);

    public native int timeSpec(long pointer);
    public native void setTimeSpec(long pointer,int spec);

    public native long sizeHint(long pointer);

    public native void clear(long pointer);
    public native void stepBy(long pointer,int steps);

}
