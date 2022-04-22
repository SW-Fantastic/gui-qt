package org.swdc.qt.beans;

public enum TimeSpec {

    LocalTime(0),
    UTC(1),
    OffsetFromUTC(2),
    TimeZone(3);

    private int val;
    TimeSpec(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TimeSpec valueOf(int val) {
        for (TimeSpec spec: values()) {
            if (spec.getVal() == val) {
                return spec;
            }
        }
        return null;
    }

}
