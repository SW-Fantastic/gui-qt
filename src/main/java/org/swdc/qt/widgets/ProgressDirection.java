package org.swdc.qt.widgets;

/**
 * QProgressBar::Direction
 */
public enum ProgressDirection {

    TopToBottom(0), BottomToTop(1);

    private int val;
    ProgressDirection(int val)  {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static ProgressDirection valueOf(int val) {
        switch (val) {
            case 0: return TopToBottom;
            case 1: return BottomToTop;
            default:return null;
        }
    }

}
