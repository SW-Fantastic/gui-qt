package org.swdc.qt.widgets;

public enum DateTimeEditSection {

    NoSection      (0x0000),
    AmPmSection    (0x0001),
    MSecSection    (0x0002),
    SecondSection  (0x0004),
    MinuteSection  (0x0008),
    HourSection    (0x0010),
    DaySection     (0x0100),
    MonthSection   (0x0200),
    YearSection    (0x0400),
    TimeSections_Mask (AmPmSection.val|MSecSection.val|SecondSection.val|MinuteSection.val|HourSection.val),
    DateSections_Mask (DaySection.val|MonthSection.val|YearSection.val);

    private int val;
    DateTimeEditSection(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static DateTimeEditSection valueOf(int val) {
        for (DateTimeEditSection section : values()) {
            if (section.val == val) {
                return section;
            }
        }
        return null;
    }
}
