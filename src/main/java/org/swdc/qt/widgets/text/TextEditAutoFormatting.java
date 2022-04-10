package org.swdc.qt.widgets.text;

public enum TextEditAutoFormatting {

    AutoNone (0),
    AutoBulletList (0x00000001),
    AutoAll (0xffffffff);

    private int val;
    TextEditAutoFormatting(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextEditAutoFormatting valueOf(int val) {
        for (TextEditAutoFormatting item : TextEditAutoFormatting.values()) {
            if (item.getVal() == val) {
                return item;
            }
        }
        return null;
    }
}
