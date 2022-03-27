package org.swdc.qt.beans;

public enum TextDocumentMetaInformation {

    DocumentTitle(0),
    DocumentUrl(1);

    private int val;
    TextDocumentMetaInformation(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextDocumentMetaInformation valueOf(int val) {
        switch (val) {
            case 0:
                return DocumentTitle;
            case 1:
                return DocumentUrl;
            default:
                return null;
        }
    }
}
