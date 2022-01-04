package org.swdc.qt.widgets.action;

public enum ActionMenuRole {

    NoRole(0),
    TextHeuristicRole(1),
    ApplicationSpecificRole(2),
    AboutQtRole(3),
    AboutRole(4),
    PreferencesRole(5),
    QuitRole(6);

    private int val;
    ActionMenuRole(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static ActionMenuRole valueOf(int val) {
        switch (val) {
            case 0: return NoRole;
            case 1: return TextHeuristicRole;
            case 2: return ApplicationSpecificRole;
            case 3: return AboutQtRole;
            case 4: return AboutRole;
            case 5: return PreferencesRole;
            case 6: return QuitRole;
            default:return null;
        }
    }

}
