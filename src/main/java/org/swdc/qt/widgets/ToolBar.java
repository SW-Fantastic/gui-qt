package org.swdc.qt.widgets;

import org.swdc.qt.beans.Orientation;
import org.swdc.qt.beans.ToolbarAreas;
import org.swdc.qt.internal.widgets.SToolBar;
import org.swdc.qt.widgets.action.Action;
import org.swdc.qt.widgets.action.ToolButtonStyle;
import org.swdc.qt.widgets.graphics.Icon;
import org.swdc.qt.widgets.pane.Widget;

public class ToolBar extends Widget  {

    private SToolBar toolBar = new SToolBar();

    @Override
    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = toolBar.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create a tool-bar");
        }
        toolBar.address(pointer);
    }

    public <T extends Widget> void allocate(T parent) throws Exception {
        if (accessible()) {
            return;
        }
        if (parent.getPointer() <= 0 ) {
            throw new Exception("invalid parent widget");
        }

        long pointer = toolBar.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create a tool-bar");
        }
        toolBar.address(pointer);
    }

    public void setMovable(boolean movable) {
        if (accessible()) {
            toolBar.setMovable(getPointer(),movable);
        }
    }

    public boolean isMovable() {
        if (accessible()) {
            return toolBar.isMovable(getPointer());
        }
        return false;
    }

    public void setOrientation(Orientation orientation) {
        if (accessible()) {
            toolBar.setOrientation(getPointer(),orientation.getVal());
        }
    }

    public Orientation orientation() {
        if (accessible()) {
            long orientation = toolBar.orientation(getPointer());
            return Orientation.valueOf(orientation);
        }
        return null;
    }

    public void clear() {
        if (accessible()) {
            toolBar.clear(getPointer());
        }
    }

    public Action addAction(String text) {
        if (accessible()) {
            long pointer = toolBar.addAction(getPointer(),text);
            if (pointer <= 0) {
                return null;
            }
            return Action.asAction(pointer);
        }
        return null;
    }

    public Action addAction(Icon icon, String text) {
        if (accessible(icon)) {
            long pointer = toolBar.addAction(getPointer(),icon.getPointer(),text);
            if (pointer <= 0) {
                return null;
            }
            return Action.asAction(pointer);
        }
        return null;
    }

    public Action addSeparator() {
        if (accessible()) {
            long pointer = toolBar.addSeparator(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Action.asAction(pointer);
        }
        return null;
    }

    public Action insertSeparator(Action actionBefore) {
        if (accessible() && actionBefore.accessible()) {
            long pointer = toolBar.insertSeparator(getPointer(),actionBefore.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Action.asAction(pointer);
        }
        return null;
    }

    public <T extends Widget> Action addWidget(T widget) {
        if (accessible() && widget.accessible()) {
            long pointer = toolBar.addWidget(getPointer(),widget.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Action.asAction(pointer);
        }
        return null;
    }

    public <T extends Widget> Action insertWidget(Action actionBefore, T widget) {
        if (accessible() && actionBefore.accessible() && widget.accessible()) {
            long pointer = toolBar.insertWidget(getPointer(),actionBefore.getPointer(),widget.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Action.asAction(pointer);
        }
        return null;
    }

    public Rect actionGeometry(Action action) {
        if (accessible() && action.accessible()) {
            long rect = toolBar.actionGeometry(getPointer(),action.getPointer());
            if (rect <= 0) {
                return null;
            }
            return Rect.asRect(rect);
        }
        return null;
    }

    public void setAllowedAreas(ToolbarAreas areas) {
        if (accessible()){
            toolBar.setAllowedAreas(getPointer(),areas.getVal());
        }
    }

    public boolean isAreaAllowed(ToolbarAreas area) {
        if (accessible()) {
            return toolBar.isAreaAllowed(getPointer(),area.getVal());
        }
        return false;
    }

    public boolean isFloatable() {
        if (accessible()) {
            return toolBar.isFloatable(getPointer());
        }
        return false;
    }

    public void setFloatable(boolean floatable) {
        if (accessible()) {
            toolBar.setFloatable(getPointer(),floatable);
        }
    }

    public boolean isFloating() {
        if (accessible()) {
            return toolBar.isFloating(getPointer());
        }
        return false;
    }

    public Size getIconSize() {
        if (accessible()) {
            long size = toolBar.iconSize(getPointer());
            if (size <= 0) {
                return null;
            }
            return Size.asSize(size);
        }
        return null;
    }

    public void setIconSize(Size iconSize) {
        if (accessible() && iconSize.accessible()) {
            toolBar.setIconSize(getPointer(),iconSize.getPointer());
        }
    }

    public ToolButtonStyle getToolButtonStyle() {
        if (accessible()) {
            int val = toolBar.toolButtonStyle(getPointer());
            return ToolButtonStyle.valueOf(val);
        }
        return null;
    }

    public void setToolButtonStyle(ToolButtonStyle toolButtonStyle) {
        if (accessible()) {
            toolBar.setToolButtonStyle(getPointer(),toolButtonStyle.getVal());
        }
    }

    public void dispose() {
        if (accessible()) {
            toolBar.dispose(getPointer());
            toolBar.cleanAddress();
        }
    }

    @Override
    public long getPointer() {
        return toolBar.address();
    }
}
