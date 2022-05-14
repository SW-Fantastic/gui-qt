package org.swdc.qt.widgets.action;

import org.swdc.qt.beans.*;
import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.widgets.SAction;
import org.swdc.qt.listeners.ActionListener;
import org.swdc.qt.widgets.pane.Widget;

public class Action extends Widget {

    private SAction action = new SAction();

    @Override
    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = action.create();
        if (pointer <= 0) {
            throw new Exception("failed to create action");
        }
        action.address(pointer);
        MemoryHolder.allocated(this);
    }

    private void wrap(long pointer) {
        if (accessible()) {
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
        if (accessible(text)) {
            action.setText(getPointer(),text);
        }
    }

    public String getText() {
        if (accessible()) {
            return action.text(getPointer());
        }
        return "";
    }

    public void setIconText(String text) {
        if (accessible(text)) {
            action.setIconText(getPointer(),text);
        }
    }

    public String getIconText() {
        if (accessible()) {
            action.iconText(getPointer());
        }
        return "";
    }

    public void setToolTip(String tip) {
        if (accessible(tip)) {
            action.setToolTip(getPointer(),tip);
        }
    }

    public String getToolTip() {
        if (accessible()) {
            return action.toolTip(getPointer());
        }
        return "";
    }

    public void setStatusTip(String statusTip) {
        if (accessible(statusTip)) {
            action.setStatusTip(getPointer(),statusTip);
        }
    }

    public String getStatusTip(){
        if (accessible()){
            return action.statusTip(getPointer());
        }
        return "";
    }

    public void setWhatsThis(String what) {
        if (accessible(what)) {
            action.setWhatsThis(getPointer(),what);
        }
    }
    public String getWhatsThis() {
        if (accessible()) {
            return action.whatsThis(getPointer());
        }
        return "";
    }

    public void setPriority(ActionPriority priority) {
        if (accessible(priority)) {
            action.setPriority(getPointer(),priority.getVal());
        }
    }

    public ActionPriority getPriority() {
        if (accessible()) {
            int val = action.priority(getPointer());
            return ActionPriority.valueOf(val);
        }
        return null;
    }

    public void setSeparator(boolean b) {
        if (accessible()) {
            action.setSeparator(getPointer(),b);
        }
    }

    public boolean isSeparator() {
        if (accessible()) {
            return action.isSeparator(getPointer());
        }
        return false;
    }

    public void setAutoRepeat(boolean repeat) {
        if (accessible()) {
            action.setAutoRepeat(getPointer(),repeat);
        }
    }

    public boolean isAutoRepeat() {
        if (accessible()) {
            return action.autoRepeat(getPointer());
        }
        return false;
    }

    public void setShortcut(String str) {
        if (accessible(str)) {
            action.setShortcut(getPointer(),str);
        }
    }

    public void setShortcut(KeyboardModifier modifier,KeyCode code) {
        if (accessible(modifier,code)) {
            long result = modifier.getVal() + code.getVal();
            action.setShortcut(getPointer(),result);
        }
    }

    public void setStandardShortcut(SequenceStandardKey val) {
        if (accessible(val)) {
            action.setStandardShortcut(getPointer(),val.getValue());
        }
    }

    public String shortcut(){
        if (accessible()) {
            return action.shortcut(getPointer());
        }
        return "";
    }

    public void setCheckable(boolean checkable) {
        if (accessible()) {
            action.setCheckable(getPointer(),checkable);
        }
    }

    public boolean isCheckable() {
        if (accessible()){
            return action.isCheckable(getPointer());
        }
        return false;
    }

    public boolean isChecked() {
        if (accessible()) {
            return action.isChecked(getPointer());
        }
        return false;
    }

    public boolean isEnabled() {
        if (accessible()) {
            return action.isEnabled(getPointer());
        }
        return false;
    }

    public boolean isVisible() {
        if (accessible()) {
            return action.isVisible(getPointer());
        }
        return false;
    }

    public void setMenuRole(ActionMenuRole menuRole) {
        if (accessible(menuRole)) {
            action.menuRole(menuRole.getVal());
        }
    }

    public ActionMenuRole getMenuRole() {
        if (accessible()) {
            int val = action.menuRole(getPointer());
            return ActionMenuRole.valueOf(val);
        }
        return null;
    }

    public void setIconVisibleInMenu(boolean visible){
        if (accessible()) {
            action.setIconVisibleInMenu(getPointer(),visible);
        }
    }

    public boolean isIconVisibleInMenu() {
        if (accessible()) {
            return action.isIconVisibleInMenu(getPointer());
        }
        return false;
    }

    public void setShortcutVisibleInContextMenu(boolean show) {
        if (accessible()) {
            action.setShortcutVisibleInContextMenu(getPointer(),show);
        }
    }

    public boolean isShortcutVisibleInContextMenu() {
        if (accessible()){
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

