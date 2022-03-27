package org.swdc.qt.beans;

public enum RegularExpressionMatchType {

    NormalMatch(0),
    PartialPreferCompleteMatch(1),
    PartialPreferFirstMatch(2),
    NoMatch(3);

    private int val;
    RegularExpressionMatchType(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static RegularExpressionMatchType valueOf(int val) {
        for (RegularExpressionMatchType type : RegularExpressionMatchType.values()) {
            if (type.getVal() == val) {
                return type;
            }
        }
        return null;
    }
}
