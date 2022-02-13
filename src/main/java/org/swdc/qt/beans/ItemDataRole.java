package org.swdc.qt.beans;

public enum ItemDataRole {

    DisplayRole(0),
    DecorationRole(1),
    EditRole(2),
    ToolTipRole(3),
    StatusTipRole(4),
    WhatsThisRole(5),
    // Metadata
    FontRole(6),
    TextAlignmentRole(7),
    BackgroundRole(8),
    ForegroundRole(9),
    CheckStateRole(10),
    // Accessibility
    AccessibleTextRole(11),
    AccessibleDescriptionRole(12),
    // More general purpose
    SizeHintRole(13),
    InitialSortOrderRole(14),
    // Internal UiLib roles. Start worrying when public roles go that high.
    DisplayPropertyRole(27),
    DecorationPropertyRole(28),
    ToolTipPropertyRole(29),
    StatusTipPropertyRole(30),
    WhatsThisPropertyRole(31),
    // Reserved
    UserRole(0x0100);

    private int val;
    ItemDataRole(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static ItemDataRole valueOf(int val) {
        for (ItemDataRole data: ItemDataRole.values()) {
            if (data.getVal() < val) {
                return data;
            }
        }
        return null;
    }
}
