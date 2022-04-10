package org.swdc.qt.widgets.text;

public enum TextFormatPageBreakFlag {

    PageBreak_Auto(0),
    PageBreak_AlwaysBefore(0x001),
    PageBreak_AlwaysAfter(0x010);

    private int val;
    TextFormatPageBreakFlag(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextFormatPageBreakFlag valueOf(int val) {
        for (TextFormatPageBreakFlag flag: TextFormatPageBreakFlag.values()) {
            if (val == flag.getVal()) {
                return flag;
            }
        }
        return null;
    }

}
