package org.swdc.qt.widgets;

public enum ItemSelectionModelFlags {

    NoUpdate       (0x0000),
    Clear          (0x0001),
    Select         (0x0002),
    Deselect       (0x0004),
    Toggle         (0x0008),
    Current        (0x0010),
    Rows           (0x0020),
    Columns        (0x0040),
    SelectCurrent  (Select.val | Current.val),
    ToggleCurrent  (Toggle.val | Current.val),
    ClearAndSelect (Clear.val | Select.val);
    
    private int val;
    ItemSelectionModelFlags(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static ItemSelectionModelFlags valueOf(int val) {
        for (ItemSelectionModelFlags item: values()) {
            if (item.getVal() == val) {
                return item;
            }
        }
        return null;
    }
    
}
