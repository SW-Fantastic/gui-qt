package org.swdc.qt.widgets.action;

import org.swdc.qt.beans.*;
import org.swdc.qt.internal.widgets.SAction;
import org.swdc.qt.listeners.ActionListener;
import org.swdc.qt.widgets.pane.Widget;

public class Action extends Widget {

    private SAction action = new SAction();

    @Override
    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = action.create();
        if (pointer <= 0) {
            throw new Exception("failed to create action");
        }
        action.address(pointer);
    }

    private void wrap(long pointer) {
        if (getPointer() > 0) {
            return;
        }
        if (pointer <= 0) {
            throw new  RuntimeException("invalid pointer");
        }
        action.address(pointer);
        action.wrap(pointer);
    }

    public void setActionListener(ActionListener listener) {
        action.setActionListener(listener);
    }

    public ActionListener getActionListener() {
        return action.getActionListener();
    }

    public void setText(String text) {
        if (getPointer() > 0) {
            action.setText(getPointer(),text);
        }
    }

    public String getText() {
        if (getPointer() > 0) {
            return action.text(getPointer());
        }
        return "";
    }

    public void setIconText(String text) {
        if (getPointer() > 0) {
            action.setIconText(getPointer(),text);
        }
    }

    public String getIconText() {
        if (getPointer() > 0) {
            action.iconText(getPointer());
        }
        return "";
    }

    public void setToolTip(String tip) {
        if (getPointer() > 0) {
            action.setToolTip(getPointer(),tip);
        }
    }

    public String getToolTip() {
        if (getPointer() > 0) {
            return action.toolTip(getPointer());
        }
        return "";
    }

    public void setStatusTip(String statusTip) {
        if (getPointer() > 0) {
            action.setStatusTip(getPointer(),statusTip);
        }
    }

    public String getStatusTip(){
        if (getPointer() > 0){
            return action.statusTip(getPointer());
        }
        return "";
    }

    public void setWhatsThis(String what) {
        if (getPointer() > 0) {
            action.setWhatsThis(getPointer(),what);
        }
    }
    public String getWhatsThis() {
        if (getPointer() > 0) {
            return action.whatsThis(getPointer());
        }
        return "";
    }

    public void setPriority(ActionPriority priority) {
        if (getPointer() > 0) {
            action.setPriority(getPointer(),priority.getVal());
        }
    }

    public ActionPriority getPriority() {
        if (getPointer() > 0) {
            int val = action.priority(getPointer());
            return ActionPriority.valueOf(val);
        }
        return null;
    }

    public void setSeparator(boolean b) {
        if (getPointer() > 0) {
            action.setSeparator(getPointer(),b);
        }
    }

    public boolean isSeparator() {
        if (getPointer() > 0) {
            return action.isSeparator(getPointer());
        }
        return false;
    }

    public void setAutoRepeat(boolean repeat) {
        if (getPointer() > 0) {
            action.setAutoRepeat(getPointer(),repeat);
        }
    }

    public boolean isAutoRepeat() {
        if (getPointer() > 0) {
            return action.autoRepeat(getPointer());
        }
        return false;
    }

    public void setShortcut(String str) {
        if (getPointer() > 0) {
            action.setShortcut(getPointer(),str);
        }
    }

    public void setShortcut(KeyboardModifier modifier,KeyCode code) {
        if (getPointer() > 0) {
            long result = modifier.getVal() + code.getVal();
            action.setShortcut(getPointer(),result);
        }
    }

    public void setStandardShortcut(ActionStandardKey val) {
        if (getPointer() > 0) {
            action.setStandardShortcut(getPointer(),val.getValue());
        }
    }

    public String shortcut(){
        if (getPointer() > 0) {
            return action.shortcut(getPointer());
        }
        return "";
    }

    public void setCheckable(boolean checkable) {
        if (getPointer() > 0) {
            action.setCheckable(getPointer(),checkable);
        }
    }

    public boolean isCheckable() {
        if (getPointer() > 0){
            return action.isCheckable(getPointer());
        }
        return false;
    }

    public boolean isChecked() {
        if (getPointer() > 0) {
            return action.isChecked(getPointer());
        }
        return false;
    }

    public boolean isEnabled() {
        if (getPointer() > 0) {
            return action.isEnabled(getPointer());
        }
        return false;
    }

    public boolean isVisible() {
        if (getPointer() > 0) {
            return action.isVisible(getPointer());
        }
        return false;
    }

    public void setMenuRole(ActionMenuRole menuRole) {
        if (getPointer() > 0) {
            action.menuRole(menuRole.getVal());
        }
    }

    public ActionMenuRole getMenuRole() {
        if (getPointer() > 0) {
            int val = action.menuRole(getPointer());
            return ActionMenuRole.valueOf(val);
        }
        return null;
    }

    public void setIconVisibleInMenu(boolean visible){
        if (getPointer() > 0) {
            action.setIconVisibleInMenu(getPointer(),visible);
        }
    }

    public boolean isIconVisibleInMenu() {
        if (getPointer() > 0) {
            return action.isIconVisibleInMenu(getPointer());
        }
        return false;
    }

    public void setShortcutVisibleInContextMenu(boolean show) {
        if (getPointer() > 0) {
            action.setShortcutVisibleInContextMenu(getPointer(),show);
        }
    }

    public boolean isShortcutVisibleInContextMenu() {
        if (getPointer() > 0){
            return action.isShortcutVisibleInContextMenu(getPointer());
        }
        return false;
    }

    public static Action asAction(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("invalid pointer");
        }
        Action action = new Action();
        action.wrap(pointer);
        return action;
    }

    @Override
    public long getPointer() {
        return action.address();
    }
}

