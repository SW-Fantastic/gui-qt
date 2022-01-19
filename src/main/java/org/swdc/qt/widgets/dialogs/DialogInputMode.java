package org.swdc.qt.widgets.dialogs;

public enum DialogInputMode {

    TextInput(0),
    IntInput(1),
    DoubleInput(2);

    private int val;
    DialogInputMode(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static DialogInputMode valueOf(int val) {
        switch (val) {
            case 0: return TextInput;
            case 1: return IntInput;
            case 2: return DoubleInput;
            default:return null;
        }
    }
}
