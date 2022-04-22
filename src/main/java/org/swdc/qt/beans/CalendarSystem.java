package org.swdc.qt.beans;

public enum CalendarSystem {

    Gregorian(0),
    Julian(8),
    Milankovic(9),
    Jalali(10),
    IslamicCivil(11),
    Last(11),
    User(-1)
    ;
    private int val;
    CalendarSystem(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static CalendarSystem valueOf(int val) {
        for (CalendarSystem system : values()) {
            if (system.getVal() == val) {
                return system;
            }
        }
        return null;
    }
}
