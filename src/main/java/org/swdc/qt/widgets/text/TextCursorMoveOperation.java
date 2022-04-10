package org.swdc.qt.widgets.text;

public enum TextCursorMoveOperation {

    NoMove(0),

    Start(1),
    Up(2),
    StartOfLine(3),
    StartOfBlock(4),
    StartOfWord(5),
    PreviousBlock(6),
    PreviousCharacter(7),
    PreviousWord(8),
    Left(9),
    WordLeft(10),

    End(11),
    Down(12),
    EndOfLine(13),
    EndOfWord(14),
    EndOfBlock(15),
    NextBlock(16),
    NextCharacter(17),
    NextWord(18),
    Right(19),
    WordRight(20),

    NextCell(21),
    PreviousCell(22),
    NextRow(23),
    PreviousRow(24);

    private int val;
    TextCursorMoveOperation(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextCursorMoveOperation TextCursorMoveOperation(int val)  {
        for (TextCursorMoveOperation op: TextCursorMoveOperation.values()) {
            if (val == op.getVal()) {
                return op;
            }
        }
        return null;
    }
}
