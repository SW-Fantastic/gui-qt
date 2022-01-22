package org.swdc.qt.widgets.dialogs;

public enum MsgButtonRoles {

    InvalidRole(-1),
    AcceptRole(0),
    RejectRole(1),
    DestructiveRole(2),
    ActionRole(3),
    HelpRole(4),
    YesRole(5),
    NoRole(6),
    ResetRole(7),
    ApplyRole(8),

    NRoles(9);

    private int val;
    MsgButtonRoles(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static MsgButtonRoles valueOf(int val) {
        for (MsgButtonRoles r: MsgButtonRoles.values()) {
            if (r.getVal() == val) {
                return r;
            }
        }
        return null;
    }
}
