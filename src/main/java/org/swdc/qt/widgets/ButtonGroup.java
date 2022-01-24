package org.swdc.qt.widgets;

import org.swdc.qt.internal.widgets.SButtonGroup;

import java.util.*;

public class ButtonGroup {

    private SButtonGroup group = new SButtonGroup();
    private Map<Long,AbstractButton> buttons = new HashMap<>();

    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = group.create();
        if (pointer <= 0) {
            throw new Exception("can not create button group");
        }
        group.address(pointer);
    }

    public void setExclusive(boolean val) {
        if (getPointer() > 0) {
            group.setExclusive(getPointer(),val);
        }
    }

    public boolean isExclusive() {
        if (getPointer() > 0) {
            return group.exclusive(getPointer());
        }
        return false;
    }

    public <T extends AbstractButton> void addButton(T button, int id) {
        if (getPointer() > 0 && button.getPointer() > 0) {
            group.addButton(getPointer(),button.getPointer(),id);
            buttons.put(button.getPointer(),button);
        }
    }

    public <T extends AbstractButton> void removeButton(T button) {
        if (getPointer() > 0 && button.getPointer() > 0) {
            group.removeButton(getPointer(),button.getPointer());
            buttons.remove(button.getPointer());
        }
    }

    public List<AbstractButton> buttons() {
        if (getPointer() > 0) {
            long [] pointers = group.buttons(getPointer());
            List<AbstractButton> result = new ArrayList<>();
            for (long item: pointers) {
                if (buttons.containsKey(item)) {
                    result.add(buttons.get(item));
                } else {
                    AbstractButton button = AbstractButton.asAbstractButton(item);
                    buttons.put(item,button);
                    result.add(button);
                }
            }
            return result;
        }
        return Collections.emptyList();
    }

    public <T extends AbstractButton> T checkedButton() {
        if (getPointer() > 0) {
            long pointer = group.checkedButton(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return (T)buttons.get(pointer);
        }
        return null;
    }

    public <T extends AbstractButton> T button(int id) {
        if (getPointer() > 0) {
            long pointer = group.button(getPointer(),id);
            if (pointer <= 0) {
                return null;
            }
            return (T)buttons.get(pointer);
        }
        return null;
    }

    public <T extends AbstractButton> void setId(T button, int id) {
        if (getPointer() > 0 && button.getPointer() > 0) {
            if (buttons.containsKey(button.getPointer())) {
                group.setId(getPointer(),button.getPointer(),id);
            }
        }
    }

    public <T extends AbstractButton> int id(T button) {
        if (getPointer() > 0 && button.getPointer() > 0) {
            if (buttons.containsKey(button.getPointer())) {
                return group.id(getPointer(),button.getPointer());
            }
        }
        return 0;
    }

    public int checkedId() {
        if (getPointer() > 0) {
            return group.checkedId(getPointer());
        }
        return 0;
    }

    public void dispose(){
        if (getPointer() > 0) {
            group.dispose(getPointer());
        }
    }

    public long getPointer() {
        return group.address();
    }

}
