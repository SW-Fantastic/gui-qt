package org.swdc.qt.beans;

public enum TextDocumentResource {

    UnknownResource (0),
    HtmlResource    (1),
    ImageResource   (2),
    StyleSheetResource (3),
    MarkdownResource  (4),

    UserResource (100);

    private int val;
    TextDocumentResource(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextDocumentResource valueOf(int val) {
        for (TextDocumentResource resource : TextDocumentResource.values()) {
            if (resource.getVal() == val) {
                return resource;
            }
        }
        return null;
    }
}
