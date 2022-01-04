package org.swdc.qt.beans;

public enum Alignment {

    AlignLeft(0x0001),
    AlignLeading(AlignLeft.getFlagValue()),
    AlignRight(0x0002),
    AlignTrailing(AlignRight.getFlagValue()),
    AlignHCenter(0x0004),
    AlignJustify(0x0008),
    AlignAbsolute(0x0010),
    AlignHorizontal_Mask(
            AlignLeft.getFlagValue()
            | AlignRight.getFlagValue()
            | AlignHCenter.getFlagValue()
            | AlignJustify.getFlagValue()
            | AlignAbsolute.getFlagValue()
    ),

    AlignTop (0x0020),
    AlignBottom (0x0040),
    AlignVCenter (0x0080),
    AlignBaseline (0x0100),
    // Note that 0x100 will clash with Qt::TextSingleLine = 0x100 due to what the comment above
    // this enum declaration states. However, since Qt::AlignBaseline is only used by layouts,
    // it doesn't make sense to pass Qt::AlignBaseline to QPainter::drawText(), so there
    // shouldn't really be any ambiguity between the two overlapping enum values.
    AlignVertical_Mask (
            AlignTop.getFlagValue()
                    | AlignBottom.getFlagValue()
                    | AlignVCenter.getFlagValue()
                    | AlignBaseline.getFlagValue()
    ),

    AlignCenter (AlignVCenter.getFlagValue() | AlignHCenter.getFlagValue());

    private final long flagValue;
    Alignment(long flagValue) {
        this.flagValue = flagValue;
    }

    public long getFlagValue() {
        return flagValue;
    }

    public static Alignment valueOf(long value) {

        if (value == 0x0001) {
            return Alignment.AlignLeft;
        } else if (value == 0x0002) {
            return Alignment.AlignRight;
        } else if (value == 0x0004) {
            return Alignment.AlignHCenter;
        } else if (value == 0x0008) {
            return Alignment.AlignJustify;
        } else if (value == 0x0010) {
            return Alignment.AlignAbsolute;
        } else if (value == 0x0080) {
            return Alignment.AlignVCenter;
        } else if (value == 0x0020) {
            return Alignment.AlignTop;
        } else if (value == 0x0100) {
            return Alignment.AlignBaseline;
        } else if (value == 0x0040) {
            return Alignment.AlignBottom;
        } else if (value == (0x0001 | 0x0002 | 0x0004 | 0x0008 | 0x0010)) {
            return Alignment.AlignHorizontal_Mask;
        } else if (value == (0x0020 | 0x0040 | 0x0080 | 0x0100)) {
            return Alignment.AlignVertical_Mask;
        } else if (value == (0x0080 | 0x0004)) {
            return Alignment.AlignCenter;
        }
        return null;
    }

}
