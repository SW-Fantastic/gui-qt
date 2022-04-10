package org.swdc.qt.beans;

public enum RegExpPatternSyntax {

    RegExp(0),
    Wildcard(1),
    FixedString(2),
    RegExp2(3),
    WildcardUnix(4),
    W3CXmlSchema11(5);

    private int val;
    RegExpPatternSyntax(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static RegExpPatternSyntax valueOf(int val) {
        for (RegExpPatternSyntax item :RegExpPatternSyntax.values()) {
            if (item.val == val) {
                return item;
            }
        }
        return null;
    }
}
