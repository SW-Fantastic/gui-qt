package org.swdc.qt.widgets.date;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.internal.date.STime;

public class Time implements NativeAllocated {

    private STime time = new STime();


    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = time.create();
        if (pointer <= 0) {
            throw new Exception("can not create calendar, invalid pointer");
        }
        time.address(pointer);
    }

    @Override
    public void dispose() {
        if (accessible()) {
            time.dispose(getPointer());
            time.cleanAddress();
        }
    }

    @Override
    public long getPointer() {
        return time.address();
    }


    public boolean isValid() {
        return accessible() && time.isValid(getPointer());
    }

    public int getHour() {
        return accessible() ? time.hour(getPointer()) : 0;
    }

    public int getMinute() {
        return accessible() ? time.minute(getPointer()) : 0;
    }

    public int getSecond() {
        return accessible() ? time.second(getPointer()) : 0;
    }

    public int getMsec() {
        return accessible() ? time.msec(getPointer()) : 0;
    }

    public boolean setHMS(int h, int m, int s, int ms) {
        return accessible() && time.setHMS(getPointer(),h,m,s,ms);
    }

    public Time addSecs(int secs){
        if (accessible()) {
            long pointer = time.addSecs(getPointer(),secs);
            if (pointer > 0) {
                return asTime(pointer);
            }
        }
        return null;
    }

    public int secsTo(Time time) {
        return accessible(time) ? this.time.secsTo(getPointer(),time.getPointer()) : 0;
    }

    public Time addMSecs(int ms) {
        if (accessible()) {
            long pointer = time.addMSecs(getPointer(),ms);
            if (pointer > 0) {
                return asTime(pointer);
            }
        }
        return null;
    }

    public int msecsTo(Time time) {
        if (accessible(time)) {
            return this.time.msecsTo(getPointer(),time.getPointer());
        }
        return 0;
    }

    public boolean equals(Object other) {
        if (!(other instanceof Time)) {
            return false;
        }
        return accessible(other) && time.equals(getPointer(),((Time) other).getPointer());
    }


    public boolean isBefore(Time other) {
        return accessible(other) && time.isBefore(getPointer(),other.getPointer());
    }

    public boolean isAfter(Time other) {
        return accessible(other) && time.isAfter(getPointer(),other.getPointer());
    }

    public static Time asTime(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("can not create a time, invalid pointer");
        }
        Time time = new Time();
        time.time.address(pointer);
        return time;
    }

}
