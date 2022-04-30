package org.swdc.qt.widgets;

public enum KeySequenceMatch {

    NoMatch(0),
    PartialMatch(1),
    ExactMatch(2);

    private int val;
    KeySequenceMatch(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static KeySequenceMatch valueOf(int val) {
        switch (val) {
            case 0: return NoMatch;
            case 1: return PartialMatch;
            case 2: return ExactMatch;
            default:return null;
        }
    }
}
