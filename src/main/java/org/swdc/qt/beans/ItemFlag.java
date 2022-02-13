package org.swdc.qt.beans;

public enum ItemFlag {

    NoItemFlags(0),
    ItemIsSelectable(1),
    ItemIsEditable(2),
    ItemIsDragEnabled(4),
    ItemIsDropEnabled(8),
    ItemIsUserCheckable(16),
    ItemIsEnabled(32),
    ItemIsAutoTristate(64),
    ItemNeverHasChildren(128),
    ItemIsUserTristate(256);

    private int val;
    ItemFlag(int flag) {
        this.val = flag;
    }

    public int getVal() {
        return val;
    }

    public static ItemFlag valueOf(int val) {
        for (ItemFlag flag : ItemFlag.values()) {
            if (flag.getVal() == val) {
                return flag;
            }
        }
        return null;
    }
}
