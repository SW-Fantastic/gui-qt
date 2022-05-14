package org.swdc.qt.widgets.date;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.date.SDate;
import org.swdc.qt.internal.date.SDateTime;

import java.util.function.Consumer;

public class Date implements NativeAllocated {

    private SDate date = new SDate();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = date.create();
        if (pointer <= 0) {
            throw new Exception("can not create calendar, invalid pointer");
        }
        date.address(pointer);
        MemoryHolder.allocated(this);
    }

    @Override
    public void dispose() {
        if (accessible()) {
            date.dispose(getPointer());
            date.cleanAddress();
        }
    }

    @Override
    public long getPointer() {
        return date.address();
    }

    @Override
    public Consumer<Long> disposer() {
        return SDate.CLEANER;
    }

    public int getYear() {
        return accessible() ? date.year(getPointer()) : 0;
    }

    public int getMonth() {
        return accessible() ? date.month(getPointer()) : 0;
    }

    public int getDay() {
        return accessible() ? date.day(getPointer()) : 0;
    }

    public int getDayOfWeek() {
        return accessible() ? date.dayOfWeek(getPointer()) : 0;
    }

    public int getDayOfYear() {
        return accessible() ? date.dayOfYear(getPointer()) : 0;
    }

    public int getDaysInMonth() {
        return accessible() ? date.daysInMonth(getPointer()) : 0;
    }

    public int getDaysInYear() {
        return accessible() ? date.daysInYear(getPointer()) : 0;
    }

    public int getWeekNumber() {
        return accessible()  ? date.weekNumber(getPointer()) : 0;
    }

    public int getYear(Calendar cal) {
        return accessible(cal) ? date.year(getPointer(),cal.getPointer()) : 0;
    }

    public int getMonth(Calendar cal) {
        return accessible(cal) ? date.month(getPointer(),cal.getPointer()) : 0;
    }

    public int getDay(Calendar cal) {
        return accessible(cal) ? date.day(getPointer(),cal.getPointer()) : 0;
    }

    public int getDayOfWeek(Calendar cal) {
        return accessible(cal) ? date.dayOfWeek(getPointer(),cal.getPointer()) : 0;
    }

    public int getDayOfYear(Calendar cal) {
        return accessible(cal) ? date.dayOfYear(getPointer(),cal.getPointer()) : 0;
    }

    public int getDaysInMonth(Calendar cal) {
        return accessible(cal) ? date.daysInMonth(getPointer(),cal.getPointer()) : 0;
    }

    public int getDaysInYear(Calendar cal) {
        return accessible(cal) ? date.daysInYear(getPointer(),cal.getPointer()) : 0;
    }

    public boolean setDate(int year, int month, int day) {
        return accessible() && date.setDate(getPointer(),year,month,day);
    }

    public boolean setDate(int year, int month, int day,Calendar cal) {
        return accessible(cal) && date.setDate(getPointer(),year,month,day,cal.getPointer());
    }

    public Date addDays(int days){
        if (accessible()) {
            long pointer = date.addDays(getPointer(),days);
            if (pointer > 0) {
                return asDate(pointer);
            }
        }
        return null;
    }

    public Date addMonths(int months) {
        if (accessible()) {
            long pointer = date.addMonths(getPointer(),months);
            if (pointer > 0) {
                return asDate(pointer);
            }
        }
        return null;
    }

    public Date addYears(int years) {
        if (accessible()) {
            long pointer = date.addYears(getPointer(),years);
            if (pointer > 0) {
                return asDate(pointer);
            }
        }
        return null;
    }

    public Date addMonths(int months, Calendar cal) {
        if (accessible(cal)) {
            long pointer = date.addMonths(getPointer(),months,cal.getPointer());
            if (pointer > 0) {
                return asDate(pointer);
            }
        }
        return null;
    }

    public Date addYears(int years,Calendar cal) {
        if (accessible(cal)) {
            long pointer = date.addYears(getPointer(),years,cal.getPointer());
            if (pointer > 0) {
                return asDate(pointer);
            }
        }
        return null;
    }

    public long daysTo(Date date){
        return accessible(date) ? this.date.daysTo(getPointer(),date.getPointer()) : 0L;
    }

    public boolean equals(Object other) {
        if (!(other instanceof Date)) {
            return false;
        }
        return accessible(other) && date.equals(getPointer(), ((Date) other).getPointer());
    }
    public boolean isBefore(Date other) {
        return accessible(other) && date.isBefore(getPointer(),other.getPointer());
    }

    public boolean isAfter (Date other) {
        return accessible(other) && date.isAfter(getPointer(),other.getPointer());
    }

    public static Date asDate(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("can not create a date , invalid pointer");
        }
        Date date = new Date();
        date.date.address(pointer);
        MemoryHolder.allocated(date);
        return date;
    }
}
