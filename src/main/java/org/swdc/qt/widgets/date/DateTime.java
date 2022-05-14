package org.swdc.qt.widgets.date;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.beans.TimeSpec;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.date.SDateTime;

import java.util.function.Consumer;

public class DateTime implements NativeAllocated {

    private SDateTime dateTime = new SDateTime();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = dateTime.create();
        if (pointer <= 0) {
            throw new Exception("can not create a date-time, invalid pointer");
        }
        dateTime.address(pointer);
        MemoryHolder.allocated(this);
    }

    @Override
    public void dispose() {
        if (accessible()) {
            dateTime.dispose(getPointer());
            dateTime.cleanAddress();
        }
    }

    @Override
    public long getPointer() {
        return dateTime.address();
    }

    @Override
    public Consumer<Long> disposer() {
        return SDateTime.CLEANER;
    }

    public Date getDate() {
        if (accessible()) {
            long pointer = dateTime.date(getPointer());
            if (pointer > 0) {
                return Date.asDate(pointer);
            }
        }
        return null;
    }

    public Time getTime() {
        if (accessible()) {
            long pointer = dateTime.time(getPointer());
            if (pointer > 0 ) {
                return Time.asTime(pointer);
            }
        }
        return null;
    }

    public TimeSpec getTimeSpec() {
        return accessible() ? TimeSpec.valueOf(dateTime.timeSpec(getPointer())) : null;
    }

    public int getOffsetFromUtc() {
        return accessible() ? dateTime.offsetFromUtc(getPointer()) : 0;
    }

    public String getTimeZoneAbbreviation() {
        return accessible() ? dateTime.timeZoneAbbreviation(getPointer()) : null;
    }

    public boolean isDaylightTime() {
        return accessible() && dateTime.isDaylightTime(getPointer());
    }

    public long toMSecsSinceEpoch() {
        return accessible() ? dateTime.toMSecsSinceEpoch(getPointer()) : 0;
    }

    public long toSecsSinceEpoch() {
        return accessible() ? dateTime.toSecsSinceEpoch(getPointer()) : 0;
    }

    public void setDate(Date date) {
        if (accessible(date)) {
            dateTime.setDate(getPointer(),date.getPointer());
        }
    }

    public void setTime(Time time) {
        if (accessible(time)) {
            dateTime.setTime(getPointer(),time.getPointer());
        }
    }

    public void setTimeSpec(TimeSpec spec) {
        if (accessible(spec)) {
            dateTime.setTimeSpec(getPointer(),spec.getVal());
        }
    }

    public void setOffsetFromUtc(int offsetSeconds) {
        if (accessible()) {
            dateTime.setOffsetFromUtc(getPointer(),offsetSeconds);
        }
    }

    public void setTimeZone(String zone) {
        if (accessible(zone)) {
            dateTime.setTimeZone(getPointer(),zone);
        }
    }

    public void setMSecsSinceEpoch(long msecs) {
        if (accessible()) {
            dateTime.setMSecsSinceEpoch(getPointer(),msecs);
        }
    }

    public void setSecsSinceEpoch(long secs) {
        if (accessible()) {
            dateTime.setSecsSinceEpoch(getPointer(),secs);
        }
    }

    public DateTime addDays(long days) {
        if (accessible()) {
            long pointer = dateTime.addDays(getPointer(),days);
            if (pointer > 0) {
                return asDateTime(pointer);
            }
        }
        return null;
    }

    public DateTime addMonths(int months) {
        if (accessible()) {
            long pointer = dateTime.addMonths(getPointer(),months);
            if (pointer > 0) {
                return asDateTime(pointer);
            }
        }
        return null;
    }

    public DateTime addYears(int years) {
        if (accessible()) {
            long pointer = dateTime.addYears(getPointer(),years);
            if (pointer > 0 ){
                return asDateTime(pointer);
            }
        }
        return null;
    }

    public DateTime addSecs(long secs) {
        if (accessible()) {
            long pointer = dateTime.addSecs(getPointer(),secs);
            if (pointer > 0) {
                return asDateTime(pointer);
            }
        }
        return null;
    }

    public DateTime addMSecs(long msecs) {
        if (accessible()) {
            long pointer = dateTime.addMSecs(getPointer(),msecs);
            if (pointer > 0) {
                return asDateTime(pointer);
            }
        }
        return null;
    }

    public DateTime toTimeSpec(TimeSpec spec) {
        if (accessible(spec)) {
            long pointer = dateTime.toTimeSpec(getPointer(),spec.getVal());
            if (pointer > 0) {
                return asDateTime(pointer);
            }
        }
        return null;
    }

    public DateTime toLocalTime() {
        if (accessible()) {
            long pointer = dateTime.toLocalTime(getPointer());
            if (pointer > 0) {
                return asDateTime(pointer);
            }
        }
        return null;
    }

    public DateTime toUTC() {
        if (accessible()) {
            long pointer = dateTime.toUTC(getPointer());
            if (pointer > 0) {
                return asDateTime(pointer);
            }
        }
        return null;
    }

    public DateTime toOffsetFromUtc(int offsetSeconds) {
        if (accessible()) {
            long pointer = dateTime.toOffsetFromUtc(getPointer(),offsetSeconds);
            if (pointer > 0) {
                return asDateTime(pointer);
            }
        }
        return null;
    }

    public DateTime toTimeZone(String toZone) {
        if (accessible(toZone)) {
            long pointer = dateTime.toTimeZone(getPointer(),toZone);
            if (pointer > 0) {
                return asDateTime(pointer);
            }
        }
        return null;
    }

    public long daysTo(DateTime val) {
        return accessible(val) ? dateTime.daysTo(getPointer(),val.getPointer()) : 0;
    }

    public long secsTo(DateTime val) {
        return accessible(val) ? dateTime.secsTo(getPointer(),val.getPointer()) : 0;
    }

    public long msecsTo(DateTime val) {
        return accessible(val) ? dateTime.msecsTo(getPointer(),val.getPointer()) : 0;
    }

    public static DateTime currentDateTime() {
        long pointer = SDateTime.currentDateTime();
        if (pointer > 0) {
            return asDateTime(pointer);
        }
        return null;
    }

    public static DateTime currentDateTimeUtc() {
        long pointer = SDateTime.currentDateTimeUtc();
        if (pointer > 0) {
            return asDateTime(pointer);
        }
        return null;
    }

    public static DateTime asDateTime(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("can not cratea a date time, invalid pointer");
        }
        DateTime dateTime = new DateTime();
        dateTime.dateTime.address(pointer);
        MemoryHolder.allocated(dateTime);
        return dateTime;
    }

}
