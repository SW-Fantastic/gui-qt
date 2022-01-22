package org.swdc.qt.widgets.dialogs;

public enum MsgIcon {

    NoIcon(0),
    Information(1),
    Warning(2),
    Critical(3),
    Question(4);

    private int val;
    MsgIcon(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }
    public static MsgIcon valueOf(int val) {
        for (MsgIcon icon: MsgIcon.values()) {
            if (icon.getVal() == val) {
                return icon;
            }
        }
        return null;
    }
}
