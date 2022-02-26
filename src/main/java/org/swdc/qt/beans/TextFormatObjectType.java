package org.swdc.qt.beans;

public enum TextFormatObjectType {

    NoObject(0),
    ImageObject(1),
    TableObject(2),
    TableCellObject(3),
    UserObject(0x1000);

    private int val;
    TextFormatObjectType(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextFormatObjectType valueOf(int val) {
        for (TextFormatObjectType type: TextFormatObjectType.values()) {
            if (type.getVal() == val) {
                return type;
            }
        }
        return null;
    }

}
