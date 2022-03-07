package org.swdc.qt.beans;

public enum TextOptionFlags {

    ShowTabsAndSpaces ( 0x1),
    ShowLineAndParagraphSeparators ( 0x2),
    AddSpaceForLineAndParagraphSeparators ( 0x4),
    SuppressColors ( 0x8),
    ShowDocumentTerminator ( 0x10),
    IncludeTrailingSpaces ( 0x80000000 );

    private int val;
    TextOptionFlags(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextOptionFlags valueOf(int val) {
        for (TextOptionFlags flag: TextOptionFlags.values()) {
            if (flag.getVal() == val) {
                return flag;
            }
        }
        return null;
    }
}
