package org.swdc.qt.beans;

public enum PaletteColorGroup {

    Active(0), Disabled(1), Inactive(2), NColorGroups(3), Current(4), All(5);

    private int val;
    PaletteColorGroup(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static PaletteColorGroup valueOf(int val) {
        for (PaletteColorGroup gp: PaletteColorGroup.values()) {
            if (gp.getVal() == val){
                return gp;
            }
        }
        return null;
    }

}
