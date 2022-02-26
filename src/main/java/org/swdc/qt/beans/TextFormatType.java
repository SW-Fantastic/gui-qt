package org.swdc.qt.beans;

public enum TextFormatType {

    InvalidFormat(-1),
    BlockFormat(1),
    CharFormat(2),
    ListFormat(3),
    FrameFormat(5),
    UserFormat(100);

    private int val;
    TextFormatType(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextFormatType valueOf(int val) {
        for (TextFormatType type: TextFormatType.values()) {
            if (val == type.getVal()) {
                return type;
            }
        }
        return null;
    }
}
