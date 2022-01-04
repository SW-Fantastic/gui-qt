package org.swdc.qt.beans;

public enum KeyboardModifier {

    Key_Shift(0x02000000),
    Key_Meta(0x10000000),
    Key_Alt(0x08000000),
    Key_Control(0x04000000);

    private int val;

    KeyboardModifier(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static KeyboardModifier valueOf(int val) {
        switch (val) {
            case 0x02000000:
                return Key_Shift;
            case 0x10000000:
                return Key_Meta;
            case 0x08000000:
                return Key_Alt;
            case 0x04000000:
                return Key_Control;
            default:
                return null;
        }
    }
}
