package org.swdc.qt.internal.date;

import org.swdc.qt.internal.SPointer;

public class SDateTime extends SPointer {

    public native long create();
    public native void dispose(long pointer);

    public native long date(long pointer);
    public native long time(long pointer) ;
    public native int timeSpec(long pointer) ;
    public native int offsetFromUtc(long pointer) ;

    public native String timeZoneAbbreviation(long pointer) ;
    public native boolean isDaylightTime(long pointer) ;

    public native long toMSecsSinceEpoch(long pointer) ;
    public native long toSecsSinceEpoch(long pointer) ;

    public native void setDate(long pointer,long date); // ### Qt 6: plain QDate
    public native void setTime(long pointer,long time);
    public native void setTimeSpec(long pointer,int spec);
    public native void setOffsetFromUtc(long pointer,int offsetSeconds);
    public native  void setTimeZone(long pointer,String zone);
    public native void setMSecsSinceEpoch(long pointer,long msecs);
    public native void setSecsSinceEpoch(long pointer,long secs);

    public native long addDays(long pointer,long days) ;
    public native long addMonths(long pointer,int months) ;
    public native long addYears(long pointer,int years) ;
    public native long addSecs(long pointer,long secs) ;
    public native long addMSecs(long pointer,long msecs) ;

    public native long toTimeSpec(long pointer,int spec) ;
    public native long toLocalTime(long pointer);
    public native long toUTC(long pointer);
    public native long toOffsetFromUtc(long pointer,int offsetSeconds);

    public native long toTimeZone(long pointer,String toZone);

    public native long daysTo(long pointer,long val) ;
    public native long secsTo(long pointer,long val) ;
    public native long msecsTo(long pointer,long val) ;

    public native static long currentDateTime();
    public native static long currentDateTimeUtc();

}
