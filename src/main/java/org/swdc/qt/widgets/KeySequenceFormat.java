package org.swdc.qt.widgets;

public enum KeySequenceFormat {

    NativeText(0),
    PortableText(1);

    private int val;
    KeySequenceFormat(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static KeySequenceFormat valueOf(int val) {
        switch (val) {
            case 0: return NativeText;
            case 1: return PortableText;
            default:return null;
        }
    }
}
