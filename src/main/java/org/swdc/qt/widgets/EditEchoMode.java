package org.swdc.qt.widgets;

public enum EditEchoMode {

    Normal(0),
    NoEcho(1),
    Password(2),
    PasswordEchoOnEdit(3);

    private int val;
    EditEchoMode(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static EditEchoMode valueOf(int val) {
        switch (val) {
            case 0: return Normal;
            case 1: return NoEcho;
            case 2: return Password;
            case 3: return PasswordEchoOnEdit;
            default:return null;
        }
    }
}
