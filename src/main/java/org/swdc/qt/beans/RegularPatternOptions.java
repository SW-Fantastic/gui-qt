package org.swdc.qt.beans;

public enum RegularPatternOptions {

    NoPatternOption                (0x0000),
    CaseInsensitiveOption          (0x0001),
    DotMatchesEverythingOption     (0x0002),
    MultilineOption                (0x0004),
    ExtendedPatternSyntaxOption    (0x0008),
    InvertedGreedinessOption       (0x0010),
    DontCaptureOption              (0x0020),
    UseUnicodePropertiesOption     (0x0040);

    private int val;

    RegularPatternOptions(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static RegularPatternOptions valueOf(int val) {
        for (RegularPatternOptions options : RegularPatternOptions.values()) {
            if (options.val == val) {
                return options;
            }
        }
        return null;
    }
}
