package org.swdc.qt.internal.date;

import org.swdc.qt.internal.SPointer;

public class SDate extends SPointer {

    public native long create();
    public native void dispose(long pointer);

    public native int year(long pointer);
    public native int month(long pointer);
    public native int day(long pointer);
    public native int dayOfWeek(long pointer);
    public native int dayOfYear(long pointer);
    public native int daysInMonth(long pointer);
    public native int daysInYear(long pointer);
    public native int weekNumber(long pointer);

    public native int year(long pointer,long cal);
    public native int month(long pointer,long cal);
    public native int day(long pointer,long cal);
    public native int dayOfWeek(long pointer,long cal);
    public native int dayOfYear(long pointer,long cal);
    public native int daysInMonth(long pointer,long cal);
    public native int daysInYear(long pointer,long cal);

    public native boolean setDate(long pointer,int year, int month, int day);
    public native boolean setDate(long pointer,int year, int month, int day, long cal);

    public native long addDays(long pointer,int days);
    public native long addMonths(long pointer,int months);
    public native long addYears(long pointer,int years);
    public native long addMonths(long pointer,int months, long cal);
    public native long addYears(long pointer,int years, long cal);
    public native long daysTo(long pointer,long date);

    public native boolean equals(long pointer,long other); // ==
    public native boolean isBefore(long pointer,long other); // <
    public native boolean isAfter (long pointer,long other); // >

}
