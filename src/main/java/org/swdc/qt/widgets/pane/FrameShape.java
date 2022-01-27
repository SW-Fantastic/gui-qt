package org.swdc.qt.widgets.pane;

public enum FrameShape {

    NoFrame(0), // no frame
    Box(0x0001), // rectangular box
    Panel(0x0002), // rectangular panel
    WinPanel(0x0003), // rectangular panel (Windows)
    HLine (0x0004), // horizontal line
    VLine (0x0005), // vertical line
    StyledPanel (0x0006); // rectangular panel depending on the GUI style

    private int val;

    FrameShape(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static FrameShape valueOf(int val) {
        for (FrameShape shape: FrameShape.values()) {
            if (shape.getVal() == val) {
                return shape;
            }
        }
        return null;
    }
}
