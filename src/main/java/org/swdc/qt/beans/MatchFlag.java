package org.swdc.qt.beans;

public enum MatchFlag {

    MatchExactly (0),
    MatchContains (1),
    MatchStartsWith (2),
    MatchEndsWith (3),
    MatchWildcard (5),
    MatchFixedString (8),
    MatchRegularExpression (9),
    MatchCaseSensitive (16),
    MatchWrap (32),
    MatchRecursive (64);

    private int val;
    MatchFlag(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static MatchFlag valueOf(int val) {
        for (MatchFlag f: MatchFlag.values()) {
            if (f.getVal() == val) {
                return f;
            }
        }
        return null;
    }
}
