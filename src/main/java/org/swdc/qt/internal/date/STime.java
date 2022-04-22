package org.swdc.qt.internal.date;

import org.swdc.qt.internal.SPointer;

public class STime extends SPointer {

    public native long create();
    public native void dispose(long pointer);

    public native boolean isValid(long pointer);

    public native int hour(long pointer);
    public native int minute(long pointer);
    public native int second(long pointer);
    public native int msec(long pointer);

    public native boolean setHMS(long pointer,int h, int m, int s, int ms);

    public native long addSecs(long pointer,int secs);
    public native int secsTo(long pointer,long timePointer); // ### Qt 6: plain QTime
    public native long addMSecs(long pointer,int ms);
    public native int msecsTo(long pointer,long timePointer); // ### Qt 6: plain QTime

    public native boolean equals(long pointer,long other);
    public native boolean isBefore(long pointer,long other);
    public native boolean isAfter(long pointer,long other);
}
