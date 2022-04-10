package org.swdc.qt.beans;

public enum PaletteColorRole {

    WindowText(0), Button(1), Light(2), Midlight(3), Dark(4), Mid(5),
    Text(6), BrightText(7), ButtonText(8), Base(9), Window(10), Shadow(11),
    Highlight(12), HighlightedText(13),
    Link(14), LinkVisited(15),
    AlternateBase(16),
    NoRole(17),
    ToolTipBase(18), ToolTipText(19),
    PlaceholderText(20),
    NColorRoles(21);

    private int val;
    PaletteColorRole(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static PaletteColorRole valueOf(int val) {
        for (PaletteColorRole role: PaletteColorRole.values()) {
            if (role.getVal() == val) {
                return role;
            }
        }
        return null;
    }
}
