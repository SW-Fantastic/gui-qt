package org.swdc.qt.beans;

public enum FocusReason {

    MouseFocusReason(0),
    TabFocusReason(1),
    BacktabFocusReason(2),
    ActiveWindowFocusReason(3),
    PopupFocusReason(4),
    ShortcutFocusReason(5),
    MenuBarFocusReason(6),
    OtherFocusReason(7),
    NoFocusReason(8);

    private int val;
    FocusReason(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static FocusReason valueOf(int val) {
        for (FocusReason reason : FocusReason.values()) {
            if (reason.getVal() == val) {
                return reason;
            }
        }
        return null;
    }

}
