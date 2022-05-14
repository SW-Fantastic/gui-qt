package org.swdc.qt.beans;

public enum DropAction {

    CopyAction(0x1),
    MoveAction(0x2),
    LinkAction(0x4),
    ActionMask(0xff),
    TargetMoveAction(0x8002),
    IgnoreAction(0x0);

    private int val;
    DropAction(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static DropAction valueOf(int val) {
        for (DropAction action : values()) {
            if (action.getVal() == val) {
                return action;
            }
        }
        return null;
    }
}
