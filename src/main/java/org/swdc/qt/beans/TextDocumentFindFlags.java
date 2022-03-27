package org.swdc.qt.beans;

public enum TextDocumentFindFlags {

    FindBackward(0x00001),
    FindCaseSensitively(0x00002),
    FindWholeWords(0x00004);

    private int val;
    TextDocumentFindFlags(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextDocumentFindFlags valueOf(int val) {
        for (TextDocumentFindFlags flag: TextDocumentFindFlags.values()) {
            if (flag.val == val) {
                return flag;
            }
        }
        return null;
    }
}
