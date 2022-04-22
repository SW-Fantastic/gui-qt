package org.swdc.qt.widgets;

import org.swdc.qt.beans.TimeSpec;
import org.swdc.qt.internal.widgets.SDateTimeEdit;
import org.swdc.qt.widgets.date.Calendar;
import org.swdc.qt.widgets.date.Date;
import org.swdc.qt.widgets.date.DateTime;
import org.swdc.qt.widgets.date.Time;

public class DateTimeEdit extends AbstractSpinBox {

    private SDateTimeEdit edit = new SDateTimeEdit();

    @Override
    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = edit.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create date-time-edit.");
        }
        edit.address(pointer);
    }

    @Override
    public void dispose() {
        if (accessible()) {
            edit.dispose(getPointer());
            edit.cleanAddress();
        }
    }

    @Override
    public long getPointer() {
        return edit.address();
    }

    public DateTime getDateTime() {
        if (accessible()) {
            long pointer = edit.dateTime(getPointer());
            if (pointer > 0) {
                return DateTime.asDateTime(pointer);
            }
        }
        return null;
    }

    public Date getDate() {
        if (accessible()) {
            long pointer =  edit.date(getPointer());
            if (pointer > 0) {
                return Date.asDate(pointer);
            }
        }
        return null;
    }

    public Time getTime() {
        if (accessible()) {
            long pointer = edit.time(getPointer());
            if (pointer > 0) {
                return Time.asTime(pointer);
            }
        }
        return null;
    }

    public Calendar getCalendar() {
        if (accessible()) {
            long pointer = edit.calendar(getPointer());
            if (pointer > 0) {
                return Calendar.asCalendar(pointer);
            }
        }
        return null;
    }

    public void setCalendar(Calendar calendar) {
        if (accessible(calendar)) {
            edit.setCalendar(getPointer(),calendar.getPointer());
        }
    }

    public DateTime getMinimumDateTime() {
        if (accessible()) {
            long pointer = edit.minimumDateTime(getPointer());
            if (pointer > 0) {
                return DateTime.asDateTime(pointer);
            }
        }
        return null;
    }

    public void clearMinimumDateTime() {
        if (accessible()) {
            edit.clearMinimumDateTime(getPointer());
        }
    }

    public void setMinimumDateTime(DateTime dt) {
        if (accessible(dt)) {
            edit.setMinimumDateTime(getPointer(),dt.getPointer());
        }
    }

    public DateTime getMaximumDateTime() {
        if (accessible()) {
            long pointer = edit.maximumDateTime(getPointer());
            if (pointer > 0) {
                return DateTime.asDateTime(pointer);
            }
        }
        return null;
    }

    public void clearMaximumDateTime() {
        if (accessible()) {
            edit.clearMaximumDateTime(getPointer());
        }
    }

    public void setMaximumDateTime(DateTime dt) {
        if (accessible(dt)) {
            edit.setMaximumDateTime(getPointer(),dt.getPointer());
        }
    }

    public void setDateTimeRange(DateTime min,DateTime max) {
        if (accessible(min,max)) {
            edit.setDateTimeRange(getPointer(),min.getPointer(),max.getPointer());
        }
    }

    public Date getMinimumDate() {
        if (accessible()) {
            long pointer = edit.minimumDate(getPointer());
            if (pointer > 0) {
                return Date.asDate(pointer);
            }
        }
        return null;
    }

    public void setMinimumDate(Date min) {
        if (accessible(min)) {
            edit.setMinimumDate(getPointer(),min.getPointer());
        }
    }

    public void clearMinimumDate(){
        if (accessible()) {
            edit.clearMinimumDate(getPointer());
        }
    }

    public Date getMaximumDate() {
        if (accessible()) {
            long pointer = edit.maximumDate(getPointer());
            if (pointer > 0) {
                return Date.asDate(pointer);
            }
        }
        return null;
    }

    public void setMaximumDate(Date max) {
        if (accessible(max)) {
            edit.setMaximumDate(getPointer(),max.getPointer());
        }
    }

    public void clearMaximumDate() {
        if (accessible()) {
            edit.clearMaximumDate(getPointer());
        }
    }

    public void setDateRange(Date min,Date max) {
        if (accessible(max,min)) {
            edit.setDateRange(getPointer(),min.getPointer(),max.getPointer());
        }
    }

    public Time getMinimumTime() {
        if (accessible()) {
            long pointer = edit.minimumTime(getPointer());
            if (pointer > 0) {
                return Time.asTime(pointer);
            }
        }
        return null;
    }

    public void setMinimumTime(Time min) {
        if (accessible(min)) {
            edit.setMinimumTime(getPointer(),min.getPointer());
        }
    }

    public void clearMinimumTime(){
        if (accessible()) {
            edit.clearMinimumTime(getPointer());
        }
    }

    public Time getMaximumTime() {
        if (accessible()) {
            long pointer = edit.maximumTime(getPointer());
            if (pointer > 0) {
                return Time.asTime(pointer);
            }
        }
        return null;
    }

    public void setMaximumTime(Time max) {
        if (accessible(max)) {
            edit.setMaximumTime(getPointer(),max.getPointer());
        }
    }

    public void clearMaximumTime() {
        if (accessible()) {
            edit.clearMaximumTime(getPointer());
        }
    }

    public void setTimeRange(Time min,Time max) {
        if (accessible(max,min)) {
            edit.setTimeRange(getPointer(),min.getPointer(),max.getPointer());
        }
    }

    public DateTimeEditSection currentSection() {
        if (accessible()) {
            int sec = edit.currentSection(getPointer());
            return DateTimeEditSection.valueOf(sec);
        }
        return null;
    }

    public DateTimeEditSection sectionAt(int index) {
        if (accessible()) {
            int sec = edit.sectionAt(getPointer(),index);
            return DateTimeEditSection.valueOf(sec);
        }
        return null;
    }

    public void setCurrentSection(DateTimeEditSection section) {
        if (accessible(section)) {
            edit.setCurrentSection(getPointer(),section.getVal());
        }
    }

    public int currentSectionIndex() {
        return accessible() ? edit.currentSectionIndex(getPointer()) : 0;
    }

    public void setCurrentSectionIndex(int index) {
        if (accessible()) {
            edit.setCurrentSectionIndex(getPointer(),index);
        }
    }

    //QCalendarWidget *calendarWidget() const;
    //void setCalendarWidget(QCalendarWidget *calendarWidget);

    public int sectionCount() {
        return accessible() ? edit.sectionCount(getPointer()) : 0;
    }

    public void setSelectedSection(DateTimeEditSection section) {
        if (accessible()) {
            edit.setSelectedSection(getPointer(),section.getVal());
        }
    }

    public String getSectionText(DateTimeEditSection section) {
        return accessible(section) ? edit.sectionText(getPointer(),section.getVal()) : null;
    }

    public String getDisplayFormat() {
        return accessible() ? edit.displayFormat(getPointer()) : null;
    }

    public void setDisplayFormat(String format) {
        if (accessible(format)) {
            edit.setDisplayFormat(getPointer(),format);
        }
    }

    public boolean isCalendarPopup() {
        return accessible() && edit.calendarPopup(getPointer());
    }

    public void setCalendarPopup(boolean enable) {
        if (accessible()) {
            edit.setCalendarPopup(getPointer(),enable);
        }
    }

    public TimeSpec getTimeSpec(){
        return accessible() ? TimeSpec.valueOf(edit.timeSpec(getPointer())) : null;
    }

    public void setTimeSpec(TimeSpec spec) {
        if (accessible()) {
            edit.setTimeSpec(getPointer(),spec.getVal());
        }
    }

    public Size getSizeHint() {
        if (accessible()) {
            long pointer = edit.sizeHint(getPointer());
            if (pointer > 0) {
                return Size.asSize(pointer);
            }
        }
        return null;
    }

    public void clear() {
        if (accessible()) {
            edit.clear(getPointer());
        }
    }

    public void stepBy(int steps) {
        if (accessible()) {
            edit.stepBy(getPointer(),steps);
        }
    }

}
