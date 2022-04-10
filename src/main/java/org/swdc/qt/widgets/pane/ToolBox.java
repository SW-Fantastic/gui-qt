package org.swdc.qt.widgets.pane;

import org.swdc.qt.internal.widgets.SToolBox;
import org.swdc.qt.widgets.graphics.Icon;

import java.util.HashMap;
import java.util.Map;

public class ToolBox extends Frame {

    private SToolBox box = new SToolBox();

    private Map<Integer,Widget> indexedWidgets = new HashMap<>();

    @Override
    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = box.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create a tool-box");
        }
        box.address(pointer);
    }

    @Override
    public <T extends Widget> void allocate(T parent) throws Exception {
        if (accessible()) {
            return;
        }
        if (parent.getPointer() <= 0) {
            throw new Exception("invalid parent widget");
        }
        long pointer = box.create(parent.getPointer());
        if (pointer <= 0) {
            throw new Exception("can not create a tool-box");
        }
        box.address(pointer);
    }

    public <T extends Widget> int addItem(T widget, String text) {
        if (accessible(widget,text)) {
            int idx = box.addItem(getPointer(),widget.getPointer(),text);
            indexedWidgets.put(idx,widget);
            return idx;
        }
        return -1;
    }

    public <T extends Widget> int addItem(T widget, Icon icon, String text) {
        if (accessible(widget,icon,text)) {
            int idx = box.addItem(getPointer(),widget.getPointer(),icon.getPointer(),text);
            indexedWidgets.put(idx,widget);
            return idx;
        }
        return -1;
    }

    public <T extends Widget> int insertItem(int index,T widget,String text) {
        if (accessible(widget,text)) {
            int idx = box.insertItem(getPointer(),index,widget.getPointer(),text);
            indexedWidgets.put(idx,widget);
            return idx;
        }
        return -1;
    }

    public <T extends Widget> int insertItem(int index,T widget, Icon icon, String text) {
        if (accessible(widget,text,icon)) {
            int idx = box.insertItem(getPointer(),index,widget.getPointer(),icon.getPointer(),text);
            indexedWidgets.put(idx,widget);
            return idx;
        }
        return -1;
    }

    public void removeItem(int index) {
        if (accessible()) {
            indexedWidgets.remove(index);
            box.removeItem(getPointer(),index);
        }
    }

    public void setItemEnabled(int index, boolean enabled) {
        if (accessible() && indexedWidgets.containsKey(index)) {
            box.setItemEnabled(getPointer(),index,enabled);
        }
    }

    public boolean isItemEnabled(int index) {
        if (accessible() && indexedWidgets.containsKey(index)) {
            return box.isItemEnabled(getPointer(),index);
        }
        return false;
    }

    public void setItemText(int index, String text) {
        if (accessible(text) && indexedWidgets.containsKey(index)) {
            box.setItemText(getPointer(),index,text);
        }
    }

    public String getItemText(int index) {
        if (accessible() && indexedWidgets.containsKey(index)) {
            return box.itemText(getPointer(),index);
        }
        return null;
    }

    public void setItemIcon(int index,Icon icon) {
        if (accessible(icon) && indexedWidgets.containsKey(index)) {
            box.setItemIcon(getPointer(),index,icon.getPointer());
        }
    }

    public Icon getItemIcon(int index) {
        if (accessible() && indexedWidgets.containsKey(index)) {
            long pointer = box.itemIcon(getPointer(),index);
            if (pointer <= 0) {
                return null;
            }
            return Icon.asIcon(pointer);
        }
        return null;
    }

    public void setItemToolTip(int index,String toolTip) {
        if (accessible(toolTip) && indexedWidgets.containsKey(index)) {
            box.setItemToolTip(getPointer(),index,toolTip);
        }
    }

    public String getItemToolTip(int index) {
        if (accessible() && indexedWidgets.containsKey(index)) {
            return box.itemToolTip(getPointer(),index);
        }
        return null;
    }

    public int currentIndex() {
        if (accessible()) {
            return box.currentIndex(getPointer());
        }
        return -1;
    }

    public <T extends Widget> T getCurrentWidget() {
        if (accessible()) {
            long pointer = box.currentWidget(getPointer());
            for (Widget w: indexedWidgets.values()) {
                if (w.getPointer() == pointer) {
                    return (T) w;
                }
            }
        }
        return null;
    }

    public <T extends Widget> T getWidget(int index) {
        if (accessible() && indexedWidgets.containsKey(index)) {
            return (T)indexedWidgets.get(index);
        }
        return null;
    }

    public <T extends Widget> int indexOf(T widget) {
        if (accessible(widget)) {
            return box.indexOf(getPointer(),widget.getPointer());
        }
        return -1;
    }

    public int count() {
        if (getPointer() >0) {
            return box.count(getPointer());
        }
        return 0;
    }

    @Override
    public long getPointer() {
        return box.address();
    }
}
