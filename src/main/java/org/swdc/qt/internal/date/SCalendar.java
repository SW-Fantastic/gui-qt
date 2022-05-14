package org.swdc.qt.internal.date;

import org.swdc.qt.internal.SPointer;

import java.util.function.Consumer;

public class SCalendar extends SPointer {

    private static final SCalendar instance = new SCalendar();
    public static final Consumer<Long> CLEANER = instance::dispose;

    public native long create();
    public native long create(int system);
    public native void dispose(long pointer);

    // QCalendar is a trivially copyable value type.
    public native boolean isValid(long pointer);

    // Date queries:
    public native int daysInMonth(long pointer,int month, int year);
    public native int daysInYear(long pointer,int year);
    public native int monthsInYear(long pointer,int year);
    public native boolean isDateValid(long pointer,int year, int month, int day);

    // Leap years:
    public native boolean isLeapYear(long pointer,int year);

    // Properties of the calendar:
    public native boolean isGregorian(long pointer);
    public native boolean isLunar(long pointer);
    public native boolean isLuniSolar(long pointer);
    public native boolean isSolar(long pointer);
    public native boolean isProleptic(long pointer);
    public native boolean hasYearZero(long pointer);
    public native int maximumDaysInMonth(long pointer);
    public native int minimumDaysInMonth(long pointer);
    public native int maximumMonthsInYear(long pointer);
    public native String name(long pointer);

    // QDate conversions:
    public native long dateFromParts(long pointer,int year, int month, int day);
    //QDate dateFromParts(const YearMonthDay &parts);
    //YearMonthDay partsFromDate(QDate date);
    public native int dayOfWeek(long pointer,long datePointer);

    // What's available ?
    public native static String[] availableCalendars();

}
