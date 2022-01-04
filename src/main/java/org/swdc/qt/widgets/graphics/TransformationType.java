package org.swdc.qt.widgets.graphics;

public enum TransformationType {

    TxNone(0x00),
    TxTranslate(0x01),
    TxScale(0x02),
    TxRotate(0x04),
    TxShear(0x08),
    TxProject(0x10);

    private int val;
    TransformationType(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public  static TransformationType valueOf(int val) {
        switch (val) {
            case 0x00: return TxNone;
            case 0x01: return TxTranslate;
            case 0x02: return TxScale;
            case 0x04: return TxRotate;
            case 0x08: return TxShear;
            case 0x10: return TxProject;
            default: return null;
        }
    }
}
