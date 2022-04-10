package org.swdc.qt.widgets.text;

public enum TextDocumentMarkdownFuture {

    MarkdownNoHTML(0x0020 | 0x0040),
    MarkdownDialectCommonMark(0),
    MarkdownDialectGitHub(0x0004 | 0x0008 | 0x0400 | 0x0100 | 0x0200 | 0x0800);

    private int val;
    TextDocumentMarkdownFuture(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextDocumentMarkdownFuture valueOf(int val) {
        if (val == MarkdownNoHTML.val) {
            return MarkdownNoHTML;
        } else if (val == MarkdownDialectCommonMark.val) {
            return MarkdownDialectCommonMark;
        } else if (val == MarkdownDialectGitHub.val) {
            return MarkdownDialectGitHub;
        }
        return null;
    }
}
