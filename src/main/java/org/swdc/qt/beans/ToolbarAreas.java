package org.swdc.qt.beans;

public enum ToolbarAreas {

    LeftToolBarArea(0x1),
    RightToolBarArea(0x2),
    TopToolBarArea(0x4),
    BottomToolBarArea(0x8),

    ToolBarArea_Mask(0xf),
    AllToolBarAreas(ToolBarArea_Mask.getVal()),
    NoToolBarArea(0);

    private long val;
    ToolbarAreas(long area){
        this.val = area;
    }

    public long getVal() {
        return val;
    }

    public static ToolbarAreas valueOf(long val) {
        for (ToolbarAreas area : ToolbarAreas.values()) {
            if (val == area.getVal()) {
                return area;
            }
        }
        return null;
    }

}
