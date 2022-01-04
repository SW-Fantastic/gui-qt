package org.swdc.qt.internal.widgets;

import org.swdc.qt.internal.SPointer;
import org.swdc.qt.listeners.ActionListener;

public class SAction extends SPointer {

    private ActionListener actionListener;

    public void setActionListener(ActionListener actionListener) {
        this.actionListener = actionListener;
    }

    public ActionListener getActionListener() {
        return actionListener;
    }

    private void onChanged() {
        if (actionListener == null) {
            return;
        }
        actionListener.onChanged();
    }

    private void onHovered() {
        if (actionListener == null) {
            return;
        }
        actionListener.onHover();
    }

    private void onTrigger(boolean isSelected) {
        if (actionListener == null) {
            return;
        }
        actionListener.onAction(isSelected);
    }

    private void onToggled(boolean isSelected) {
        if (actionListener == null) {
            return;
        }
        actionListener.onToggle(isSelected);
    }

    /**
     * Create a QAction and init it.
     * @return C++ pointer of QAction。
     */
    public native long create();

    public native void setText(long pointer,String text);
    public native String text(long pointer);

    public native void setIconText(long pointer,String text);
    public native String iconText(long pointer);

    public native void setToolTip(long pointer,String tip);
    public native String toolTip(long pointer);

    public native void setStatusTip(long pointer,String statusTip);
    public native String statusTip(long pointer);

    public native void setWhatsThis(long pointer,String what);
    public native String whatsThis(long pointer);

    public native void setPriority(long pointer,int priority);
    public native int priority(long pointer);

    public native void setSeparator(long pointer,boolean b);
    public native boolean isSeparator(long pointer);

    public native void setAutoRepeat(long pointer,boolean repeat);
    public native boolean autoRepeat(long pointer);

    public native void setShortcut(long pointer,String str);
    public native void setShortcut(long pointer,long val);
    public native void setStandardShortcut(long pointer,int val);

    public native String shortcut(long pointer);

    /**
     * init the pointer of QAction for java
     * @param pointer C++ of QAction
     */
    public native void wrap(long pointer);

    public native void setCheckable(long pointer,boolean checkable);
    public native boolean isCheckable(long pointer);

    public native boolean isChecked(long pointer);
    public native boolean isEnabled(long pointer);
    public native boolean isVisible(long pointer);

    public native void setMenuRole(long pointer,int menuRole);
    public native int menuRole(long pointer);

    public native void setIconVisibleInMenu(long pointer,boolean visible);
    public native boolean isIconVisibleInMenu(long pointer);

    public native void setShortcutVisibleInContextMenu(long pointer,boolean show);
    public native boolean isShortcutVisibleInContextMenu(long pointer);
}
