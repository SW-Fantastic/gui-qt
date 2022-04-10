package org.swdc.qt.widgets.text;

public enum TextOptionTabType {

    LeftTab(0),
    RightTab(1),
    CenterTab(2),
    DelimiterTab(3);

    private int val;

    TextOptionTabType(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextOptionTabType valueOf(int val) {
        for (TextOptionTabType type : TextOptionTabType.values()) {
            if (type.val == val) {
                return type;
            }
        }
        return null;
    }
}
