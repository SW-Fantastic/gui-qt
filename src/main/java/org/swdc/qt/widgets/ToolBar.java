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
        if (getPointer() > 0) {
            return;
        }
        long pointer = toolBar.create();
        if (pointer <= 0) {
            throw new Exception("can not create a tool-bar");
        }
    }

    public void setMovable(boolean movable) {
        if (getPointer() > 0) {
            toolBar.setMovable(getPointer(),movable);
        }
    }

    public boolean isMovable() {
        if (getPointer() > 0) {
            return toolBar.isMovable(getPointer());
        }
        return false;
    }

    public void setOrientation(Orientation orientation) {
        if (getPointer() > 0) {
            toolBar.setOrientation(getPointer(),orientation.getVal());
        }
    }

    public Orientation orientation() {
        if (getPointer() > 0) {
            long orientation = toolBar.orientation(getPointer());
            return Orientation.valueOf(orientation);
        }
        return null;
    }

    public void clear() {
        if (getPointer() > 0) {
            toolBar.clear(getPointer());
        }
    }

    public Action addAction(String text) {
        if (getPointer() > 0) {
            long pointer = toolBar.addAction(getPointer(),text);
            if (pointer <= 0) {
                return null;
            }
            return Action.asAction(pointer);
        }
        return null;
    }

    public Action addAction(Icon icon, String text) {
        if (getPointer() > 0 && icon.getPointer() > 0) {
            long pointer = toolBar.addAction(getPointer(),icon.getPointer(),text);
            if (pointer <= 0) {
                return null;
            }
            return Action.asAction(pointer);
        }
        return null;
    }

    public Action addSeparator() {
        if (getPointer() > 0) {
            long pointer = toolBar.addSeparator(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Action.asAction(pointer);
        }
        return null;
    }

    public Action insertSeparator(Action actionBefore) {
        if (getPointer() > 0 && actionBefore.getPointer() > 0) {
            long pointer = toolBar.insertSeparator(getPointer(),actionBefore.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Action.asAction(pointer);
        }
        return null;
    }

    public <T extends Widget> Action addWidget(T widget) {
        if (getPointer() > 0 && widget.getPointer() > 0) {
            long pointer = toolBar.addWidget(getPointer(),widget.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Action.asAction(pointer);
        }
        return null;
    }

    public <T extends Widget> Action insertWidget(Action actionBefore, T widget) {
        if (getPointer() > 0 && actionBefore.getPointer() > 0 && widget.getPointer() > 0) {
            long pointer = toolBar.insertWidget(getPointer(),actionBefore.getPointer(),widget.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Action.asAction(pointer);
        }
        return null;
    }

    public Rect actionGeometry(Action action) {
        if (getPointer() > 0 && action.getPointer() > 0) {
            long rect = toolBar.actionGeometry(getPointer(),action.getPointer());
            if (rect <= 0) {
                return null;
            }
            return Rect.asRect(rect);
        }
        return null;
    }

    public void setAllowedAreas(ToolbarAreas areas) {
        if (getPointer() > 0){
            toolBar.setAllowedAreas(getPointer(),areas.getVal());
        }
    }

    public boolean isAreaAllowed(ToolbarAreas area) {
        if (getPointer() > 0) {
            return toolBar.isAreaAllowed(getPointer(),area.getVal());
        }
        return false;
    }

    public boolean isFloatable() {
        if (getPointer() > 0) {
            return toolBar.isFloatable(getPointer());
        }
        return false;
    }

    public void setFloatable(boolean floatable) {
        if (getPointer() > 0) {
            toolBar.setFloatable(getPointer(),floatable);
        }
    }

    public boolean isFloating() {
        if (getPointer() > 0) {
            return toolBar.isFloating(getPointer());
        }
        return false;
    }

    public Size getIconSize() {
        if (getPointer() > 0) {
            long size = toolBar.iconSize(getPointer());
            if (size <= 0) {
                return null;
            }
            return Size.asSize(size);
        }
        return null;
    }

    public void setIconSize(Size iconSize) {
        if (getPointer() > 0 && iconSize.getPointer() > 0) {
            toolBar.setIconSize(getPointer(),iconSize.getPointer());
        }
    }

    public ToolButtonStyle getToolButtonStyle() {
        if (getPointer() > 0) {
            int val = toolBar.toolButtonStyle(getPointer());
            return ToolButtonStyle.valueOf(val);
        }
        return null;
    }

    public void setToolButtonStyle(ToolButtonStyle toolButtonStyle) {
        if (getPointer() > 0) {
            toolBar.setToolButtonStyle(getPointer(),toolButtonStyle.getVal());
        }
    }

    public void dispose() {
        if (getPointer() > 0) {
            toolBar.dispose(getPointer());
            toolBar.cleanAddress();
        }
    }

    @Override
    public long getPointer() {
        return toolBar.address();
    }
}
