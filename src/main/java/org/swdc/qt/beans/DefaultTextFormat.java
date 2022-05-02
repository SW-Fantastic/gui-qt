package org.swdc.qt.beans;

/**
 * Qt::TextFormat
 */
public enum DefaultTextFormat {

    PlainText(0),
    RichText(1),
    AutoText(2),
    MarkdownText(3);

    private int val;
    DefaultTextFormat(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static DefaultTextFormat valueOf(int val) {
        for (DefaultTextFormat format: values()) {
            if (format.val == val) {
                return format;
            }
        }
        return null;
    }

}
