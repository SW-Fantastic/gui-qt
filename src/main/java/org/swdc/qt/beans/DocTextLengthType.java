package org.swdc.qt.beans;

public enum DocTextLengthType {

    VariableLength(0),
    FixedLength(1),
    PercentageLength(2);

    private int val;
    DocTextLengthType(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static DocTextLengthType valueOf(int val){
        for (DocTextLengthType type : DocTextLengthType.values()) {
            if (type.getVal() == val){
                return type;
            }
        }
        return null;
    }
}
