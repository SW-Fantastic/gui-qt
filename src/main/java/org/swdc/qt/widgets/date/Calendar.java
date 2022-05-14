package org.swdc.qt.widgets.date;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.beans.CalendarSystem;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.date.SCalendar;

import java.util.function.Consumer;

public class Calendar implements NativeAllocated {

    private SCalendar calendar = new SCalendar();

    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = calendar.create();
        if (pointer <= 0) {
            throw new Exception("can not create calendar, invalid pointer");
        }
        calendar.address(pointer);
        MemoryHolder.allocated(this);
    }

    public void allocate(CalendarSystem system) throws Exception {
        if (accessible()) {
            return;
        }
        if (!accessibleParam(system)) {
            throw new Exception("can not create calendar, system is invalid");
        }
        long pointer = calendar.create(system.getVal());
        if (pointer <= 0) {
            throw new Exception("can not create calendar, invalid pointer");
        }
        calendar.address(pointer);
        MemoryHolder.allocated(this);
    }

    // QCalendar is a trivially copyable value type.
    public boolean isValid() {
        if (accessible()) {
            return calendar.isValid(getPointer());
        }
        return false;
    }

    // Date queries:
    public int getDaysInMonth(int month, int year) {
        if (accessible()) {
            return calendar.daysInMonth(getPointer(),month,year);
        }
        return 0;
    }

    public int getDaysInYear(int year) {
        if (accessible()) {
            return calendar.daysInYear(getPointer(),year);
        }
        return 0;
    }

    public int getMonthsInYear(int year) {
        if (accessible()) {
            return calendar.monthsInYear(getPointer(),year);
        }
        return 0;
    }

    public boolean isDateValid(int year, int month, int day) {
        if (accessible()) {
            return calendar.isDateValid(getPointer(),year,month,day);
        }
        return false;
    }

    // Leap years:
    public boolean isLeapYear(int year){
        if (accessible()) {
            return calendar.isLeapYear(getPointer(),year);
        }
        return false;
    }

    // Properties of the calendar:
    public boolean isGregorian() {
        return accessible() && calendar.isGregorian(getPointer());
    }

    public boolean isLunar() {
        return accessible() && calendar.isLunar(getPointer());
    }

    public boolean isLuniSolar() {
        return accessible() && calendar.isLuniSolar(getPointer());
    }

    public boolean isSolar() {
        return accessible() && calendar.isSolar(getPointer());
    }

    public boolean isProleptic() {
        return accessible() && calendar.isProleptic(getPointer());
    }

    public boolean hasYearZero() {
        return accessible() && calendar.hasYearZero(getPointer());
    }

    public int getMaximumDaysInMonth(){
        return accessible() ? calendar.maximumDaysInMonth(getPointer()) : 0;
    }

    public int getMinimumDaysInMonth() {
        return accessible() ? calendar.minimumDaysInMonth(getPointer()) : 0;
    }

    public int getMaximumMonthsInYear() {
        return accessible() ? calendar.maximumMonthsInYear(getPointer()) : 0;
    }

    public String getName() {
        return accessible() ? calendar.name(getPointer()) : null;
    }

    // QDate conversions:
    public native long dateFromParts(long pointer,int year, int month, int day);
    //QDate dateFromParts(const YearMonthDay &parts);
    //YearMonthDay partsFromDate(QDate date);
    public native int getDayOfWeek(long pointer,long datePointer);

    @Override
    public void dispose() {
        if (accessible()) {
            calendar.dispose(getPointer());
            calendar.cleanAddress();
        }
    }

    public static Calendar asCalendar(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("can not create a calendar, invalid pointer");
        }
        Calendar calendar = new Calendar();
        calendar.calendar.address(pointer);
        MemoryHolder.allocated(calendar);
        return calendar;
    }

    @Override
    public Consumer<Long> disposer() {
        return SCalendar.CLEANER;
    }

    @Override
    public long getPointer() {
        return calendar.address();
    }
}
