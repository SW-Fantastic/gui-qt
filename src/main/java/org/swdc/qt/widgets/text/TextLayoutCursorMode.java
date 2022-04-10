package org.swdc.qt.widgets.text;

public enum TextLayoutCursorMode {

    SkipCharacters(0),
    SkipWords(1);

    private int val;
    TextLayoutCursorMode(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextLayoutCursorMode valueOf(int val) {
        for (TextLayoutCursorMode m: values()) {
            if (m.getVal() == val){
                return m;
            }
        }
        return null;
    }
}
