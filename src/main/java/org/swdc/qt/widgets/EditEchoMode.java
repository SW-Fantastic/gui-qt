package org.swdc.qt.widgets;

/**
 * LineEdit的文本显示模式。
 *
 * 在用户输入文本后，此枚举类将会决定以怎样的形式
 * 把他显示出来。
 */
public enum EditEchoMode {

    /**
     * 普通，直接显示用户输入的文本。
     */
    Normal(0),
    /**
     * 不显示用户输入的文本。
     */
    NoEcho(1),
    /**
     * 将用户输入的内容以密码的样式显示
     */
    Password(2),
    /**
     * 将用户输入的内容以密码的形式显示，但是编辑的时候
     * 会短暂的显示原文的字符。
     */
    PasswordEchoOnEdit(3);

    private int val;
    EditEchoMode(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static EditEchoMode valueOf(int val) {
        switch (val) {
            case 0: return Normal;
            case 1: return NoEcho;
            case 2: return Password;
            case 3: return PasswordEchoOnEdit;
            default:return null;
        }
    }
}
