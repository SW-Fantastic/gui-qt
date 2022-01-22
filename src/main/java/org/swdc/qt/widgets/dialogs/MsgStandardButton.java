package org.swdc.qt.widgets.dialogs;

public enum MsgStandardButton {

    NoButton          ( 0x00000000),
    Ok                ( 0x00000400),
    Save              ( 0x00000800),
    SaveAll           ( 0x00001000),
    Open              ( 0x00002000),
    Yes               ( 0x00004000),
    YesToAll          ( 0x00008000),
    No                ( 0x00010000),
    NoToAll           ( 0x00020000),
    Abort             ( 0x00040000),
    Retry             ( 0x00080000),
    Ignore            ( 0x00100000),
    Close             ( 0x00200000),
    Cancel            ( 0x00400000),
    Discard           ( 0x00800000),
    Help              ( 0x01000000),
    Apply             ( 0x02000000),
    Reset             ( 0x04000000),
    RestoreDefaults   ( 0x08000000);

    private int val;
    MsgStandardButton(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static MsgStandardButton valueOf(int val) {
        for (MsgStandardButton b: MsgStandardButton.values()) {
            if (b.getVal() == val) {
                return b;
            }
        }
        return null;
    }
}
