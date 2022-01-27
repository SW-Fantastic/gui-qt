package org.swdc.qt.widgets.pane;

public enum FrameShadow {

    Plain(0x0010), // plain line
    Raised(0x0020), // raised shadow effect
    Sunken(0x0030); // sunken shadow effect

    private int val;
    FrameShadow(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static FrameShadow valueOf(int val) {
        for (FrameShadow shadow : FrameShadow.values()) {
            if (shadow.getVal() == val) {
                return shadow;
            }
        }
        return null;
    }
}
